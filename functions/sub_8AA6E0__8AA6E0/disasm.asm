0x8AA6E0: push    esi
0x8AA6E1: mov     esi, ecx
0x8AA6E3: mov     eax, [esi+4]
0x8AA6E6: push    eax
0x8AA6E7: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@UBLENDKEY@@@@6B@; const NiTLargeArray<BLENDKEY>::`vftable'
0x8AA6ED: call    FormHeapFree
0x8AA6F2: add     esp, 4
0x8AA6F5: test    [esp+4+arg_0], 1
0x8AA6FA: jz      short loc_8AA705
0x8AA6FC: push    esi
0x8AA6FD: call    FormHeapFree
0x8AA702: add     esp, 4
0x8AA705: mov     eax, esi
0x8AA707: pop     esi
0x8AA708: retn    4
