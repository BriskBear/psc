# Set the shell prompt : 1690243848
PS1='\u'                     #  Display Username
PS1+='\[$( errname $? )\]'   #  Display ]|[ or error code, random-color hostname
PS1+=':\w'                   #  Display current directory
PS1+='\n\[$( glyph "" )\] ' #  Display uniform-length prompt-icon
