0x6FE020: push    esi
0x6FE021: push    edi
0x6FE022: mov     edi, [esp+8+a2]
0x6FE026: push    edi; a2
0x6FE027: mov     esi, ecx
0x6FE029: call    sub_700670
0x6FE02E: test    al, al
0x6FE030: jz      short loc_6FE056
0x6FE032: mov     esi, [esi+8]
0x6FE035: test    esi, esi
0x6FE037: jz      short loc_6FE056
0x6FE039: mov     eax, [edi+8]
0x6FE03C: test    eax, eax
0x6FE03E: jz      short loc_6FE056
0x6FE040: push    eax; Str2
0x6FE041: push    esi; Str1
0x6FE042: call    __strcmp
0x6FE047: add     esp, 8
0x6FE04A: neg     eax
0x6FE04C: sbb     eax, eax
0x6FE04E: pop     edi
0x6FE04F: add     eax, 1
0x6FE052: pop     esi
0x6FE053: retn    4
0x6FE056: pop     edi
0x6FE057: xor     al, al
0x6FE059: pop     esi
0x6FE05A: retn    4
