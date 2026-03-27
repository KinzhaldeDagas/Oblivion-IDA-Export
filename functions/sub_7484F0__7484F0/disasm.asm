0x7484F0: push    esi
0x7484F1: push    edi
0x7484F2: xor     esi, esi
0x7484F4: mov     edi, ds:dword_B403C8[esi]
0x7484FA: test    edi, edi
0x7484FC: jz      short loc_74850E
0x7484FE: mov     ecx, edi; ArgList
0x748500: call    sub_748C00
0x748505: push    edi
0x748506: call    FormHeapFree
0x74850B: add     esp, 4
0x74850E: mov     ds:dword_B403C8[esi], 0
0x748518: add     esi, 4
0x74851B: cmp     esi, 40h ; '@'
0x74851E: jb      short loc_7484F4
0x748520: pop     edi
0x748521: mov     dword ptr ds:0B4060Ch, 0
0x74852B: pop     esi
0x74852C: retn
