0x4EF380: push    esi
0x4EF381: mov     esi, ecx
0x4EF383: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@I_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,bool>::`vftable'
0x4EF389: call    NiTMap_Clear
0x4EF38E: mov     eax, [esi+8]
0x4EF391: push    eax
0x4EF392: call    FormHeapFree
0x4EF397: add     esp, 4
0x4EF39A: test    [esp+4+arg_0], 1
0x4EF39F: jz      short loc_4EF3AA
0x4EF3A1: push    esi
0x4EF3A2: call    FormHeapFree
0x4EF3A7: add     esp, 4
0x4EF3AA: mov     eax, esi
0x4EF3AC: pop     esi
0x4EF3AD: retn    4
