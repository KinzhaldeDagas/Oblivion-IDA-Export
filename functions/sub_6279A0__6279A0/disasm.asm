0x6279A0: sub     esp, 3Ch
0x6279A3: push    ebx
0x6279A4: push    ebp
0x6279A5: push    esi
0x6279A6: mov     esi, [esp+48h+arg_0]
0x6279AA: mov     ebx, ecx
0x6279AC: cmp     byte ptr [ebx+3Ch], 1
0x6279B0: push    edi
0x6279B1: jnz     loc_627D20
0x6279B7: cmp     byte ptr [esp+4Ch+arg_C], 0
0x6279BC: mov     ebp, [esp+4Ch+arg_8]
0x6279C0: mov     edi, [esp+4Ch+arg_4]
0x6279C4: mov     ds:0B3B924h, ebp
0x6279CA: jz      short loc_627A3B
0x6279CC: mov     ecx, edi; this
0x6279CE: call    TESObjectREFR_IsPersistent?
0x6279D3: test    al, al
0x6279D5: jz      short loc_627A3B
0x6279D7: mov     eax, [edi]
0x6279D9: mov     edx, [eax+380h]
0x6279DF: mov     ecx, edi
0x6279E1: call    edx
0x6279E3: test    eax, eax
0x6279E5: jnz     short loc_627A3B
0x6279E7: push    edi
0x6279E8: call    Actor__CanUSeDoor?
0x6279ED: add     esp, 4
0x6279F0: test    al, al
0x6279F2: jz      short loc_627A3B
0x6279F4: mov     eax, [edi]
0x6279F6: fld     dword ptr ds:0A578C0h
0x6279FC: mov     edx, [eax+174h]
0x627A02: push    edi; a7
0x627A03: push    offset sub_626CC0; a6
0x627A08: push    ecx
0x627A09: mov     ecx, edi
0x627A0B: fstp    [esp+58h+a5]; a5
0x627A0E: call    edx
0x627A10: fld     dword ptr ds:0A578C0h
0x627A16: push    eax; a4
0x627A17: mov     eax, [edi]
0x627A19: mov     edx, [eax+174h]
0x627A1F: push    ecx
0x627A20: mov     ecx, edi
0x627A22: fstp    [esp+60h+a3]; a3
0x627A25: call    edx
0x627A27: push    eax; a2
0x627A28: mov     ecx, edi; this
0x627A2A: call    TESObjectREFR_GetParentCell
0x627A2F: mov     ecx, ds:0B33A98h
0x627A35: push    eax; a1
0x627A36: call    sub_446B90
0x627A3B: mov     eax, ds:0B3B91Ch
0x627A40: xor     ecx, ecx
0x627A42: cmp     eax, ecx
0x627A44: mov     ds:0B3B924h, ecx
0x627A4A: jz      short loc_627A61
0x627A4C: mov     ds:0B3B91Ch, ecx
0x627A52: mov     ecx, eax
0x627A54: mov     [ebx+5Ch], eax
0x627A57: call    sub_4D76F0
0x627A5C: jmp     loc_627D31
0x627A61: cmp     ebp, ecx
0x627A63: jz      loc_627D41
0x627A69: mov     edx, [ebp+0]
0x627A6C: mov     eax, [edx+174h]
0x627A72: mov     ecx, ebp
0x627A74: call    eax
0x627A76: mov     edx, [eax+4]
0x627A79: mov     ecx, [eax]
0x627A7B: mov     eax, [eax+8]
0x627A7E: mov     [esp+4Ch+var_20], edx
0x627A82: mov     edx, [edi]
0x627A84: mov     [esp+4Ch+var_24], ecx
0x627A88: mov     [esp+4Ch+var_1C], eax
0x627A8C: mov     eax, [edx+174h]
0x627A92: mov     ecx, edi
0x627A94: call    eax
0x627A96: fld     dword ptr ds:0B37028h
0x627A9C: mov     ecx, [eax]
0x627A9E: fstp    [esp+4Ch+arg_C]
0x627AA2: mov     edx, [eax+4]
0x627AA5: mov     eax, [eax+8]
0x627AA8: mov     [esp+4Ch+var_30], ecx
0x627AAC: fld     [esp+4Ch+var_30]
0x627AB0: fsub    [esp+4Ch+var_24]
0x627AB4: mov     [esp+4Ch+var_2C], edx
0x627AB8: mov     [esp+4Ch+var_28], eax
0x627ABC: lea     ecx, [esp+4Ch+var_3C]
0x627AC0: fstp    [esp+4Ch+var_3C]
0x627AC4: fld     [esp+4Ch+var_2C]
0x627AC8: fsub    [esp+4Ch+var_20]
0x627ACC: fstp    [esp+4Ch+var_38]
0x627AD0: fld     [esp+4Ch+var_28]
0x627AD4: fsub    [esp+4Ch+var_1C]
0x627AD8: fstp    [esp+4Ch+var_34]
0x627ADC: call    sub_43F350
0x627AE1: fstp    st
0x627AE3: fld     [esp+4Ch+var_3C]
0x627AE7: fld     [esp+4Ch+arg_C]
0x627AEB: fld     st
0x627AED: fmulp   st(2), st
0x627AEF: fxch    st(1)
0x627AF1: fstp    [esp+4Ch+var_24]
0x627AF5: fld     [esp+4Ch+var_38]
0x627AF9: fmul    st, st(1)
0x627AFB: fstp    [esp+4Ch+var_20]
0x627AFF: fmul    [esp+4Ch+var_34]
0x627B03: fstp    [esp+4Ch+var_1C]
0x627B07: fld     [esp+4Ch+var_24]
0x627B0B: fadd    [esp+4Ch+var_30]
0x627B0F: fstp    [esp+4Ch+var_18]
0x627B13: mov     ecx, [esp+4Ch+var_18]
0x627B17: fld     [esp+4Ch+var_20]
0x627B1B: mov     [esp+4Ch+var_3C], ecx
0x627B1F: fadd    [esp+4Ch+var_2C]
0x627B23: mov     ecx, edi; this
0x627B25: fstp    [esp+4Ch+var_14]
0x627B29: mov     edx, [esp+4Ch+var_14]
0x627B2D: fld     [esp+4Ch+var_1C]
0x627B31: mov     [esp+4Ch+var_38], edx
0x627B35: fadd    [esp+4Ch+var_28]
0x627B39: fstp    [esp+4Ch+var_10]
0x627B3D: mov     eax, [esp+4Ch+var_10]
0x627B41: mov     [esp+4Ch+var_34], eax
0x627B45: call    TESObjectREFR_GetParentCell
0x627B4A: mov     ecx, [esp+4Ch+var_3C]
0x627B4E: mov     edx, [esp+4Ch+var_38]
0x627B52: push    0; int
0x627B54: push    0; float
0x627B56: push    0; float
0x627B58: push    eax; int
0x627B59: sub     esp, 0Ch
0x627B5C: mov     eax, esp
0x627B5E: mov     [eax], ecx
0x627B60: mov     ecx, [esp+68h+var_34]
0x627B64: mov     [eax+4], edx
0x627B67: lea     edx, [esp+68h+var_C]
0x627B6B: mov     [eax+8], ecx
0x627B6E: push    edx; int
0x627B6F: mov     ecx, edi
0x627B71: call    sub_5E2E20
0x627B76: mov     ecx, [eax]
0x627B78: mov     [esi], ecx
0x627B7A: mov     edx, [eax+4]
0x627B7D: mov     [esi+4], edx
0x627B80: mov     eax, [eax+8]
0x627B83: lea     ecx, [esp+4Ch+var_3C]
0x627B87: push    ecx
0x627B88: mov     ecx, esi
0x627B8A: mov     [esi+8], eax
0x627B8D: call    sub_8AA350
0x627B92: test    al, al
0x627B94: jnz     short loc_627BAB
0x627B96: push    esi
0x627B97: mov     ecx, edi
0x627B99: call    sub_4D7E30
0x627B9E: fcomp   qword ptr ds:0A37478h
0x627BA4: fnstsw  ax
0x627BA6: test    ah, 5
0x627BA9: jp      short loc_627BCC
0x627BAB: lea     edx, [esp+4Ch+var_3C]
0x627BAF: push    edx
0x627BB0: lea     eax, [esp+50h+var_C]
0x627BB4: push    eax
0x627BB5: mov     ecx, edi
0x627BB7: call    sub_5E03E0
0x627BBC: mov     ecx, [eax]
0x627BBE: mov     [esi], ecx
0x627BC0: mov     edx, [eax+4]
0x627BC3: mov     [esi+4], edx
0x627BC6: mov     eax, [eax+8]
0x627BC9: mov     [esi+8], eax
0x627BCC: lea     ecx, [esp+4Ch+var_3C]
0x627BD0: push    ecx
0x627BD1: mov     ecx, esi
0x627BD3: call    sub_8AA350
0x627BD8: test    al, al
0x627BDA: jz      loc_627D41
0x627BE0: mov     edx, [ebp+0]
0x627BE3: mov     eax, [edx+174h]
0x627BE9: mov     ecx, ebp
0x627BEB: call    eax
0x627BED: mov     edx, [eax+4]
0x627BF0: mov     ecx, [eax]
0x627BF2: mov     eax, [eax+8]
0x627BF5: mov     [esp+4Ch+var_14], edx
0x627BF9: mov     edx, [edi]
0x627BFB: mov     [esp+4Ch+var_18], ecx
0x627BFF: mov     [esp+4Ch+var_10], eax
0x627C03: mov     eax, [edx+174h]
0x627C09: mov     ecx, edi
0x627C0B: call    eax
0x627C0D: fld     dword ptr ds:0B37028h
0x627C13: mov     ecx, [eax]
0x627C15: fstp    [esp+4Ch+arg_C]
0x627C19: mov     edx, [eax+4]
0x627C1C: fld     [esp+4Ch+var_18]
0x627C20: mov     eax, [eax+8]
0x627C23: mov     [esp+4Ch+var_24], ecx
0x627C27: fsub    [esp+4Ch+var_24]
0x627C2B: mov     [esp+4Ch+var_20], edx
0x627C2F: mov     [esp+4Ch+var_1C], eax
0x627C33: fstp    [esp+4Ch+var_30]
0x627C37: lea     ecx, [esp+4Ch+var_30]
0x627C3B: fld     [esp+4Ch+var_14]
0x627C3F: fsub    [esp+4Ch+var_20]
0x627C43: fstp    [esp+4Ch+var_2C]
0x627C47: fld     [esp+4Ch+var_10]
0x627C4B: fsub    [esp+4Ch+var_1C]
0x627C4F: fstp    [esp+4Ch+var_28]
0x627C53: call    sub_43F350
0x627C58: fstp    st
0x627C5A: fld     [esp+4Ch+var_30]
0x627C5E: fld     [esp+4Ch+arg_C]
0x627C62: fld     st
0x627C64: fmulp   st(2), st
0x627C66: fxch    st(1)
0x627C68: fstp    [esp+4Ch+var_18]
0x627C6C: fld     [esp+4Ch+var_2C]
0x627C70: fmul    st, st(1)
0x627C72: fstp    [esp+4Ch+var_14]
0x627C76: fmul    [esp+4Ch+var_28]
0x627C7A: fstp    [esp+4Ch+var_10]
0x627C7E: fld     [esp+4Ch+var_18]
0x627C82: fadd    [esp+4Ch+var_24]
0x627C86: fstp    [esp+4Ch+var_C]
0x627C8A: mov     ecx, [esp+4Ch+var_C]
0x627C8E: fld     [esp+4Ch+var_14]
0x627C92: mov     [esp+4Ch+var_30], ecx
0x627C96: fadd    [esp+4Ch+var_20]
0x627C9A: mov     ecx, edi; this
0x627C9C: fstp    [esp+4Ch+var_8]
0x627CA0: mov     edx, [esp+4Ch+var_8]
0x627CA4: fld     [esp+4Ch+var_10]
0x627CA8: mov     [esp+4Ch+var_2C], edx
0x627CAC: fadd    [esp+4Ch+var_1C]
0x627CB0: fstp    [esp+4Ch+var_4]
0x627CB4: mov     eax, [esp+4Ch+var_4]
0x627CB8: mov     [esp+4Ch+var_28], eax
0x627CBC: call    TESObjectREFR_GetParentCell
0x627CC1: mov     ecx, [esp+4Ch+var_30]
0x627CC5: mov     edx, [esp+4Ch+var_2C]
0x627CC9: push    0; int
0x627CCB: push    0; float
0x627CCD: push    0; float
0x627CCF: push    eax; int
0x627CD0: sub     esp, 0Ch
0x627CD3: mov     eax, esp
0x627CD5: mov     [eax], ecx
0x627CD7: mov     ecx, [esp+68h+var_28]
0x627CDB: mov     [eax+4], edx
0x627CDE: lea     edx, [esp+68h+var_C]
0x627CE2: mov     [eax+8], ecx
0x627CE5: push    edx; int
0x627CE6: mov     ecx, edi
0x627CE8: call    sub_5E2E20
0x627CED: mov     ecx, [eax]
0x627CEF: mov     [esi], ecx
0x627CF1: mov     edx, [eax+4]
0x627CF4: mov     [esi+4], edx
0x627CF7: mov     eax, [eax+8]
0x627CFA: lea     ecx, [esp+4Ch+var_30]
0x627CFE: push    ecx
0x627CFF: mov     ecx, esi
0x627D01: mov     [esi+8], eax
0x627D04: call    sub_8AA350
0x627D09: test    al, al
0x627D0B: jz      short loc_627D41
0x627D0D: lea     edx, [esp+4Ch+var_30]
0x627D11: push    edx
0x627D12: lea     eax, [esp+50h+var_C]
0x627D16: push    eax
0x627D17: mov     ecx, edi
0x627D19: call    sub_5E03E0
0x627D1E: jmp     short loc_627D31
0x627D20: mov     ecx, [esp+4Ch+arg_4]
0x627D24: push    ecx
0x627D25: lea     edx, [esp+50h+var_C]
0x627D29: push    edx
0x627D2A: mov     ecx, ebx
0x627D2C: call    sub_566B30
0x627D31: mov     ecx, [eax]
0x627D33: mov     [esi], ecx
0x627D35: mov     edx, [eax+4]
0x627D38: mov     [esi+4], edx
0x627D3B: mov     eax, [eax+8]
0x627D3E: mov     [esi+8], eax
0x627D41: mov     ecx, [esi]
0x627D43: mov     [ebx+40h], ecx
0x627D46: mov     edx, [esi+4]
0x627D49: mov     [ebx+44h], edx
0x627D4C: mov     eax, [esi+8]
0x627D4F: pop     edi
0x627D50: mov     [ebx+48h], eax
0x627D53: mov     eax, esi
0x627D55: pop     esi
0x627D56: pop     ebp
0x627D57: pop     ebx
0x627D58: add     esp, 3Ch
0x627D5B: retn    10h
