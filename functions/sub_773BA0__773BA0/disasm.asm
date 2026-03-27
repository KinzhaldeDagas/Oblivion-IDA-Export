0x773BA0: sub     esp, 8
0x773BA3: push    ebx
0x773BA4: push    esi
0x773BA5: push    edi
0x773BA6: mov     edi, [esp+14h+arg_0]
0x773BAA: mov     ebx, [edi+4]
0x773BAD: call    sub_71B280
0x773BB2: cmp     dword ptr [edi+8], 0
0x773BB6: mov     esi, eax
0x773BB8: jz      short loc_773BC5
0x773BBA: pop     edi
0x773BBB: pop     esi
0x773BBC: xor     eax, eax
0x773BBE: pop     ebx
0x773BBF: add     esp, 8
0x773BC2: retn    0Ch
0x773BC5: mov     ecx, [esp+14h+arg_4]
0x773BC9: mov     eax, [ecx]
0x773BCB: cmp     eax, 4
0x773BCE: push    ebp
0x773BCF: jnz     loc_773C5F
0x773BD5: cmp     ebx, 9
0x773BD8: jz      short loc_773C1F
0x773BDA: cmp     ebx, 1
0x773BDD: jz      short loc_773C1F
0x773BDF: mov     ebp, [esp+18h+arg_8]
0x773BE3: mov     ebx, [ebp+2Ch]
0x773BE6: test    ebx, ebx
0x773BE8: jz      short loc_773BFD
0x773BEA: mov     eax, [esi]
0x773BEC: mov     edx, [eax+0Ch]
0x773BEF: push    ebx
0x773BF0: push    edi
0x773BF1: mov     ecx, esi
0x773BF3: call    edx
0x773BF5: test    al, al
0x773BF7: jnz     loc_7741FF
0x773BFD: mov     ebx, [ebp+34h]
0x773C00: test    ebx, ebx
0x773C02: jz      short loc_773C17
0x773C04: mov     eax, [esi]
0x773C06: mov     edx, [eax+0Ch]
0x773C09: push    ebx
0x773C0A: push    edi
0x773C0B: mov     ecx, esi
0x773C0D: call    edx
0x773C0F: test    al, al
0x773C11: jnz     loc_7741FF
0x773C17: mov     ebx, [ebp+30h]
0x773C1A: jmp     loc_774177
0x773C1F: mov     ebp, [esp+18h+arg_8]
0x773C23: mov     ebx, [ebp+34h]
0x773C26: test    ebx, ebx
0x773C28: jz      short loc_773C3D
0x773C2A: mov     eax, [esi]
0x773C2C: mov     edx, [eax+0Ch]
0x773C2F: push    ebx
0x773C30: push    edi
0x773C31: mov     ecx, esi
0x773C33: call    edx
0x773C35: test    al, al
0x773C37: jnz     loc_7741FF
0x773C3D: mov     ebx, [ebp+30h]
0x773C40: test    ebx, ebx
0x773C42: jz      short loc_773C57
0x773C44: mov     eax, [esi]
0x773C46: mov     edx, [eax+0Ch]
0x773C49: push    ebx
0x773C4A: push    edi
0x773C4B: mov     ecx, esi
0x773C4D: call    edx
0x773C4F: test    al, al
0x773C51: jnz     loc_7741FF
0x773C57: mov     ebx, [ebp+2Ch]
0x773C5A: jmp     loc_774177
0x773C5F: cmp     ebx, 0Eh; switch 15 cases
0x773C62: ja      def_773C73; jumptable 00773C73 default case, cases 7,10
0x773C68: movzx   edx, ds:byte_77423C[ebx]
0x773C6F: mov     ebx, [esp+18h+arg_8]
0x773C73: jmp     ds:jpt_773C73[edx*4]; switch jump
0x773C7A: cmp     eax, 3; jumptable 00773C73 cases 0,2
0x773C7D: jnz     short loc_773CD1
0x773C7F: mov     ebp, [ebx+20h]
0x773C82: test    ebp, ebp
0x773C84: jz      short loc_773C99
0x773C86: mov     eax, [esi]
0x773C88: mov     edx, [eax+0Ch]
0x773C8B: push    ebp
0x773C8C: push    edi
0x773C8D: mov     ecx, esi
0x773C8F: call    edx
0x773C91: test    al, al
0x773C93: jnz     loc_7740AA
0x773C99: mov     ebp, [ebx+24h]
0x773C9C: test    ebp, ebp
0x773C9E: jz      short loc_773CB3
0x773CA0: mov     eax, [esi]
0x773CA2: mov     edx, [eax+0Ch]
0x773CA5: push    ebp
0x773CA6: push    edi
0x773CA7: mov     ecx, esi
0x773CA9: call    edx
0x773CAB: test    al, al
0x773CAD: jnz     loc_7740AA
0x773CB3: mov     ebp, [ebx+28h]
0x773CB6: test    ebp, ebp
0x773CB8: jz      short loc_773CCD
0x773CBA: mov     eax, [esi]
0x773CBC: mov     edx, [eax+0Ch]
0x773CBF: push    ebp
0x773CC0: push    edi
0x773CC1: mov     ecx, esi
0x773CC3: call    edx
0x773CC5: test    al, al
0x773CC7: jnz     loc_7740AA
0x773CCD: mov     ecx, [esp+18h+arg_4]
0x773CD1: cmp     dword ptr [ecx], 1
0x773CD4: jnz     short loc_773D49
0x773CD6: mov     ebp, [ebx+4]
0x773CD9: test    ebp, ebp
0x773CDB: jz      short loc_773CF0
0x773CDD: mov     eax, [esi]
0x773CDF: mov     edx, [eax+0Ch]
0x773CE2: push    ebp
0x773CE3: push    edi
0x773CE4: mov     ecx, esi
0x773CE6: call    edx
0x773CE8: test    al, al
0x773CEA: jnz     loc_7740AA
0x773CF0: mov     ebp, [ebx]
0x773CF2: test    ebp, ebp
0x773CF4: jz      short loc_773D09
0x773CF6: mov     eax, [esi]
0x773CF8: mov     edx, [eax+0Ch]
0x773CFB: push    ebp
0x773CFC: push    edi
0x773CFD: mov     ecx, esi
0x773CFF: call    edx
0x773D01: test    al, al
0x773D03: jnz     loc_7740AA
0x773D09: mov     ebp, [ebx+8]
0x773D0C: test    ebp, ebp
0x773D0E: jz      short loc_773D23
0x773D10: mov     eax, [esi]
0x773D12: mov     edx, [eax+0Ch]
0x773D15: push    ebp
0x773D16: push    edi
0x773D17: mov     ecx, esi
0x773D19: call    edx
0x773D1B: test    al, al
0x773D1D: jnz     loc_7740AA
0x773D23: mov     ebp, [ebx+14h]
0x773D26: test    ebp, ebp
0x773D28: jz      loc_773DB0
0x773D2E: mov     eax, [esi]
0x773D30: mov     edx, [eax+0Ch]
0x773D33: push    ebp
0x773D34: push    edi
0x773D35: mov     ecx, esi
0x773D37: call    edx
0x773D39: test    al, al
0x773D3B: jz      short loc_773DB0
0x773D3D: mov     eax, ebp
0x773D3F: pop     ebp
0x773D40: pop     edi
0x773D41: pop     esi
0x773D42: pop     ebx
0x773D43: add     esp, 8
0x773D46: retn    0Ch
0x773D49: mov     ebp, [ebx+8]
0x773D4C: test    ebp, ebp
0x773D4E: jz      short loc_773D63
0x773D50: mov     eax, [esi]
0x773D52: mov     edx, [eax+0Ch]
0x773D55: push    ebp
0x773D56: push    edi
0x773D57: mov     ecx, esi
0x773D59: call    edx
0x773D5B: test    al, al
0x773D5D: jnz     loc_7740AA
0x773D63: mov     ebp, [ebx+14h]
0x773D66: test    ebp, ebp
0x773D68: jz      short loc_773D7D
0x773D6A: mov     eax, [esi]
0x773D6C: mov     edx, [eax+0Ch]
0x773D6F: push    ebp
0x773D70: push    edi
0x773D71: mov     ecx, esi
0x773D73: call    edx
0x773D75: test    al, al
0x773D77: jnz     loc_7740AA
0x773D7D: mov     ebp, [ebx+4]
0x773D80: test    ebp, ebp
0x773D82: jz      short loc_773D97
0x773D84: mov     eax, [esi]
0x773D86: mov     edx, [eax+0Ch]
0x773D89: push    ebp
0x773D8A: push    edi
0x773D8B: mov     ecx, esi
0x773D8D: call    edx
0x773D8F: test    al, al
0x773D91: jnz     loc_7740AA
0x773D97: mov     ebp, [ebx]
0x773D99: test    ebp, ebp
0x773D9B: jz      short loc_773DB0
0x773D9D: mov     eax, [esi]
0x773D9F: mov     edx, [eax+0Ch]
0x773DA2: push    ebp
0x773DA3: push    edi
0x773DA4: mov     ecx, esi
0x773DA6: call    edx
0x773DA8: test    al, al
0x773DAA: jnz     loc_7740AA
0x773DB0: mov     ebp, [ebx+0Ch]
0x773DB3: test    ebp, ebp
0x773DB5: jz      short loc_773DCA
0x773DB7: mov     eax, [esi]
0x773DB9: mov     edx, [eax+0Ch]
0x773DBC: push    ebp
0x773DBD: push    edi
0x773DBE: mov     ecx, esi
0x773DC0: call    edx
0x773DC2: test    al, al
0x773DC4: jnz     loc_7740AA
0x773DCA: mov     ebx, [ebx+10h]
0x773DCD: jmp     loc_774177
0x773DD2: cmp     eax, 1; jumptable 00773C73 case 4
0x773DD5: jz      loc_773E7C; jumptable 00773C73 cases 1,3,12-14
0x773DDB: cmp     eax, 2
0x773DDE: jz      loc_773E7C; jumptable 00773C73 cases 1,3,12-14
0x773DE4: mov     ebp, [ebx+20h]
0x773DE7: jmp     short loc_773E43
0x773DE9: cmp     eax, 1; jumptable 00773C73 case 5
0x773DEC: jz      loc_773E7C; jumptable 00773C73 cases 1,3,12-14
0x773DF2: cmp     eax, 2
0x773DF5: jz      loc_773E7C; jumptable 00773C73 cases 1,3,12-14
0x773DFB: mov     ebp, [ebx+24h]
0x773DFE: jmp     short loc_773E43
0x773E00: cmp     eax, 1; jumptable 00773C73 case 6
0x773E03: jz      short loc_773E7C; jumptable 00773C73 cases 1,3,12-14
0x773E05: cmp     eax, 2
0x773E08: jz      short loc_773E7C; jumptable 00773C73 cases 1,3,12-14
0x773E0A: mov     ebp, [ebx+28h]
0x773E0D: jmp     short loc_773E43
0x773E0F: mov     ebp, ebx; jumptable 00773C73 case 8
0x773E11: jmp     loc_773BE3
0x773E16: mov     ebp, ebx; jumptable 00773C73 case 9
0x773E18: mov     ebx, [ebp+30h]
0x773E1B: test    ebx, ebx
0x773E1D: jz      short loc_773E32
0x773E1F: mov     eax, [esi]
0x773E21: mov     edx, [eax+0Ch]
0x773E24: push    ebx
0x773E25: push    edi
0x773E26: mov     ecx, esi
0x773E28: call    edx
0x773E2A: test    al, al
0x773E2C: jnz     loc_7741FF
0x773E32: mov     ebx, [ebp+34h]
0x773E35: jmp     loc_773C40
0x773E3A: cmp     dword ptr [ecx+4], 2; jumptable 00773C73 case 11
0x773E3E: jnz     short loc_773E62
0x773E40: mov     ebp, [ebx+3Ch]
0x773E43: test    ebp, ebp
0x773E45: jz      short loc_773E7C; jumptable 00773C73 cases 1,3,12-14
0x773E47: mov     eax, [esi]
0x773E49: mov     edx, [eax+0Ch]
0x773E4C: push    ebp
0x773E4D: push    edi
0x773E4E: mov     ecx, esi
0x773E50: call    edx
0x773E52: test    al, al
0x773E54: jz      short loc_773E7C; jumptable 00773C73 cases 1,3,12-14
0x773E56: mov     eax, ebp
0x773E58: pop     ebp
0x773E59: pop     edi
0x773E5A: pop     esi
0x773E5B: pop     ebx
0x773E5C: add     esp, 8
0x773E5F: retn    0Ch
0x773E62: mov     ebp, [ebx+38h]
0x773E65: test    ebp, ebp
0x773E67: jz      short loc_773E7C; jumptable 00773C73 cases 1,3,12-14
0x773E69: mov     eax, [esi]
0x773E6B: mov     edx, [eax+0Ch]
0x773E6E: push    ebp
0x773E6F: push    edi
0x773E70: mov     ecx, esi
0x773E72: call    edx
0x773E74: test    al, al
0x773E76: jnz     loc_7740AA
0x773E7C: lea     eax, [esp+18h+arg_0]; jumptable 00773C73 cases 1,3,12-14
0x773E80: push    eax
0x773E81: lea     ecx, [esp+1Ch+arg_8]
0x773E85: push    ecx
0x773E86: lea     edx, [esp+20h+var_8]
0x773E8A: push    edx
0x773E8B: lea     eax, [esp+24h+var_4]
0x773E8F: push    eax
0x773E90: push    0
0x773E92: mov     ecx, edi
0x773E94: mov     [esp+2Ch+var_4], 13h
0x773E9C: mov     [esp+2Ch+var_8], 5
0x773EA4: mov     byte ptr [esp+2Ch+arg_8], 0
0x773EA9: call    sub_773870
0x773EAE: test    al, al
0x773EB0: jz      loc_774053
0x773EB6: mov     eax, [esp+18h+var_8]
0x773EBA: cmp     eax, 2
0x773EBD: jz      short loc_773EC8
0x773EBF: cmp     eax, 1
0x773EC2: jnz     loc_774053
0x773EC8: mov     ecx, edi
0x773ECA: call    sub_7738C0
0x773ECF: mov     cl, byte ptr [esp+18h+arg_8]
0x773ED3: cmp     cl, 10h
0x773ED6: mov     [esp+18h+arg_0], eax
0x773EDA: jnz     loc_773F9A
0x773EE0: cmp     eax, 2
0x773EE3: jnb     short loc_773F1D
0x773EE5: mov     ebp, [ebx+40h]
0x773EE8: test    ebp, ebp
0x773EEA: jz      short loc_773EFF
0x773EEC: mov     edx, [esi]
0x773EEE: mov     eax, [edx+0Ch]
0x773EF1: push    ebp
0x773EF2: push    edi
0x773EF3: mov     ecx, esi
0x773EF5: call    eax
0x773EF7: test    al, al
0x773EF9: jnz     loc_7740AA
0x773EFF: mov     ebp, [ebx+4Ch]
0x773F02: test    ebp, ebp
0x773F04: jz      short loc_773F19
0x773F06: mov     edx, [esi]
0x773F08: mov     eax, [edx+0Ch]
0x773F0B: push    ebp
0x773F0C: push    edi
0x773F0D: mov     ecx, esi
0x773F0F: call    eax
0x773F11: test    al, al
0x773F13: jnz     loc_7740AA
0x773F19: mov     eax, [esp+18h+arg_0]
0x773F1D: cmp     eax, 3
0x773F20: jnb     short loc_773F56
0x773F22: mov     ebp, [ebx+44h]
0x773F25: test    ebp, ebp
0x773F27: jz      short loc_773F3C
0x773F29: mov     edx, [esi]
0x773F2B: mov     eax, [edx+0Ch]
0x773F2E: push    ebp
0x773F2F: push    edi
0x773F30: mov     ecx, esi
0x773F32: call    eax
0x773F34: test    al, al
0x773F36: jnz     loc_7740AA
0x773F3C: mov     ebp, [ebx+50h]
0x773F3F: test    ebp, ebp
0x773F41: jz      short loc_773F56
0x773F43: mov     edx, [esi]
0x773F45: mov     eax, [edx+0Ch]
0x773F48: push    ebp
0x773F49: push    edi
0x773F4A: mov     ecx, esi
0x773F4C: call    eax
0x773F4E: test    al, al
0x773F50: jnz     loc_7740AA
0x773F56: mov     ebp, [ebx+48h]
0x773F59: test    ebp, ebp
0x773F5B: jz      short loc_773F70
0x773F5D: mov     edx, [esi]
0x773F5F: mov     eax, [edx+0Ch]
0x773F62: push    ebp
0x773F63: push    edi
0x773F64: mov     ecx, esi
0x773F66: call    eax
0x773F68: test    al, al
0x773F6A: jnz     loc_7740AA
0x773F70: mov     ebp, [ebx+54h]
0x773F73: test    ebp, ebp
0x773F75: jz      loc_774053
0x773F7B: mov     edx, [esi]
0x773F7D: mov     eax, [edx+0Ch]
0x773F80: push    ebp
0x773F81: push    edi
0x773F82: mov     ecx, esi
0x773F84: call    eax
0x773F86: test    al, al
0x773F88: jz      loc_774053
0x773F8E: mov     eax, ebp
0x773F90: pop     ebp
0x773F91: pop     edi
0x773F92: pop     esi
0x773F93: pop     ebx
0x773F94: add     esp, 8
0x773F97: retn    0Ch
0x773F9A: cmp     cl, 20h ; ' '
0x773F9D: jnz     loc_774053
0x773FA3: cmp     eax, 2
0x773FA6: jnb     short loc_773FC6
0x773FA8: mov     ebp, [ebx+4Ch]
0x773FAB: test    ebp, ebp
0x773FAD: jz      short loc_773FC2
0x773FAF: mov     edx, [esi]
0x773FB1: mov     eax, [edx+0Ch]
0x773FB4: push    ebp
0x773FB5: push    edi
0x773FB6: mov     ecx, esi
0x773FB8: call    eax
0x773FBA: test    al, al
0x773FBC: jnz     loc_7740AA
0x773FC2: mov     eax, [esp+18h+arg_0]
0x773FC6: cmp     eax, 3
0x773FC9: jnb     short loc_773FE5
0x773FCB: mov     ebp, [ebx+50h]
0x773FCE: test    ebp, ebp
0x773FD0: jz      short loc_773FE5
0x773FD2: mov     edx, [esi]
0x773FD4: mov     eax, [edx+0Ch]
0x773FD7: push    ebp
0x773FD8: push    edi
0x773FD9: mov     ecx, esi
0x773FDB: call    eax
0x773FDD: test    al, al
0x773FDF: jnz     loc_7740AA
0x773FE5: mov     ebp, [ebx+54h]
0x773FE8: test    ebp, ebp
0x773FEA: jz      short loc_773FFF
0x773FEC: mov     edx, [esi]
0x773FEE: mov     eax, [edx+0Ch]
0x773FF1: push    ebp
0x773FF2: push    edi
0x773FF3: mov     ecx, esi
0x773FF5: call    eax
0x773FF7: test    al, al
0x773FF9: jnz     loc_7740AA
0x773FFF: cmp     [esp+18h+arg_0], 2
0x774004: jnb     short loc_774020
0x774006: mov     ebp, [ebx+40h]
0x774009: test    ebp, ebp
0x77400B: jz      short loc_774020
0x77400D: mov     edx, [esi]
0x77400F: mov     eax, [edx+0Ch]
0x774012: push    ebp
0x774013: push    edi
0x774014: mov     ecx, esi
0x774016: call    eax
0x774018: test    al, al
0x77401A: jnz     loc_7740AA
0x774020: cmp     [esp+18h+arg_0], 3
0x774025: jnb     short loc_77403D
0x774027: mov     ebp, [ebx+44h]
0x77402A: test    ebp, ebp
0x77402C: jz      short loc_77403D
0x77402E: mov     edx, [esi]
0x774030: mov     eax, [edx+0Ch]
0x774033: push    ebp
0x774034: push    edi
0x774035: mov     ecx, esi
0x774037: call    eax
0x774039: test    al, al
0x77403B: jnz     short loc_7740AA
0x77403D: mov     ebp, [ebx+48h]
0x774040: test    ebp, ebp
0x774042: jz      short loc_774053
0x774044: mov     edx, [esi]
0x774046: mov     eax, [edx+0Ch]
0x774049: push    ebp
0x77404A: push    edi
0x77404B: mov     ecx, esi
0x77404D: call    eax
0x77404F: test    al, al
0x774051: jnz     short loc_7740AA
0x774053: mov     ecx, [esp+18h+arg_4]
0x774057: cmp     dword ptr [ecx], 3
0x77405A: jnz     loc_7740F8
0x774060: mov     edx, ecx
0x774062: cmp     dword ptr [edx+4], 1
0x774066: jnz     short loc_7740B6
0x774068: mov     ebp, [ebx+20h]
0x77406B: test    ebp, ebp
0x77406D: jz      short loc_77407E
0x77406F: mov     eax, [esi]
0x774071: mov     edx, [eax+0Ch]
0x774074: push    ebp
0x774075: push    edi
0x774076: mov     ecx, esi
0x774078: call    edx
0x77407A: test    al, al
0x77407C: jnz     short loc_7740AA
0x77407E: mov     ebp, [ebx+24h]
0x774081: test    ebp, ebp
0x774083: jz      short loc_774094
0x774085: mov     eax, [esi]
0x774087: mov     edx, [eax+0Ch]
0x77408A: push    ebp
0x77408B: push    edi
0x77408C: mov     ecx, esi
0x77408E: call    edx
0x774090: test    al, al
0x774092: jnz     short loc_7740AA
0x774094: mov     ebp, [ebx+28h]
0x774097: test    ebp, ebp
0x774099: jz      short loc_7740F8
0x77409B: mov     eax, [esi]
0x77409D: mov     edx, [eax+0Ch]
0x7740A0: push    ebp
0x7740A1: push    edi
0x7740A2: mov     ecx, esi
0x7740A4: call    edx
0x7740A6: test    al, al
0x7740A8: jz      short loc_7740F8
0x7740AA: mov     eax, ebp
0x7740AC: pop     ebp
0x7740AD: pop     edi
0x7740AE: pop     esi
0x7740AF: pop     ebx
0x7740B0: add     esp, 8
0x7740B3: retn    0Ch
0x7740B6: mov     ebp, [ebx+24h]
0x7740B9: test    ebp, ebp
0x7740BB: jz      short loc_7740CC
0x7740BD: mov     eax, [esi]
0x7740BF: mov     edx, [eax+0Ch]
0x7740C2: push    ebp
0x7740C3: push    edi
0x7740C4: mov     ecx, esi
0x7740C6: call    edx
0x7740C8: test    al, al
0x7740CA: jnz     short loc_7740AA
0x7740CC: mov     ebp, [ebx+28h]
0x7740CF: test    ebp, ebp
0x7740D1: jz      short loc_7740E2
0x7740D3: mov     eax, [esi]
0x7740D5: mov     edx, [eax+0Ch]
0x7740D8: push    ebp
0x7740D9: push    edi
0x7740DA: mov     ecx, esi
0x7740DC: call    edx
0x7740DE: test    al, al
0x7740E0: jnz     short loc_7740AA
0x7740E2: mov     ebp, [ebx+20h]
0x7740E5: test    ebp, ebp
0x7740E7: jz      short loc_7740F8
0x7740E9: mov     eax, [esi]
0x7740EB: mov     edx, [eax+0Ch]
0x7740EE: push    ebp
0x7740EF: push    edi
0x7740F0: mov     ecx, esi
0x7740F2: call    edx
0x7740F4: test    al, al
0x7740F6: jnz     short loc_7740AA
0x7740F8: mov     eax, [esp+18h+arg_4]
0x7740FC: cmp     dword ptr [eax], 1
0x7740FF: jnz     loc_77418C
0x774105: cmp     dword ptr [eax+4], 1
0x774109: jnz     short loc_774140
0x77410B: mov     ebp, [ebx+0Ch]
0x77410E: test    ebp, ebp
0x774110: jz      short loc_774121
0x774112: mov     eax, [esi]
0x774114: mov     edx, [eax+0Ch]
0x774117: push    ebp
0x774118: push    edi
0x774119: mov     ecx, esi
0x77411B: call    edx
0x77411D: test    al, al
0x77411F: jnz     short loc_7740AA
0x774121: mov     ebp, [ebx+10h]
0x774124: test    ebp, ebp
0x774126: jz      short loc_77413B
0x774128: mov     eax, [esi]
0x77412A: mov     edx, [eax+0Ch]
0x77412D: push    ebp
0x77412E: push    edi
0x77412F: mov     ecx, esi
0x774131: call    edx
0x774133: test    al, al
0x774135: jnz     loc_7740AA
0x77413B: mov     ebx, [ebx+14h]
0x77413E: jmp     short loc_774177
0x774140: mov     ebp, [ebx+10h]
0x774143: test    ebp, ebp
0x774145: jz      short loc_77415A
0x774147: mov     eax, [esi]
0x774149: mov     edx, [eax+0Ch]
0x77414C: push    ebp
0x77414D: push    edi
0x77414E: mov     ecx, esi
0x774150: call    edx
0x774152: test    al, al
0x774154: jnz     loc_7740AA
0x77415A: mov     ebp, [ebx+14h]
0x77415D: test    ebp, ebp
0x77415F: jz      short loc_774174
0x774161: mov     eax, [esi]
0x774163: mov     edx, [eax+0Ch]
0x774166: push    ebp
0x774167: push    edi
0x774168: mov     ecx, esi
0x77416A: call    edx
0x77416C: test    al, al
0x77416E: jnz     loc_7740AA
0x774174: mov     ebx, [ebx+0Ch]
0x774177: test    ebx, ebx
0x774179: jz      def_773C73; jumptable 00773C73 default case, cases 7,10
0x77417F: mov     eax, [esi]
0x774181: mov     edx, [eax+0Ch]
0x774184: push    ebx
0x774185: push    edi
0x774186: mov     ecx, esi
0x774188: call    edx
0x77418A: jmp     short loc_7741FB
0x77418C: mov     ebp, [ebx+14h]
0x77418F: test    ebp, ebp
0x774191: jz      short loc_7741A6
0x774193: mov     eax, [esi]
0x774195: mov     edx, [eax+0Ch]
0x774198: push    ebp
0x774199: push    edi
0x77419A: mov     ecx, esi
0x77419C: call    edx
0x77419E: test    al, al
0x7741A0: jnz     loc_7740AA
0x7741A6: mov     eax, [esp+18h+arg_4]
0x7741AA: cmp     dword ptr [eax+4], 1
0x7741AE: jnz     short loc_7741CF
0x7741B0: mov     ebp, [ebx+0Ch]
0x7741B3: test    ebp, ebp
0x7741B5: jz      short loc_7741CA
0x7741B7: mov     edx, [esi]
0x7741B9: mov     eax, [edx+0Ch]
0x7741BC: push    ebp
0x7741BD: push    edi
0x7741BE: mov     ecx, esi
0x7741C0: call    eax
0x7741C2: test    al, al
0x7741C4: jnz     loc_7740AA
0x7741CA: mov     ebx, [ebx+10h]
0x7741CD: jmp     short loc_7741EC
0x7741CF: mov     ebp, [ebx+10h]
0x7741D2: test    ebp, ebp
0x7741D4: jz      short loc_7741E9
0x7741D6: mov     edx, [esi]
0x7741D8: mov     eax, [edx+0Ch]
0x7741DB: push    ebp
0x7741DC: push    edi
0x7741DD: mov     ecx, esi
0x7741DF: call    eax
0x7741E1: test    al, al
0x7741E3: jnz     loc_7740AA
0x7741E9: mov     ebx, [ebx+0Ch]
0x7741EC: test    ebx, ebx
0x7741EE: jz      short def_773C73; jumptable 00773C73 default case, cases 7,10
0x7741F0: mov     edx, [esi]
0x7741F2: mov     eax, [edx+0Ch]
0x7741F5: push    ebx
0x7741F6: push    edi
0x7741F7: mov     ecx, esi
0x7741F9: call    eax
0x7741FB: test    al, al
0x7741FD: jz      short def_773C73; jumptable 00773C73 default case, cases 7,10
0x7741FF: pop     ebp
0x774200: pop     edi
0x774201: pop     esi
0x774202: mov     eax, ebx
0x774204: pop     ebx
0x774205: add     esp, 8
0x774208: retn    0Ch
0x77420B: pop     ebp; jumptable 00773C73 default case, cases 7,10
0x77420C: pop     edi
0x77420D: pop     esi
0x77420E: xor     eax, eax
0x774210: pop     ebx
0x774211: add     esp, 8
0x774214: retn    0Ch
