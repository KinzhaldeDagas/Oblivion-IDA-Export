0x763F00: push    esi
0x763F01: mov     esi, ecx
0x763F03: mov     eax, [esi+4]
0x763F06: push    eax
0x763F07: mov     dword ptr [esi], offset ??_7?$NiTArray@PAX@@6B@; const NiTArray<void *>::`vftable'
0x763F0D: call    FormHeapFree
0x763F12: add     esp, 4
0x763F15: test    [esp+4+arg_0], 1
0x763F1A: jz      short loc_763F25
0x763F1C: push    esi
0x763F1D: call    FormHeapFree
0x763F22: add     esp, 4
0x763F25: mov     eax, esi
0x763F27: pop     esi
0x763F28: retn    4
