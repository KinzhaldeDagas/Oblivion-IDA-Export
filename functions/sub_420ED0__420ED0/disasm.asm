0x420ED0: push    esi
0x420ED1: push    4Eh ; 'N'; a2
0x420ED3: xor     esi, esi
0x420ED5: call    BaseExtraList_GetExtraData
0x420EDA: test    eax, eax
0x420EDC: jz      short loc_420EE6
0x420EDE: pop     esi
0x420EDF: mov     ecx, eax
0x420EE1: jmp     loc_42AAE0
0x420EE6: mov     eax, esi
0x420EE8: pop     esi
0x420EE9: retn    4
