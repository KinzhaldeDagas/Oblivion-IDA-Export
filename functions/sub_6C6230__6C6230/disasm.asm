0x6C6230: push    esi
0x6C6231: mov     esi, ecx
0x6C6233: mov     eax, [esi+8]
0x6C6236: push    eax
0x6C6237: mov     dword ptr [esi], offset ??_7NiStringPalette@@6B@; const NiStringPalette::`vftable'
0x6C623D: call    FormHeapFree
0x6C6242: add     esp, 4
0x6C6245: mov     ecx, esi
0x6C6247: call    NiRefObject_destr
0x6C624C: test    [esp+4+arg_0], 1
0x6C6251: jz      short loc_6C625C
0x6C6253: push    esi
0x6C6254: call    FormHeapFree
0x6C6259: add     esp, 4
0x6C625C: mov     eax, esi
0x6C625E: pop     esi
0x6C625F: retn    4
