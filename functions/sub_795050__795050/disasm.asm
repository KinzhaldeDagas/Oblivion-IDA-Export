0x795050: push    esi
0x795051: mov     esi, [esp+4+arg_0]
0x795055: xor     eax, eax
0x795057: cmp     esi, eax
0x795059: push    edi
0x79505A: mov     edi, ecx
0x79505C: mov     [edi+4], eax
0x79505F: mov     [edi+8], eax
0x795062: mov     [edi+0Ch], eax
0x795065: jnz     short loc_79506E
0x795067: pop     edi
0x795068: xor     al, al
0x79506A: pop     esi
0x79506B: retn    4
0x79506E: cmp     esi, 0FFFFFFFh
0x795074: jbe     short loc_79507B
0x795076: call    sub_790B90
0x79507B: push    eax
0x79507C: push    esi; char *
0x79507D: call    sub_794550
0x795082: shl     esi, 4
0x795085: add     esi, eax
0x795087: add     esp, 8
0x79508A: mov     [edi+4], eax
0x79508D: mov     [edi+8], eax
0x795090: mov     [edi+0Ch], esi
0x795093: pop     edi
0x795094: mov     al, 1
0x795096: pop     esi
0x795097: retn    4
