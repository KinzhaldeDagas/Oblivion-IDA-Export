0x65A380: push    ebx
0x65A381: push    esi
0x65A382: xor     bl, bl
0x65A384: call    MobileObject_GetCharProxy
0x65A389: mov     esi, eax
0x65A38B: test    esi, esi
0x65A38D: jz      short loc_65A3A4
0x65A38F: mov     ecx, esi
0x65A391: call    sub_893950
0x65A396: push    0
0x65A398: mov     ecx, esi
0x65A39A: call    sub_895060
0x65A39F: pop     esi
0x65A3A0: mov     al, 1
0x65A3A2: pop     ebx
0x65A3A3: retn
0x65A3A4: pop     esi
0x65A3A5: mov     al, bl
0x65A3A7: pop     ebx
0x65A3A8: retn
