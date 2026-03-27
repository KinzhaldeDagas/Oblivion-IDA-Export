0x8033B0: test    [esp+arg_0], 1
0x8033B5: push    esi
0x8033B6: mov     esi, ecx
0x8033B8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVBSImageSpaceShader@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSImageSpaceShader *>::`vftable'
0x8033BE: jz      short loc_8033C9
0x8033C0: push    esi
0x8033C1: call    FormHeapFree
0x8033C6: add     esp, 4
0x8033C9: mov     eax, esi
0x8033CB: pop     esi
0x8033CC: retn    4
