0x7332C0: test    [esp+arg_0], 1
0x7332C5: push    esi
0x7332C6: mov     esi, ecx
0x7332C8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7332CE: jz      short loc_7332D9
0x7332D0: push    esi
0x7332D1: call    FormHeapFree
0x7332D6: add     esp, 4
0x7332D9: mov     eax, esi
0x7332DB: pop     esi
0x7332DC: retn    4
