= 開発時情報が得られないケースにおいての後付けでの規模見積りについて

//flushright{
ふーれむ@ditflame
//}

== はじめに

一般的な開発では稀なケースとなるのですが、ソフトウェアの資産価値を推定するため、成果物から逆算して見積り工数や、開発にかかる実コストを出してほしいという要望があるケースがあります。
なお、このケースの前提としては実工数が遡って証明しにくい/できないのでコストを別の手段で推定したい　というケースです。

また、システム開発ベンダーが保守フェーズで撤退してしまい、他社が保守フェーズから請け負うようなケースでも開発ベンダーが握っていた情報がちゃんと得られない場合がありますが、
（だいたい保守を切られるのは喧嘩別れの場合なので）そういったケースにおいても元々の開発工数や規模感を推定したいケースがままあります。

（実際には筆者個人で対応したケースもありますし、知人から伺ったケースもあります。）

ここでは、客観指標としてそういったケース（要は裁判などの証拠提出や保守見積りの裏取り）に耐えうる、後付けでの見積り手法について解説します。

== そもそものソフトウェア開発コストについて

ここでは、以下の式でソフトウェア開発のコストを算出できるものとします。

SLOC(Software Lines Of Code) ÷ 平均的な技術者のソフトウェアに関する生産性(SLOC/h) ＝ 開発にかかった時間(h)

開発にかかった時間(h) ÷ 160 × 開発者の１カ月当たりの単価 ＝ 開発にかかったトータルコスト

さて、よくわからない変数や定数が色々出てきましたね。順を追って説明しましょう。

SLOCとはソースコードの行数（コメントを除いたもの）のことです。

開発にかかった時間を160で割っているのは 1日8時間×月の稼働平均20日として暫定的に置いたものです。

平均的な技術者のソフトウェアに関する生産性(SLOC/h)　については後述します。

開発者の１カ月当たりの単価に関しては、実際の単価を入れれば良いと思います。
（実際に裁判になると、よく着地点になりがちな和解のケースでは端数を丸めたりという話になるようで、あまり細かく計算しても実は意味があまりなかったりするそうです。）

== 平均的な技術者のソフトウェアに関する生産性について

じつは、平均的な技術者のソフトウェアに関する生産性をSLOC生産性と呼ぶのですが、この値についてはIPA(独立行政法人 情報処理推進機構)が統計データを取り、2005年からずっとデータが蓄積され、公開され続けてきています。

https://www.ipa.go.jp/ikc/publish/whitepaper_dl.html

なお、最新のデータは以下になります。（今年から「ソフトウェア開発分析データ集」に名前が変わったそうです。）

https://www.ipa.go.jp/ikc/reports/20200930.html

このデータ公表については現在で１６年目となるのですが、このデータを用いる事で生産性のデータを取る事ができます。
ちなみに先の「ソフトウェア開発分析データ集」の本年度のサマリーによると、「中央値は１人が１時間で約５行」という事になるそうです。（※注：設計・開発・テストの各工程を全て含めての話です。）

これらの情報を組み合わせると、ソフトウェアのソースコードさえあれば、実際の開発工数を推定する事ができます。
（あくまで推定の一例でしかないのですが、論拠が理詰めで説明できるため、裁判の時に非常にやりやすかったと弁護士さんからは後日談で伺いました。）

== こういう方式で工数を算出されると困るケースにおいての抜本対策について

さて、昨今のソフトウェア開発でいうと、「一度ソフトを作れば終わり」ではなく、どちらかというと「どのようにソフトウェア資産を適切に維持するのか」といった観点での維持管理が一般的になってきつつあります。
（具体的な話でいうと、情報システムの運用コストのうち、導入時の開発はたった２割で保守・運用や改修が８割を占めていた…　などの。）

上記の算出方式ですと、単にソフトウェアのソースコードを元にソフトウェアの規模感を算出しているだけなので、例えばリファクタリングを積極的にやっている場合とやっていない場合で比べると、
普通なら前者のケースの方が工数算定の基準からは不利となります。

そういった場合、どのようにすれば、実工数を客観的に証明できるでしょうか？

いくつか手段がありますので、併せて紹介しておきましょう。

 * リポジトリ管理ソフトウェア(GitとかSubversionとか)を使った際のログをまとめて出す
 * WBSの履歴を取っておいて、その情報をまとめて出す
 * プロジェクト参加者のそのプロジェクトにおける勤怠表をまとめて出す

なお、本題とは異なりますが、たとえば未払い残業代における請求訴訟などのケースでは、
個人の勤怠表や、手帳に記載した出勤/退勤時間のメモ、また昨今ではIphoneやAndroidのGPS履歴情報のログを用いて実勤務時間を証拠として提出する事で残業時間が認定される事が多いそうです。
これらの事からも、客観的な情報を何らかのシステムに保持しておく事が、有事の際の備えにもなりそうですね。
（未払い残業代のケースでいうと、毎日手帳に手書きするなどの形でも非常に強力な証拠となるそうですよ。）

== まとめ

この章では、ソフトウェアの構築コストについて、後付けで算出する方法論について説明しました。
トラブルに巻き込まれないのが一番いいのですが、実際にトラブルとなってからや他社の開発案件を引き継いで継続保守を請け負う場合など、適切な情報が適切に得られないケースも結構ありますので
そういった時は、こういった客観的な統計データを用いる事で、課題が解決できるかもしれませんね。
（ただし、こういった統計データは有識者が適切に関与した前提のプロジェクトを元にしたデータである事が多いため、直接適用すると辛いケースもままあります。
　実際は、自らのプロジェクトの実態に応じて、適切に使って頂くのが幸せなんじゃないかなと思っています。）
