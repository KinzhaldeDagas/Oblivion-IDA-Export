0x5E6E00: push    esi
0x5E6E01: mov     esi, ecx
0x5E6E03: cmp     dword ptr [esi+58h], 0
0x5E6E07: jz      loc_5E6F9B
0x5E6E0D: mov     eax, [esi]
0x5E6E0F: mov     edx, [eax+198h]
0x5E6E15: push    0
0x5E6E17: call    edx
0x5E6E19: test    al, al
0x5E6E1B: jnz     loc_5E6F9B
0x5E6E21: mov     eax, [esi+58h]
0x5E6E24: push    edi; a7
0x5E6E25: mov     edi, [eax+8]
0x5E6E28: test    edi, edi
0x5E6E2A: jz      loc_5E6F9A
0x5E6E30: mov     ecx, esi; this
0x5E6E32: call    TESObjectREFR_GetParentCell
0x5E6E37: test    eax, eax
0x5E6E39: jz      loc_5E6F9A
0x5E6E3F: mov     ecx, edi
0x5E6E41: call    sub_567770
0x5E6E46: test    al, al
0x5E6E48: jnz     loc_5E6F9A
0x5E6E4E: mov     ecx, edi
0x5E6E50: call    sub_4BF150
0x5E6E55: test    al, al
0x5E6E57: jz      short loc_5E6E61
0x5E6E59: push    esi
0x5E6E5A: push    offset sub_645A30
0x5E6E5F: jmp     short loc_5E6E72
0x5E6E61: mov     ecx, edi
0x5E6E63: call    sub_565DA0
0x5E6E68: test    al, al
0x5E6E6A: jz      short loc_5E6EB3
0x5E6E6C: push    esi; a7
0x5E6E6D: push    offset sub_645AF0; a6
0x5E6E72: mov     edx, [esi]
0x5E6E74: fld     dword ptr ds:0A5B6C0h
0x5E6E7A: mov     eax, [edx+174h]
0x5E6E80: push    ecx
0x5E6E81: mov     ecx, esi
0x5E6E83: fstp    [esp+14h+a5]; a5
0x5E6E86: call    eax
0x5E6E88: fld     dword ptr ds:0A5B6C0h
0x5E6E8E: mov     edx, [esi]
0x5E6E90: push    eax; a4
0x5E6E91: mov     eax, [edx+174h]
0x5E6E97: push    ecx
0x5E6E98: mov     ecx, esi
0x5E6E9A: fstp    [esp+1Ch+a3]; a3
0x5E6E9D: call    eax
0x5E6E9F: push    eax; a2
0x5E6EA0: mov     ecx, esi; this
0x5E6EA2: call    TESObjectREFR_GetParentCell
0x5E6EA7: mov     ecx, ds:0B33A98h
0x5E6EAD: push    eax; a1
0x5E6EAE: call    sub_446B90
0x5E6EB3: fld     dword ptr ds:0A30634h
0x5E6EB9: push    ecx
0x5E6EBA: fstp    [esp+0Ch+var_C]; float
0x5E6EBD: push    0; char
0x5E6EBF: push    esi; int
0x5E6EC0: mov     ecx, edi
0x5E6EC2: call    sub_566DC0
0x5E6EC7: test    al, al
0x5E6EC9: jz      loc_5E6F9A
0x5E6ECF: mov     ecx, [esi+58h]
0x5E6ED2: mov     edx, [ecx]
0x5E6ED4: mov     eax, [edx+140h]
0x5E6EDA: call    eax
0x5E6EDC: test    al, al
0x5E6EDE: jnz     loc_5E6F9A
0x5E6EE4: mov     ecx, edi
0x5E6EE6: call    sub_565DD0
0x5E6EEB: test    al, al
0x5E6EED: jz      short loc_5E6F48
0x5E6EEF: mov     edx, [esi]
0x5E6EF1: fld     dword ptr ds:0A5B6C0h
0x5E6EF7: mov     eax, [edx+174h]
0x5E6EFD: push    esi; a6
0x5E6EFE: push    offset sub_645A30; a5
0x5E6F03: push    ecx
0x5E6F04: mov     ecx, esi
0x5E6F06: fstp    [esp+14h+a5]
0x5E6F09: call    eax
0x5E6F0B: fld     dword ptr ds:0A5B6C0h
0x5E6F11: mov     edx, [esi]
0x5E6F13: push    eax; a4
0x5E6F14: mov     eax, [edx+174h]
0x5E6F1A: push    ecx
0x5E6F1B: mov     ecx, esi
0x5E6F1D: fstp    [esp+18h+var_18]; a3
0x5E6F20: call    eax
0x5E6F22: push    eax; a2
0x5E6F23: mov     ecx, esi; this
0x5E6F25: call    TESObjectREFR_GetParentCell
0x5E6F2A: mov     ecx, ds:0B33A98h
0x5E6F30: push    eax; a1
0x5E6F31: call    sub_446B90
0x5E6F36: mov     ecx, [esi+58h]
0x5E6F39: mov     edx, [ecx]
0x5E6F3B: mov     eax, [edx+144h]
0x5E6F41: push    1
0x5E6F43: call    eax
0x5E6F45: pop     edi
0x5E6F46: pop     esi
0x5E6F47: retn
0x5E6F48: mov     ecx, edi
0x5E6F4A: call    sub_565DE0
0x5E6F4F: test    al, al
0x5E6F51: jz      short loc_5E6F9A
0x5E6F53: mov     edx, [esi]
0x5E6F55: fld     dword ptr ds:0A5B6C0h
0x5E6F5B: mov     eax, [edx+174h]
0x5E6F61: push    esi; a7
0x5E6F62: push    offset sub_645AF0; a6
0x5E6F67: push    ecx
0x5E6F68: mov     ecx, esi
0x5E6F6A: fstp    [esp+14h+a5]; a5
0x5E6F6D: call    eax
0x5E6F6F: fld     dword ptr ds:0A5B6C0h
0x5E6F75: mov     edx, [esi]
0x5E6F77: push    eax; a4
0x5E6F78: mov     eax, [edx+174h]
0x5E6F7E: push    ecx
0x5E6F7F: mov     ecx, esi
0x5E6F81: fstp    [esp+1Ch+a3]; a3
0x5E6F84: call    eax
0x5E6F86: push    eax; a2
0x5E6F87: mov     ecx, esi; this
0x5E6F89: call    TESObjectREFR_GetParentCell
0x5E6F8E: mov     ecx, ds:0B33A98h
0x5E6F94: push    eax; a1
0x5E6F95: call    sub_446B90
0x5E6F9A: pop     edi
0x5E6F9B: pop     esi
0x5E6F9C: retn
