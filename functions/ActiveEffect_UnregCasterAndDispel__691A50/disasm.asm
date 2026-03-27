0x691A50: mov     eax, [esp+arg_0]
0x691A54: push    ebx
0x691A55: push    esi
0x691A56: push    eax
0x691A57: mov     esi, ecx
0x691A59: call    ActiveEffect_Base_UnregCaster
0x691A5E: mov     bl, al
0x691A60: test    bl, bl
0x691A62: jz      short loc_691A6D
0x691A64: push    1
0x691A66: mov     ecx, esi
0x691A68: call    ActiveEffect_Base_Remove
0x691A6D: pop     esi
0x691A6E: mov     al, bl
0x691A70: pop     ebx
0x691A71: retn    4
