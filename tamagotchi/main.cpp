#include <cstdlib> // Para system, getenv
#include <iostream> // Para imprimir mensajes
#include <ncurses.h>
#include <string>
#include <fstream> // Para trabajar con archivos
#include <sstream> // Para convertir valores a cadena
#include <filesystem>
#include <vector>
#include <unistd.h> // Para chdir

namespace fs = std::filesystem;

std::string mononormal() {
    return R"(                                         @--@@                                  
                                         -------@                               
                                          @------@   @@                         
                                            @-----@ @--                         
                                     @-----@ @----- @--=                        
                                       @-----@-----@@--                         
        @@@@:+@@                         @---------+--@                         
      @         @                         -----------@                          
      @         @                     @@@@@---------@+-@@@@                     
      @        @               @@---------#-------------------@@                
      @       @             @*------------------------------------@             
      @                    @----------------------------------------@           
      @      #            @@@@@@@------------------------------------@          
      @@     @                     @----------------------------------@         
     @     @@@           @           @------@@@@@@@@@-----------------@         
     :       *         @@             @@@               @--------------@        
    @                @--@ @   @                           @------------@@@@     
   @                @-@%  :@@@@@             @              @-------@-------=@  
              @    .-@ @ @@@@@@@@           @@   @@          =----@----#------@ 
  @           @     @@   @@@@@  @@           @@@@@@@         @------@     @---- 
 @            =      @   @ +@@@@@           @%@@@   @@       #-----@       ----@
 @             @    @      @@@@@           :@@@@@   @@       @----@        @---@
               @   @                        @@@@@@@@@@       @----#        @---@
@               @  @                        @  @@@@@@@       @---@         @---@
@                  @                          @@@@@@        @----@        @---@ 
@                @ @                                       @------@      @---@  
@                 @@          @                           @--------@@@@*---#@   
@                  @@              @   @                 @-----@+--------@      
@                   @ @                                 @---------@             
@                    -  @                             @----------@              
                       @  %@                        @----------@                
 @                       @@ @@@@                  @------*@@@                   
 .                          @+*+*++*%@@@@@@@@@@@@#-@                            
  @                           @@*+=*+*+=****=@------@                           
   @                             @*+*+*+*****+--------                          
    @                              :@***==***@@--------                         
                                      @@**++*@---------@                        
       @                                  @@------------@                       
        @                                @----------@---@                       
          @                               @------*@*@----                       
            @   @@                         %-@+-@      .@@@@@@                  
              @ @ @  @@:              @                    -@ @                 
                @   .  *         @ @   @                     @                  
                @      @                @ @               @                     
                @   @    @                @            @@-@                     
                       @=---@@@           @        @@----@                      
                      @@        @   @      @@@@@------@                         
                @#   @           @         @------@@                            
                                  @        @@@                                  
                                   @@   @@                                     )";
}

