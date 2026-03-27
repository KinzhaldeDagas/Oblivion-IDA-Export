0x595CD0: sub     esp, 8
0x595CD3: cmp     [esp+8+arg_0], 0Ch
0x595CD8: push    esi; a3
0x595CD9: mov     esi, ecx
0x595CDB: jnz     loc_595D91
0x595CE1: push    edi; a3
0x595CE2: push    1; arg1
0x595CE4: push    0; canCreate
0x595CE6: call    InterfaceManager_GetSingleton
0x595CEB: add     esp, 8
0x595CEE: mov     edi, eax
0x595CF0: call    sub_57D7F0
0x595CF5: fstp    qword ptr [esp+10h+a3]
0x595CF9: call    sub_57D7F0
0x595CFE: fmul    qword ptr ds:0A2FAA0h
0x595D04: fadd    dword ptr [edi+28h]
0x595D07: fsubr   qword ptr [esp+10h+a3]
0x595D0B: call    Double_To_SInt32
0x595D10: fld     dword ptr [esi+38h]
0x595D13: mov     ecx, [esi+28h]
0x595D16: mov     [esp+10h+arg_0], eax
0x595D1A: fiadd   [esp+10h+arg_0]
0x595D1E: fstp    qword ptr [esp+10h+a3]
0x595D22: call    sub_588CF0
0x595D27: fsubr   qword ptr [esp+10h+a3]
0x595D2B: mov     ecx, [esi+2Ch]
0x595D2E: push    0FB6h
0x595D33: fstp    qword ptr [esp+14h+a3]; a3
0x595D37: call    Tile_GetFloat
0x595D3C: fdivr   qword ptr [esp+10h+a3]
0x595D40: push    ecx
0x595D41: mov     ecx, [esi+28h]; this
0x595D44: fstp    [esp+14h+arg_0]
0x595D48: fld     dword ptr ds:0A6B1F0h
0x595D4E: fstp    [esp+14h+a2]; a3
0x595D51: push    0FB3h; a2
0x595D56: call    Tile_SetFloat
0x595D5B: fld     [esp+10h+arg_0]
0x595D5F: call    Double_To_SInt32
0x595D64: mov     [esp+10h+arg_0], eax
0x595D68: fild    [esp+10h+arg_0]
0x595D6C: push    ecx
0x595D6D: mov     ecx, [esi+28h]; this
0x595D70: fstp    [esp+14h+a2]; a3
0x595D73: push    0FB3h; a2
0x595D78: call    Tile_SetFloat
0x595D7D: fldz
0x595D7F: push    ecx
0x595D80: fstp    [esp+14h+a2]; a3
0x595D83: mov     ecx, [esi+28h]; this
0x595D86: push    0FB3h; a2
0x595D8B: call    Tile_SetFloat
0x595D90: pop     edi
0x595D91: pop     esi
0x595D92: add     esp, 8
0x595D95: retn    8
