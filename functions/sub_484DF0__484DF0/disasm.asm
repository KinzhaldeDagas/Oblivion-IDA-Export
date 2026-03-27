0x484DF0: mov     eax, [ecx]
0x484DF2: push    edi
0x484DF3: xor     edi, edi
0x484DF5: test    eax, eax
0x484DF7: jz      short loc_484E15
0x484DF9: push    esi
0x484DFA: mov     esi, [eax]
0x484DFC: test    esi, esi
0x484DFE: jz      short loc_484E14
0x484E00: mov     ecx, esi
0x484E02: call    ExtraDataList_GetPoison
0x484E07: test    eax, eax
0x484E09: jz      short loc_484E14
0x484E0B: mov     ecx, esi
0x484E0D: pop     esi
0x484E0E: pop     edi
0x484E0F: jmp     ExtraDataList_GetPoison
0x484E14: pop     esi
0x484E15: mov     eax, edi
0x484E17: pop     edi
0x484E18: retn
