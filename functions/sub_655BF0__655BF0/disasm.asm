0x655BF0: sub     esp, 14h
0x655BF3: push    ebp
0x655BF4: push    esi
0x655BF5: push    edi
0x655BF6: mov     edi, [esp+20h+arg_0]
0x655BFA: mov     eax, [edi]
0x655BFC: mov     edx, [eax+380h]
0x655C02: mov     ebp, ecx
0x655C04: mov     ecx, edi
0x655C06: call    edx
0x655C08: mov     esi, eax
0x655C0A: test    esi, esi
0x655C0C: jnz     short loc_655C19
0x655C0E: pop     edi
0x655C0F: pop     esi
0x655C10: xor     al, al
0x655C12: pop     ebp
0x655C13: add     esp, 14h
0x655C16: retn    4
0x655C19: mov     ecx, [esi+58h]
0x655C1C: test    ecx, ecx
0x655C1E: jz      short loc_655C4C
0x655C20: mov     eax, [ecx]
0x655C22: mov     edx, [eax+184h]
0x655C28: call    edx
0x655C2A: test    eax, eax
0x655C2C: jz      short loc_655C4C
0x655C2E: mov     ecx, [esi+58h]
0x655C31: mov     eax, [ecx]
0x655C33: mov     edx, [eax+184h]
0x655C39: call    edx
0x655C3B: cmp     byte ptr [eax+20h], 1Eh
0x655C3F: jnz     short loc_655C4C
0x655C41: pop     edi
0x655C42: pop     esi
0x655C43: mov     al, 1
0x655C45: pop     ebp
0x655C46: add     esp, 14h
0x655C49: retn    4
0x655C4C: mov     eax, [esi]
0x655C4E: mov     edx, [eax+164h]
0x655C54: push    ebx
0x655C55: mov     ebx, [esi+58h]
0x655C58: mov     ecx, esi
0x655C5A: call    edx
0x655C5C: mov     [esp+24h+arg_0], eax
0x655C60: mov     eax, [edi]
0x655C62: mov     edx, [eax+164h]
0x655C68: mov     ecx, edi
0x655C6A: call    edx
0x655C6C: mov     [esp+24h+var_14], eax
0x655C70: mov     eax, [esi]
0x655C72: mov     edx, [eax+154h]
0x655C78: mov     ecx, esi
0x655C7A: call    edx
0x655C7C: mov     [esp+24h+var_10], eax
0x655C80: mov     eax, [edi]
0x655C82: mov     edx, [eax+154h]
0x655C88: mov     ecx, edi
0x655C8A: call    edx
0x655C8C: cmp     [esp+24h+var_10], 0
0x655C91: jz      loc_655FB5
0x655C97: test    eax, eax
0x655C99: jz      loc_655FB5
0x655C9F: movzx   eax, byte ptr [ebp+11Dh]
0x655CA6: sub     eax, 4
0x655CA9: jz      loc_655E8A
0x655CAF: sub     eax, 1
0x655CB2: jz      short loc_655CDC
0x655CB4: mov     eax, [esi]
0x655CB6: mov     edx, [eax+38Ch]
0x655CBC: push    0
0x655CBE: mov     ecx, esi
0x655CC0: call    edx
0x655CC2: mov     eax, [edi]
0x655CC4: mov     edx, [eax+384h]
0x655CCA: push    0
0x655CCC: mov     ecx, edi
0x655CCE: call    edx
0x655CD0: pop     ebx
0x655CD1: pop     edi
0x655CD2: pop     esi
0x655CD3: xor     al, al
0x655CD5: pop     ebp
0x655CD6: add     esp, 14h
0x655CD9: retn    4
0x655CDC: mov     ecx, [esp+24h+arg_0]
0x655CE0: call    sub_4711F0
0x655CE5: test    al, al
0x655CE7: mov     ebx, [esp+24h+var_14]
0x655CEB: jz      short loc_655D38
0x655CED: push    0
0x655CEF: mov     ecx, ebx
0x655CF1: call    sub_4706E0
0x655CF6: test    eax, eax
0x655CF8: jz      short loc_655D09
0x655CFA: push    0
0x655CFC: mov     ecx, ebx
0x655CFE: call    sub_4706E0
0x655D03: cmp     dword ptr [eax+44h], 1
0x655D07: jnz     short loc_655D38
0x655D09: mov     ebx, [esp+24h+arg_0]
0x655D0D: push    esi
0x655D0E: mov     ecx, ebx
0x655D10: mov     byte ptr [ebx+0C4h], 1
0x655D17: call    sub_477E50
0x655D1C: push    0
0x655D1E: mov     ecx, edi
0x655D20: mov     byte ptr [ebx+0C4h], 1
0x655D27: call    sub_65AC20
0x655D2C: pop     ebx
0x655D2D: pop     edi
0x655D2E: pop     esi
0x655D2F: mov     al, 1
0x655D31: pop     ebp
0x655D32: add     esp, 14h
0x655D35: retn    4
0x655D38: mov     ecx, [esp+24h+arg_0]
0x655D3C: call    sub_472EA0
0x655D41: test    al, al
0x655D43: jz      loc_655FA9
0x655D49: mov     eax, [ebp+0]
0x655D4C: mov     edx, [eax+370h]
0x655D52: push    7Fh
0x655D54: push    0
0x655D56: push    0
0x655D58: push    edi
0x655D59: mov     ecx, ebp
0x655D5B: call    edx
0x655D5D: lea     eax, [esp+20h+var_8]
0x655D61: push    eax
0x655D62: mov     ecx, esi
0x655D64: call    sub_625290
0x655D69: mov     edx, [edi]
0x655D6B: mov     edx, [edx+1CCh]
0x655D71: lea     eax, [esp+20h+var_8]
0x655D75: push    eax
0x655D76: mov     ecx, edi
0x655D78: call    edx
0x655D7A: mov     eax, ds:0B3F9A8h
0x655D7F: mov     [ebx+0Ch], eax
0x655D82: mov     ecx, ds:0B3F9ACh
0x655D88: mov     [ebx+10h], ecx
0x655D8B: mov     edx, ds:0B3F9B0h
0x655D91: mov     [ebx+14h], edx
0x655D94: mov     eax, [edi]
0x655D96: mov     edx, [eax+384h]
0x655D9C: push    0
0x655D9E: mov     ecx, edi
0x655DA0: call    edx
0x655DA2: mov     eax, [esi]
0x655DA4: mov     edx, [eax+38Ch]
0x655DAA: push    0
0x655DAC: mov     ecx, esi
0x655DAE: call    edx
0x655DB0: push    0
0x655DB2: mov     ecx, esi
0x655DB4: call    sub_5E13D0
0x655DB9: mov     eax, [edi]
0x655DBB: mov     edx, [eax+164h]
0x655DC1: mov     ecx, edi
0x655DC3: call    edx
0x655DC5: test    eax, eax
0x655DC7: jz      short loc_655DDE
0x655DC9: fld     dword ptr [eax+94h]
0x655DCF: push    1; int
0x655DD1: push    0; int
0x655DD3: push    ecx
0x655DD4: mov     ecx, eax
0x655DD6: fstp    [esp+2Ch+var_2C]; float
0x655DD9: call    sub_471230
0x655DDE: mov     eax, [ebp+0]
0x655DE1: mov     edx, [eax+188h]
0x655DE7: push    1
0x655DE9: push    edi
0x655DEA: mov     ecx, ebp
0x655DEC: call    edx
0x655DEE: mov     eax, ds:0B333C4h
0x655DF3: cmp     edi, eax
0x655DF5: jnz     short loc_655E0F
0x655DF7: fldz
0x655DF9: mov     ecx, esi
0x655DFB: fstp    dword ptr [eax+61Ch]
0x655E01: mov     eax, [esi]
0x655E03: mov     edx, [eax+154h]
0x655E09: call    edx
0x655E0B: mov     ecx, esi
0x655E0D: jmp     short loc_655E1D
0x655E0F: mov     eax, [edi]
0x655E11: mov     edx, [eax+154h]
0x655E17: mov     ecx, edi
0x655E19: call    edx
0x655E1B: mov     ecx, edi; this
0x655E1D: mov     ebx, eax
0x655E1F: call    MobileObject_GetCharProxy
0x655E24: mov     ebp, eax
0x655E26: call    sub_531D80
0x655E2B: mov     edi, eax
0x655E2D: push    edi
0x655E2E: mov     ecx, ebp
0x655E30: call    sub_5EA350
0x655E35: push    0
0x655E37: push    1
0x655E39: push    edi
0x655E3A: push    ebx
0x655E3B: call    sub_88D0E0
0x655E40: mov     ecx, [esi+58h]
0x655E43: mov     eax, [ecx]
0x655E45: mov     edx, [eax+188h]
0x655E4B: add     esp, 10h
0x655E4E: push    1
0x655E50: push    esi; float
0x655E51: call    edx
0x655E53: fld     dword ptr [esi+28h]
0x655E56: mov     eax, [esi]
0x655E58: mov     edx, [eax+174h]
0x655E5E: push    ecx
0x655E5F: mov     ecx, esi
0x655E61: fstp    [esp+2Ch+var_2C]
0x655E64: call    edx
0x655E66: push    eax; int
0x655E67: mov     ecx, esi; this
0x655E69: call    TESObjectREFR_GetParentCell
0x655E6E: push    eax; int
0x655E6F: mov     ecx, esi; this
0x655E71: call    TESObjectREFR_GetWorldSpace
0x655E76: push    eax; int
0x655E77: mov     ecx, esi
0x655E79: call    sub_4D7A20
0x655E7E: pop     ebx
0x655E7F: pop     edi
0x655E80: pop     esi
0x655E81: mov     al, 1
0x655E83: pop     ebp
0x655E84: add     esp, 14h
0x655E87: retn    4
0x655E8A: push    3Fh ; '?'
0x655E8C: mov     ecx, esi
0x655E8E: call    sub_5E05F0
0x655E93: mov     eax, [ebx]
0x655E95: mov     edx, [eax+370h]
0x655E9B: push    7Fh
0x655E9D: push    0
0x655E9F: push    5
0x655EA1: push    esi
0x655EA2: mov     ecx, ebx
0x655EA4: call    edx
0x655EA6: mov     eax, [ebp+0]
0x655EA9: mov     edx, [eax+370h]
0x655EAF: push    7Fh
0x655EB1: push    0
0x655EB3: push    5
0x655EB5: push    edi
0x655EB6: mov     ecx, ebp
0x655EB8: call    edx
0x655EBA: mov     eax, [ebp+120h]
0x655EC0: mov     ecx, ds:0B362C0h
0x655EC6: push    eax
0x655EC7: push    esi
0x655EC8: call    sub_521450
0x655ECD: mov     edx, [ebx]
0x655ECF: push    7Fh
0x655ED1: push    0
0x655ED3: push    0
0x655ED5: mov     [esp+30h+var_14], eax
0x655ED9: mov     eax, [edx+370h]
0x655EDF: push    esi
0x655EE0: mov     ecx, ebx
0x655EE2: call    eax
0x655EE4: mov     ecx, [esp+24h+var_14]
0x655EE8: test    ecx, ecx
0x655EEA: jnz     loc_655F95
0x655EF0: mov     edx, [esi]
0x655EF2: mov     eax, [edx+38Ch]
0x655EF8: push    ecx
0x655EF9: mov     ecx, esi
0x655EFB: call    eax
0x655EFD: mov     dword ptr [ebx+8], 0
0x655F04: mov     edx, [edi]
0x655F06: mov     eax, [edx+384h]
0x655F0C: push    0
0x655F0E: mov     ecx, edi
0x655F10: call    eax
0x655F12: mov     eax, [ebp+120h]
0x655F18: mov     edx, [ebp+0]
0x655F1B: mov     edx, [edx+370h]
0x655F21: push    7Fh
0x655F23: push    eax
0x655F24: push    0
0x655F26: push    edi
0x655F27: mov     ecx, ebp
0x655F29: call    edx
0x655F2B: mov     eax, ds:0B333C4h
0x655F30: cmp     edi, eax
0x655F32: jnz     short loc_655F4C
0x655F34: fldz
0x655F36: mov     ecx, esi
0x655F38: fstp    dword ptr [eax+61Ch]
0x655F3E: mov     eax, [esi]
0x655F40: mov     edx, [eax+154h]
0x655F46: call    edx
0x655F48: mov     ecx, esi
0x655F4A: jmp     short loc_655F5A
0x655F4C: mov     eax, [edi]
0x655F4E: mov     edx, [eax+154h]
0x655F54: mov     ecx, edi
0x655F56: call    edx
0x655F58: mov     ecx, edi; this
0x655F5A: mov     ebx, eax
0x655F5C: call    MobileObject_GetCharProxy
0x655F61: mov     ebp, eax
0x655F63: call    sub_531D80
0x655F68: mov     esi, eax
0x655F6A: push    esi
0x655F6B: mov     ecx, ebp
0x655F6D: call    sub_5EA350
0x655F72: push    0
0x655F74: push    1
0x655F76: push    esi
0x655F77: push    ebx
0x655F78: call    sub_88D0E0
0x655F7D: add     esp, 10h
0x655F80: push    0
0x655F82: mov     ecx, edi
0x655F84: call    sub_65AC20
0x655F89: pop     ebx
0x655F8A: pop     edi
0x655F8B: pop     esi
0x655F8C: xor     al, al
0x655F8E: pop     ebp
0x655F8F: add     esp, 14h
0x655F92: retn    4
0x655F95: call    sub_520200
0x655F9A: mov     ecx, [esp+24h+arg_0]
0x655F9E: push    eax
0x655F9F: mov     eax, [esp+28h+var_14]
0x655FA3: push    eax
0x655FA4: call    sub_475300
0x655FA9: pop     ebx
0x655FAA: pop     edi
0x655FAB: pop     esi
0x655FAC: mov     al, 1
0x655FAE: pop     ebp
0x655FAF: add     esp, 14h
0x655FB2: retn    4
0x655FB5: mov     edx, [esi]
0x655FB7: mov     eax, [edx+38Ch]
0x655FBD: push    0
0x655FBF: mov     ecx, esi
0x655FC1: call    eax
0x655FC3: mov     edx, [edi]
0x655FC5: mov     eax, [edx+384h]
0x655FCB: push    0
0x655FCD: mov     ecx, edi
0x655FCF: call    eax
0x655FD1: pop     ebx
0x655FD2: pop     edi
0x655FD3: pop     esi
0x655FD4: xor     al, al
0x655FD6: pop     ebp
0x655FD7: add     esp, 14h
0x655FDA: retn    4
