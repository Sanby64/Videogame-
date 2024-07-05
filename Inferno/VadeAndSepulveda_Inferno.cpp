#include <iostream>
#include <string>

void clearScreen() {
    std::cout << "\033[2J\033[1;1H";
}

void encounter(int &playerHealth) {
    std::string choice;
    clearScreen();
    std::cout << "¡Bienvenido a inferno\n";
    std::cout << "Tienes " << playerHealth << " de vida.\n";
    std::cout << "despiertas en una mansion oscura que al parecer esta abandonada quieres salir pero las puertas se encuentran selladas, sigues explorando y se te aparece un hombre desde las sombras\n";
    std::cout << "El hombre te dice que lo acompañes para explicarte que haces aca. tu decides:\n";
    std::cout << "1. empujarlo y correr.\n";
    std::cout << "2. insultarlo.\n";
    std::cout << "3. seguirlo\n";
    std::cout << "4. ignorarlo\n";
    std::cout << "Elige una opción (1-4): ";
    std::cin >> choice;

    clearScreen();
    if (choice == "1") {
        std::cout << "El hombre no te sigue pero al salir corriendo en la oscuridad no te das cuenta y...\n";
        std::cout << "caes en un enorme agujero con lo que parece ser una luz roja al final\n";
        std::cout << "caes y te desmayas.\n";
        std::cout << "lo lamento vuelves al inicio\n";
        playerHealth = 0;
    } else if (choice == "2") {
        std::cout << "El hombre levanta la mirada y con una voz ronca te dice no lograras escarpar de aqui si sigues asi\n";
        std::cout << "le ves la cara aquel que pensabas era un hombre y te desmayas del susto\n";
        std::cout << "lo lamento vuelves al inicio\n";
        playerHealth = 0;
    } else if (choice == "3") {
        std::cout << "con mucho miedo decides seguirlo\n";
        std::cout << "mientras caminan en la oscuridad le preguntas que haces alli y quien es el \n";
        std::cout << "el hombre te mira y dice estamos en donde todo termina pero aun asi no tiene fin, los humanos son criaturas con pensamientos oscuros por eso terminan aqui decide la puerta donde entraras:.\n";
    } else if (choice == "4") {
        std::cout << "decides ignorar la ayuda del hombre extraño pero no sabes que hacer\n";
        std::cout << "te quedas arrodillado en la oscuridad y aceptas tu destino en el limbo\n";
        std::cout << "lo lamento tienes que volver al inicio\n";
        playerHealth = 0;
    } else {
        std::cout << "OYE!! >:( Que haces?!! Esa no es una opción válida.\n";
        std::cout << "pierdes toda tu vida por la confusión.\n";
        playerHealth = 0;
    }

    if (playerHealth <= 0) {
        std::cout << "\nHas perdido toda tu vida. Tendrás que empezar de nuevo.\n";
    }
}

void continueExploration(int &playerHealth) {
    std::string choice;
    while (playerHealth > 0) {
        clearScreen();
        std::cout << "Tienes " << playerHealth << " de vida.\n";
        std::cout << "con mucho miedo decides seguirlo.\n";
        std::cout << "mientras caminan en la oscuridad le preguntas que haces alli y quien es el \n";
        std::cout << "el hombre te mira y dice estamos en donde todo termina pero aun asi no tiene fin, los humanos son criaturas con pensamientos oscuros por eso terminan aqui decide la puerta donde entraras:.\n";
        std::cout << "lloras por que sabes donde te encuentras\n";
        std::cout << "debes decidir:\n";
        std::cout << "1. puerta 1\n";
        std::cout << "2. puerta 2.\n";
        std::cout << "3. puerta 3\n";
        std::cout << "4. piedad\n";
        std::cout << "Elige una opción (1-4): ";
        std::cin >> choice;

        clearScreen();
        if (choice == "1") {
            std::cout << "entras y una criatura gigante lanzallamas de su ocico y te quema vivo\n";
            std::cout << "Pierdes toda tu vida en el proceso.\n";
            playerHealth = 0;
        } else if (choice == "2") {
            std::cout << "entras y ves a un violinista que te invita a escucharlo\n";
            std::cout << "OH NO el violinista te hipnotiza y bailas hasta la eternidad \n";
            playerHealth = 0;
        } else if (choice == "3") {
            std::cout << "entras y ves un mundo en vuelto en llamas y criaturas extrañas.\n";
            playerHealth = 0;
        } else if (choice == "4") {
            std::cout << "₦Ø ₮łɆ₦Ɇ₴ Ø₱₵łØ₦,Ɇ₴₮₳Ɽ₳₴ ₳QɄł ₱₳Ɽ₳ ₴łɆ₥₱ⱤɆ\n";
            playerHealth = 0;
        } else {
            std::cout << "Esa no es una opción válida. Pierdes toda tu vida por la confusión.\n";
            playerHealth = 0;
        }

        if (playerHealth <= 0) {
            std::cout << "\nHas perdido toda tu vida. Tendrás que empezar de nuevo.\n";
        } else {
            std::cout << "\nTe queda " << playerHealth << " de vida. ¿Quieres continuar explorando? (s/n): ";
            std::string continueGame;
            std::cin >> continueGame;
            if (continueGame != "s" && continueGame != "S") {
                break;
            }
        }
    }
}

int main() {
    std::string playAgain;
    do {
        int playerHealth = 100;
        while (playerHealth > 0) {
            encounter(playerHealth);
            if (playerHealth > 0) {
                continueExploration(playerHealth);
            }
        }
        std::cout << "¿Quieres jugar de nuevo? (s/n): ";
        std::cin >> playAgain;
    } while (playAgain == "s" || playAgain == "S");

    std::cout << "¡Hasta la próxima!\n";
    return 0;
}