std::string monomuerto() {
    return R"(                                 @#**#@@@                                       
                                @@------+@@                                     
                                 @@-------+@   @@@                              
                                   @@=-----=@ @@-@#                             
                            @@@##@@@ @@-----+@@@-*@                             
                            @@+-----#@@#-----@*@-+@                             
                              @@#----=@@-----@@=-@                             
                                #@----+*-----@=-=@                              
                                 @@-------------@@                              
                                @@@*----------*@@@@@@@                          
                       @@@@@#*++=-@#---------+#------=*#@@@                     
                   @@@+------------------------------------=@@@                 
                 @@+-------------------------------------------#@#              
                @*-----------------------------------------------@@             
               @@@#=------------------------------------------*@            
               @         @*----------------------------------------@@           
              @            :@------------====-----------------------@@          
             @=              @=---*@@*         :@@+-----------------+@          
          @@#@                @#                    *#---------------@@         
        @@=-#:  #                                     #*------------=@@@@@@     
       @@-*++    =@+  #@*                               @--------#@*-------*@@  
       @*== #      @@@                                   @-----*@------------@@ 
       @#+. :   +@@  .@#             +@       .=         :+-------#+   :#=----@@
        @*@#   -       -@*             @@. +@@            *------@       #----*@
         @                              @@@@              *-----@         @---=@
       #@                            -@@   #@+            #----*          @=---@
       @                            ::       @@:          *----*          @=--=@
      @-                                                 #=---+-          @---*@
      @                                                 :@----#.         =*---@@
      @.                                                @-----=+        :*---@@ 
      @+            __________                         @-------*       @+--=@@  
       @                                              @=---@=---=@@@@+----@@    
        @                                            @-----=@#=-------+#@@      
         @*                                        =*---------=@@@@@@#          
           @+                                     @=----------*@                
             @@*                                @+----------+@@                 
                @@#                           #+--------=*@@@                   
                @@@--=@#                   *@=-=+*@@@@@@@                       
              @@+-----------+*@###@##*@@                                 
            @@=-----------------------@=------+@                                
          @@-------------------------*@---------@@                              
        @@=-------------:.    .------+@*@--------@                              
      @@*---------=@@.           :----@@----------@@                            
       @@@*-----+@=-:             :--@=------------@                            
          @@@**@@---.              #@-----------*=-#@                           
          @=---+---:             @-----------@@=--*@                           
         @@--------.             :@--------=@*-----=@                           
         @*-------:               -@@=----@*--------@@                          
   @ :@@#@--------:                 :*+*@@*---------*@                          
   @     @* @+----:     +@* =@:*    .----------------@                          
   @        @#----:    .  @+#  @ :=.:----------------@@                         
   @       *@-----:    @        .  @-----------------=@                         
   @ :-=#  :@@@#--:    @          .@-----------------=@                         
  *@         @#---==@@-            @----------------*@                          
  @=       @*#@@@@@ @#       .-+-  @+------------=*@@                           
   @      @@@         @@            @---------+@@@                              
    @* .#@              #           @=--==+@@@@                                 
                        @:          @@@@@@                                      
                         @@.     :@@                                            )";
}

std::string monofeliz() {
    return R"(                                            @@*#@@@@                                    
                                          @#-----=@@                                
                                           @@=-----+@ @@@@                          
                                       @@@@@@@@=----*@@*-@                          
                                      @#----=@@@-----@@#-#                          
                                        @@=---+@#----@@+-@                          
       @@@#@##@@@                         @*---*=----@+-+@                          
      @         =@                         @*----------#@                           
     @*         =@                    @@@@@@@---------@@@@@@@@                     
     @*        +@               @@@@*=------#------------------*@@@                 
      @       +@             @@#=----------------------------------+@@              
      @       #             @*----------------------------------------#@            
      @       @            @*+**=--------------------------------------=@           
     @@       @           @*       **=----------------------------------+@          
     @   *#  #@           #           @-----------==---------------------#@         
     #        #         @@             -=-+#*:          :**---------------@         
    @         *       @@=@              #                   @=------------#@        
   @          +      @=+@                                     #---------*@***#@@   
   =          -     @+#:-   *. @               #    .          @------@#--------+@  
  @           .     @*@ .  #@@@@@@            :@@  =@:          @-------*@+*@=----@@
 @             @     @#@         +@            @@@@@@@@         -=----=@      *---*@
@+             @     @@                       @@@@@    @         +---=+       *=--=@
@               @   @:                       :@@@@@    @@       :+---*         #--=@
#               @   @                         @@@@@@@@@@@       #=---*         #--=@
*                @ @                          .  *@@@@@@        #---#         ++--*@
=                * @                            *@@@@@         @----*         #---@ 
                  @@           .@@@@@@@@                      +=-----#      =*--+@  
                   @@            @@@@@@                      *+--==--=@   @*---#@   
                    @=                                      @-----@*--------=@@     
-                    @@                                    @--------*@@@@@@@        
*                     #@@                                +=---------#@              
#                       @ @+                           =#---------*@@               
@                         #@ @@*                     @*------++@@@                  
@=                          @***##@#+:         .#@@@@@@@@@@                       
 @                             @#**************@@*----@@                            
  @                              #@***********#@-------#@                           
   @                                ##********#@+#------*@                          
    @=                                -@*******@#--------#@                         
     @*                                   @@**@=----------@@                        
       @                                    =#---------+@-=@                        
        @#                                 @*--------#@=---@@                       
          @.                                @=-----#   =#+-*@                       
            @-   ** @.                        @@@*@         .@+ @@                  
              @--     +.               .-                        *                  
                @       :             #  :                     +@                   
                @                           .                @@                     
                @    -    #       .                       ##*@                      
                =       **==@@@+            .        .##=--#@                       
                =      @@@@@    @@    -.     =  =##+----*@@                         
                @*    @           @          @------=@@@                            
                   @@              @         @@@@@@@                                
                                    @       @@                                      )";
}


