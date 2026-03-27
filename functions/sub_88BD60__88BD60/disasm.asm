0x88BD60: push    esi
0x88BD61: mov     esi, ecx
0x88BD63: mov     eax, [esi+20h]
0x88BD66: test    eax, eax
0x88BD68: jbe     short loc_88BD97
0x88BD6A: add     eax, 0FFFFFFFFh
0x88BD6D: mov     [esi+20h], eax
0x88BD70: jnz     short loc_88BDA9
0x88BD72: call    sub_88A440
0x88BD77: mov     ecx, esi
0x88BD79: call    sub_88A3A0
0x88BD7E: mov     ecx, esi
0x88BD80: call    sub_88A310
0x88BD85: cmp     [esp+4+arg_0], 0
0x88BD8A: mov     ecx, esi
0x88BD8C: jz      short loc_88BDA4
0x88BD8E: call    sub_88A280
0x88BD93: pop     esi
0x88BD94: retn    4
0x88BD97: cmp     dword ptr [esi+4Ch], 0
0x88BD9B: jbe     short loc_88BDA9
0x88BD9D: cmp     [esp+4+arg_0], 0
0x88BDA2: jnz     short loc_88BDA9
0x88BDA4: call    sub_88A1F0
0x88BDA9: pop     esi
0x88BDAA: retn    4
