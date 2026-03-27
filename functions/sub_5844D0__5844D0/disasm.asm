0x5844D0: push    esi
0x5844D1: mov     esi, ecx
0x5844D3: mov     eax, [esi+4]
0x5844D6: push    eax
0x5844D7: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVTile@@@@6B@; const NiTArray<Tile *>::`vftable'
0x5844DD: call    FormHeapFree
0x5844E2: add     esp, 4
0x5844E5: test    [esp+4+arg_0], 1
0x5844EA: jz      short loc_5844F5
0x5844EC: push    esi
0x5844ED: call    FormHeapFree
0x5844F2: add     esp, 4
0x5844F5: mov     eax, esi
0x5844F7: pop     esi
0x5844F8: retn    4
