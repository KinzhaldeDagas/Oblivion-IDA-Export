0x4D97D0: push    esi
0x4D97D1: mov     esi, ecx
0x4D97D3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectREFR@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectREFR *,bool>::`vftable'
0x4D97D9: call    NiTMap_Clear
0x4D97DE: mov     eax, [esi+8]
0x4D97E1: push    eax
0x4D97E2: call    FormHeapFree
0x4D97E7: add     esp, 4
0x4D97EA: test    [esp+4+arg_0], 1
0x4D97EF: jz      short loc_4D97FA
0x4D97F1: push    esi
0x4D97F2: call    FormHeapFree
0x4D97F7: add     esp, 4
0x4D97FA: mov     eax, esi
0x4D97FC: pop     esi
0x4D97FD: retn    4
