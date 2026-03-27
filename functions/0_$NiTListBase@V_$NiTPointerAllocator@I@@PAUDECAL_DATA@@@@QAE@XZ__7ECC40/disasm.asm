0x7ECC40: test    [esp+arg_0], 1
0x7ECC45: push    esi
0x7ECC46: mov     esi, ecx
0x7ECC48: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUDECAL_DATA@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,DECAL_DATA *>::`vftable'
0x7ECC4E: jz      short loc_7ECC59
0x7ECC50: push    esi
0x7ECC51: call    FormHeapFree
0x7ECC56: add     esp, 4
0x7ECC59: mov     eax, esi
0x7ECC5B: pop     esi
0x7ECC5C: retn    4
