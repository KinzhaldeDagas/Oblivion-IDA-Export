0x7762B0: test    [esp+arg_0], 1
0x7762B5: push    esi
0x7762B6: mov     esi, ecx
0x7762B8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiLight@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiLight *>::`vftable'
0x7762BE: jz      short loc_7762C9
0x7762C0: push    esi
0x7762C1: call    FormHeapFree
0x7762C6: add     esp, 4
0x7762C9: mov     eax, esi
0x7762CB: pop     esi
0x7762CC: retn    4
