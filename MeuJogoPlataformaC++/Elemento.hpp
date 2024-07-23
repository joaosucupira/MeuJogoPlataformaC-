#pragma once
#include <iostream>

namespace Jogo {

	namespace Lista {

		template<class TIPO>
		class Elemento {
		private:
			Elemento<TIPO>* pProx;
			Elemento<TIPO>* pAnt;
			TIPO* pElemento;

		public:
			Elemento();
			~Elemento();
			void setProx(Elemento<TIPO>* pProx);
			void setAnt(Elemento<TIPO>* pAnt);
			void setElemento(TIPO* pElemento);

			Elemento<TIPO>* getProx();
			Elemento<TIPO>* getAnt();
			TIPO* getElemento();

		};

		template<class TIPO>
		Elemento<TIPO>::Elemento() {
			pProx = nullptr;
			pAnt = nullptr;
			pElemento = nullptr;
		}

		template<class TIPO>
		Elemento<TIPO>::~Elemento() {

		}

		template<class TIPO>
		void Elemento<TIPO>::setProx(Elemento<TIPO>* pProx) {
			this->pProx = pProx;
		}

		template<class TIPO>
		void Elemento<TIPO>::setAnt(Elemento<TIPO>* pAnt) {
			this->pAnt = pAnt;
		}

		template<class TIPO>
		void Elemento<TIPO>::setElemento(TIPO* pElemento) {
			this->pElemento = pElemento;
		}

		template<class TIPO>
		Elemento<TIPO>* Elemento<TIPO>::getProx() {
			return pProx;
		}

		template<class TIPO>
		Elemento<TIPO>* Elemento<TIPO>::getAnt() {
			return pAnt;
		}

		template<class TIPO>
		TIPO* Elemento<TIPO>::getElemento() {
			return pElemento;
		}
	}
}