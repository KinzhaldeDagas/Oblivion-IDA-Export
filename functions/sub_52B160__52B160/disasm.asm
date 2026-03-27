0x52B160: push    esi
0x52B161: push    edi
0x52B162: mov     edi, ecx
0x52B164: lea     esi, [edi+4]
0x52B167: test    esi, esi
0x52B169: jz      short loc_52B185
0x52B16B: push    ebx
0x52B16C: mov     ebx, [esp+0Ch+arg_0]
0x52B170: mov     ecx, [esi]
0x52B172: test    ecx, ecx
0x52B174: jz      short loc_52B17D
0x52B176: push    edi
0x52B177: push    ebx
0x52B178: call    sub_52B0C0
0x52B17D: mov     esi, [esi+4]
0x52B180: test    esi, esi
0x52B182: jnz     short loc_52B170
0x52B184: pop     ebx
0x52B185: pop     edi
0x52B186: pop     esi
0x52B187: retn    4
