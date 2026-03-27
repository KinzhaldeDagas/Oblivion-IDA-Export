0x8C5460: push    esi
0x8C5461: mov     esi, ecx
0x8C5463: mov     eax, [esi+4]
0x8C5466: push    eax
0x8C5467: mov     dword ptr [esi], offset ??_7?$NiTArray@G@@6B@; const NiTArray<ushort>::`vftable'
0x8C546D: call    FormHeapFree
0x8C5472: add     esp, 4
0x8C5475: test    [esp+4+arg_0], 1
0x8C547A: jz      short loc_8C5485
0x8C547C: push    esi
0x8C547D: call    FormHeapFree
0x8C5482: add     esp, 4
0x8C5485: mov     eax, esi
0x8C5487: pop     esi
0x8C5488: retn    4
