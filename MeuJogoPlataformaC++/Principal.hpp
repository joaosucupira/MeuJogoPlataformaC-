#pragma once
#include "GerenciadorGrafico.hpp"

namespace Jogo {


	class Principal
	{
	private:
		Gerenciador::GerenciadorGrafico* pGrafico;
	public:
		Principal();
		~Principal();
		void executar();
	};

}

