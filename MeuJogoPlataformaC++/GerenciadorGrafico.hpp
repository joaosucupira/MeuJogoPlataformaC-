#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

namespace Jogo {

	namespace Gerenciador {

		class GerenciadorGrafico
		{
		private:
			sf::RenderWindow* janela;
			static GerenciadorGrafico* pGrafico;
			GerenciadorGrafico();
		public:
			~GerenciadorGrafico();
			static GerenciadorGrafico* getGerenciadorGrafico();
			sf::RenderWindow* getJanela();
			void limpaJanela();
			void desenhaElemento(sf::RectangleShape corpo);
			void mostraElementos();
			void fechaJanela();
			const bool verificaJanelaAberta();

		};
	}
}
