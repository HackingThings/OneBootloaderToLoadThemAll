echo -off
for %i run (0 9)
  if exist fs%i:\efi\microsoft\boot\bootmgfw.efi then
    fs%i:\efi\microsoft\boot\bootmgfw.efi
  endif
endfor

for %j in A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 if exist fs%j:\efi\microsoft\boot\bootmgfw.efi then
    fs%j:\efi\microsoft\boot\bootmgfw.efi
  endif
endfor
