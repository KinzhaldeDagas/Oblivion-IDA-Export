0x77EF70: push    esi
0x77EF71: mov     esi, ecx
0x77EF73: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAD@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,char *>::`vftable'
0x77EF79: call    NiTPointerList__FreeAllNodes
0x77EF7E: test    [esp+4+arg_0], 1
0x77EF83: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAD@@6B@; const NiTListBase<NiTPointerAllocator<uint>,char *>::`vftable'
0x77EF89: jz      short loc_77EF94
0x77EF8B: push    esi
0x77EF8C: call    FormHeapFree
0x77EF91: add     esp, 4
0x77EF94: mov     eax, esi
0x77EF96: pop     esi
0x77EF97: retn    4
