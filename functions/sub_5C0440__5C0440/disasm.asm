0x5C0440: push    esi
0x5C0441: mov     esi, ecx
0x5C0443: cmp     dword ptr [esi+28h], 2
0x5C0447: push    edi
0x5C0448: mov     edi, [esp+8+arg_0]
0x5C044C: jnz     short loc_5C046B
0x5C044E: mov     ecx, [esi+94h]
0x5C0454: push    0FA7h
0x5C0459: call    Tile_GetFloat
0x5C045E: fcomp   qword ptr ds:0A3DDD8h
0x5C0464: fnstsw  ax
0x5C0466: test    ah, 44h
0x5C0469: jp      short loc_5C047A
0x5C046B: cmp     edi, 1Ah
0x5C046E: jz      short loc_5C047F
0x5C0470: cmp     edi, 9
0x5C0473: jz      short loc_5C047A
0x5C0475: cmp     edi, 8
0x5C0478: jnz     short def_5C0486; jumptable 005C0486 default case, cases 2-7,10-23,25
0x5C047A: cmp     edi, 1Ah; switch 27 cases
0x5C047D: ja      short def_5C0486; jumptable 005C0486 default case, cases 2-7,10-23,25
0x5C047F: movzx   eax, ds:byte_5C04D4[edi]
0x5C0486: jmp     ds:jpt_5C0486[eax*4]; switch jump
0x5C048D: mov     ecx, esi; jumptable 005C0486 case 9
0x5C048F: call    sub_5BEA10
0x5C0494: pop     edi
0x5C0495: pop     esi
0x5C0496: retn    8
0x5C0499: mov     ecx, esi; jumptable 005C0486 case 24
0x5C049B: call    sub_5BEA40
0x5C04A0: pop     edi
0x5C04A1: pop     esi
0x5C04A2: retn    8
0x5C04A5: mov     ecx, esi; jumptable 005C0486 case 8
0x5C04A7: call    sub_5BF470
0x5C04AC: pop     edi
0x5C04AD: pop     esi
0x5C04AE: retn    8
0x5C04B1: mov     ecx, esi; jumptable 005C0486 cases 0,1,26
0x5C04B3: call    sub_5BFB90
0x5C04B8: pop     edi; jumptable 005C0486 default case, cases 2-7,10-23,25
0x5C04B9: pop     esi
0x5C04BA: retn    8
