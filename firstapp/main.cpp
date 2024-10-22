#include "window.hpp"   // classe customizada 'window' responsável pelo comportamento da janela da aplicação

int main(int argc, char **argv) {

    try{
// Create application instance
  abcg::Application app(argc, argv); // responsável pelo gerenciamento da aplicação

  // Create OpenGL window
  Window window;    //criacao do objeto window
  window.setWindowSettings({.title = "First App"});

  // Run application
  app.run(window);

    }

    catch(std::exception const &exception){
        // fmt::print faz parte da biblioteca {fmt}
        fmt::print(stderr, "{}\n", exception.what()); //imprime no erro padrão (stderr) a mensagem de erro associada com a exceção capturada
    return -1;
    }
  

  return 0;
}