[@bs.val] external requireAsset: string => string = "require";

[@react.component]
let make = () => {
  <>
    <div className=[%tw "bg-black h-64 py-64 md:py-0 md:h-screen w-screen lg:block"]>
      <div className=[%tw "p-0 lg:p-64 sm:p-0"]>
        <div>
          <GlitchedTitle glitchText1="ReasonML">
            {React.string("ES2077")}
          </GlitchedTitle>

          <h3 className=[%tw "text-center font-mono"]>
            {React.string("THE COURSE")}
          </h3>
        </div>
      </div>
    </div>
    <div className=[%tw "bg-yellow-400 lg:px-64 lg:py-32 sm:px-32 sm:py-10"]>
      <div className=[%tw "p-10 flex justify-center"]>
        <img
          src={requireAsset("./images/fakenickels.jpg")}
          className=[%tw "h-32 w-32 rounded-full"]
        />
      </div>
      <p className=[%tw "font-mono p-10 md:p-0"]>
        {React.string(
           {j|Olá 👋 eu sou Gabriel R. Abreu! CTO da Astrocoders, entusiasta de código aberto, mantedor do ReasonApolloHooks e criador do ReForm.|j},
         )}
      </p>
      {[|
         {j|Nos últimos anos, trabalhei diretamente com projetos na que enviaram dezenas de milhares de linhas de código de ReasonML para produção. Não foi um caminho fácil mas uma escolha certeira:
Aplicações feitas usando ReasonML são praticamente inquebráveis.|j},
         {j|Eu gostei tanto da linguagem que acabei virando o "louco do Reason". Na Astro ajudei de perto várias pessoas do meu time a aprender a linguagem. Dei algumas talks, contribui com a comunidade e organizei alguns eventos sobre.|j},
         {j|Mas mesmo assim percebo que ainda não existe muito material em português sobre programação funcional vindo de alguém com experiência em produção no assunto.|j},
         {j|Por isso trago esse mini-curso como o começo de uma jornada para disponibilizar esse conhecimento de forma acessível.|j},
       |]
       ->Belt.Array.mapWithIndex((index, saying) => {
           <p
             key={Js.Int.toString(index)}
             className=[%tw "font-mono p-10 md:p-0 md:pt-10"]>
             {React.string(saying)}
           </p>
         })
       ->React.array}
    </div>
    <div className=[%tw "py-16"]>
      <div className=[%tw "pb-10 flex items-center flex-col"]>
        <img
          src={requireAsset("./images/testimonial-guilherme.jpg")}
          className=[%tw "h-16 w-16 rounded-full"]
        />
        <h3 className=[%tw "pt-5 font-bold text-center"]>
          {React.string("Guilherme Decampo ")}
          <span className=[%tw "text-gray-700"]>
            {React.string("/ CEO da Astrocoders")}
          </span>
        </h3>
      </div>
      <p
        className=[%tw
          "font-mono text-center px-5 lg:px-64 text-xl font-bold italic text-gray-800"
        ]>
        {React.string(
           {j|“Nos últimos anos, o Gabriel tem liderado a adoção de ReasonML na Astro.
        Sem dúvidas o time conseguiu adotar e entender os conceitos mais rapidamente com a ajuda e explicações dele.”|j},
         )}
      </p>
    </div>
    <div className=[%tw "py-32 lg:p-32 bg-yellow-400 flex justify-center"]>
      <div className=[%tw "bg-white rounded shadow w-11/12 lg:w-1/3"]>
        <div className=[%tw "bg-gray-100 p-10 "]>
          <h1 className=[%tw "font-extrabold text-6xl"]>
            {React.string("R$ 150")}
          </h1>
        </div>
        <div className=[%tw "px-10 py-5"]>
          <ul className=[%tw "py-5 pb-10"]>
            {[|
               {j|Filosofia|j},
               {j|Conceitos básicos da linguagem|j},
               {j|Integração com JS|j},
               {j|Um outro tipo de TDD|j},
               {j|Promises te enganaram|j},
               {j|Forms com ReasonReact|j},
               {j|CSS in Reason|j},
               {j|GraphQL com Reason|j},
               {j|O futuro do Reason|j},
             |]
             ->Belt.Array.mapWithIndex((index, item) => {
                 <li
                   key={Js.Int.toString(index)}
                   className=[%tw "py-2 text-lg font-mono"]>
                   <span> {React.string({j|✨ |j})} </span>
                   {React.string(item)}
                 </li>
               })
             ->React.array}
          </ul>
          <div className=[%tw "w-full flex justify-center"]>
            <a
              href="https://checkout.vanna.app?merchantId=3gpdQzR5Bmrag6uQB&checkoutId=z3tZjNuFH9Li455yX"
              target="_blank"
              className=[%tw
                "bg-black shadow-md text-white hover:bg-gray-900 font-bold text-2xl py-2 px-20 md:px-32 rounded"
              ]>
              {React.string("Comprar")}
            </a>
          </div>
        </div>
      </div>
    </div>
    <div className=[%tw "p-10 flex flex-col bg-gray-900 items-center"]>
      <div
        className=[%tw
          "flex flex-col lg:flex-row lg:justify-around items-center w-1/2"
        ]>
        {[|
           ("Twitter", "https://twitter.com/fakenickels"),
           ("GitHub", "https://github.com/fakenickels"),
           ("Blog", "https://medium.com/@fakenickels"),
         |]
         ->Belt.Array.map(((label, link)) => {
             <a
               href=link
               key=label
               target="_blank"
               className=[%tw
                 "text-gray-400 hover:text-gray-300 px-2 font-bold pt-5 sm:pt-0"
               ]>
               {React.string(label)}
             </a>
           })
         ->React.array}
      </div>
      <p
        className=[%tw
          "pt-10 text-center text-gray-600 font-semibold font-mono"
        ]>
        {React.string({j|Desenvolvido com 🔥 por Astrocoders|j})}
      </p>
    </div>
  </>;
};