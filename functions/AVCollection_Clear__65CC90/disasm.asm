0x65CC90: push    esi
0x65CC91: mov     esi, ecx
0x65CC93: call    AVCollection_ClearArrayAndList
0x65CC98: fldz
0x65CC9A: mov     eax, [esi+8]
0x65CC9D: test    eax, eax
0x65CC9F: jz      short loc_65CCA4
0x65CCA1: fst     dword ptr [eax+4]
0x65CCA4: mov     esi, [esi+0Ch]
0x65CCA7: test    esi, esi
0x65CCA9: jz      short loc_65CCB0
0x65CCAB: fstp    dword ptr [esi+4]
0x65CCAE: pop     esi
0x65CCAF: retn
0x65CCB0: fstp    st
0x65CCB2: pop     esi
0x65CCB3: retn
