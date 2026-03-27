0x6B31D0: push    esi
0x6B31D1: mov     esi, ecx
0x6B31D3: mov     eax, [esi+4]
0x6B31D6: test    eax, eax
0x6B31D8: jz      short loc_6B31EA
0x6B31DA: push    eax
0x6B31DB: call    FormHeapFree
0x6B31E0: add     esp, 4
0x6B31E3: mov     dword ptr [esi+4], 0
0x6B31EA: mov     esi, [esi+8]
0x6B31ED: test    esi, esi
0x6B31EF: jz      short loc_6B31FA
0x6B31F1: push    esi
0x6B31F2: call    FormHeapFree
0x6B31F7: add     esp, 4
0x6B31FA: pop     esi
0x6B31FB: retn
