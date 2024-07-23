#include "GerenciadorGrafico.hpp"

Jogo::Gerenciador::GerenciadorGrafico* Jogo::Gerenciador::GerenciadorGrafico::pGrafico = nullptr;

Jogo::Gerenciador::GerenciadorGrafico::GerenciadorGrafico():
	janela(new sf::RenderWindow(sf::VideoMode(800.0f, 600.0f), "Espada Lendaria"))
{
	if (janela == nullptr) {
		std::cout << "ERROR::Jogo::Gerenciador::GerenciadorGrafico nao foi possivel criar uma janela grafica" << std::endl;
		exit(1);
	}
}

Jogo::Gerenciador::GerenciadorGrafico::~GerenciadorGrafico(){
	if (janela) {
		delete (janela);
		janela = nullptr;
	}
}

Jogo::Gerenciador::GerenciadorGrafico* Jogo::Gerenciador::GerenciadorGrafico::getGerenciadorGrafico() {
	if (pGrafico == nullptr) {
		pGrafico = new Jogo::Gerenciador::GerenciadorGrafico();
	}
	return pGrafico;
}

sf::RenderWindow* Jogo::Gerenciador::GerenciadorGrafico::getJanela() {
	return janela;
}

void Jogo::Gerenciador::GerenciadorGrafico::limpaJanela() {
	janela->clear();
}

void Jogo::Gerenciador::GerenciadorGrafico::desenhaElemento(sf::RectangleShape corpo) {
	janela->draw(corpo);
}

void Jogo::Gerenciador::GerenciadorGrafico::mostraElementos() {

}

void Jogo::Gerenciador::GerenciadorGrafico::fechaJanela() {

}

const bool Jogo::Gerenciador::GerenciadorGrafico::verificaJanelaAberta() {

}

