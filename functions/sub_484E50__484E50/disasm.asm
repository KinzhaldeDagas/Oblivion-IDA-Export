0x484E50: mov     eax, [ecx]
0x484E52: test    eax, eax
0x484E54: jz      short locret_484E76
0x484E56: push    esi
0x484E57: mov     esi, [eax]
0x484E59: test    esi, esi
0x484E5B: jz      short loc_484E75
0x484E5D: mov     ecx, esi
0x484E5F: call    ExtraDataList_GetPoison
0x484E64: test    eax, eax
0x484E66: jz      short loc_484E75
0x484E68: mov     ecx, esi
0x484E6A: call    sub_41F660
0x484E6F: pop     esi
0x484E70: jmp     sub_57B230
0x484E75: pop     esi
0x484E76: retn
