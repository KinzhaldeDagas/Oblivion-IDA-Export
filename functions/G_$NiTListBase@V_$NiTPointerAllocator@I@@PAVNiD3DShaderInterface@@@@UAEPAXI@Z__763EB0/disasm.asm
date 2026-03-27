0x763EB0: test    [esp+arg_0], 1
0x763EB5: push    esi
0x763EB6: mov     esi, ecx
0x763EB8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiD3DShaderInterface@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiD3DShaderInterface *>::`vftable'
0x763EBE: jz      short loc_763EC9
0x763EC0: push    esi
0x763EC1: call    FormHeapFree
0x763EC6: add     esp, 4
0x763EC9: mov     eax, esi
0x763ECB: pop     esi
0x763ECC: retn    4
