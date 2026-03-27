0x5A1990: sub     esp, 0Ch
0x5A1993: push    ebx; a3
0x5A1994: mov     ebx, [esp+10h+arg_0]
0x5A1998: cmp     ebx, 3E8h
0x5A199E: push    esi; a3
0x5A199F: push    edi; a3
0x5A19A0: mov     esi, ecx
0x5A19A2: jge     short loc_5A19BC
0x5A19A4: cmp     ebx, 14h
0x5A19A7: jz      short loc_5A19BC
0x5A19A9: cmp     ebx, 16h
0x5A19AC: jz      short loc_5A19BC
0x5A19AE: cmp     ebx, 2
0x5A19B1: jz      short loc_5A19BC
0x5A19B3: cmp     ebx, 18h
0x5A19B6: jnz     loc_5A1B10
0x5A19BC: mov     edi, [esp+18h+arg_4]
0x5A19C0: test    edi, edi
0x5A19C2: jz      loc_5A1B40
0x5A19C8: cmp     dword ptr [esi+5Ch], 0
0x5A19CC: mov     dword ptr [esi+94h], 0
0x5A19D6: jz      loc_5A1B10
0x5A19DC: push    ebp; a3
0x5A19DD: push    0FE0h
0x5A19E2: mov     ecx, edi
0x5A19E4: call    Tile_GetFloat
0x5A19E9: call    Double_To_SInt32
0x5A19EE: mov     ebp, eax
0x5A19F0: mov     ecx, edi
0x5A19F2: mov     [esp+1Ch+a3], ebp; a3
0x5A19F6: call    sub_588D90
0x5A19FB: fstp    qword ptr [esp+1Ch+var_8]; a3
0x5A19FF: mov     ecx, [esi+5Ch]
0x5A1A02: push    0FBDh
0x5A1A07: call    Tile_GetFloat
0x5A1A0C: fsubr   qword ptr [esp+1Ch+var_8]
0x5A1A10: push    ecx
0x5A1A11: mov     ecx, [esi+5Ch]; this
0x5A1A14: fstp    [esp+20h+arg_0]
0x5A1A18: fld     [esp+20h+arg_0]
0x5A1A1C: fstp    [esp+20h+a2]; a3
0x5A1A1F: push    0FABh; a2
0x5A1A24: call    Tile_SetFloat
0x5A1A29: lea     eax, [ebp+ebp+0]
0x5A1A2D: mov     [esp+1Ch+arg_0], eax
0x5A1A31: fild    [esp+1Ch+arg_0]
0x5A1A35: push    0FCBh
0x5A1A3A: mov     ecx, edi
0x5A1A3C: fstp    [esp+20h+arg_0]
0x5A1A40: call    Tile_GetFloat
0x5A1A45: fsub    [esp+1Ch+arg_0]
0x5A1A49: push    ecx
0x5A1A4A: mov     ecx, [esi+5Ch]; this
0x5A1A4D: fstp    [esp+20h+arg_4]
0x5A1A51: fld     [esp+20h+arg_4]
0x5A1A55: fstp    [esp+20h+a2]; a3
0x5A1A58: push    0FCBh; a2
0x5A1A5D: call    Tile_SetFloat
0x5A1A62: push    0FCAh
0x5A1A67: mov     ecx, edi
0x5A1A69: call    Tile_GetFloat
0x5A1A6E: fsub    [esp+1Ch+arg_0]
0x5A1A72: push    ecx
0x5A1A73: mov     ecx, [esi+5Ch]; this
0x5A1A76: fstp    [esp+20h+arg_0]
0x5A1A7A: fld     [esp+20h+arg_0]
0x5A1A7E: fstp    [esp+20h+a2]; a3
0x5A1A81: push    0FCAh; a2
0x5A1A86: call    Tile_SetFloat
0x5A1A8B: fild    [esp+1Ch+a3]
0x5A1A8F: mov     ecx, edi
0x5A1A91: fstp    [esp+1Ch+arg_0]
0x5A1A95: call    sub_588C50
0x5A1A9A: fadd    [esp+1Ch+arg_0]
0x5A1A9E: push    ecx
0x5A1A9F: mov     ecx, [esi+5Ch]; this
0x5A1AA2: fstp    [esp+20h+arg_4]
0x5A1AA6: fld     [esp+20h+arg_4]
0x5A1AAA: fstp    [esp+20h+a2]; a3
0x5A1AAD: push    0FADh; a2
0x5A1AB2: call    Tile_SetFloat
0x5A1AB7: mov     ecx, edi
0x5A1AB9: call    sub_588CF0
0x5A1ABE: fadd    [esp+1Ch+arg_0]
0x5A1AC2: push    ecx
0x5A1AC3: mov     ecx, [esi+5Ch]; this
0x5A1AC6: fstp    [esp+20h+arg_0]
0x5A1ACA: fld     [esp+20h+arg_0]
0x5A1ACE: fstp    [esp+20h+a2]; a3
0x5A1AD1: push    0FACh; a2
0x5A1AD6: call    Tile_SetFloat
0x5A1ADB: fld     dword ptr ds:0A379B4h
0x5A1AE1: push    ecx
0x5A1AE2: mov     ecx, [esi+5Ch]; this
0x5A1AE5: fstp    [esp+20h+a2]; a3
0x5A1AE8: push    0FA1h; a2
0x5A1AED: call    Tile_SetFloat
0x5A1AF2: fld     dword ptr ds:0A379B4h
0x5A1AF8: push    ecx
0x5A1AF9: mov     ecx, [esi+5Ch]; this
0x5A1AFC: fstp    [esp+20h+a2]; a3
0x5A1AFF: push    0FC8h; a2
0x5A1B04: call    Tile_SetFloat
0x5A1B09: mov     [esi+94h], edi
0x5A1B0F: pop     ebp; char
0x5A1B10: cmp     ebx, 3E8h
0x5A1B16: jge     short loc_5A1B36
0x5A1B18: cmp     ebx, 14h
0x5A1B1B: jz      short loc_5A1B36
0x5A1B1D: cmp     ebx, 16h
0x5A1B20: jz      short loc_5A1B36
0x5A1B22: cmp     ebx, 2
0x5A1B25: jz      short loc_5A1B36
0x5A1B27: cmp     ebx, 18h
0x5A1B2A: jz      short loc_5A1B36
0x5A1B2C: cmp     ebx, 0Fh
0x5A1B2F: jz      short loc_5A1B36
0x5A1B31: cmp     ebx, 0Eh
0x5A1B34: jnz     short loc_5A1B40
0x5A1B36: push    4; int
0x5A1B38: call    sub_57DE50
0x5A1B3D: add     esp, 4
0x5A1B40: pop     edi
0x5A1B41: pop     esi
0x5A1B42: pop     ebx
0x5A1B43: add     esp, 0Ch
0x5A1B46: retn    8
