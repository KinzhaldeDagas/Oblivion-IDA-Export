0x619920: push    esi
0x619921: mov     esi, ecx
0x619923: mov     eax, [esi+6Ch]
0x619926: push    edi
0x619927: mov     edi, [esp+8+arg_0]
0x61992B: cmp     eax, edi
0x61992D: jz      loc_6199BE
0x619933: test    edi, edi
0x619935: jnz     loc_6199C6
0x61993B: cmp     eax, 4
0x61993E: jnz     short loc_619949
0x619940: call    sub_6163A0
0x619945: test    al, al
0x619947: jnz     short loc_6199C1
0x619949: cmp     dword ptr [esi+6Ch], 4
0x61994D: jnz     short loc_61995B
0x61994F: fld     dword ptr ds:0A30634h
0x619955: fstp    dword ptr [esi+0CCh]
0x61995B: mov     eax, [esi+6Ch]
0x61995E: cmp     eax, 6
0x619961: jnz     short loc_61996D
0x619963: mov     dword ptr [esi+12Ch], 0
0x61996D: cmp     eax, 4
0x619970: jnz     short loc_61999B
0x619972: fld     dword ptr ds:0B36F70h
0x619978: fstp    [esp+8+arg_0]
0x61997C: fld     dword ptr [esi+44h]
0x61997F: fstp    dword ptr [esi+0ECh]
0x619985: fld     [esp+8+arg_0]
0x619989: fstp    dword ptr [esi+0F0h]
0x61998F: fld     dword ptr ds:0A30634h
0x619995: fstp    dword ptr [esi+0F4h]
0x61999B: mov     eax, [esi+6Ch]
0x61999E: cmp     eax, 4
0x6199A1: jz      short loc_6199BE
0x6199A3: cmp     eax, 7
0x6199A6: jz      short loc_6199BE
0x6199A8: cmp     eax, 9
0x6199AB: jz      short loc_6199BE
0x6199AD: cmp     eax, 8
0x6199B0: jz      short loc_6199BE
0x6199B2: cmp     eax, 0Ch
0x6199B5: jz      short loc_6199BE
0x6199B7: mov     byte ptr [esi+191h], 1
0x6199BE: mov     [esi+6Ch], edi
0x6199C1: pop     edi
0x6199C2: pop     esi
0x6199C3: retn    4
0x6199C6: cmp     edi, 4
0x6199C9: jnz     loc_619949
0x6199CF: fld     dword ptr ds:0A30634h
0x6199D5: fstp    dword ptr [esi+0CCh]
0x6199DB: call    sub_6141B0
0x6199E0: jmp     loc_619955
