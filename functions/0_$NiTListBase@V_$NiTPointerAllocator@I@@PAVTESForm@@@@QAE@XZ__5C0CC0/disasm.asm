0x5C0CC0: test    [esp+arg_0], 1
0x5C0CC5: push    esi
0x5C0CC6: mov     esi, ecx
0x5C0CC8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVTESForm@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,TESForm *>::`vftable'
0x5C0CCE: jz      short loc_5C0CD9
0x5C0CD0: push    esi
0x5C0CD1: call    FormHeapFree
0x5C0CD6: add     esp, 4
0x5C0CD9: mov     eax, esi
0x5C0CDB: pop     esi
0x5C0CDC: retn    4
