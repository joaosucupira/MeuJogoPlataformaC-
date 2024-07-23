#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

namespace jogo {

	namespace Personagem {

		class Personagem
		{
		protected:
			sf::Vector2f velFinal;
			sf::RectangleShape barraVida;
			const float velMax;
			bool andando;
			bool paraEsquerda;
			const float vidaMax;
			float vida;
			unsigned int pontos;

			virtual void atualizarBarraVida();
			virtual void inicializarBarraVida() = 0;
			const std::string salvarPersonagem();
			
		public:


		};

	}
}
