0x521A10: push    esi; CORRECTION: chooses inline FaceGen delta by GetAViBase(0x45), NOT sex. Vtable 0xA53DD4+0x128 -> TESNPC_GetAViBase 0x5232D0. Zero vampirism selects NPC+0x108, nonzero selects +0x168. Both are four 0x18-byte matrices. Earlier sex-specific naming was wrong; sex bit at NPC+0x28 is separate.
0x521A11: mov     esi, ecx
0x521A13: mov     eax, [esi]
0x521A15: mov     edx, [eax+128h]
0x521A1B: push    45h ; 'E'
0x521A1D: call    edx
0x521A1F: test    eax, eax
0x521A21: lea     eax, [esi+168h]
0x521A27: jnz     short loc_521A2F
0x521A29: lea     eax, [esi+108h]
0x521A2F: pop     esi
0x521A30: retn
