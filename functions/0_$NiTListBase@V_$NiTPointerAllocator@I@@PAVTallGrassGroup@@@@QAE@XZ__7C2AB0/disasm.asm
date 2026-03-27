0x7C2AB0: test    [esp+arg_0], 1
0x7C2AB5: push    esi
0x7C2AB6: mov     esi, ecx
0x7C2AB8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVTallGrassGroup@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,TallGrassGroup *>::`vftable'
0x7C2ABE: jz      short loc_7C2AC9
0x7C2AC0: push    esi
0x7C2AC1: call    FormHeapFree
0x7C2AC6: add     esp, 4
0x7C2AC9: mov     eax, esi
0x7C2ACB: pop     esi
0x7C2ACC: retn    4
