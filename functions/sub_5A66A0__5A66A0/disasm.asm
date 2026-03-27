0x5A66A0: push    ebx
0x5A66A1: push    esi
0x5A66A2: mov     ebx, ecx
0x5A66A4: xor     esi, esi
0x5A66A6: cmp     [ebx+84h], esi
0x5A66AC: jbe     short loc_5A66D1
0x5A66AE: push    edi
0x5A66AF: lea     edi, [ebx+78h]
0x5A66B2: mov     eax, [edi]
0x5A66B4: mov     edx, [eax+4]
0x5A66B7: push    esi
0x5A66B8: mov     ecx, edi
0x5A66BA: call    edx
0x5A66BC: push    eax
0x5A66BD: call    FormHeapFree
0x5A66C2: add     esi, 1
0x5A66C5: add     esp, 4
0x5A66C8: cmp     esi, [ebx+84h]
0x5A66CE: jb      short loc_5A66B2
0x5A66D0: pop     edi
0x5A66D1: pop     esi
0x5A66D2: pop     ebx
0x5A66D3: retn
