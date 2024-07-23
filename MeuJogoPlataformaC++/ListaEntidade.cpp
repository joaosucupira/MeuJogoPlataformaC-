#include "ListaEntidade.hpp"

Jogo::Lista::ListaEntidade::ListaEntidade():
objListaEntidade() {}

Jogo::Lista::ListaEntidade::~ListaEntidade() {}

void Jogo::Lista::ListaEntidade::addEntidade(Entidade::Entidade* entidade) {
	objListaEntidade.addElemento(entidade);
}

void Jogo::Lista::ListaEntidade::removerEntidade(Entidade::Entidade* entidade, const bool deletar = true) {
	objListaEntidade.removerElemento(entidade, deletar);
}

//void Jogo::Lista::ListaEntidade::removerEntidade(int pos) {
//
//}

int Jogo::Lista::ListaEntidade::getTam() {
	return objListaEntidade.getTam();
}

Jogo::Entidade::Entidade* Jogo::Lista::ListaEntidade::operator[](int pos) {
	return objListaEntidade.operator[](pos);
}

void Jogo::Lista::ListaEntidade::limparLista() {
	objListaEntidade.limparLista();
}


void Jogo::Lista::ListaEntidade::executar(sf::RenderWindow* janela) {
	int tam = objListaEntidade.getTam();
	Entidade::Entidade* aux = nullptr;
	for (int i = 0; i < tam; i++) {
		aux = objListaEntidade.operator[](i);
		aux->atualizar();
		janela->draw(aux->getCorpo());
	}
}
