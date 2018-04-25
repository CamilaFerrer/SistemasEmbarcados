#ifndef _RECONHECIMENTO_H
#define _RECONHECIMENTO_H
 
void criar_comando(char * arquivo, char * comando, char * comando_limpeza);

void excluir_arquivos_temp(char * arquivo, char * placa);

void extrair_placa(char * placa, char * arquivo);

void salvar_acesso(char * placa);
 
#endif