=begin
non't touch anything!
and follow me on git
github.com/floppahat
=end

class String
    # colorization
    def colorize(color_code)
      "\e[#{color_code}m#{self}\e[0m"
    end
  
    def red
      colorize(31)
    end
  
    def green
      colorize(32)
    end
  
    def yellow
      colorize(33)
    end
  
    def blue
      colorize(34)
    end
  
    def pink
      colorize(35)
    end
  
    def light_blue
      colorize(36)
    end
  end

system"clear"
puts()
puts"     98989898  06           0000000       .w01010w      .w01010w      _.w565656._
     90        96         8868     88     02  !   02    02  !   02    w6       6w
     90        86        966         9    20      20    20      20    56 97997 65
     909898    96        878    !    8    02 101wwi     02 101wwi     654     356
     90        86        9668        9    2001          2001          56       65
     90        96         8888     88     02            02            65       56
     09        80000000     0000000       20            20            56       65
                                     _;w020202020202002020w           65       56 
✨020202020200202022020202002022023www/|"
puts()
loop do
    print"FloppaHAT"
    print" > ".blue
    userSession = gets.chomp
    if userSession == "?help"
    end
    if userSession == "?contact"
        puts()
        puts"email: floppahat@outlook.com"
        puts()
    end
    if userSession == "?about"
        puts()
        puts"FloppaHat Is A Generic Easily Kernel To Use In Linux/Windows/BSD And OSX!"
        puts"                        
                        \`*-.                    
                        )  _`-.                 
                        .  : `. .                
                        : _   '  \               
                        ; *` _.   `*-._          
                        `-.-'          `-.       
                        ;       `       `.     
                        :.       .        \    
                        . \  .   :   .-'   .   
                        '  `+.;  ;  '      :   
                        :  '  |    ;       ;-. 
                        ; '   : :`-:     _.`* ;
  [floppahat 0.2]    .*' /  .*' ; .*`- +'  `*' 
                    `*-*   `*-*  `*-*'"
      end

    if userSession == "fetch"
        puts()
        puts()
        puts"     System: Floppa VS2
                                                  \`*-.                    
     Memory: 24MB                                  )  _`-.                 
     Uptime: Unknown                              .  : `. .                
     Kernel: Floppa_Kernel 0.2 Kernel Rebuild!    : _   '  \              
                                                  ; *` _.   `*-._          
     @FloppaHAT                                   `-.-'          `-.       
                                                    ;       `       `.     
                                                    :.       .        |.  
                                                    . \  .   :   .-'    |   
                                                    '  `+.;  ;  '      :   
                                                    :   '  |    ;       ;-. 
          (i love floppa <3)                        ;  '   : :`-:     _.`* ;
                                                  .*' /  .*' ; .*`- +'  `*' 
                                                  `*-*   `*-*  `*-*'
".yellow
    end
    if userSession == "clear"
      system "clear"
    end
    if userSession == "ls"
      system"python data/kernel/ls.py"
    end
    if userSession == "ls ../"
      system"python data/kernel/lss.py"
    end
    if userSession == "ls .."
      system"python data/kernel/lss.py"
    end
    if userSession == "local"
      puts"[/kernel/#{locale}]"
    end
    if userSession == "?starter-pack"
      puts()
      puts"What's Your O.S?"
      puts()
      puts"[ 1 ] Ubuntu/Debian"
      puts"[ 2 ] Arch/Manjaro"
      puts"[ 3 ] macOSX"
      puts"[ 4 ] Windows"
      puts()
      print"> "
      so = gets.chomp.to_i
      if so == 1
        system"sudo apt install python3 && python data/kernel/starterpack-ubuntu/so.py"
      end
    end
    if userSession == "shell"
      system"zsh"
    end
    if userSession == "shell_theme"
      system'sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"'
      system"zsh"
    end
    if userSession == "reset"
      system"./FloppaHAT"
    end
    if userSession == "monitor"
      system"htop"
    end
    if userSession == "stage -in"
      print"Package Name: "
      package = gets.chomp
      system"sudo apt install #{package}"
    end
    if userSession == "stage -rm"
      print"Package Name: "
      package = gets.chomp
      system"sudo apt remove #{package} && sudo apt autoremove"
    end
    if userSession == "minecraft_game"
      system"java -jar data/applications/minecraft.jar"
    end
    if userSession == "minecraft_texture -in"
      print"Texture Directory? "
      texturedir = gets.chomp
      system"mv #{texturedir} ~/.minecraft/resourcepacks"
    end
    if userSession == "minecraft_texture -rm"
      print"Texture Name? "
      texturedir = gets.chomp
      system"rm ~/.minecraft/resourcepacks/#{texturedir}"
    end
    if userSession == "cd ~"
      system"python3 data/kernel/dir1.py"
    end
    if userSession == 'cd /home'
      system"python3 data/kernel/dir1.py"
    end
    if userSession == "cd /home/"
      system"python3 data/kernel/dir1.py"
    end
    if userSession == "cd /user"
      system"python3 data/kernel/dir1.py"
    end
    if userSession == "pwd"
      system"pwd"
    end
    if userSession == "tree"
      system"tree"
    end
    if userSession == "cd /kernel"
      system"python3 data/kernel/cdkernel.py"
    end
    if userSession == "cdir"
      print"What's Directory You Want To Go? "
      dir = gets.chomp
      if dir == "/home"
        system"python3 data/kernel/dir1.py"
      end
      if dir == "/kernel"
        system"python3 data/kernel/cdkernel.py"
      end
      if dir == "/"
        system"python3 data/kernel/cdbar.py"
      end
    end
    if userSession == "download"
      print"Type the Link: "
      link = gets.chomp
      system"wget #{link} --output-document archive"
      print"Document Name (w/ extension)? "
      doc = gets.chomp
      system"mv archive data/user/#{doc}"
    end
end
