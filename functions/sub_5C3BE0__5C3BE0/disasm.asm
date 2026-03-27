0x5C3BE0: sub     esp, 8
0x5C3BE3: push    ebx; a3
0x5C3BE4: push    esi; a3
0x5C3BE5: push    edi; a3
0x5C3BE6: push    1; arg1
0x5C3BE8: push    0; canCreate
0x5C3BEA: mov     esi, ecx
0x5C3BEC: call    InterfaceManager_GetSingleton
0x5C3BF1: mov     edi, eax
0x5C3BF3: mov     eax, [esp+1Ch+arg_0]
0x5C3BF7: mov     ebx, [esi+eax*4+94h]
0x5C3BFE: add     esp, 8
0x5C3C01: test    ebx, ebx
0x5C3C03: jz      loc_5C3C9A
0x5C3C09: call    sub_57D7A0
0x5C3C0E: fmul    qword ptr ds:0A2FAA0h
0x5C3C14: fadd    dword ptr [edi+20h]
0x5C3C17: call    Double_To_SInt32
0x5C3C1C: fld     dword ptr [esi+898h]
0x5C3C22: mov     [esp+14h+arg_0], eax
0x5C3C26: fiadd   [esp+14h+arg_0]
0x5C3C2A: mov     ecx, ebx
0x5C3C2C: fstp    [esp+14h+var_8]
0x5C3C30: call    sub_588C50
0x5C3C35: fsubr   [esp+14h+var_8]
0x5C3C39: mov     esi, [esp+14h+arg_4]
0x5C3C3D: push    0FB6h
0x5C3C42: mov     ecx, esi
0x5C3C44: fstp    [esp+18h+var_8]
0x5C3C48: call    Tile_GetFloat
0x5C3C4D: fdivr   [esp+14h+var_8]
0x5C3C51: push    ecx
0x5C3C52: mov     ecx, esi; this
0x5C3C54: fstp    [esp+18h+arg_0]
0x5C3C58: fld     dword ptr ds:0A6B1F0h
0x5C3C5E: fstp    [esp+18h+a2]; a3
0x5C3C61: push    0FB7h; a2
0x5C3C66: call    Tile_SetFloat
0x5C3C6B: fld     [esp+14h+arg_0]
0x5C3C6F: push    ecx
0x5C3C70: fstp    [esp+18h+a2]; a3
0x5C3C73: push    0FB7h; a2
0x5C3C78: mov     ecx, esi; this
0x5C3C7A: call    Tile_SetFloat
0x5C3C7F: fldz
0x5C3C81: push    ecx
0x5C3C82: fstp    [esp+18h+a2]; a3
0x5C3C85: push    0FB7h; a2
0x5C3C8A: mov     ecx, esi; this
0x5C3C8C: call    Tile_SetFloat
0x5C3C91: pop     edi
0x5C3C92: pop     esi
0x5C3C93: pop     ebx
0x5C3C94: add     esp, 8
0x5C3C97: retn    8
0x5C3C9A: cmp     eax, 15h
0x5C3C9D: jnz     loc_5C3D4F
0x5C3CA3: call    sub_57D7F0
0x5C3CA8: fstp    [esp+14h+var_8]
0x5C3CAC: call    sub_57D7F0
0x5C3CB1: fmul    qword ptr ds:0A2FAA0h
0x5C3CB7: fadd    dword ptr [edi+28h]
0x5C3CBA: fsubr   [esp+14h+var_8]
0x5C3CBE: call    Double_To_SInt32
0x5C3CC3: fld     dword ptr [esi+89Ch]
0x5C3CC9: mov     ecx, [esi+34h]
0x5C3CCC: mov     [esp+14h+arg_0], eax
0x5C3CD0: fiadd   [esp+14h+arg_0]
0x5C3CD4: fstp    [esp+14h+var_8]
0x5C3CD8: call    sub_588CF0
0x5C3CDD: fsubr   [esp+14h+var_8]
0x5C3CE1: mov     ecx, [esi+38h]
0x5C3CE4: push    0FB6h
0x5C3CE9: fstp    [esp+18h+var_8]
0x5C3CED: call    Tile_GetFloat
0x5C3CF2: fdivr   [esp+14h+var_8]
0x5C3CF6: push    ecx
0x5C3CF7: mov     ecx, [esi+38h]; this
0x5C3CFA: fstp    [esp+18h+arg_0]
0x5C3CFE: fld     dword ptr ds:0A6B1F0h
0x5C3D04: fstp    [esp+18h+a2]; a3
0x5C3D07: push    0FB7h; a2
0x5C3D0C: call    Tile_SetFloat
0x5C3D11: fld     [esp+14h+arg_0]
0x5C3D15: call    Double_To_SInt32
0x5C3D1A: mov     [esp+14h+arg_0], eax
0x5C3D1E: fild    [esp+14h+arg_0]
0x5C3D22: push    ecx
0x5C3D23: mov     ecx, [esi+38h]; this
0x5C3D26: fstp    [esp+18h+a2]; a3
0x5C3D29: push    0FB7h; a2
0x5C3D2E: call    Tile_SetFloat
0x5C3D33: fldz
0x5C3D35: push    ecx
0x5C3D36: fstp    [esp+18h+a2]; a3
0x5C3D39: mov     ecx, [esi+38h]; this
0x5C3D3C: push    0FB7h; a2
0x5C3D41: call    Tile_SetFloat
0x5C3D46: pop     edi
0x5C3D47: pop     esi
0x5C3D48: pop     ebx
0x5C3D49: add     esp, 8
0x5C3D4C: retn    8
0x5C3D4F: cmp     eax, 2
0x5C3D52: jnz     short loc_5C3DBB
0x5C3D54: cmp     byte ptr [esi+8D0h], 0
0x5C3D5B: jnz     short loc_5C3DBB
0x5C3D5D: mov     eax, [edi+118h]
0x5C3D63: shr     eax, 2
0x5C3D66: test    al, 1
0x5C3D68: jnz     short loc_5C3DBB
0x5C3D6A: mov     ecx, edi
0x5C3D6C: call    sub_5952D0
0x5C3D71: mov     [esp+14h+arg_0], eax
0x5C3D75: fild    [esp+14h+arg_0]
0x5C3D79: sub     esp, 8
0x5C3D7C: mov     ecx, esi
0x5C3D7E: fsub    dword ptr [esi+898h]
0x5C3D84: fdiv    qword ptr ds:0A3F3F0h
0x5C3D8A: fstp    [esp+1Ch+arg_0]
0x5C3D8E: fld     [esp+1Ch+arg_0]
0x5C3D92: fstp    [esp+1Ch+a2]; float
0x5C3D96: fld1
0x5C3D98: fstp    [esp+1Ch+var_1C]; int
0x5C3D9B: call    Menu_UPdateCamera???
0x5C3DA0: mov     ecx, edi
0x5C3DA2: call    sub_5952D0
0x5C3DA7: mov     [esp+14h+arg_0], eax
0x5C3DAB: fild    [esp+14h+arg_0]
0x5C3DAF: fsub    dword ptr [esi+898h]
0x5C3DB5: fstp    dword ptr [esi+8A0h]
0x5C3DBB: pop     edi
0x5C3DBC: pop     esi
0x5C3DBD: pop     ebx
0x5C3DBE: add     esp, 8
0x5C3DC1: retn    8
