0x6EB960: test    [esp+arg_0], 1
0x6EB965: push    esi
0x6EB966: mov     esi, ecx
0x6EB968: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@I@@6B@; const NiTListBase<NiTPointerAllocator<uint>,uint>::`vftable'
0x6EB96E: jz      short loc_6EB979
0x6EB970: push    esi
0x6EB971: call    FormHeapFree
0x6EB976: add     esp, 4
0x6EB979: mov     eax, esi
0x6EB97B: pop     esi
0x6EB97C: retn    4
