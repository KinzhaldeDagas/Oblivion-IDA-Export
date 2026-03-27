0x7ECC20: test    [esp+arg_0], 1
0x7ECC25: push    esi
0x7ECC26: mov     esi, ecx
0x7ECC28: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVShadowSceneLight@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,ShadowSceneLight *>::`vftable'
0x7ECC2E: jz      short loc_7ECC39
0x7ECC30: push    esi
0x7ECC31: call    FormHeapFree
0x7ECC36: add     esp, 4
0x7ECC39: mov     eax, esi
0x7ECC3B: pop     esi
0x7ECC3C: retn    4
