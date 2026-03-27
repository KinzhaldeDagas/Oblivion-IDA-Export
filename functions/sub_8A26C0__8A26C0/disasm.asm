0x8A26C0: test    ecx, ecx
0x8A26C2: mov     edx, [esp+arg_0]
0x8A26C6: jz      short loc_8A26DC
0x8A26C8: mov     eax, [ecx+8]
0x8A26CB: test    eax, eax
0x8A26CD: jz      short loc_8A26DC
0x8A26CF: push    ebx
0x8A26D0: mov     bl, dl
0x8A26D2: neg     bl
0x8A26D4: sbb     ebx, ebx
0x8A26D6: and     ebx, ecx
0x8A26D8: mov     [eax+8], ebx
0x8A26DB: pop     ebx
0x8A26DC: mov     [esp+arg_0], edx
0x8A26E0: jmp     sub_89D430
