0x4845A0: push    edi
0x4845A1: mov     edi, [ecx]
0x4845A3: test    edi, edi
0x4845A5: jz      short loc_4845CD
0x4845A7: push    esi
0x4845A8: mov     esi, [edi]
0x4845AA: test    esi, esi
0x4845AC: jz      short loc_4845CC
0x4845AE: mov     edi, [edi+4]
0x4845B1: push    1
0x4845B3: mov     ecx, esi
0x4845B5: call    BaseExtraList_Clear
0x4845BA: test    esi, esi
0x4845BC: jz      short loc_4845C8
0x4845BE: mov     eax, [esi]
0x4845C0: mov     edx, [eax]
0x4845C2: push    1
0x4845C4: mov     ecx, esi
0x4845C6: call    edx
0x4845C8: test    edi, edi
0x4845CA: jnz     short loc_4845A8
0x4845CC: pop     esi
0x4845CD: pop     edi
0x4845CE: retn