void pregunta(WINDOW* test, WINDOW* ans, WINDOW* mono, int lvl, int hp);

void fallo(WINDOW* mono, int hp, int lvl);

void muerte(WINDOW* mono);

void acierto(WINDOW* mono, int hp, int lvl);

std::string preguntas[] = {"Mission 1:\n Heey!! Im Freaky the Monkey, and I need your help.\n Someone told me there's a secret hidden deep in this terminal,\n my home!\n Would you be kind enough to look for it? I am very busy, as I\n am preparing a big project for HackUPC. Im learning lots of\n new things (:\n\n You need to use the magic words of the terminal, starting \n with 'ls', which lets you see everything near you.\n I've opened a terminal window for you, please help me and send \n the answer with all caps.\n\n Hint: watch out for the first letters of every word.\n\n Tips:\n You can exit the terminal by writing 'exit'.\n Your progress is saved with every mission completed.",
"Mission 2:\n Wow, you actually discovered the hidden word! How can you be\n so good at this????\n I cant do cool stuff with the terminal, I don't even \n know what VIM means D:\n All the cool monkeys are talking about directories, files and \n really weird stuff. They say 'cd' (directory)  moves you through directories. Someone also told me that 'pwd' is really useful\n when you get lost, let's see how it works!\n You can always type 'cd' alone to come home, if you are scared.\n Not that I am by the way...\n Let's look around. Third directory seems to be interesting,\n go there and take a look at what is inside. Once you are there,\n use 'pwd' and tell me what the terminal says. Remember,\n see with  'ls', move with  'cd'.\n\n Tips:\n You can exit the terminal by writing 'exit'.\n Your progress is saved with every mission completed.\n",
"Mission 3:\n Hooray horaaay, today is my lucky day. I found a BIG pile of\n bananas, ripe and ready to be eaten.\n But there are too many of them ): . I can't eat them all, at\n least not today. I need to find somewhere to hide them, so\n my brother Wei doesn't find them.\n What if we create a box to hide them?\n I know about this, I will show you how it works:\n by using 'mkdir' command you will be able to\n create new directories, for example:\n 'mkdir Directory1/Directory2' will create Director 2 inside of\n Directory1. 'mkdir Directory1' will create Directory1\n in the current directory.\n Your mission is to create a new directory called 'Box'\n where I can hide my bananas. Show me the command you have\n used to make it.\n\n Tips:\n You can exit the terminal by writing 'exit'.\n Your progress is saved with every mission completed.\n",
"Mission 4:\n Great job, you are a fast learn…OOOUCH!! That hurts!!\n Something has pricked me, I don't wanna get hurt again.\n It must have been that bad cactus. Mmmmh, i've just remembered\n something my mentor taught me.\n He says that, in order to delete something we don't like, we should\n use 'rmdir'. It' just like mkdir but it deletes\n instead of creating.\n You should go up to the cactus directory and delete the thorn\n that got me. sniff sniff.\n It was the second one! I know it!! Delete it and tell me how you did it, write the command.\n\n Tips:\n You can exit the terminal by writing 'exit'.\n Your progress is saved with every mission completed.\n",
"Mission 5:\n One less! But it's not enough, there are two more thorns still.\n The command 'rmdir Cactus' will completely delete the Cactus\n as long as it's empty, not the case.\n You have to remove the rest of the thorns, once you have\n done it, you will be able to completely delete that cactus.\n Finally my bananas will be in a safe place!\n After deleting all the thorns, show me the command you have used to remove the cactus.\n\n Tips:\n You can exit the terminal by writing 'exit'.\n Your progress is saved with every mission completed.\n",
"Mission 6:\n The project ive been working on has started working now! Im\n really proud of myself right now. Its… The Freaky Radar!!\n What does it do? Its a secret, sshhhh. But now it has given me a log, and I need\n to read it. Im more of a dog monkey but we need to use 'cat file.tx'.  I dont have much time, the project is\n due in 7 hours!!\n The name of the log is message1.txt, hurry up an tell me what it says.\n Its very important!!! I will teach you more thing when i have\n the time, just go and do it\n Oops, iI almost forgot, it is placed in the first directory\n of Welcome.\n\n Tips:\n You can exit the terminal by writing 'exit'.\n Your progress is saved with every mission completed.\n",
"Mission 7:\n Phew, that was close, I was almost late. Now we can talk\n peacefully.\n Honestly I don't really agree with that message, let's see if the other message convinces me, I will show you how to do it:\n 'cat > file.txt' will create a new text file. 'file1 file2 > file3.txt' will copy file1 and file2 contents and\n paste them in a new file 'file3.txt'.\n Try to put both of the messages in a new file called\n message3.txt. I hope it makes more sense than what we got before…\n\n Tips:\n You can exit the terminal by writing 'exit'.\n Your progress is saved with every mission completed.\n"
};
void guardarEstado(int nivel, int vida) {
    std::ofstream archivo("estado.txt"); // Se abre el archivo en modo escritura
    if (archivo.is_open()) { // Se verifica si el archivo se abrió correctamente
        // Se escriben los valores de nivel y vida en el archivo
        archivo << nivel << std::endl;
        archivo << vida << std::endl;
        archivo.close(); // Se cierra el archivo
    } else {
        std::cerr << "No se pudo abrir el archivo para escribir." << std::endl;
    }
}

