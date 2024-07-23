#include "GerenciadorEvento.hpp"

Jogo::Gerenciador::GerenciadorEvento::GerenciadorEvento() {Jogo::Gerenciador::GerenciadorEvento::
}
Jogo::Gerenciador::GerenciadorEvento::~GerenciadorEvento() {

}
Jogo::Gerenciador::GerenciadorEvento* Jogo::Gerenciador::GerenciadorEvento::getGerenciadorEvento() {

}
//void Jogo::Gerenciador::GerenciadorEvento::setJogador(Personagem::Jogador::Jogador* pJogador{}

void Jogo::Gerenciador::GerenciadorEvento::verificaTeclaPressionada(sf::Keyboard::Key tecla) {
	if (tecla == sf::Keyboard::A) {
		pJogador->
	}
}

void Jogo::Gerenciador::GerenciadorEvento::verificaTeclaSolta(sf::Keyboard::Key tecla) {

}

void Jogo::Gerenciador::GerenciadorEvento::executar() {
	sf::Event evento;
	while (pGrafico->getJanela()->pollEvent(evento)) {
		if (evento.type == sf::Event::KeyPressed) {
			verificaTeclaPressionada(evento.key.code);
		}
		else if (evento.type == sf::Event::KeyReleased) {
			verificaTeclaSolta(evento.key.code);
		}
		else if (evento.type == sf::Event::Closed) {
			pGrafico->fechaJanela();
		}
	}
}