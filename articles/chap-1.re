= 見積もりに必要なもの（要件定義）

//flushright{
オーニシ＠onishi_feuer
//}

一般的に、見積もりといえば「要件定義→工数見積もり→費用見積もり」という流れになります。
要件定義で受発注内容を明確にし、それに基づいて工数を見積もり、制作にかかる人員と時間を含めた費用を見積もり、受注金額を算出します。
この章では、その流れの最初の部分である要件定義について、具体的に何をどう定義すればいいのかを解説します。

== 制作の目的

要件定義で最初すべきことは制作目的を明確にすることです。
自社のWebサイトを作るとして、その目的はなんでしょうか？商品を売りたいのか、会社の宣伝をしたいのか、自社サービスなど他のページに誘導したいのかなど、様々な目的があるでしょう。また、ツールを制作するなら、同様にそのツールによって得たいご利益をはっきりさせる必要があります。業務改善ツール、社内コミュニケーションの円滑化や事務作業の削減といった目的が考えられます。

請負の場合は受注段階で自然と目的が明確になることが多いかと思いますが、はっきりとわからない場合は発注元に制作目的をヒアリングしましょう。

たとえばWebサイトひとつとっても、通販用のECサイトと会社の宣伝用サイトでは目的がまったく異なるため後述する要件が変わってきますし、Web記事を書くにしても商品を売るためのキラーページとブログのファンを作るためのページ、キラーページに誘導するためのページではやはり目的が異なります。
後述する制作物や技術要件は、この目的に沿って定義していくため、制作目的はできる限りはっきりさせておきましょう。

== 納品物

次に納品物を明確にします。

たとえばWebサイト制作なら

 * サイトデータ一式
 * 管理画面へのログインパスワード
 * 更新
 * マニュアル（PDF）

 などが考えられますし、

Webサイトのデザイン制作なら

 * TOPページ
 * カテゴリーページ
 * 個別記事ページ
 * お問い合わせページ
 * 各ページのソースコード
 * スタイルシート

などが考えられます。

ライターなら

 * 〇〇の記事
 * ××の記事
 * △△の記事

 イラストレーターなら

 * ～の絵1
 * ～の絵2
 * ～の絵3

といった具合です。

こうしてリストアップすることで具体的な納品物がはっきりするとともに、把握ミスを防ぐことができます。

== 制作物の受け渡し方法

受け渡し方法も決めておきましょう。Web制作の場合制作物はデータですが、納品方法はいくつか考えられます。

 * クライアントのサーバーに直接アップロードして納品
 * クラウド上にアップロードしてクライアントにダウンロードしてもらうことで納品
 * CDやUSBメモリなどに保存して手渡しで納品

クライアントの手に届くことが第一ですが、パスワードなど秘匿性の高いものは外部に漏れないよう扱いに注意しましょう。

== 制作物要件

制作物の詳細な要件を定義します。これにはターゲットユーザーの定義、デザイン、機能、セキュリティーなどが含まれます。
たとえば同人誌の表紙画像を作成するという案件があったとして、「Webサイトの作り方に関する同人誌の表紙画像を作る」だけでは要件が曖昧です。
そこでクライアントとの打合せによって詳細な要件を具体化する必要があります。

ターゲットユーザーをまったく知識のない初心者に設定するなら、デザインも初心者にとっつきやすいものにする必要があるでしょう。
となると、サーバーやドメイン、ソースコードといった小難しいものを描くよりも、デスクと椅子、そしてパソコン画面にWebサイトのトップページが表示されているようなイラストの方が良さそうです。
さらにターゲットユーザーが大学生や20代の会社員、40代の主婦といったように明確になっているのなら、ターゲットユーザーをイメージしたキャラクターを描くという方法もあります。

色づかいも決めておいた方がいいでしょう。
ターゲットが女子大生なら赤や青といった原色よりも桜色や水色、薄黄色など可愛いパステルカラーの方が受けがいいでしょうし、20代男性会社員がターゲットなら黒や青、緑など明確な色が好まれる傾向があるようです。@<fn>{colorselect}

//footnote[colorselect][筆者はカラーコーディネーターではないため色については例とお考え下さい。]

タイトル文字の位置や、特に目立たせたい言葉についても定義しておきましょう。
たとえば「女子大生のためのWebサイト制作入門」というタイトルであれば、目立たせたい言葉は「女子大生」「Webサイト」「入門」です。複数ある場合は優先順位も付けておきましょう。
それを元に、目立たせたい言葉だけ文字サイズを大きくしたり、太字にしたり、色を変えたりといったデザインを決定します。