// Método para leer el nivel y la vida desde un archivo
void leerEstado(int& nivel, int& vida) {
    std::ifstream archivo("estado.txt"); // Se abre el archivo en modo lectura
    if (archivo.is_open()) { // Se verifica si el archivo se abrió correctamente
        std::string linea;
        // Se lee cada línea del archivo y se asigna a nivel y vida
        if (std::getline(archivo, linea)) {
            std::istringstream(linea) >> nivel;
        }
        if (std::getline(archivo, linea)) {
            std::istringstream(linea) >> vida;
        }
        archivo.close(); // Se cierra el archivo
    } else {
        std::cerr << "No se pudo abrir el archivo para leer." << std::endl;
    }
}
std::string sol[] = {"HACKUPC","Welcome/1_Hello_World","mkdir 3_Coin/Banana","rmdir 7_Cactus/Thorn2", "rmdir 7_Cactus", "I love Linux", "I love Linux but I prefer Windows"};

bool bldr(int hp, int lvl) {
    // Iniciar pantalla
    initscr();
    noecho();
    start_color();

    int h, w, y, x; // Height, width, iniY, iniX

    // Ventana mono
    h = 55, w = 100, y = 6, x = 15;
    WINDOW* mono = newwin(h, w, y, x);

    // Coordenadas del mono como referencia
    int by, bx, my, mx;
    getbegyx(mono, by, bx);
    getmaxyx(mono, my, mx);

    init_color(20, 150, 150, 150);
    init_pair(1, 20, COLOR_WHITE);
    init_pair(2, COLOR_WHITE, 20);
    init_pair(3, COLOR_RED, COLOR_BLACK);
    init_pair(4, COLOR_CYAN, COLOR_BLACK);

    // Ventana nivel
    h = 4, w = (mx - bx) - 4, y = by - 5, x = bx + 2;
    WINDOW* level = newwin(h, w, y, x);
    int lvlCap = w - 2;

    // Ventana vida
    h = (my - by) - 10, w = 5, y = by + 5, x = mx + 15;
    WINDOW* health = newwin(h, w, y, x);
    int lifeCap = h - 2;

    // Ventana Pregunta
    h = 33, w = 65, y = 5, x = 135;
    WINDOW* test = newwin(h, w, y, x);

    // Ventana Respuesta
    h =  5, w = 65, y = 42, x = 135;
    WINDOW* ans = newwin(h, w, y, x);

    // Dibujo mono
    wprintw(mono, mononormal().c_str());

    wclear(health);
    wclear(level);

    // Dibujar cuadriculas
    box(health, 0, 0);
    box(ans, 0, 0);
    box(level, 0, 0);

    wbkgd(test, COLOR_PAIR(2));

    wattron(level, COLOR_PAIR(4));
    for (int i = 1; i <= (lvl*lvlCap/8)+1; i++) {
        mvwprintw(level, 1, i, "#");
        mvwprintw(level, 2, i, "#");
    }
    wattroff(level, COLOR_PAIR(4));

    wattron(health, COLOR_PAIR(3));
    for (int i = (lifeCap-hp*lifeCap/10)+1; i <= lifeCap; i++) {
        mvwprintw(health, i, 1, "#");
        mvwprintw(health, i, 2, "#");
        mvwprintw(health, i, 3, "#");
    }
    wattroff(health, COLOR_PAIR(3));

    // Refrescar
    refresh();
    wrefresh(level); 
    wrefresh(test); 
    wrefresh(ans); 
    wrefresh(mono); 
    wrefresh(health);

    WINDOW* optionPlay = newwin(8, 16, 48, 135);
    wattron(optionPlay, A_REVERSE);
    mvwprintw(optionPlay, 1, 1, "Play");
    wattroff(optionPlay, A_REVERSE);

    WINDOW* optionFeed = newwin(8, 16, 48, 160);
    wattron(optionFeed, A_REVERSE);
    mvwprintw(optionFeed, 1, 1, "Feed");
    wattroff(optionFeed, A_REVERSE);

    WINDOW* optionExit = newwin(8, 16, 48, 185);
    wattron(optionExit, A_REVERSE);
    mvwprintw(optionExit, 1, 1, "Exit");
    wattroff(optionExit, A_REVERSE);

    box(optionExit, 0, 0), box(optionFeed, 0, 0), box(optionPlay, 0, 0);
    wbkgd(optionExit, COLOR_PAIR(2));
    wbkgd(optionPlay, COLOR_PAIR(2));
    wbkgd(optionFeed, COLOR_PAIR(2));
    refresh();
    wrefresh(optionExit); 
    wrefresh(optionFeed); 
    wrefresh(optionPlay);

    int ch;
    WINDOW* curWin = optionPlay;
    WINDOW* prev;
    while ((ch = getch()) != '\n') {
        prev = curWin;
        switch(ch) {
            case 'j':
                curWin = (curWin == optionPlay) ? optionExit : ((curWin == optionFeed) ? optionPlay : optionFeed); // Move left
                break;
            case 'l':
                curWin = (curWin == optionPlay) ? optionFeed : ((curWin == optionFeed) ? optionExit : optionPlay); // Move right
                break;
            default:
                // Handle other key presses
                break;
        }
        wbkgd(prev, COLOR_PAIR(2));
        wbkgd(curWin, COLOR_PAIR(1));
        refresh();

        wrefresh(optionExit); 
        wrefresh(optionFeed); 
        wrefresh(optionPlay); 
        wrefresh(curWin); 
        wrefresh(prev);
    }
    if (curWin == optionPlay) {
        pregunta(test, ans, mono, lvl, hp);
    }
    else if (curWin == optionFeed) {
        endwin();
        return 0;
    }
    else {
        endwin();
        return 0;
    }
    
    endwin();
}

