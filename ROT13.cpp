#include <iostream>
#include <vector>
char ROT13(char );
int main ( int argc, char *argv[] ){
  std::string valor_consola; //<-- Modificar esto ==> std::string valor_consola("El texto que quieras");
  valor_consola.assign(argv[1]);//<-- eliminar esto
  std::string nuevoValor;
  for(int i = 0;i< valor_consola.length();i++){
    if(char(valor_consola[i]) == 32){
      nuevoValor.push_back(' ');
      continue;
    }else if (isdigit(valor_consola[i])){
      nuevoValor.push_back(valor_consola[i]);
      continue;
    }
    nuevoValor.push_back(ROT13(valor_consola[i]));
  }

  std::cout<<"Antes: "<<valor_consola<<std::endl;
  std::cout<<"Despues: "<<nuevoValor<<std::endl;
  return 0;
}

char ROT13(char p){
  char r = 13 + tolower(p);
  if (int(r) > 122 || int(r) < 97){
    return tolower(char(int(p) - 13));
  }
  return tolower(r);
}
