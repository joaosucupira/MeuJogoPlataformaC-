#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

namespace Jogo {

	namespace Entidade {
		
		class Entidade
		{
		protected:
			sf::RectangleShape corpo;
		public:
			Entidade();
			~Entidade();
			const sf::RectangleShape getCorpo() const;
			virtual void atualizar() = 0;
		};
	}
}


