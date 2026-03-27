0x521D40: push    esi
0x521D41: mov     esi, ecx
0x521D43: mov     eax, [esi+4]
0x521D46: push    eax
0x521D47: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVTESTexture@@@@6B@; const NiTArray<TESTexture *>::`vftable'
0x521D4D: call    FormHeapFree
0x521D52: add     esp, 4
0x521D55: test    [esp+4+arg_0], 1
0x521D5A: jz      short loc_521D65
0x521D5C: push    esi
0x521D5D: call    FormHeapFree
0x521D62: add     esp, 4
0x521D65: mov     eax, esi
0x521D67: pop     esi
0x521D68: retn    4
