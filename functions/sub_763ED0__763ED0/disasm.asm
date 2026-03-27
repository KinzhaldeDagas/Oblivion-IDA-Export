0x763ED0: push    esi
0x763ED1: mov     esi, ecx
0x763ED3: mov     eax, [esi+4]
0x763ED6: push    eax
0x763ED7: mov     dword ptr [esi], offset ??_7?$NiTArray@P6A_N_NPAX@Z@@6B@; const NiTArray<bool (*)(bool,void *)>::`vftable'
0x763EDD: call    FormHeapFree
0x763EE2: add     esp, 4
0x763EE5: test    [esp+4+arg_0], 1
0x763EEA: jz      short loc_763EF5
0x763EEC: push    esi
0x763EED: call    FormHeapFree
0x763EF2: add     esp, 4
0x763EF5: mov     eax, esi
0x763EF7: pop     esi
0x763EF8: retn    4
