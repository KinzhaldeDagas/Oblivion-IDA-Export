0x95F900: push    ebx
0x95F901: push    esi
0x95F902: push    edi
0x95F903: mov     esi, ecx
0x95F905: xor     ebx, ebx
0x95F907: xor     edi, edi
0x95F909: cmp     [esi+0Eh], bx
0x95F90D: jbe     short loc_95F92E
0x95F90F: nop
0x95F910: mov     eax, [esi+8]
0x95F913: mov     ecx, [eax+edi*4]
0x95F916: cmp     ecx, ebx
0x95F918: jz      short loc_95F923
0x95F91A: mov     edx, [ecx]
0x95F91C: mov     eax, [edx+8]
0x95F91F: push    1
0x95F921: call    eax
0x95F923: movzx   ecx, word ptr [esi+0Eh]
0x95F927: add     edi, 1
0x95F92A: cmp     edi, ecx
0x95F92C: jb      short loc_95F910
0x95F92E: xor     eax, eax
0x95F930: cmp     [esi+0Eh], bx
0x95F934: jbe     short loc_95F948
0x95F936: mov     ecx, [esi+8]
0x95F939: movzx   edx, ax
0x95F93C: add     eax, 1
0x95F93F: mov     [ecx+edx*4], ebx
0x95F942: cmp     ax, [esi+0Eh]
0x95F946: jb      short loc_95F936
0x95F948: pop     edi
0x95F949: mov     [esi+10h], bx
0x95F94D: mov     [esi+0Eh], bx
0x95F951: pop     esi
0x95F952: pop     ebx
0x95F953: retn
