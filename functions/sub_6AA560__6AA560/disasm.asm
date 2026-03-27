0x6AA560: push    esi
0x6AA561: mov     esi, ecx
0x6AA563: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HV?$NiPointer@VNiAVObject@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,NiPointer<NiAVObject>>::`vftable'
0x6AA569: call    NiTMap_Clear
0x6AA56E: mov     eax, [esi+8]
0x6AA571: push    eax
0x6AA572: call    FormHeapFree
0x6AA577: add     esp, 4
0x6AA57A: test    [esp+4+arg_0], 1
0x6AA57F: jz      short loc_6AA58A
0x6AA581: push    esi
0x6AA582: call    FormHeapFree
0x6AA587: add     esp, 4
0x6AA58A: mov     eax, esi
0x6AA58C: pop     esi
0x6AA58D: retn    4
