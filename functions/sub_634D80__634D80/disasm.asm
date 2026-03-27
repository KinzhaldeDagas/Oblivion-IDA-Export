0x634D80: push    esi
0x634D81: push    edi
0x634D82: lea     esi, [ecx+3Ch]
0x634D85: cmp     dword ptr [esi+4], 0
0x634D89: jnz     short loc_634D90
0x634D8B: cmp     dword ptr [esi], 0
0x634D8E: jz      short loc_634DA9
0x634D90: mov     edi, [esi]
0x634D92: test    edi, edi
0x634D94: jz      short loc_634D9F
0x634D96: push    edi
0x634D97: call    FormHeapFree
0x634D9C: add     esp, 4
0x634D9F: push    edi
0x634DA0: mov     ecx, esi
0x634DA2: call    BSSimpleList_Remove
0x634DA7: jmp     short loc_634D85
0x634DA9: pop     edi
0x634DAA: pop     esi
0x634DAB: retn
