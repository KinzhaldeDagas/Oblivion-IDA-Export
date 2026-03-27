0x4A62A0: push    esi
0x4A62A1: mov     esi, ecx
0x4A62A3: mov     dword ptr [esi], offset ??_7TESRegionGrassObjectList@@6B@; const TESRegionGrassObjectList::`vftable'
0x4A62A9: call    sub_4A6010
0x4A62AE: test    byte ptr [esp+4+arg_0], 1
0x4A62B3: jz      short loc_4A62BE
0x4A62B5: push    esi
0x4A62B6: call    FormHeapFree
0x4A62BB: add     esp, 4
0x4A62BE: mov     eax, esi
0x4A62C0: pop     esi
0x4A62C1: retn    4
