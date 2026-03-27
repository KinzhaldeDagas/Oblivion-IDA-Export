0x4B79C0: push    esi
0x4B79C1: mov     esi, ecx
0x4B79C3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@H_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,bool>::`vftable'
0x4B79C9: call    NiTMap_Clear
0x4B79CE: mov     eax, [esi+8]
0x4B79D1: push    eax
0x4B79D2: call    FormHeapFree
0x4B79D7: add     esp, 4
0x4B79DA: test    [esp+4+arg_0], 1
0x4B79DF: jz      short loc_4B79EA
0x4B79E1: push    esi
0x4B79E2: call    FormHeapFree
0x4B79E7: add     esp, 4
0x4B79EA: mov     eax, esi
0x4B79EC: pop     esi
0x4B79ED: retn    4
