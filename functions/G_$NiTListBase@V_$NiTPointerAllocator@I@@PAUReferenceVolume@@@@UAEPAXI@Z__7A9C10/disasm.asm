0x7A9C10: test    [esp+arg_0], 1
0x7A9C15: push    esi
0x7A9C16: mov     esi, ecx
0x7A9C18: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUReferenceVolume@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,ReferenceVolume *>::`vftable'
0x7A9C1E: jz      short loc_7A9C29
0x7A9C20: push    esi
0x7A9C21: call    FormHeapFree
0x7A9C26: add     esp, 4
0x7A9C29: mov     eax, esi
0x7A9C2B: pop     esi
0x7A9C2C: retn    4
