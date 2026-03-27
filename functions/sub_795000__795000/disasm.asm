0x795000: mov     eax, [esp+arg_0]
0x795004: push    esi
0x795005: mov     esi, ecx
0x795007: xor     ecx, ecx
0x795009: cmp     eax, ecx
0x79500B: mov     [esi+4], ecx
0x79500E: mov     [esi+8], ecx
0x795011: mov     [esi+0Ch], ecx
0x795014: jnz     short loc_79501C
0x795016: xor     al, al
0x795018: pop     esi
0x795019: retn    4
0x79501C: cmp     eax, 0FFFFFFFFh
0x79501F: jbe     short loc_795026
0x795021: call    sub_790B90
0x795026: push    edi
0x795027: lea     edi, ds:0[eax*4]
0x79502E: push    edi; Size
0x79502F: call    FormHeapAlloc
0x795034: add     edi, eax
0x795036: add     esp, 4
0x795039: mov     [esi+0Ch], edi
0x79503C: mov     [esi+4], eax
0x79503F: mov     [esi+8], eax
0x795042: pop     edi
0x795043: mov     al, 1
0x795045: pop     esi
0x795046: retn    4
