#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

#include "GerenciadorGrafico.hpp"

namespace Jogo {

	namespace Gerenciador {

		class GerenciadorEvento
		{
		private:
			GerenciadorGrafico* pGrafico;
			static GerenciadorEvento* pEvento;
			GerenciadorEvento();

		public:
			~GerenciadorEvento();
			static GerenciadorEvento* getGerenciadorEvento();
			//void setJogador(Personagem::Jogador::Jogador* pJogador);
			void verificaTeclaPressionada(sf::Keyboard::Key tecla);
			void verificaTeclaSolta(sf::Keyboard::Key tecla);
			void executar();



		};

	}
}

