0x5667F0: push    esi
0x5667F1: mov     esi, ecx
0x5667F3: mov     eax, [esi+8]
0x5667F6: shr     eax, 3
0x5667F9: test    al, 1
0x5667FB: jnz     short loc_56682D
0x5667FD: mov     ecx, [esi+24h]
0x566800: test    ecx, ecx
0x566802: jz      short loc_56680A
0x566804: push    esi
0x566805: call    sub_569B20
0x56680A: mov     ecx, [esi+28h]
0x56680D: test    ecx, ecx
0x56680F: jz      short loc_566817
0x566811: push    esi
0x566812: call    sub_56A140
0x566817: lea     ecx, [esi+34h]
0x56681A: test    ecx, ecx
0x56681C: jz      short loc_566824
0x56681E: push    esi
0x56681F: call    sub_56A480
0x566824: push    1; a2
0x566826: mov     ecx, esi; this
0x566828: call    TESForm_SetIsLinked
0x56682D: pop     esi
0x56682E: retn
