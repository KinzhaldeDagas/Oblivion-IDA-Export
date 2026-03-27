0x452BF0: push    esi
0x452BF1: mov     esi, ecx
0x452BF3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAX@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,void *>::`vftable'
0x452BF9: call    NiTMap_Clear
0x452BFE: mov     eax, [esi+8]
0x452C01: push    eax
0x452C02: call    FormHeapFree
0x452C07: add     esp, 4
0x452C0A: test    [esp+4+arg_0], 1
0x452C0F: jz      short loc_452C1A
0x452C11: push    esi
0x452C12: call    FormHeapFree
0x452C17: add     esp, 4
0x452C1A: mov     eax, esi
0x452C1C: pop     esi
0x452C1D: retn    4
