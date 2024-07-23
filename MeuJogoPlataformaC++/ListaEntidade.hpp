#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Entidade.hpp"
#include "Lista.hpp"

namespace Jogo {

	namespace Lista	{

		class ListaEntidade {
		private:
			Lista<Entidade::Entidade> objListaEntidade;
		public:
			ListaEntidade();
			~ListaEntidade();
			void addEntidade(Entidade::Entidade* entidade);
			void removerEntidade(Entidade::Entidade* entidade, const bool deletar = true);
			//void removerEntidade(int pos);
			int getTam();
			Entidade::Entidade* operator[](int pos);
			void limparLista();
			void executar(sf::RenderWindow* janela);
			
		};
	}
}