void pregunta(WINDOW* test, WINDOW* ans, WINDOW* mono, int lvl, int hp) {
    system("gnome-terminal --working-directory=/home/javi/projects/tamagotchi/Welcome &");
    std::string preg = preguntas[lvl];
    mvwprintw(test, 1, 1, preg.c_str());
    wrefresh(test);
    std::string input;
    int ch;
    while ((ch = mvwgetch(ans, 2, 1)) != '\n') {
        if (ch == ERR) {
            continue;
        }
        else if (ch == KEY_BACKSPACE || ch == 127) {
            if (!input.empty()) {
                input.pop_back(); // Remove the last character
                wclear(ans);
                box(ans,0,0);
                mvwprintw(ans, 2, 1, input.c_str());
            }
        }
        else {
            input += ch;
            mvwprintw(ans, 2, 1, input.c_str());
        }
    }
    if (input == sol[lvl]) {
        lvl++;
        acierto(mono, hp, lvl);
    }
    else {
        hp--;
        if (hp) {
            fallo(mono, hp, lvl);
        }
        else {
            muerte(mono);
        }
    }
}

void fallo(WINDOW* mono, int hp, int lvl) {
    guardarEstado(lvl, hp);
    wclear(mono);
    wprintw(mono, monomuerto().c_str());
    wrefresh(mono);
    getch();
    bldr(hp, lvl);
}

