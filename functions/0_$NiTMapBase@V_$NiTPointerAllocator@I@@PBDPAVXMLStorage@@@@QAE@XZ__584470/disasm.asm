0x584470: push    esi
0x584471: mov     esi, ecx
0x584473: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVXMLStorage@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,XMLStorage *>::`vftable'
0x584479: call    NiTMap_Clear
0x58447E: mov     eax, [esi+8]
0x584481: push    eax
0x584482: call    FormHeapFree
0x584487: add     esp, 4
0x58448A: test    [esp+4+arg_0], 1
0x58448F: jz      short loc_58449A
0x584491: push    esi
0x584492: call    FormHeapFree
0x584497: add     esp, 4
0x58449A: mov     eax, esi
0x58449C: pop     esi
0x58449D: retn    4
