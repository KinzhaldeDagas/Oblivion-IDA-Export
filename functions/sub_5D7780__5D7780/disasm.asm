0x5D7780: sub     esp, 8
0x5D7783: push    esi; a3
0x5D7784: push    edi; a3
0x5D7785: mov     edi, [esp+10h+arg_4]
0x5D7789: test    edi, edi
0x5D778B: mov     esi, ecx
0x5D778D: jz      loc_5D7900
0x5D7793: mov     eax, [esi+58h]
0x5D7796: cmp     dword ptr [eax+4], 0
0x5D779A: jnz     short loc_5D77A5
0x5D779C: cmp     dword ptr [eax], 0
0x5D779F: jz      loc_5D7900
0x5D77A5: push    ebx; a3
0x5D77A6: mov     ebx, [esp+14h+arg_0]
0x5D77AA: cmp     ebx, 0Eh
0x5D77AD: jz      short loc_5D77B4
0x5D77AF: cmp     ebx, 0Fh
0x5D77B2: jnz     short loc_5D77C6
0x5D77B4: fldz
0x5D77B6: push    ecx
0x5D77B7: fstp    [esp+18h+a2]; a3
0x5D77BA: mov     ecx, edi; this
0x5D77BC: push    0FA7h; a2
0x5D77C1: call    Tile_SetFloat
0x5D77C6: cmp     ebx, 3E8h
0x5D77CC: jge     short loc_5D77EF
0x5D77CE: cmp     ebx, 2
0x5D77D1: jz      short loc_5D77EF
0x5D77D3: fld1
0x5D77D5: push    ecx
0x5D77D6: mov     ecx, [esi+34h]; this
0x5D77D9: fstp    [esp+18h+a2]; a3
0x5D77DC: push    0FA1h; a2
0x5D77E1: call    Tile_SetFloat
0x5D77E6: pop     ebx
0x5D77E7: pop     edi
0x5D77E8: pop     esi
0x5D77E9: add     esp, 8
0x5D77EC: retn    8
0x5D77EF: cmp     dword ptr [esi+34h], 0
0x5D77F3: mov     byte ptr [esi+60h], 0FFh
0x5D77F7: mov     dword ptr [esi+5Ch], 0
0x5D77FE: jz      loc_5D78FF
0x5D7804: push    4; int
0x5D7806: call    sub_57DE50
0x5D780B: add     esp, 4
0x5D780E: mov     ecx, edi
0x5D7810: call    sub_588D90
0x5D7815: fstp    qword ptr [esp+14h+var_8]; a3
0x5D7819: mov     ecx, [esi+34h]
0x5D781C: push    0FBDh
0x5D7821: call    Tile_GetFloat
0x5D7826: fsubr   qword ptr [esp+14h+var_8]
0x5D782A: push    ecx
0x5D782B: mov     ecx, [esi+34h]; this
0x5D782E: fstp    [esp+18h+arg_4]
0x5D7832: fld     [esp+18h+arg_4]
0x5D7836: fstp    [esp+18h+a2]; a3
0x5D7839: push    0FABh; a2
0x5D783E: call    Tile_SetFloat
0x5D7843: push    0FCBh
0x5D7848: mov     ecx, edi
0x5D784A: call    Tile_GetFloat
0x5D784F: fsub    qword ptr ds:0A49310h
0x5D7855: push    ecx
0x5D7856: mov     ecx, [esi+34h]; this
0x5D7859: fstp    [esp+18h+arg_4]
0x5D785D: fld     [esp+18h+arg_4]
0x5D7861: fstp    [esp+18h+a2]; a3
0x5D7864: push    0FCBh; a2
0x5D7869: call    Tile_SetFloat
0x5D786E: push    0FCAh
0x5D7873: mov     ecx, edi
0x5D7875: call    Tile_GetFloat
0x5D787A: fsub    qword ptr ds:0A49310h
0x5D7880: push    ecx
0x5D7881: mov     ecx, [esi+34h]; this
0x5D7884: fstp    [esp+18h+arg_4]
0x5D7888: fld     [esp+18h+arg_4]
0x5D788C: fstp    [esp+18h+a2]; a3
0x5D788F: push    0FCAh; a2
0x5D7894: call    Tile_SetFloat
0x5D7899: mov     ecx, edi
0x5D789B: call    sub_588C50
0x5D78A0: fadd    qword ptr ds:0A3C800h
0x5D78A6: push    ecx
0x5D78A7: mov     ecx, [esi+34h]; this
0x5D78AA: fstp    [esp+18h+arg_4]
0x5D78AE: fld     [esp+18h+arg_4]
0x5D78B2: fstp    [esp+18h+a2]; a3
0x5D78B5: push    0FADh; a2
0x5D78BA: call    Tile_SetFloat
0x5D78BF: mov     ecx, edi
0x5D78C1: call    sub_588CF0
0x5D78C6: fadd    qword ptr ds:0A3C800h
0x5D78CC: push    ecx
0x5D78CD: mov     ecx, [esi+34h]; this
0x5D78D0: fstp    [esp+18h+arg_4]
0x5D78D4: fld     [esp+18h+arg_4]
0x5D78D8: fstp    [esp+18h+a2]; a3
0x5D78DB: push    0FACh; a2
0x5D78E0: call    Tile_SetFloat
0x5D78E5: fld     dword ptr ds:0A379B4h
0x5D78EB: push    ecx
0x5D78EC: mov     ecx, [esi+34h]; this
0x5D78EF: fstp    [esp+18h+a2]; a3
0x5D78F2: push    0FA1h; a2
0x5D78F7: call    Tile_SetFloat
0x5D78FC: mov     [esi+5Ch], edi
0x5D78FF: pop     ebx
0x5D7900: pop     edi
0x5D7901: pop     esi
0x5D7902: add     esp, 8
0x5D7905: retn    8
