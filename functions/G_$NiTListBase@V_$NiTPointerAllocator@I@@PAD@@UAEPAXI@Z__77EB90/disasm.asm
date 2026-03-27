0x77EB90: test    [esp+arg_0], 1
0x77EB95: push    esi
0x77EB96: mov     esi, ecx
0x77EB98: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAD@@6B@; const NiTListBase<NiTPointerAllocator<uint>,char *>::`vftable'
0x77EB9E: jz      short loc_77EBA9
0x77EBA0: push    esi
0x77EBA1: call    FormHeapFree
0x77EBA6: add     esp, 4
0x77EBA9: mov     eax, esi
0x77EBAB: pop     esi
0x77EBAC: retn    4
