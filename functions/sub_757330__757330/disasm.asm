0x757330: push    48h ; 'H'; Size
0x757332: call    FormHeapAlloc
0x757337: add     esp, 4
0x75733A: test    eax, eax
0x75733C: jz      short loc_757345
0x75733E: mov     ecx, eax
0x757340: jmp     sub_7572B0
0x757345: xor     eax, eax
0x757347: retn
