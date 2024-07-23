#pragma once
#include <iostream>
#include "Elemento.hpp"

namespace Jogo {

	namespace Lista {

		template<class TIPO>
		class Lista {
		private:
			unsigned int tam;
			Elemento<TIPO>* pPrimeiro;
			Elemento<TIPO>* pUltimo;
			Elemento<TIPO>* pAtual;
			unsigned int tam;

		public:
			Lista();
			~Lista();

			void addElemento(TIPO* elemento);
			//void addElemento(TIPO* elemento, int pos);
			void removerElemento(TIPO* elemento, const bool deletar);
			//void removerElemento(int pos, const bool deletar);
			const unsigned int getTam() const;
			void limparLista();
			TIPO* operator[](int pos);
			

		};

		template<class TIPO>
		Lista<TIPO>::Lista() {
			pPrimeiro = nullptr;
			pUltimo = nullptr;
			pAtual = nullptr;
			tam = 0;
		}

		template<class TIPO>
		Lista<TIPO>::~Lista() {

		}

		template<class TIPO>
		void Lista<TIPO>::addElemento(TIPO* elemento) {
			Elemento<TIPO>* elementoTipo = nullptr;

			if (tipo == nullptr) {
				std::cout << "Ponteiro nulo!" << std::endl;
				exit(1);
			}

			else {
				elementoTipo = new Elemento<TIPO>;
				if (elementoTipo == nullptr) {
					std::cout << "Nao foi possivel criar um elemento pessoa" << std::endl;

				}

				elementoTipo->setTIPO(tipo);
			}

			if (pPrimeiro == nullptr) {
				pPrimeiro = elementoTipo;
				pUltimo = elementoTipo;
				pAtual = elementoTipo;
			}

			else {
				pAtual->setProx(elementoTipo);
				elementoTipo->setAnt(pAtual);
				pAtual = elementoTipo;
			}
			tam++;
		}

		template<class TIPO>
		void Lista<TIPO>::removerElemento(TIPO* elemento, const bool deletar) {
			if (elemento == nullptr) {
				std::cout << "ERROR::Lista elemento eh nullptr" << std::endl;
				exit(1);
			}
			Elemento<TIPO>* aux = pPrimeiro;
			Elemento<TIPO>* aux2 = nullptr;
			while (aux != nullptr && aux->getElemento() != elemento) {
				aux2 = aux;
				aux = aux->getProx();
			}
			if (aux->getElemento() == elemento) {
				if (aux == pPrimeiro) { //verificar isso
					pPrimeiro = aux->getProx();
					pPrimeiro->setAnt();
				}
				else if (aux == pUltimo) { //verificar isso
					pUltimo = aux2;
					pUltimo->setProx();
					
				}
				else {
					Elemento<TIPO>* aux3 = nullptr; //verificar isso
					aux3 = aux->getProx();
					aux3->setAnt(aux2);
					aux2->setProx(aux->getProx());

				}
				if (deletar) { //ver para que serve isso
					delete(aux);
					aux = nullptr;
					aux2 = nullptr;
				}
				tam--;
			}
		}

		template<class TIPO>
		const unsigned int Lista<TIPO>::getTam() const {
			return tam;
		}

		template<class TIPO>
		void Lista<TIPO>::limparLista() {
			if (pPrimeiro != nullptr) {
				Elemento<TIPO>* aux = pPrimeiro;
				Elemento<TIPO>* aux2 = nullptr;
				int i = 0;
				while (aux != nullptr && i < tam) {
					TIPO* elemento = aux->getElemento();
					if (elemento != nullptr) {
						delete(elemento);
						elemento = nullptr;
					}
					aux2 = aux->getProx();
					delete(aux);
					aux = nullptr;
					aux = aux2;
					i++;
				}
			}
			pPrimeiro = nullptr;
			pUltimo = nullptr;
			tam = 0;
		}

		template<class TIPO>
		TIPO* Lista<TIPO>::operator[](int pos) {
			if (pos >= (int)tam || pos < 0) {
				std::cout << "ERROR::Lista pos eh maior que o tamanho da lista" << std::endl;
				exit(1);
			}
			Elemento<TL>* aux = pInicio;
			for (int i = 0; i < pos; i++) {
				aux = aux->getProx();
			}
			return aux->getElemento();
		}

	}
}