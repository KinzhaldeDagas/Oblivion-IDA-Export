0x88D1D0: push    esi
0x88D1D1: mov     esi, ecx
0x88D1D3: mov     eax, [esi+1Ch]
0x88D1D6: test    eax, eax
0x88D1D8: jbe     short loc_88D210
0x88D1DA: add     eax, 0FFFFFFFFh
0x88D1DD: mov     [esi+1Ch], eax
0x88D1E0: jnz     short loc_88D222
0x88D1E2: cmp     [esp+4+arg_0], 0
0x88D1E7: jz      short loc_88D1F2
0x88D1E9: push    0
0x88D1EB: call    sub_889F20
0x88D1F0: jmp     short loc_88D1F7
0x88D1F2: call    sub_889E20
0x88D1F7: mov     ecx, esi
0x88D1F9: call    sub_88AD90
0x88D1FE: mov     ecx, esi
0x88D200: call    sub_88A080
0x88D205: mov     ecx, esi
0x88D207: call    sub_88A120
0x88D20C: pop     esi
0x88D20D: retn    4
0x88D210: cmp     dword ptr [esi+2Ch], 0
0x88D214: jbe     short loc_88D222
0x88D216: cmp     [esp+4+arg_0], 0
0x88D21B: jnz     short loc_88D222
0x88D21D: call    sub_889E20
0x88D222: pop     esi
0x88D223: retn    4
