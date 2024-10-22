// definimos a classe Window que será responsável pelo gerenciamento do conteúdo da anela da aplicação

#ifndef WINDOW_HPP_
#define WINDOW_HPP_

#include "abcgOpenGL.hpp"

class Window : public abcg::OpenGLWindow {
protected:
  void onCreate() override; //é onde colocaremos os comandos de inicialização do estado da janela e do OpenGL. Internamente a ABCg chama essa função apenas uma vez no início do programa, após ter inicializado os subsistemas da SDL e o OpenGL.
  void onPaint() override; //é onde colocaremos todas as funções de desenho do OpenGL. Internamente a ABCg chama essa função continuamente no laço principal da aplicação, uma vez para cada quadro (frame) de exibição. Por exemplo, na imagem acima, onPaint estava sendo chamada a uma média de 3988,7 vezes por segundo;
  void onPaintUI() override; //é onde colocaremos todas as funções de desenho de widgets da ImGui (botões, menus, caixas de seleção, etc). Internamente, onPaintUI é chamado logo depois que onPaint é chamado;

private:
  std::array<float, 4> m_clearColor{0.906f, 0.910f, 0.918f, 1.0f}; //é um arranjo de quatro valores float entre 0 e 1. Esses valores definem a cor RGBA de fundo da janela, que neste caso é um cinza claro.
};

// a classe que criamos Window é derivada de abcg::OpenGLWindow, que faz parte da ABCg.

// abcg::OpenGLWindow gerencia uma janela capaz de renderizar gráficos com a API OpenGL.

#endif