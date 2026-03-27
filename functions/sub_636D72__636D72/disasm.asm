0x636D72: test    cl, 1
0x636D75: jz      short loc_636D90
0x636D77: mov     ecx, ebx
0x636D79: call    sub_565DF0
0x636D7E: test    al, al
0x636D80: jnz     short loc_636D90
0x636D82: cmp     dword ptr [ebx+28h], 0
0x636D86: jnz     short loc_636D90
0x636D88: fldz
0x636D8A: fstp    dword ptr [esi+1ACh]
0x636D90: mov     ecx, ebx
0x636D92: call    sub_565DF0
0x636D97: test    al, al
0x636D99: jz      short loc_636DC2
0x636D9B: lea     edx, [ebx+2Ch]
0x636D9E: test    edx, edx
0x636DA0: jz      short loc_636DA8
0x636DA2: cmp     dword ptr [ebx+30h], 0
0x636DA6: jnz     short loc_636DC2
0x636DA8: cmp     byte ptr [ebx+20h], 6
0x636DAC: jnz     short loc_636DC2
0x636DAE: mov     ecx, offset TimeGlobals
0x636DB3: call    TimeGlobals_GetGameDay
0x636DB8: lea     ecx, [edi+44h]
0x636DBB: push    eax
0x636DBC: push    ebx
0x636DBD: call    sub_41FFC0
0x636DC2: cmp     byte ptr [esi+84h], 0
0x636DC9: jnz     short loc_636E24
0x636DCB: mov     ecx, ebx
0x636DCD: call    sub_565DD0
0x636DD2: test    al, al
0x636DD4: jz      short loc_636E1D
0x636DD6: mov     eax, [edi]
0x636DD8: fld     dword ptr ds:0A5B6C0h
0x636DDE: mov     edx, [eax+174h]
0x636DE4: push    edi; a7
0x636DE5: push    offset sub_645A30; a6
0x636DEA: push    ecx
0x636DEB: mov     ecx, edi
0x636DED: fstp    [esp+0Ch+a5]; a5
0x636DF0: call    edx
0x636DF2: fld     dword ptr ds:0A5B6C0h
0x636DF8: push    eax; a4
0x636DF9: mov     eax, [edi]
0x636DFB: mov     edx, [eax+174h]
0x636E01: push    ecx
0x636E02: mov     ecx, edi
0x636E04: fstp    [esp+14h+a3]; a3
0x636E07: call    edx
0x636E09: push    eax; a2
0x636E0A: mov     ecx, edi; this
0x636E0C: call    TESObjectREFR_GetParentCell
0x636E11: mov     ecx, ds:0B33A98h
0x636E17: push    eax; a1
0x636E18: call    sub_446B90
0x636E1D: mov     byte ptr [esi+84h], 1
0x636E24: mov     ecx, ebx
0x636E26: call    sub_565DE0
0x636E2B: test    al, al
0x636E2D: jz      short loc_636E76
0x636E2F: mov     eax, [edi]
0x636E31: fld     dword ptr ds:0A5B6C0h
0x636E37: mov     edx, [eax+174h]
0x636E3D: push    edi; a7
0x636E3E: push    offset sub_645AF0; a6
0x636E43: push    ecx
0x636E44: mov     ecx, edi
0x636E46: fstp    [esp+0Ch+a5]; a5
0x636E49: call    edx
0x636E4B: fld     dword ptr ds:0A5B6C0h
0x636E51: push    eax; a4
0x636E52: mov     eax, [edi]
0x636E54: mov     edx, [eax+174h]
0x636E5A: push    ecx
0x636E5B: mov     ecx, edi
0x636E5D: fstp    [esp+14h+a3]; a3
0x636E60: call    edx
0x636E62: push    eax; a2
0x636E63: mov     ecx, edi; this
0x636E65: call    TESObjectREFR_GetParentCell
0x636E6A: mov     ecx, ds:0B33A98h
0x636E70: push    eax; a1
0x636E71: call    sub_446B90
0x636E76: cmp     byte ptr [esi+169h], 0
0x636E7D: jnz     loc_636FBE
0x636E83: mov     eax, [ebx+1Ch]
0x636E86: mov     ecx, eax
0x636E88: shr     ecx, 14h
0x636E8B: test    cl, 1
0x636E8E: jnz     short loc_636E9B
0x636E90: shr     eax, 15h
0x636E93: test    al, 1
0x636E95: jz      loc_636FBE
0x636E9B: mov     byte ptr [esi+169h], 1
0x636EA2: mov     edx, [ebx+1Ch]
0x636EA5: shr     edx, 14h
0x636EA8: test    dl, 1
0x636EAB: jz      loc_636F64
0x636EB1: mov     eax, [edi]
0x636EB3: mov     edx, [eax+170h]
0x636EB9: mov     ecx, edi
0x636EBB: call    edx
0x636EBD: movzx   eax, byte ptr [eax+4]
0x636EC1: xor     ebx, ebx
0x636EC3: xor     ebp, ebp
0x636EC5: sub     eax, 23h ; '#'
0x636EC8: jz      short loc_636EDF
0x636ECA: sub     eax, 1
0x636ECD: jnz     short loc_636EED
0x636ECF: mov     eax, [edi]
0x636ED1: mov     edx, [eax+170h]
0x636ED7: mov     ecx, edi
0x636ED9: call    edx
0x636EDB: mov     ebp, eax
0x636EDD: jmp     short loc_636EED
0x636EDF: mov     eax, [edi]
0x636EE1: mov     edx, [eax+170h]
0x636EE7: mov     ecx, edi
0x636EE9: call    edx
0x636EEB: mov     ebx, eax
0x636EED: mov     esi, [esi+8]
0x636EF0: test    esi, esi
0x636EF2: mov     byte ptr [esp+arg_3C], 1
0x636EF7: mov     byte ptr [esp+arg_40], 1
0x636EFC: jz      short loc_636F1E
0x636EFE: mov     esi, [esi+1Ch]
0x636F01: mov     eax, esi
0x636F03: shr     eax, 14h
0x636F06: test    al, 1
0x636F08: jz      short loc_636F0F
0x636F0A: mov     byte ptr [esp+arg_3C], 0
0x636F0F: mov     ecx, esi
0x636F11: shr     ecx, 15h
0x636F14: test    cl, 1
0x636F17: jz      short loc_636F1E
0x636F19: mov     byte ptr [esp+arg_40], 0
0x636F1E: test    ebx, ebx
0x636F20: jz      short loc_636F42
0x636F22: mov     edx, [esp+arg_40]
0x636F26: mov     eax, [esp+arg_3C]
0x636F2A: push    1; char
0x636F2C: push    0; int
0x636F2E: push    edx; int
0x636F2F: push    eax; int
0x636F30: push    edi; int
0x636F31: mov     ecx, ebx; int
0x636F33: call    sub_5227A0
0x636F38: pop     edi
0x636F39: pop     esi
0x636F3A: pop     ebp
0x636F3B: pop     ebx
0x636F3C: add     esp, 28h
0x636F3F: retn    10h
0x636F42: test    ebp, ebp
0x636F44: jz      short loc_636FBE
0x636F46: mov     ecx, [esp+arg_40]
0x636F4A: mov     edx, [esp+arg_3C]
0x636F4E: push    1
0x636F50: push    ecx
0x636F51: push    edx
0x636F52: push    edi
0x636F53: mov     ecx, ebp
0x636F55: call    sub_51E240
0x636F5A: pop     edi
0x636F5B: pop     esi
0x636F5C: pop     ebp
0x636F5D: pop     ebx
0x636F5E: add     esp, 28h
0x636F61: retn    10h
0x636F64: mov     eax, [esi]
0x636F66: mov     edx, [eax+0ECh]
0x636F6C: push    1
0x636F6E: mov     ecx, esi
0x636F70: call    edx
0x636F72: test    eax, eax
0x636F74: jz      short loc_636F8E
0x636F76: mov     ecx, [eax]
0x636F78: mov     edx, [ecx]
0x636F7A: mov     eax, [eax+8]
0x636F7D: push    0
0x636F7F: push    0
0x636F81: push    0
0x636F83: push    edx
0x636F84: push    1
0x636F86: push    eax
0x636F87: mov     ecx, edi
0x636F89: call    Actor_UnequipItem
0x636F8E: mov     edx, [esi]
0x636F90: mov     eax, [edx+0F4h]
0x636F96: push    1
0x636F98: mov     ecx, esi
0x636F9A: call    eax
0x636F9C: test    eax, eax
0x636F9E: jz      short loc_636FBE
0x636FA0: mov     ecx, [eax]
0x636FA2: mov     ecx, [ecx]
0x636FA4: mov     esi, [eax+8]
0x636FA7: push    0
0x636FA9: push    0
0x636FAB: push    0
0x636FAD: push    ecx
0x636FAE: mov     ecx, eax
0x636FB0: call    TESHealthForm_GetHealth
0x636FB5: push    eax
0x636FB6: push    esi
0x636FB7: mov     ecx, edi
0x636FB9: call    Actor_UnequipItem
0x636FBE: pop     edi
0x636FBF: pop     esi
0x636FC0: pop     ebp
0x636FC1: pop     ebx
0x636FC2: add     esp, 28h
0x636FC5: retn    10h
