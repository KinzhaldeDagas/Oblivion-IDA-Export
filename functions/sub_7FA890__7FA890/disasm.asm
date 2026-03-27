0x7FA890: push    ebx
0x7FA891: push    ebp
0x7FA892: push    esi
0x7FA893: mov     esi, ecx
0x7FA895: mov     eax, [esi]
0x7FA897: mov     edx, [eax+80h]
0x7FA89D: push    edi
0x7FA89E: call    edx
0x7FA8A0: mov     ecx, [esi+70h]
0x7FA8A3: mov     edx, [ecx+24h]
0x7FA8A6: mov     edi, [edx]
0x7FA8A8: mov     eax, [esi+0C8h]
0x7FA8AE: mov     ebp, [esi+eax*4+7Ch]
0x7FA8B2: mov     ebx, [edi+4]
0x7FA8B5: add     edi, 4
0x7FA8B8: cmp     ebx, ebp
0x7FA8BA: jz      short loc_7FA8EC
0x7FA8BC: test    ebx, ebx
0x7FA8BE: jz      short loc_7FA8DC
0x7FA8C0: lea     eax, [ebx+4]
0x7FA8C3: push    eax; lpAddend
0x7FA8C4: call    dword ptr ds:0A2807Ch
0x7FA8CA: test    eax, eax
0x7FA8CC: jnz     short loc_7FA8DC
0x7FA8CE: test    ebx, ebx
0x7FA8D0: jz      short loc_7FA8DC
0x7FA8D2: mov     edx, [ebx]
0x7FA8D4: mov     eax, [edx]
0x7FA8D6: push    1
0x7FA8D8: mov     ecx, ebx
0x7FA8DA: call    eax
0x7FA8DC: test    ebp, ebp
0x7FA8DE: mov     [edi], ebp
0x7FA8E0: jz      short loc_7FA8EC
0x7FA8E2: add     ebp, 4
0x7FA8E5: push    ebp; lpAddend
0x7FA8E6: call    dword ptr ds:0A28078h
0x7FA8EC: mov     ecx, [esi+38h]
0x7FA8EF: lea     eax, [esi+70h]
0x7FA8F2: push    eax
0x7FA8F3: push    ecx
0x7FA8F4: lea     ecx, [esi+40h]
0x7FA8F7: call    sub_76CE40
0x7FA8FC: add     dword ptr [esi+38h], 1
0x7FA900: pop     edi
0x7FA901: pop     esi
0x7FA902: pop     ebp
0x7FA903: xor     eax, eax
0x7FA905: pop     ebx
0x7FA906: retn    1Ch
