0x6C3FD0: push    esi
0x6C3FD1: mov     esi, ecx
0x6C3FD3: mov     dword ptr [esi], offset ??_7NiAVObjectPalette@@6B@; const NiAVObjectPalette::`vftable'
0x6C3FD9: call    NiRefObject_destr
0x6C3FDE: test    [esp+4+arg_0], 1
0x6C3FE3: jz      short loc_6C3FEE
0x6C3FE5: push    esi
0x6C3FE6: call    FormHeapFree
0x6C3FEB: add     esp, 4
0x6C3FEE: mov     eax, esi
0x6C3FF0: pop     esi
0x6C3FF1: retn    4
