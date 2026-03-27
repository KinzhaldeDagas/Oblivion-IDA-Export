0x763F30: push    esi
0x763F31: mov     esi, ecx
0x763F33: mov     eax, [esi+4]
0x763F36: push    eax
0x763F37: mov     dword ptr [esi], offset ??_7?$NiTArray@P6A_NPAX@Z@@6B@; const NiTArray<bool (*)(void *)>::`vftable'
0x763F3D: call    FormHeapFree
0x763F42: add     esp, 4
0x763F45: test    [esp+4+arg_0], 1
0x763F4A: jz      short loc_763F55
0x763F4C: push    esi
0x763F4D: call    FormHeapFree
0x763F52: add     esp, 4
0x763F55: mov     eax, esi
0x763F57: pop     esi
0x763F58: retn    4
