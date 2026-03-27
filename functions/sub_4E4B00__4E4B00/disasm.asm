0x4E4B00: push    esi
0x4E4B01: mov     esi, ecx
0x4E4B03: mov     eax, [esi+4]
0x4E4B06: push    eax
0x4E4B07: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVTESPathGridPoint@@@@6B@; const NiTArray<TESPathGridPoint *>::`vftable'
0x4E4B0D: call    FormHeapFree
0x4E4B12: add     esp, 4
0x4E4B15: test    [esp+4+arg_0], 1
0x4E4B1A: jz      short loc_4E4B25
0x4E4B1C: push    esi
0x4E4B1D: call    FormHeapFree
0x4E4B22: add     esp, 4
0x4E4B25: mov     eax, esi
0x4E4B27: pop     esi
0x4E4B28: retn    4