void muerte(WINDOW* mono) {
    wclear(mono);
    wprintw(mono, monomuerto().c_str());
    wrefresh(mono);
    getch();
}

void acierto(WINDOW* mono, int hp, int lvl) {
    guardarEstado(lvl, hp);
    wclear(mono);
    wprintw(mono, monofeliz().c_str());
    wrefresh(mono);
    getch();
    bldr(hp, lvl);
}

int main() {
  std::string dir_principal = "./Welcome";
    std::vector<std::string> sub_dirs = {
        "/1_Hello_World",
        "/2_Apple",
        "/3_Coin",
        "/4_Key",
        "/5_University",
        "/6_Picture",
        "/7_Cactus",
        "/.Biene2024!",
        "/7_Cactus/Thorn1",
        "/7_Cactus/Thorn2",
        "/7_Cactus/Thorn3"
    };

    if(fs::exists(dir_principal)){
        fs::remove_all(dir_principal);
    }

    std::cout << "Se han eliminado los directorios exitosamente." << std::endl;

    // Crear el directorio principal
    fs::create_directory(dir_principal);

    // Crear los subdirectorios dentro del directorio principal
    for(const auto& sub_dir : sub_dirs) {
        fs::create_directories(dir_principal + sub_dir);
    }

    std::string nombre_archivo1 = "./Welcome/1_Hello_World/message1.txt";
    std::string nombre_archivo2 = "./Welcome/1_Hello_World/message2.txt";

    // Crear y abrir el primer archivo
    std::ofstream archivo1(nombre_archivo1);
    if (archivo1.is_open()) {
        archivo1 << "I love Linux" << std::endl;
        archivo1.close();
        std::cout << "Se ha creado el archivo \"" << nombre_archivo1 << "\"." << std::endl;
    } else {
        std::cerr << "Error al crear el archivo \"" << nombre_archivo1 << "\"." << std::endl;
        return 1; // Salir del programa con un código de error
    }

    // Crear y abrir el segundo archivo
    std::ofstream archivo2(nombre_archivo2);
    if (archivo2.is_open()) {
        archivo2 << "but I prefer Windows" << std::endl;
        archivo2.close();
        std::cout << "Se ha creado el archivo \"" << nombre_archivo2 << "\"." << std::endl;
    } else {
        std::cerr << "Error al crear el archivo \"" << nombre_archivo2 << "\"." << std::endl;
        return 1; // Salir del programa con un código de error
    }
    int nivel, vida;
    leerEstado(nivel, vida);
    bldr(vida, nivel);
    return 0;
}