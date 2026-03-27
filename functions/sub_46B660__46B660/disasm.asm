0x46B660: mov     eax, [ecx+0Ch]
0x46B663: test    eax, eax
0x46B665: jz      short loc_46B671
0x46B667: cmp     eax, 7FFh
0x46B66C: ja      short loc_46B671
0x46B66E: mov     al, 1
0x46B670: retn
0x46B671: xor     al, al
0x46B673: retn
