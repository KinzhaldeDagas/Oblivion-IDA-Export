0x65CCC0: push    esi
0x65CCC1: push    edi
0x65CCC2: mov     edi, ecx
0x65CCC4: call    AVCollection_ClearArrayAndList
0x65CCC9: lea     esi, [edi+8]
0x65CCCC: test    esi, esi
0x65CCCE: jz      short loc_65CCE5
0x65CCD0: mov     eax, [esi]
0x65CCD2: test    eax, eax
0x65CCD4: jz      short loc_65CCE5
0x65CCD6: push    eax
0x65CCD7: call    FormHeapFree
0x65CCDC: add     esp, 4
0x65CCDF: mov     dword ptr [esi], 0
0x65CCE5: lea     esi, [edi+0Ch]
0x65CCE8: test    esi, esi
0x65CCEA: jz      short loc_65CD01
0x65CCEC: mov     eax, [esi]
0x65CCEE: test    eax, eax
0x65CCF0: jz      short loc_65CD01
0x65CCF2: push    eax
0x65CCF3: call    FormHeapFree
0x65CCF8: add     esp, 4
0x65CCFB: mov     dword ptr [esi], 0
0x65CD01: pop     edi
0x65CD02: pop     esi
0x65CD03: retn