画像を納品する場合はサイズとファイル形式は必ず決めておく必要があります。
単純にサイズが大きい分には問題ありませんが、元の画像が小さい場合は拡大すると画質が荒くなりますし、縦横比が異なる場合は画像をトリミングする必要が出てきます。
また、ファイル形式は変更できることもありますが不都合が生じることもあります。

これらの要件を定義することで、次のような具体的な制作物要件ができあがります。

 * ターゲットユーザーは女子大生のWebサイト制作初心者
 * 女子大生のキャラクターとパソコン画面にWebサイトのトップページが表示されているイラスト
 * 桃色と薄黄色を基調とした色合い
 * タイトルは表紙上部に配置
 * タイトル文字のうち「女子大生」の文字サイズをもっとも大きくする
 * タイトル文字のうち「入門」の文字サイズを2番目に大きくする
 * タイトル文字のうち「Webサイト」の文字サイズを3番目に大きくする
 * 画像サイズは1748px×2480px
 * ファイル形式はPNG（.png）

最初に比べ、かなり具体的になりました。このように、要件をしっかりと定義してから制作に取り掛かればクライアントとの齟齬が生じづらいですし、工数も見積もりやすくなります。

もちろん1回の打ち合わせでこれらを全て確定させる必要はありません。
プロの漫画家さんが時短のために背景を外注するような場合はともかく、クライアントは基本的にその業務ができないから仕事として注文しているため、制作のプロではないことがほとんどです。
「結果」としてこうしたい、という要望は伝えられても、そのための「手段」がわからない場合もあります。
上記の例では「タイトル文字のうち『女子大生』という言葉を目立たせたい」という要望はあっても、そのための手段として文字を大きくしたり、色を変えたり、枠線で囲ったりといった手段までは思い当たらなかったり、思い当たってもどれを選べば良いデザインになるのかまでは判断できなかったりします。

そういった場合は「目立たせる」ことだけを要件とし、手段はこちらに任せてもらうか、複数のデザインパターンを用意してクライアントに選んでもらうか決めておくと良いでしょう。
少ない工数で例を提示できる場合は、2回目の打ち合わせまでにサンプルを用意するという手もあります。前述の例でいえば表紙のワイヤーフレームとラフ画を用意するといった具合です。

Webサイトのように複雑で定義するものが多い場合は、デザイン要件とシステム要件に分けてそれぞれ定義することもあります。

== インフラ要件

WebサイトやWebアプリケーションのように納品後稼働させ続けることが前提のものに関しては、インフラ要件を定義しておきます。
インフラとは、サーバーやデータセンター、ドメイン名やSSL証明書など納品物の基盤にあたる部分です。
たとえば、Webサイトをレンタルサーバーで運用するにしてもレンタルサーバー業者はたくさんありますし、それぞれ月額費用や稼働率、管理画面に用意されている機能などが異なります。

== 技術要件

開発言語やプラットフォーム、オープンソースソフトウェアなど制作にあたって必要な技術要件を定義します。
たとえばWebサイトを作るといっても、WordPressで作るのか、Jimdoで作るのかによって必要な技術は変わってきますし、ECサイトを作るにしても楽天市場やYahoo!ショッピングなどのモール、オープンソースのEC-CUBEなどさまざまな選択肢があります。
これらの選択肢の中からクライアントの要望を満たし、かつこちらの負担が少ないものを選びます。

たとえば、私はWordPressでのサイト制作経験が多数あり、現在も自分のサイトを運営しているため、クライアントの要望が満たせるのであればWordPressを使うのがもっとも負担が少ないです。
制作だけでなくその後の保守管理まで請け負うのであれば、なおさら仕様がわかっているものの方が負担は少なくなります。
ただし、クライアントがサーバー代やドメイン代などのランニングコストをかけたくない場合は、無料で使えるものを提案する必要があります。

これは営業としてのテクニックになるのですが、こちらの技術的負担が大きく、提示された予算が割に合わない場合はクライアントの要望を変えられないか交渉してみるという手もあります。
クライアントの要望が「ECサイトをEC-CUBEで作りたい」というものだったとして、こちらにEC-CUBEが分かる人がいなければEC-CUBEを学習して制作するか断るかの2択で考えてしまいがちですが、クライアントの要望を整理してみると必ずしもEC-CUBEを使う必要性はない場合があります。これをクライアントに説明し、納得してもらえれば無理に慣れないソフトを使わずとも案件を請け負えます。
しっかりと要件定義ができればこういった交渉の糸口ともなりえますのでクライアントが何を求めているのか、何を作ればいいのかを明確にすることは重要です。
もっとも実際の現場では技術職と営業職が別れていることも多く、こういった情報を正確に伝達することが難しいのですが。