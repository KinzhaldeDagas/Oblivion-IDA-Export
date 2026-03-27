0x6FD8B0: push    ebp
0x6FD8B1: push    esi
0x6FD8B2: push    edi
0x6FD8B3: mov     esi, ecx
0x6FD8B5: xor     ebp, ebp
0x6FD8B7: xor     edi, edi
0x6FD8B9: cmp     [esi+4Eh], bp
0x6FD8BD: jbe     short loc_6FD8E7
0x6FD8BF: push    ebx
0x6FD8C0: mov     eax, [esi+48h]
0x6FD8C3: mov     ebx, [eax+edi*4]
0x6FD8C6: cmp     ebx, ebp
0x6FD8C8: jz      short loc_6FD8DB
0x6FD8CA: mov     ecx, [ebx]
0x6FD8CC: push    ecx
0x6FD8CD: call    FormHeapFree
0x6FD8D2: push    ebx
0x6FD8D3: call    FormHeapFree
0x6FD8D8: add     esp, 8
0x6FD8DB: movzx   edx, word ptr [esi+4Eh]
0x6FD8DF: add     edi, 1
0x6FD8E2: cmp     edi, edx
0x6FD8E4: jb      short loc_6FD8C0
0x6FD8E6: pop     ebx
0x6FD8E7: xor     eax, eax
0x6FD8E9: cmp     [esi+4Eh], bp
0x6FD8ED: jbe     short loc_6FD902
0x6FD8EF: nop
0x6FD8F0: mov     edx, [esi+48h]
0x6FD8F3: movzx   ecx, ax
0x6FD8F6: add     eax, 1
0x6FD8F9: mov     [edx+ecx*4], ebp
0x6FD8FC: cmp     ax, [esi+4Eh]
0x6FD900: jb      short loc_6FD8F0
0x6FD902: pop     edi
0x6FD903: mov     [esi+50h], bp
0x6FD907: mov     [esi+4Eh], bp
0x6FD90B: pop     esi
0x6FD90C: pop     ebp
0x6FD90D: retn
