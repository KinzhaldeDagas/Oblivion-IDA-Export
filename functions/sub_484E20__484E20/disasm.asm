0x484E20: mov     eax, [ecx]
0x484E22: test    eax, eax
0x484E24: jz      short locret_484E4A
0x484E26: push    esi
0x484E27: mov     esi, [eax]
0x484E29: test    esi, esi
0x484E2B: jz      short loc_484E49
0x484E2D: mov     ecx, esi
0x484E2F: call    ExtraDataList_GetPoison
0x484E34: test    eax, eax
0x484E36: jnz     short loc_484E49
0x484E38: mov     eax, [esp+4+arg_0]
0x484E3C: push    eax
0x484E3D: mov     ecx, esi
0x484E3F: call    sub_41EFD0
0x484E44: call    sub_57B230
0x484E49: pop     esi
0x484E4A: retn    4
