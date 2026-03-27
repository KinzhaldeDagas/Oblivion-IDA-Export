0x5B69B0: sub     esp, 8
0x5B69B3: push    esi; a3
0x5B69B4: mov     esi, ecx
0x5B69B6: mov     ecx, [esp+0Ch+arg_0]
0x5B69BA: cmp     ecx, 0Ch
0x5B69BD: push    edi; a3
0x5B69BE: jnz     loc_5B6A8C
0x5B69C4: push    1; arg1
0x5B69C6: push    0; canCreate
0x5B69C8: call    InterfaceManager_GetSingleton
0x5B69CD: add     esp, 8
0x5B69D0: mov     edi, eax
0x5B69D2: call    sub_57D7F0
0x5B69D7: fstp    qword ptr [esp+10h+a3]
0x5B69DB: call    sub_57D7F0
0x5B69E0: fmul    qword ptr ds:0A2FAA0h
0x5B69E6: fadd    dword ptr [edi+28h]
0x5B69E9: fsubr   qword ptr [esp+10h+a3]
0x5B69ED: call    Double_To_SInt32
0x5B69F2: mov     ecx, [esi+40h]
0x5B69F5: mov     [esp+10h+arg_0], eax
0x5B69F9: fild    [esp+10h+arg_0]
0x5B69FD: fstp    [esp+10h+arg_0]
0x5B6A01: call    sub_588CF0
0x5B6A06: fsubr   [esp+10h+arg_0]
0x5B6A0A: mov     ecx, [esi+44h]
0x5B6A0D: push    0FB6h
0x5B6A12: fstp    qword ptr [esp+14h+a3]; a3
0x5B6A16: call    Tile_GetFloat
0x5B6A1B: fdivr   qword ptr [esp+10h+a3]
0x5B6A1F: push    ecx
0x5B6A20: mov     ecx, [esi+44h]; this
0x5B6A23: fstp    [esp+14h+arg_0]
0x5B6A27: fld     dword ptr ds:0A6B1F0h
0x5B6A2D: fstp    [esp+14h+a2]; a3
0x5B6A30: push    0FB7h; a2
0x5B6A35: call    Tile_SetFloat
0x5B6A3A: fld     [esp+10h+arg_0]
0x5B6A3E: mov     ecx, [esi+40h]
0x5B6A41: fstp    qword ptr [esp+10h+a3]
0x5B6A45: push    0FB1h
0x5B6A4A: call    Tile_GetFloat
0x5B6A4F: fdivr   qword ptr [esp+10h+a3]
0x5B6A53: call    Double_To_SInt32
0x5B6A58: mov     [esp+10h+arg_0], eax
0x5B6A5C: fild    [esp+10h+arg_0]
0x5B6A60: push    ecx
0x5B6A61: mov     ecx, [esi+44h]; this
0x5B6A64: fstp    [esp+14h+a2]; a3
0x5B6A67: push    0FB7h; a2
0x5B6A6C: call    Tile_SetFloat
0x5B6A71: fldz
0x5B6A73: push    ecx
0x5B6A74: fstp    [esp+14h+a2]; a3
0x5B6A77: mov     ecx, [esi+44h]; this
0x5B6A7A: push    0FB7h; a2
0x5B6A7F: call    Tile_SetFloat
0x5B6A84: pop     edi
0x5B6A85: pop     esi
0x5B6A86: add     esp, 8
0x5B6A89: retn    8
0x5B6A8C: cmp     ecx, 29h ; ')'
0x5B6A8F: mov     eax, [esp+10h+arg_4]
0x5B6A93: jz      loc_5B6B6E
0x5B6A99: test    eax, eax
0x5B6A9B: jz      short loc_5B6AA9
0x5B6A9D: mov     edx, [eax+10h]
0x5B6AA0: cmp     edx, [esi+58h]
0x5B6AA3: jz      loc_5B6B6E
0x5B6AA9: cmp     ecx, 2Dh ; '-'
0x5B6AAC: jnz     loc_5B6C82
0x5B6AB2: mov     edx, [esi]
0x5B6AB4: push    eax
0x5B6AB5: mov     eax, [edx+14h]
0x5B6AB8: push    ecx
0x5B6AB9: mov     ecx, esi
0x5B6ABB: call    eax
0x5B6ABD: push    1; arg1
0x5B6ABF: push    0; canCreate
0x5B6AC1: call    InterfaceManager_GetSingleton
0x5B6AC6: add     esp, 8
0x5B6AC9: mov     edi, eax
0x5B6ACB: call    sub_57D7A0
0x5B6AD0: fmul    qword ptr ds:0A2FAA0h
0x5B6AD6: fadd    dword ptr [edi+20h]
0x5B6AD9: call    Double_To_SInt32
0x5B6ADE: fld     dword ptr [esi+88h]
0x5B6AE4: mov     [esp+10h+arg_0], eax
0x5B6AE8: fisub   [esp+10h+arg_0]
0x5B6AEC: mov     ecx, edi
0x5B6AEE: fstp    [esp+10h+arg_4]
0x5B6AF2: fld     dword ptr [esi+8Ch]
0x5B6AF8: fstp    qword ptr [esp+10h+a3]
0x5B6AFC: call    sub_593020
0x5B6B01: mov     [esp+10h+arg_0], eax
0x5B6B05: fild    [esp+10h+arg_0]
0x5B6B09: push    0; float
0x5B6B0B: sub     esp, 8
0x5B6B0E: mov     ecx, esi
0x5B6B10: fsubr   qword ptr [esp+1Ch+a3]
0x5B6B14: fstp    [esp+1Ch+arg_0]
0x5B6B18: fld     [esp+1Ch+arg_0]
0x5B6B1C: fchs
0x5B6B1E: fstp    [esp+1Ch+var_18]; float
0x5B6B22: fld     [esp+1Ch+arg_4]
0x5B6B26: fchs
0x5B6B28: fstp    [esp+1Ch+var_1C]; float
0x5B6B2B: call    sub_5B67F0
0x5B6B30: call    sub_57D7A0
0x5B6B35: fmul    qword ptr ds:0A2FAA0h
0x5B6B3B: fadd    dword ptr [edi+20h]
0x5B6B3E: call    Double_To_SInt32
0x5B6B43: mov     [esp+10h+arg_0], eax
0x5B6B47: fild    [esp+10h+arg_0]
0x5B6B4B: mov     ecx, edi
0x5B6B4D: fstp    dword ptr [esi+88h]
0x5B6B53: call    sub_593020
0x5B6B58: mov     [esp+10h+arg_0], eax
0x5B6B5C: fild    [esp+10h+arg_0]
0x5B6B60: pop     edi
0x5B6B61: fstp    dword ptr [esi+8Ch]
0x5B6B67: pop     esi
0x5B6B68: add     esp, 8
0x5B6B6B: retn    8
0x5B6B6E: mov     edx, [esi]
0x5B6B70: push    ebx
0x5B6B71: push    eax; a3
0x5B6B72: mov     eax, [edx+14h]
0x5B6B75: push    ecx; a3
0x5B6B76: mov     ecx, esi
0x5B6B78: call    eax
0x5B6B7A: push    1; arg1
0x5B6B7C: push    0; canCreate
0x5B6B7E: call    InterfaceManager_GetSingleton
0x5B6B83: add     esp, 8
0x5B6B86: mov     edi, eax
0x5B6B88: call    sub_57D7A0
0x5B6B8D: fmul    qword ptr ds:0A2FAA0h
0x5B6B93: fadd    dword ptr [edi+20h]
0x5B6B96: call    Double_To_SInt32
0x5B6B9B: fld     dword ptr [esi+88h]
0x5B6BA1: mov     [esp+14h+arg_0], eax
0x5B6BA5: fisub   [esp+14h+arg_0]
0x5B6BA9: fstp    [esp+14h+arg_4]
0x5B6BAD: call    sub_57D7F0
0x5B6BB2: fstp    qword ptr [esp+14h+a3]
0x5B6BB6: call    sub_57D7F0
0x5B6BBB: fmul    qword ptr ds:0A2FAA0h
0x5B6BC1: fadd    dword ptr [edi+28h]
0x5B6BC4: fsubr   qword ptr [esp+14h+a3]
0x5B6BC8: call    Double_To_SInt32
0x5B6BCD: fld     dword ptr [esi+8Ch]
0x5B6BD3: mov     ebx, [esi+58h]
0x5B6BD6: mov     [esp+14h+arg_0], eax
0x5B6BDA: fisub   [esp+14h+arg_0]
0x5B6BDE: push    0FBAh
0x5B6BE3: mov     ecx, ebx
0x5B6BE5: fstp    [esp+18h+a3]
0x5B6BE9: call    Tile_GetFloat
0x5B6BEE: fadd    [esp+14h+arg_4]
0x5B6BF2: push    ecx
0x5B6BF3: mov     ecx, ebx; this
0x5B6BF5: fstp    [esp+18h+arg_0]
0x5B6BF9: fld     [esp+18h+arg_0]
0x5B6BFD: fstp    [esp+18h+var_18]; a3
0x5B6C00: push    0FB8h; a2
0x5B6C05: call    Tile_SetFloat
0x5B6C0A: push    0FBBh
0x5B6C0F: mov     ecx, ebx
0x5B6C11: call    Tile_GetFloat
0x5B6C16: fadd    [esp+14h+a3]
0x5B6C1A: push    ecx
0x5B6C1B: mov     ecx, ebx; this
0x5B6C1D: fstp    [esp+18h+arg_0]
0x5B6C21: fld     [esp+18h+arg_0]
0x5B6C25: fstp    [esp+18h+var_18]; a3
0x5B6C28: push    0FB9h; a2
0x5B6C2D: call    Tile_SetFloat
0x5B6C32: call    sub_57D7A0
0x5B6C37: fmul    qword ptr ds:0A2FAA0h
0x5B6C3D: fadd    dword ptr [edi+20h]
0x5B6C40: call    Double_To_SInt32
0x5B6C45: mov     [esp+14h+arg_0], eax
0x5B6C49: fild    [esp+14h+arg_0]
0x5B6C4D: fstp    dword ptr [esi+88h]
0x5B6C53: call    sub_57D7F0
0x5B6C58: fstp    qword ptr [esp+14h+a3]
0x5B6C5C: call    sub_57D7F0
0x5B6C61: fmul    qword ptr ds:0A2FAA0h
0x5B6C67: fadd    dword ptr [edi+28h]
0x5B6C6A: fsubr   qword ptr [esp+14h+a3]
0x5B6C6E: call    Double_To_SInt32
0x5B6C73: mov     [esp+14h+arg_0], eax
0x5B6C77: fild    [esp+14h+arg_0]
0x5B6C7B: pop     ebx
0x5B6C7C: fstp    dword ptr [esi+8Ch]
0x5B6C82: pop     edi
0x5B6C83: pop     esi
0x5B6C84: add     esp, 8
0x5B6C87: retn    8
