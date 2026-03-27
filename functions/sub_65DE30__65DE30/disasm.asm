0x65DE30: push    esi
0x65DE31: mov     esi, ecx
0x65DE33: mov     eax, [esi+4]
0x65DE36: push    eax
0x65DE37: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVTESRegion@@@@6B@; const NiTArray<TESRegion *>::`vftable'
0x65DE3D: call    FormHeapFree
0x65DE42: add     esp, 4
0x65DE45: test    [esp+4+arg_0], 1
0x65DE4A: jz      short loc_65DE55
0x65DE4C: push    esi
0x65DE4D: call    FormHeapFree
0x65DE52: add     esp, 4
0x65DE55: mov     eax, esi
0x65DE57: pop     esi
0x65DE58: retn    4
