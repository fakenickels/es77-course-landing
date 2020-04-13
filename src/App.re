[@bs.val] external requireAsset: string => string = "require";

module Section = [%styled.div {|
  height: 100vh;
  width: 100vw;
|}];

module Styles = {
  open TW;
  let section = [Height(HScreen), Width(WScreen)];
};

/* module SayingBlock = { */
/*   [@react.component] */
/*   let make = () => { */
/*   } */
/* } */

[@react.component]
let make = () => {
  <>
    <Section>
      <div className=TW.([
                         Lg(Padding(P64))
      ] |> make)>
        <div>
          <GlitchedTitle glitchText1="ReasonML" variant="featured">
            {React.string("ES2077")}
          </GlitchedTitle>
          <h3
            className=TW.(
              make([TextAlign(TextCenter), FontFamily(FontMono)])
            )>
            {React.string("THE COURSE")}
          </h3>
        </div>
      </div>
    </Section>
    <div
      className=TW.(
        make([
          BackgroundColor(BgYellow400),
          Lg(Padding(Px64)),
          Lg(Padding(Py32)),
          Sm(Padding(Px32)),
          Sm(Padding(Py10)),
        ])
      )>
      <div
        className=TW.(
          make([
            Padding(P10),
            Display(Flex),
            JustifyContent(JustifyCenter),
          ])
        )>
        <img
          src={requireAsset("./images/fakenickels.jpg")}
          className=TW.(
            make([Height(H32), Width(W32), BorderRadius(RoundedFull)])
          )
        />
      </div>
      <p className=TW.(make([FontFamily(FontMono)]))>
        {React.string(
           {j|Olá 👋 eu sou Gabriel R. Abreu! CTO da Astrocoders, entusiasta de código aberto, mantedor do ReasonApolloHooks e criador do ReForm.|j},
         )}
      </p>
      <p className=TW.(make([FontFamily(FontMono), Padding(Pt10)]))>
        {React.string(
           {j|Nos últimos anos, trabalhei diretamente com projetos na que enviaram dezenas de milhares de linhas de código de ReasonML para produção. Não foi um caminho fácil mas uma escolha certeira:
Aplicações feitas usando ReasonML são praticamente inquebráveis.|j},
         )}
      </p>
      <p className=TW.(make([FontFamily(FontMono), Padding(Pt10)]))>
        {React.string(
           {j|Eu gostei tanto da linguagem que acabei virando o "louco do Reason". Na Astro ajudei de perto várias pessoas do meu time a aprender a linguagem. Dei algumas talks, contribui com a comunidade e organizei alguns eventos sobre.|j},
         )}
      </p>
      <p className=TW.(make([FontFamily(FontMono), Padding(Pt10)]))>
        {React.string(
           {j|Mas mesmo assim percebo que ainda não existe muito material em português sobre programação funcional vindo de alguém com experiência em produção no assunto.|j},
         )}
      </p>
      <p className=TW.(make([FontFamily(FontMono), Padding(Pt10)]))>
        {React.string(
           {j|Por isso trago esse mini-curso como o começo de uma jornada para disponibilizar esse conhecimento de forma acessível.|j},
         )}
      </p>
    </div>
    <div className=TW.(make([Lg(Padding(P16))]))>
      <div
        className=TW.(
          make([
            Padding(P10),
            Display(Flex),
            AlignItems(ItemsCenter),
            FlexDirection(FlexCol),
          ])
        )>
        <img
          src={requireAsset("./images/testimonial-guilherme.jpg")}
          className=TW.(
            make([Height(H16), Width(W16), BorderRadius(RoundedFull)])
          )
        />
        <h3 className=TW.(make([Padding(Pt5), FontWeight(FontBold)]))>
          {React.string("Guilherme Decampo / CEO da Astrocoders")}
        </h3>
      </div>
      <p
        className=TW.(
          make([
            FontFamily(FontMono),
            TextAlign(TextCenter),
            Lg(Padding(Px64)),
            Sm(Padding(Px5)),
            FontSize(TextXl),
            FontWeight(FontBold),
            FontStyle(Italic),
            TextColor(TextGray800),
          ])
        )>
        {React.string(
           {j|“Nos últimos anos, o Gabriel tem liderado a adoção de ReasonML na Astro.
        Sem dúvidas o time conseguiu adotar e entender os conceitos mais rapidamente com a ajuda e explicações dele.”|j},
         )}
      </p>
    </div>
    <div
      className=TW.(
        make([
          Lg(Padding(P32)),
          Sm(Padding(Py32)),
          BackgroundColor(BgYellow400),
          Display(Flex),
          JustifyContent(JustifyCenter),
        ])
      )>
      <div
        className=TW.(
          make([
            Padding(P10),
            BackgroundColor(BgWhite),
            BorderRadius(Rounded),
            BoxShadow(Shadow),
            Lg(Width(W1_4)),
            Sm(Width(W1_2)),
          ])
        )>
        <h1
          className=TW.(
            make([FontWeight(FontExtrabold), FontSize(Text6xl)])
          )>
          {React.string("R$ 99")}
        </h1>
        <ul
          className=TW.(
            make([
              Padding(Py5),
              Padding(Pb10),
              FontSize(TextLg),
              FontFamily(FontMono),
            ])
          )>
          <li> {React.string({j|3 horas de curso|j})} </li>
          <li> {React.string({j|Filosofia|j})} </li>
          <li> {React.string({j|Type Driven Development|j})} </li>
          <li> {React.string({j|Forms com ReasonReact|j})} </li>
          <li> {React.string({j|CSS in Reason|j})} </li>
          <li> {React.string({j|GraphQL com Reason|j})} </li>
          <li> {React.string({j|Sacadas e truques|j})} </li>
        </ul>
        <a
          href="https://checkout.vanna.app?merchantId=3gpdQzR5Bmrag6uQB&checkoutId=z3tZjNuFH9Li455yX"
          className=TW.(
            make([
              BackgroundColor(BgBlue500),
              TextColor(TextWhite),
              BackgroundColor(HoverBgBlue700),
              FontWeight(FontBold),
              FontSize(Text2xl),
              Padding(Py2),
              Padding(Px4),
              BorderRadius(Rounded),
            ])
          )>
          {React.string("Comprar")}
        </a>
      </div>
    </div>
    
    <div
      className=TW.(
        make([
          Padding(P10),
          Display(Flex),
          FlexDirection(FlexCol),
          BackgroundColor(BgGray200),
        ])
      )>
      <div
        className=TW.(
          make([
            Display(Flex),
            Sm(FlexDirection(FlexRow)),
            Lg(JustifyContent(JustifyAround)),
            Sm(AlignItems(ItemsCenter)),
            Sm(JustifyContent(JustifyCenter)),
          ])
        )>
        {[|("Twitter", "#"), ("GitHub", "#"), ("Blog", "#")|]
         ->Belt.Array.map(((label, link)) => {
             <a
               href=link
               key=label
               className=TW.(
                 make([
                   TextColor(TextBlue400),
                   TextColor(HoverTextBlue700),
                   Padding(Px2),
                 ])
               )>
               {React.string(label)}
             </a>
           })
         ->React.array}
      </div>
      <p
        className=TW.(
          make([
            Padding(Pt10),
            TextAlign(TextCenter),
            TextColor(TextGray600),
            FontWeight(FontSemibold),
            FontFamily(FontMono),
          ])
        )>
        {React.string({j|Desenvolvido com 🔥 por Astrocoders|j})}
      </p>
    </div>
  </>;
};
