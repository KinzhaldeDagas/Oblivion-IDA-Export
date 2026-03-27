0x795260: mov     eax, [esp+arg_0]
0x795264: push    esi
0x795265: mov     esi, ecx
0x795267: xor     ecx, ecx
0x795269: cmp     eax, ecx
0x79526B: mov     [esi+4], ecx
0x79526E: mov     [esi+8], ecx
0x795271: mov     [esi+0Ch], ecx
0x795274: jnz     short loc_79527C
0x795276: xor     al, al
0x795278: pop     esi
0x795279: retn    4
0x79527C: cmp     eax, 0FFFFFFFFh
0x79527F: jbe     short loc_795286
0x795281: call    sub_790B90
0x795286: push    edi
0x795287: lea     edi, [eax+eax]
0x79528A: push    edi; Size
0x79528B: call    FormHeapAlloc
0x795290: add     edi, eax
0x795292: add     esp, 4
0x795295: mov     [esi+0Ch], edi
0x795298: mov     [esi+4], eax
0x79529B: mov     [esi+8], eax
0x79529E: pop     edi
0x79529F: mov     al, 1
0x7952A1: pop     esi
0x7952A2: retn    4
