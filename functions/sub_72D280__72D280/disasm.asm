0x72D280: push    esi
0x72D281: mov     esi, ecx
0x72D283: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IM@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,float>::`vftable'
0x72D289: call    NiTMap_Clear
0x72D28E: mov     eax, [esi+8]
0x72D291: push    eax
0x72D292: call    FormHeapFree
0x72D297: add     esp, 4
0x72D29A: test    [esp+4+arg_0], 1
0x72D29F: jz      short loc_72D2AA
0x72D2A1: push    esi
0x72D2A2: call    FormHeapFree
0x72D2A7: add     esp, 4
0x72D2AA: mov     eax, esi
0x72D2AC: pop     esi
0x72D2AD: retn    4
