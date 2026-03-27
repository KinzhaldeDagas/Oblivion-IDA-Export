0x95F7E0: push    esi
0x95F7E1: mov     esi, ecx
0x95F7E3: mov     eax, [esi+4]
0x95F7E6: push    eax
0x95F7E7: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVNiBoundingVolume@@@@6B@; const NiTArray<NiBoundingVolume *>::`vftable'
0x95F7ED: call    FormHeapFree
0x95F7F2: add     esp, 4
0x95F7F5: test    [esp+4+arg_0], 1
0x95F7FA: jz      short loc_95F805
0x95F7FC: push    esi
0x95F7FD: call    FormHeapFree
0x95F802: add     esp, 4
0x95F805: mov     eax, esi
0x95F807: pop     esi
0x95F808: retn    4
