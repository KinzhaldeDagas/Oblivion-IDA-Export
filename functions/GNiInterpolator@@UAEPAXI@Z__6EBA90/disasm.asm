0x6EBA90: push    esi
0x6EBA91: mov     esi, ecx
0x6EBA93: mov     dword ptr [esi], offset ??_7NiInterpolator@@6B@; const NiInterpolator::`vftable'
0x6EBA99: call    NiRefObject_destr
0x6EBA9E: test    byte ptr [esp+4+arg_0], 1
0x6EBAA3: jz      short loc_6EBAAE
0x6EBAA5: push    esi
0x6EBAA6: call    FormHeapFree
0x6EBAAB: add     esp, 4
0x6EBAAE: mov     eax, esi
0x6EBAB0: pop     esi
0x6EBAB1: retn    4
