0x521D10: push    esi
0x521D11: mov     esi, ecx
0x521D13: mov     eax, [esi+4]
0x521D16: push    eax
0x521D17: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVTESModel@@@@6B@; const NiTArray<TESModel *>::`vftable'
0x521D1D: call    FormHeapFree
0x521D22: add     esp, 4
0x521D25: test    [esp+4+arg_0], 1
0x521D2A: jz      short loc_521D35
0x521D2C: push    esi
0x521D2D: call    FormHeapFree
0x521D32: add     esp, 4
0x521D35: mov     eax, esi
0x521D37: pop     esi
0x521D38: retn    4
