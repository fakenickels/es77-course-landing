import React from 'react'
const quote = `
<blockquote class="twitter-tweet" data-theme="dark"><p lang="pt" dir="ltr">CURSO DE <a href="https://twitter.com/reasonml?ref_src=twsrc%5Etfw">@reasonml</a> NO AR!<br><br>As duas primeiras já estão disponíveis na plataforma e a terceira vai ao ar amanhã a noite<br><br>Disponível em:<a href="https://t.co/jQ35AFDYvb">https://t.co/jQ35AFDYvb</a><br><br>Materiais do curso são públicos e disponíveis em:<a href="https://t.co/UsvG3YuGt9">https://t.co/UsvG3YuGt9</a> <a href="https://t.co/VYZ2D68bWn">pic.twitter.com/VYZ2D68bWn</a></p>&mdash; fakenickels (@fakenickels) <a href="https://twitter.com/fakenickels/status/1272641741108252679?ref_src=twsrc%5Etfw">June 15, 2020</a></blockquote> 
`
export default () =>
  <div dangerouslySetInnerHTML={{__html: quote}}>
  </div>