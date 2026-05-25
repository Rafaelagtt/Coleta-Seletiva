#include <stdio.h>
#include <string.h>

int main() {

    char produto[120];
    int i;

    // ================= VETORES =================

    char *plastico[] = {
        "garrafa", "copo", "embalagem pet", "saco",
        "sacola", "tampa", "frasco de produto",
        "caneta sem tinta", "cano de pvc",
        "embalagem de produto de limpeza",
        "tupperware", "brinquedo de plastico", "balde"
    };

    char *papel[] = {
        "papel de fax", "jornal", "revista",
        "envelope", "lista telefonica",
        "rascunho", "papel sulfite",
        "caderno velho", "folha de caderno",
        "fotocopia", "embalagem longa vida",
        "tetrapak", "formulario de computador",
        "caixa de pizza", "caixa de papelao",
        "cartolina", "papel cartao",
        "apara de papel"
    };

    char *vidro[] = {
        "embalagem de vidro", "copo de vidro",
        "vidro especial", "frasco de remedio",
        "pote de conserva", "caco",
        "garrafa de vidro"
    };

    char *metal[] = {
        "enlatado", "tampinha de garrafa",
        "chapa", "lata", "ferragem",
        "arame", "talher de metal",
        "panela sem cabo", "papel aluminio limpo",
        "cano", "prego", "aerossol",
        "cobre", "embalagem de marmitex"
    };

     char *organico[] = {
        "cascas de legumes", "resto de comida",
         "frutas", "cascas de ovos"
    };

    char *eletronico[] = {
        "pilhas", "bateria",
        "celular", "tablet", "computador",
        "eletronico", "eletrodomesticos",
        "TV", "caixa de som",
        "chapinha", "secador", "aspirador",
        "videogame", "tomada", "tubo de tv",
        "lampada"
    };

     char *hospitalar[] = {
        "seringa", "ataduras usadas",
        "agulhas", "algodao usado", "gaze usada",
        "ampola de remedio", "comprimidos",
        "remedios", "comprimidos vencidos",
        "remedios vencidos"
    };

     char *quimico[] = {
        "latas de verniz", "embalagens de agrotoxicos",
        "inseticidas", "solvente"
    };

    char *naoReciclavel[] = {
        "espuma", "esponja de cozinha",
        "acrilico", "bandeja de plastico",
        "embalagem metalizada", "isopor",
        "oculo", "espelho",
        "box temperado", "ceramica",
        "porcelana","papel plastificado",
        "papel sanitario", "etiqueta adesiva",
        "papel engordurado", "papel carbono",
        "papel parafinado", "fotografia",
        "papel celofane", "bituca de cigarro",
        "guardanapo", "clipe", "tachinha", "grampo",
        "esponja de aco", "papel higienico"
    };


    // ================= ENTRADA =================

    printf("Digite o produto: ");
    fgets(produto, sizeof(produto), stdin);

    produto[strcspn(produto, "\n")] = '\0';

    // ================= PLASTICO =================

    for(i = 0; i < 13; i++) {
        if(strcmp(produto, plastico[i]) == 0) {
            printf("Jogue na lixeira VERMELHA\n");
            return 0;
        }
    }

    // ================= PAPEL =================

    for(i = 0; i < 18; i++) {
        if(strcmp(produto, papel[i]) == 0) {
            printf("Jogue na lixeira AZUL\n");
            return 0;
        }
    }

    // ================= VIDRO =================

    for(i = 0; i < 7; i++) {
        if(strcmp(produto, vidro[i]) == 0) {
            printf("Jogue na lixeira VERDE\n");
            return 0;
        }
    }

    // ================= METAL =================

    for(i = 0; i < 14; i++) {
        if(strcmp(produto, metal[i]) == 0) {
            printf("Jogue na lixeira AMARELA\n");
            return 0;
        }
    }

    // ================= ORGANICO =================

    for(i = 0; i < 4; i++) {
        if(strcmp(produto, organico[i]) == 0) {
            printf("Material NAO RECICLAVEL\n");
            printf("Jogue na lixeira COMUM ou faca compostagem\n");
            return 0;
        }
    }

        // ================= ELETRONICO =================

    for(i = 0; i < 16; i++) {
        if(strcmp(produto, eletronico[i]) == 0) {
            printf("Material NAO RECICLAVEL\n");
            printf("Descarte em um ponto de coleta especifico da sua cidade, como ecopontos ou em pontos de coleta em lojas e farmacias\n");
            return 0;
        }
    }

       // ================= HOSPITALAR =================

    for(i = 0; i < 10; i++) {
        if(strcmp(produto, hospitalar[i]) == 0) {
            printf("Material NAO RECICLAVEL\n");
            printf("Descarte em uma Unidades Basicas de Saude (UBS) ou em uma farmacia\n");
            return 0;
        }
    }

    // ================= QUIMICO =================

    for(i = 0; i < 4; i++) {
        if(strcmp(produto, quimico[i]) == 0) {
            printf("Material NAO RECICLAVEL\n");
            printf("Descarte em uma ponto de coleta de residuos perigosos, ecoponto ou empresa especializada\n");
            return 0;
        }
    }

    // ================= NAO RECICLAVEL =================

    for(i = 0; i < 26; i++) {
        if(strcmp(produto, naoReciclavel[i]) == 0) {
            printf("Material NAO RECICLAVEL\n");
            printf("Jogue na lixeira COMUM\n");
            return 0;
        }
    }

    // ================= NAO ENCONTRADO =================

    printf("Produto nao cadastrado.\n");

    return 0;
}
