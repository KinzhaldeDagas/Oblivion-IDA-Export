0x831910: push    0FFFFFFFFh
0x831912: push    offset SEH_81DC40
0x831917: mov     eax, large fs:0
0x83191D: push    eax
0x83191E: sub     esp, 0Ch
0x831921: push    ebx
0x831922: push    ebp
0x831923: push    esi
0x831924: push    edi
0x831925: mov     eax, ds:0B30AACh
0x83192A: xor     eax, esp
0x83192C: push    eax
0x83192D: lea     eax, [esp+2Ch+var_C]
0x831931: mov     large fs:0, eax
0x831937: xor     esi, esi
0x831939: mov     [esp+2Ch+var_14], esi
0x83193D: xor     edi, edi
0x83193F: mov     [esp+2Ch+var_4], esi
0x831943: mov     [esp+2Ch+var_18], edi
0x831947: mov     eax, ds:0B45940h
0x83194C: test    eax, eax
0x83194E: mov     ebx, 1
0x831953: mov     byte ptr [esp+2Ch+var_4], bl
0x831957: jz      short loc_831966
0x831959: mov     esi, eax
0x83195B: test    esi, esi
0x83195D: mov     [esp+2Ch+var_14], esi
0x831961: jz      short loc_831966
0x831963: add     [esi+60h], ebx
0x831966: mov     eax, [esi+18h]
0x831969: cmp     eax, 4
0x83196C: jnb     loc_831B23
0x831972: lea     eax, [esp+2Ch+var_10]
0x831976: push    eax
0x831977: call    sub_772630
0x83197C: add     esp, 4
0x83197F: mov     eax, [eax]
0x831981: test    eax, eax
0x831983: jz      short loc_83198E
0x831985: mov     edi, eax
0x831987: add     [edi+5Ch], ebx
0x83198A: mov     [esp+2Ch+var_18], edi
0x83198E: mov     eax, [esp+2Ch+var_10]
0x831992: test    eax, eax
0x831994: mov     byte ptr [esp+2Ch+var_4], 1
0x831999: jz      short loc_8319AE
0x83199B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83199F: mov     ecx, eax
0x8319A1: add     eax, 5Ch ; '\'
0x8319A4: cmp     dword ptr [eax], 0
0x8319A7: jnz     short loc_8319AE
0x8319A9: call    sub_772560
0x8319AE: push    2
0x8319B0: push    ebx
0x8319B1: push    0
0x8319B3: push    edi
0x8319B4: call    sub_801110
0x8319B9: add     esp, 10h
0x8319BC: push    edi; a3
0x8319BD: push    0; a2
0x8319BF: mov     ecx, esi; this
0x8319C1: call    sub_760010
0x8319C6: lea     ecx, [esp+2Ch+var_10]
0x8319CA: push    ecx
0x8319CB: call    sub_772630
0x8319D0: add     esp, 4
0x8319D3: mov     ebp, eax
0x8319D5: cmp     edi, [ebp+0]
0x8319D8: mov     byte ptr [esp+2Ch+var_4], 3
0x8319DD: jz      short loc_8319FE
0x8319DF: test    edi, edi
0x8319E1: jz      short loc_8319F0
0x8319E3: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8319E7: jnz     short loc_8319F0
0x8319E9: mov     ecx, edi
0x8319EB: call    sub_772560
0x8319F0: mov     edi, [ebp+0]
0x8319F3: test    edi, edi
0x8319F5: mov     [esp+2Ch+var_18], edi
0x8319F9: jz      short loc_8319FE
0x8319FB: add     [edi+5Ch], ebx
0x8319FE: mov     eax, [esp+2Ch+var_10]
0x831A02: test    eax, eax
0x831A04: mov     byte ptr [esp+2Ch+var_4], 1
0x831A09: jz      short loc_831A1E
0x831A0B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x831A0F: mov     ecx, eax
0x831A11: add     eax, 5Ch ; '\'
0x831A14: cmp     dword ptr [eax], 0
0x831A17: jnz     short loc_831A1E
0x831A19: call    sub_772560
0x831A1E: push    2
0x831A20: push    ebx
0x831A21: push    ebx
0x831A22: push    edi
0x831A23: call    sub_801110
0x831A28: add     esp, 10h
0x831A2B: push    edi; a3
0x831A2C: push    ebx; a2
0x831A2D: mov     ecx, esi; this
0x831A2F: call    sub_760010
0x831A34: lea     edx, [esp+2Ch+var_10]
0x831A38: push    edx
0x831A39: call    sub_772630
0x831A3E: add     esp, 4
0x831A41: mov     ebp, eax
0x831A43: cmp     edi, [ebp+0]
0x831A46: mov     byte ptr [esp+2Ch+var_4], 4
0x831A4B: jz      short loc_831A6C
0x831A4D: test    edi, edi
0x831A4F: jz      short loc_831A5E
0x831A51: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x831A55: jnz     short loc_831A5E
0x831A57: mov     ecx, edi
0x831A59: call    sub_772560
0x831A5E: mov     edi, [ebp+0]
0x831A61: test    edi, edi
0x831A63: mov     [esp+2Ch+var_18], edi
0x831A67: jz      short loc_831A6C
0x831A69: add     [edi+5Ch], ebx
0x831A6C: mov     eax, [esp+2Ch+var_10]
0x831A70: test    eax, eax
0x831A72: mov     byte ptr [esp+2Ch+var_4], 1
0x831A77: jz      short loc_831A8C
0x831A79: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x831A7D: mov     ecx, eax
0x831A7F: add     eax, 5Ch ; '\'
0x831A82: cmp     dword ptr [eax], 0
0x831A85: jnz     short loc_831A8C
0x831A87: call    sub_772560
0x831A8C: push    2
0x831A8E: push    ebx
0x831A8F: push    2
0x831A91: push    edi
0x831A92: call    sub_801110
0x831A97: add     esp, 10h
0x831A9A: push    edi; a3
0x831A9B: push    2; a2
0x831A9D: mov     ecx, esi; this
0x831A9F: call    sub_760010
0x831AA4: lea     eax, [esp+2Ch+var_10]
0x831AA8: push    eax
0x831AA9: call    sub_772630
0x831AAE: add     esp, 4
0x831AB1: mov     ebp, eax
0x831AB3: cmp     edi, [ebp+0]
0x831AB6: mov     byte ptr [esp+2Ch+var_4], 5
0x831ABB: jz      short loc_831ADC
0x831ABD: test    edi, edi
0x831ABF: jz      short loc_831ACE
0x831AC1: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x831AC5: jnz     short loc_831ACE
0x831AC7: mov     ecx, edi
0x831AC9: call    sub_772560
0x831ACE: mov     edi, [ebp+0]
0x831AD1: test    edi, edi
0x831AD3: mov     [esp+2Ch+var_18], edi
0x831AD7: jz      short loc_831ADC
0x831AD9: add     [edi+5Ch], ebx
0x831ADC: mov     eax, [esp+2Ch+var_10]
0x831AE0: test    eax, eax
0x831AE2: mov     byte ptr [esp+2Ch+var_4], 1
0x831AE7: jz      short loc_831AFC
0x831AE9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x831AED: mov     ecx, eax
0x831AEF: add     eax, 5Ch ; '\'
0x831AF2: cmp     dword ptr [eax], 0
0x831AF5: jnz     short loc_831AFC
0x831AF7: call    sub_772560
0x831AFC: mov     ecx, ds:0B43110h
0x831B02: push    ecx; a2
0x831B03: mov     ecx, edi; this
0x831B05: call    sub_76C910
0x831B0A: push    0
0x831B0C: push    3
0x831B0E: push    3
0x831B10: push    edi
0x831B11: call    sub_801110
0x831B16: add     esp, 10h
0x831B19: push    edi; a3
0x831B1A: push    3; a2
0x831B1C: mov     ecx, esi; this
0x831B1E: call    sub_760010
0x831B23: mov     eax, ds:0B453D0h
0x831B28: mov     ebp, [esi+58h]
0x831B2B: cmp     ebp, eax
0x831B2D: mov     ebx, eax
0x831B2F: jz      short loc_831B63
0x831B31: test    ebp, ebp
0x831B33: jz      short loc_831B52
0x831B35: lea     edx, [ebp+4]
0x831B38: push    edx; lpAddend
0x831B39: call    dword ptr ds:0A2807Ch
0x831B3F: test    eax, eax
0x831B41: jnz     short loc_831B52
0x831B43: test    ebp, ebp
0x831B45: jz      short loc_831B52
0x831B47: mov     eax, [ebp+0]
0x831B4A: mov     edx, [eax]
0x831B4C: push    1
0x831B4E: mov     ecx, ebp
0x831B50: call    edx
0x831B52: test    ebx, ebx
0x831B54: mov     [esi+58h], ebx
0x831B57: jz      short loc_831B63
0x831B59: add     ebx, 4
0x831B5C: push    ebx; lpAddend
0x831B5D: call    dword ptr ds:0A28078h
0x831B63: mov     eax, ds:0B451D0h
0x831B68: mov     ebp, [esi+44h]
0x831B6B: cmp     ebp, eax
0x831B6D: mov     ebx, eax
0x831B6F: jz      short loc_831BA3
0x831B71: test    ebp, ebp
0x831B73: jz      short loc_831B92
0x831B75: lea     eax, [ebp+4]
0x831B78: push    eax; lpAddend
0x831B79: call    dword ptr ds:0A2807Ch
0x831B7F: test    eax, eax
0x831B81: jnz     short loc_831B92
0x831B83: test    ebp, ebp
0x831B85: jz      short loc_831B92
0x831B87: mov     edx, [ebp+0]
0x831B8A: mov     eax, [edx]
0x831B8C: push    1
0x831B8E: mov     ecx, ebp
0x831B90: call    eax
0x831B92: test    ebx, ebx
0x831B94: mov     [esi+44h], ebx
0x831B97: jz      short loc_831BA3
0x831B99: add     ebx, 4
0x831B9C: push    ebx; lpAddend
0x831B9D: call    dword ptr ds:0A28078h
0x831BA3: cmp     dword ptr [esi+30h], 0
0x831BA7: jnz     short loc_831BB1
0x831BA9: call    sub_772DF0
0x831BAE: mov     [esi+30h], eax
0x831BB1: mov     ecx, [esi+30h]
0x831BB4: push    0
0x831BB6: push    1
0x831BB8: push    1Bh
0x831BBA: call    sub_772CD0
0x831BBF: cmp     dword ptr [esi+30h], 0
0x831BC3: jnz     short loc_831BCD
0x831BC5: call    sub_772DF0
0x831BCA: mov     [esi+30h], eax
0x831BCD: mov     ecx, [esi+30h]
0x831BD0: push    0
0x831BD2: push    2
0x831BD4: push    13h
0x831BD6: call    sub_772CD0
0x831BDB: cmp     dword ptr [esi+30h], 0
0x831BDF: jnz     short loc_831BE9
0x831BE1: call    sub_772DF0
0x831BE6: mov     [esi+30h], eax
0x831BE9: mov     ecx, [esi+30h]
0x831BEC: push    0
0x831BEE: push    2
0x831BF0: push    14h
0x831BF2: call    sub_772CD0
0x831BF7: cmp     dword ptr [esi+30h], 0
0x831BFB: jnz     short loc_831C05
0x831BFD: call    sub_772DF0
0x831C02: mov     [esi+30h], eax
0x831C05: mov     ecx, [esi+30h]
0x831C08: push    0
0x831C0A: push    0
0x831C0C: push    0Fh
0x831C0E: call    sub_772CD0
0x831C13: cmp     dword ptr [esi+30h], 0
0x831C17: jnz     short loc_831C21
0x831C19: call    sub_772DF0
0x831C1E: mov     [esi+30h], eax
0x831C21: mov     ecx, [esi+30h]
0x831C24: push    0
0x831C26: push    1
0x831C28: push    7
0x831C2A: call    sub_772CD0
0x831C2F: cmp     dword ptr [esi+30h], 0
0x831C33: jnz     short loc_831C3D
0x831C35: call    sub_772DF0
0x831C3A: mov     [esi+30h], eax
0x831C3D: mov     ecx, [esi+30h]
0x831C40: push    0
0x831C42: push    3
0x831C44: push    17h
0x831C46: call    sub_772CD0
0x831C4B: cmp     dword ptr [esi+30h], 0
0x831C4F: jnz     short loc_831C59
0x831C51: call    sub_772DF0
0x831C56: mov     [esi+30h], eax
0x831C59: mov     ecx, [esi+30h]
0x831C5C: push    0
0x831C5E: push    0
0x831C60: push    0Eh
0x831C62: call    sub_772CD0
0x831C67: cmp     dword ptr [esi+30h], 0
0x831C6B: jnz     short loc_831C75
0x831C6D: call    sub_772DF0
0x831C72: mov     [esi+30h], eax
0x831C75: mov     ecx, [esi+30h]
0x831C78: push    0
0x831C7A: push    0
0x831C7C: push    34h ; '4'
0x831C7E: call    sub_772CD0
0x831C83: or      ebx, 0FFFFFFFFh
0x831C86: cmp     esi, ds:0B4594Ch
0x831C8C: mov     dword ptr ds:0B43EC0h, 1802h
0x831C96: mov     dword ptr ds:0B44550h, 18h
0x831CA0: jz      short loc_831CC0
0x831CA2: add     [esi+60h], ebx
0x831CA5: jnz     short loc_831CAE
0x831CA7: mov     ecx, esi
0x831CA9: call    sub_7604D0
0x831CAE: mov     esi, ds:0B4594Ch
0x831CB4: test    esi, esi
0x831CB6: mov     [esp+2Ch+var_14], esi
0x831CBA: jz      short loc_831CC0
0x831CBC: add     dword ptr [esi+60h], 1
0x831CC0: cmp     dword ptr [esi+18h], 4
0x831CC4: jnb     loc_831E98
0x831CCA: lea     ecx, [esp+2Ch+var_10]
0x831CCE: push    ecx
0x831CCF: call    sub_772630
0x831CD4: add     esp, 4
0x831CD7: mov     ebp, eax
0x831CD9: cmp     edi, [ebp+0]
0x831CDC: mov     byte ptr [esp+2Ch+var_4], 6
0x831CE1: jz      short loc_831D02
0x831CE3: test    edi, edi
0x831CE5: jz      short loc_831CF3
0x831CE7: add     [edi+5Ch], ebx
0x831CEA: jnz     short loc_831CF3
0x831CEC: mov     ecx, edi
0x831CEE: call    sub_772560
0x831CF3: mov     edi, [ebp+0]
0x831CF6: test    edi, edi
0x831CF8: mov     [esp+2Ch+var_18], edi
0x831CFC: jz      short loc_831D02
0x831CFE: add     dword ptr [edi+5Ch], 1
0x831D02: mov     eax, [esp+2Ch+var_10]
0x831D06: test    eax, eax
0x831D08: mov     byte ptr [esp+2Ch+var_4], 1
0x831D0D: jz      short loc_831D21
0x831D0F: add     [eax+5Ch], ebx
0x831D12: mov     ecx, eax
0x831D14: add     eax, 5Ch ; '\'
0x831D17: cmp     dword ptr [eax], 0
0x831D1A: jnz     short loc_831D21
0x831D1C: call    sub_772560
0x831D21: push    2
0x831D23: push    1
0x831D25: push    0
0x831D27: push    edi
0x831D28: call    sub_801110
0x831D2D: add     esp, 10h
0x831D30: push    edi; a3
0x831D31: push    0; a2
0x831D33: mov     ecx, esi; this
0x831D35: call    sub_760010
0x831D3A: lea     edx, [esp+2Ch+var_10]
0x831D3E: push    edx
0x831D3F: call    sub_772630
0x831D44: add     esp, 4
0x831D47: mov     ebp, eax
0x831D49: cmp     edi, [ebp+0]
0x831D4C: mov     byte ptr [esp+2Ch+var_4], 7
0x831D51: jz      short loc_831D72
0x831D53: test    edi, edi
0x831D55: jz      short loc_831D63
0x831D57: add     [edi+5Ch], ebx
0x831D5A: jnz     short loc_831D63
0x831D5C: mov     ecx, edi
0x831D5E: call    sub_772560
0x831D63: mov     edi, [ebp+0]
0x831D66: test    edi, edi
0x831D68: mov     [esp+2Ch+var_18], edi
0x831D6C: jz      short loc_831D72
0x831D6E: add     dword ptr [edi+5Ch], 1
0x831D72: mov     eax, [esp+2Ch+var_10]
0x831D76: test    eax, eax
0x831D78: mov     byte ptr [esp+2Ch+var_4], 1
0x831D7D: jz      short loc_831D91
0x831D7F: add     [eax+5Ch], ebx
0x831D82: mov     ecx, eax
0x831D84: add     eax, 5Ch ; '\'
0x831D87: cmp     dword ptr [eax], 0
0x831D8A: jnz     short loc_831D91
0x831D8C: call    sub_772560
0x831D91: push    2
0x831D93: push    1
0x831D95: push    1
0x831D97: push    edi
0x831D98: call    sub_801110
0x831D9D: add     esp, 10h
0x831DA0: push    edi; a3
0x831DA1: push    1; a2
0x831DA3: mov     ecx, esi; this
0x831DA5: call    sub_760010
0x831DAA: lea     eax, [esp+2Ch+var_10]
0x831DAE: push    eax
0x831DAF: call    sub_772630
0x831DB4: add     esp, 4
0x831DB7: mov     ebp, eax
0x831DB9: cmp     edi, [ebp+0]
0x831DBC: mov     byte ptr [esp+2Ch+var_4], 8
0x831DC1: jz      short loc_831DE2
0x831DC3: test    edi, edi
0x831DC5: jz      short loc_831DD3
0x831DC7: add     [edi+5Ch], ebx
0x831DCA: jnz     short loc_831DD3
0x831DCC: mov     ecx, edi
0x831DCE: call    sub_772560
0x831DD3: mov     edi, [ebp+0]
0x831DD6: test    edi, edi
0x831DD8: mov     [esp+2Ch+var_18], edi
0x831DDC: jz      short loc_831DE2
0x831DDE: add     dword ptr [edi+5Ch], 1
0x831DE2: mov     eax, [esp+2Ch+var_10]
0x831DE6: test    eax, eax
0x831DE8: mov     byte ptr [esp+2Ch+var_4], 1
0x831DED: jz      short loc_831E01
0x831DEF: add     [eax+5Ch], ebx
0x831DF2: mov     ecx, eax
0x831DF4: add     eax, 5Ch ; '\'
0x831DF7: cmp     dword ptr [eax], 0
0x831DFA: jnz     short loc_831E01
0x831DFC: call    sub_772560
0x831E01: push    2
0x831E03: push    1
0x831E05: push    2
0x831E07: push    edi
0x831E08: call    sub_801110
0x831E0D: add     esp, 10h
0x831E10: push    edi; a3
0x831E11: push    2; a2
0x831E13: mov     ecx, esi; this
0x831E15: call    sub_760010
0x831E1A: lea     ecx, [esp+2Ch+var_10]
0x831E1E: push    ecx
0x831E1F: call    sub_772630
0x831E24: add     esp, 4
0x831E27: mov     ebp, eax
0x831E29: cmp     edi, [ebp+0]
0x831E2C: mov     byte ptr [esp+2Ch+var_4], 9
0x831E31: jz      short loc_831E52
0x831E33: test    edi, edi
0x831E35: jz      short loc_831E43
0x831E37: add     [edi+5Ch], ebx
0x831E3A: jnz     short loc_831E43
0x831E3C: mov     ecx, edi
0x831E3E: call    sub_772560
0x831E43: mov     edi, [ebp+0]
0x831E46: test    edi, edi
0x831E48: mov     [esp+2Ch+var_18], edi
0x831E4C: jz      short loc_831E52
0x831E4E: add     dword ptr [edi+5Ch], 1
0x831E52: mov     eax, [esp+2Ch+var_10]
0x831E56: test    eax, eax
0x831E58: mov     byte ptr [esp+2Ch+var_4], 1
0x831E5D: jz      short loc_831E71
0x831E5F: add     [eax+5Ch], ebx
0x831E62: mov     ecx, eax
0x831E64: add     eax, 5Ch ; '\'
0x831E67: cmp     dword ptr [eax], 0
0x831E6A: jnz     short loc_831E71
0x831E6C: call    sub_772560
0x831E71: mov     edx, ds:0B43110h
0x831E77: push    edx; a2
0x831E78: mov     ecx, edi; this
0x831E7A: call    sub_76C910
0x831E7F: push    0
0x831E81: push    3
0x831E83: push    3
0x831E85: push    edi
0x831E86: call    sub_801110
0x831E8B: add     esp, 10h
0x831E8E: push    edi; a3
0x831E8F: push    3; a2
0x831E91: mov     ecx, esi; this
0x831E93: call    sub_760010
0x831E98: mov     eax, ds:0B453D4h
0x831E9D: mov     ebp, [esi+58h]
0x831EA0: cmp     ebp, eax
0x831EA2: mov     ebx, eax
0x831EA4: jz      short loc_831ED8
0x831EA6: test    ebp, ebp
0x831EA8: jz      short loc_831EC7
0x831EAA: lea     eax, [ebp+4]
0x831EAD: push    eax; lpAddend
0x831EAE: call    dword ptr ds:0A2807Ch
0x831EB4: test    eax, eax
0x831EB6: jnz     short loc_831EC7
0x831EB8: test    ebp, ebp
0x831EBA: jz      short loc_831EC7
0x831EBC: mov     edx, [ebp+0]
0x831EBF: mov     eax, [edx]
0x831EC1: push    1
0x831EC3: mov     ecx, ebp
0x831EC5: call    eax
0x831EC7: test    ebx, ebx
0x831EC9: mov     [esi+58h], ebx
0x831ECC: jz      short loc_831ED8
0x831ECE: add     ebx, 4
0x831ED1: push    ebx; lpAddend
0x831ED2: call    dword ptr ds:0A28078h
0x831ED8: mov     eax, ds:0B451D0h
0x831EDD: mov     ebp, [esi+44h]
0x831EE0: cmp     ebp, eax
0x831EE2: mov     ebx, eax
0x831EE4: jz      short loc_831F18
0x831EE6: test    ebp, ebp
0x831EE8: jz      short loc_831F07
0x831EEA: lea     ecx, [ebp+4]
0x831EED: push    ecx; lpAddend
0x831EEE: call    dword ptr ds:0A2807Ch
0x831EF4: test    eax, eax
0x831EF6: jnz     short loc_831F07
0x831EF8: test    ebp, ebp
0x831EFA: jz      short loc_831F07
0x831EFC: mov     edx, [ebp+0]
0x831EFF: mov     eax, [edx]
0x831F01: push    1
0x831F03: mov     ecx, ebp
0x831F05: call    eax
0x831F07: test    ebx, ebx
0x831F09: mov     [esi+44h], ebx
0x831F0C: jz      short loc_831F18
0x831F0E: add     ebx, 4
0x831F11: push    ebx; lpAddend
0x831F12: call    dword ptr ds:0A28078h
0x831F18: cmp     dword ptr [esi+30h], 0
0x831F1C: jnz     short loc_831F26
0x831F1E: call    sub_772DF0
0x831F23: mov     [esi+30h], eax
0x831F26: mov     ecx, [esi+30h]
0x831F29: push    0
0x831F2B: push    1
0x831F2D: push    1Bh
0x831F2F: call    sub_772CD0
0x831F34: cmp     dword ptr [esi+30h], 0
0x831F38: jnz     short loc_831F42
0x831F3A: call    sub_772DF0
0x831F3F: mov     [esi+30h], eax
0x831F42: mov     ecx, [esi+30h]
0x831F45: push    0
0x831F47: push    2
0x831F49: push    13h
0x831F4B: call    sub_772CD0
0x831F50: cmp     dword ptr [esi+30h], 0
0x831F54: jnz     short loc_831F5E
0x831F56: call    sub_772DF0
0x831F5B: mov     [esi+30h], eax
0x831F5E: mov     ecx, [esi+30h]
0x831F61: push    0
0x831F63: push    2
0x831F65: push    14h
0x831F67: call    sub_772CD0
0x831F6C: cmp     dword ptr [esi+30h], 0
0x831F70: jnz     short loc_831F7A
0x831F72: call    sub_772DF0
0x831F77: mov     [esi+30h], eax
0x831F7A: mov     ecx, [esi+30h]
0x831F7D: push    0
0x831F7F: push    0
0x831F81: push    0Fh
0x831F83: call    sub_772CD0
0x831F88: cmp     dword ptr [esi+30h], 0
0x831F8C: jnz     short loc_831F96
0x831F8E: call    sub_772DF0
0x831F93: mov     [esi+30h], eax
0x831F96: mov     ecx, [esi+30h]
0x831F99: push    0
0x831F9B: push    1
0x831F9D: push    7
0x831F9F: call    sub_772CD0
0x831FA4: cmp     dword ptr [esi+30h], 0
0x831FA8: jnz     short loc_831FB2
0x831FAA: call    sub_772DF0
0x831FAF: mov     [esi+30h], eax
0x831FB2: mov     ecx, [esi+30h]
0x831FB5: push    0
0x831FB7: push    3
0x831FB9: push    17h
0x831FBB: call    sub_772CD0
0x831FC0: cmp     dword ptr [esi+30h], 0
0x831FC4: jnz     short loc_831FCE
0x831FC6: call    sub_772DF0
0x831FCB: mov     [esi+30h], eax
0x831FCE: mov     ecx, [esi+30h]
0x831FD1: push    0
0x831FD3: push    0
0x831FD5: push    0Eh
0x831FD7: call    sub_772CD0
0x831FDC: cmp     dword ptr [esi+30h], 0
0x831FE0: jnz     short loc_831FEA
0x831FE2: call    sub_772DF0
0x831FE7: mov     [esi+30h], eax
0x831FEA: mov     ecx, [esi+30h]
0x831FED: push    0
0x831FEF: push    0
0x831FF1: push    34h ; '4'
0x831FF3: call    sub_772CD0
0x831FF8: or      ebx, 0FFFFFFFFh
0x831FFB: cmp     esi, ds:0B45978h
0x832001: mov     dword ptr ds:0B43ECCh, 41808h
0x83200B: mov     dword ptr ds:0B4455Ch, 18h
0x832015: jz      short loc_832035
0x832017: add     [esi+60h], ebx
0x83201A: jnz     short loc_832023
0x83201C: mov     ecx, esi
0x83201E: call    sub_7604D0
0x832023: mov     esi, ds:0B45978h
0x832029: test    esi, esi
0x83202B: mov     [esp+2Ch+var_14], esi
0x83202F: jz      short loc_832035
0x832031: add     dword ptr [esi+60h], 1
0x832035: cmp     dword ptr [esi+18h], 4
0x832039: jnb     loc_83220D
0x83203F: lea     ecx, [esp+2Ch+var_10]
0x832043: push    ecx
0x832044: call    sub_772630
0x832049: add     esp, 4
0x83204C: mov     ebp, eax
0x83204E: cmp     edi, [ebp+0]
0x832051: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x832056: jz      short loc_832077
0x832058: test    edi, edi
0x83205A: jz      short loc_832068
0x83205C: add     [edi+5Ch], ebx
0x83205F: jnz     short loc_832068
0x832061: mov     ecx, edi
0x832063: call    sub_772560
0x832068: mov     edi, [ebp+0]
0x83206B: test    edi, edi
0x83206D: mov     [esp+2Ch+var_18], edi
0x832071: jz      short loc_832077
0x832073: add     dword ptr [edi+5Ch], 1
0x832077: mov     eax, [esp+2Ch+var_10]
0x83207B: test    eax, eax
0x83207D: mov     byte ptr [esp+2Ch+var_4], 1
0x832082: jz      short loc_832096
0x832084: add     [eax+5Ch], ebx
0x832087: mov     ecx, eax
0x832089: add     eax, 5Ch ; '\'
0x83208C: cmp     dword ptr [eax], 0
0x83208F: jnz     short loc_832096
0x832091: call    sub_772560
0x832096: push    2
0x832098: push    1
0x83209A: push    0
0x83209C: push    edi
0x83209D: call    sub_801110
0x8320A2: add     esp, 10h
0x8320A5: push    edi; a3
0x8320A6: push    0; a2
0x8320A8: mov     ecx, esi; this
0x8320AA: call    sub_760010
0x8320AF: lea     edx, [esp+2Ch+var_10]
0x8320B3: push    edx
0x8320B4: call    sub_772630
0x8320B9: add     esp, 4
0x8320BC: mov     ebp, eax
0x8320BE: cmp     edi, [ebp+0]
0x8320C1: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x8320C6: jz      short loc_8320E7
0x8320C8: test    edi, edi
0x8320CA: jz      short loc_8320D8
0x8320CC: add     [edi+5Ch], ebx
0x8320CF: jnz     short loc_8320D8
0x8320D1: mov     ecx, edi
0x8320D3: call    sub_772560
0x8320D8: mov     edi, [ebp+0]
0x8320DB: test    edi, edi
0x8320DD: mov     [esp+2Ch+var_18], edi
0x8320E1: jz      short loc_8320E7
0x8320E3: add     dword ptr [edi+5Ch], 1
0x8320E7: mov     eax, [esp+2Ch+var_10]
0x8320EB: test    eax, eax
0x8320ED: mov     byte ptr [esp+2Ch+var_4], 1
0x8320F2: jz      short loc_832106
0x8320F4: add     [eax+5Ch], ebx
0x8320F7: mov     ecx, eax
0x8320F9: add     eax, 5Ch ; '\'
0x8320FC: cmp     dword ptr [eax], 0
0x8320FF: jnz     short loc_832106
0x832101: call    sub_772560
0x832106: push    2
0x832108: push    1
0x83210A: push    1
0x83210C: push    edi
0x83210D: call    sub_801110
0x832112: add     esp, 10h
0x832115: push    edi; a3
0x832116: push    1; a2
0x832118: mov     ecx, esi; this
0x83211A: call    sub_760010
0x83211F: lea     eax, [esp+2Ch+var_10]
0x832123: push    eax
0x832124: call    sub_772630
0x832129: add     esp, 4
0x83212C: mov     ebp, eax
0x83212E: cmp     edi, [ebp+0]
0x832131: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x832136: jz      short loc_832157
0x832138: test    edi, edi
0x83213A: jz      short loc_832148
0x83213C: add     [edi+5Ch], ebx
0x83213F: jnz     short loc_832148
0x832141: mov     ecx, edi
0x832143: call    sub_772560
0x832148: mov     edi, [ebp+0]
0x83214B: test    edi, edi
0x83214D: mov     [esp+2Ch+var_18], edi
0x832151: jz      short loc_832157
0x832153: add     dword ptr [edi+5Ch], 1
0x832157: mov     eax, [esp+2Ch+var_10]
0x83215B: test    eax, eax
0x83215D: mov     byte ptr [esp+2Ch+var_4], 1
0x832162: jz      short loc_832176
0x832164: add     [eax+5Ch], ebx
0x832167: mov     ecx, eax
0x832169: add     eax, 5Ch ; '\'
0x83216C: cmp     dword ptr [eax], 0
0x83216F: jnz     short loc_832176
0x832171: call    sub_772560
0x832176: push    2
0x832178: push    1
0x83217A: push    2
0x83217C: push    edi
0x83217D: call    sub_801110
0x832182: add     esp, 10h
0x832185: push    edi; a3
0x832186: push    2; a2
0x832188: mov     ecx, esi; this
0x83218A: call    sub_760010
0x83218F: lea     ecx, [esp+2Ch+var_10]
0x832193: push    ecx
0x832194: call    sub_772630
0x832199: add     esp, 4
0x83219C: mov     ebp, eax
0x83219E: cmp     edi, [ebp+0]
0x8321A1: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x8321A6: jz      short loc_8321C7
0x8321A8: test    edi, edi
0x8321AA: jz      short loc_8321B8
0x8321AC: add     [edi+5Ch], ebx
0x8321AF: jnz     short loc_8321B8
0x8321B1: mov     ecx, edi
0x8321B3: call    sub_772560
0x8321B8: mov     edi, [ebp+0]
0x8321BB: test    edi, edi
0x8321BD: mov     [esp+2Ch+var_18], edi
0x8321C1: jz      short loc_8321C7
0x8321C3: add     dword ptr [edi+5Ch], 1
0x8321C7: mov     eax, [esp+2Ch+var_10]
0x8321CB: test    eax, eax
0x8321CD: mov     byte ptr [esp+2Ch+var_4], 1
0x8321D2: jz      short loc_8321E6
0x8321D4: add     [eax+5Ch], ebx
0x8321D7: mov     ecx, eax
0x8321D9: add     eax, 5Ch ; '\'
0x8321DC: cmp     dword ptr [eax], 0
0x8321DF: jnz     short loc_8321E6
0x8321E1: call    sub_772560
0x8321E6: mov     edx, ds:0B43110h
0x8321EC: push    edx; a2
0x8321ED: mov     ecx, edi; this
0x8321EF: call    sub_76C910
0x8321F4: push    0
0x8321F6: push    3
0x8321F8: push    3
0x8321FA: push    edi
0x8321FB: call    sub_801110
0x832200: add     esp, 10h
0x832203: push    edi; a3
0x832204: push    3; a2
0x832206: mov     ecx, esi; this
0x832208: call    sub_760010
0x83220D: mov     eax, ds:0B453D8h
0x832212: mov     ebp, [esi+58h]
0x832215: cmp     ebp, eax
0x832217: mov     ebx, eax
0x832219: jz      short loc_83224D
0x83221B: test    ebp, ebp
0x83221D: jz      short loc_83223C
0x83221F: lea     eax, [ebp+4]
0x832222: push    eax; lpAddend
0x832223: call    dword ptr ds:0A2807Ch
0x832229: test    eax, eax
0x83222B: jnz     short loc_83223C
0x83222D: test    ebp, ebp
0x83222F: jz      short loc_83223C
0x832231: mov     edx, [ebp+0]
0x832234: mov     eax, [edx]
0x832236: push    1
0x832238: mov     ecx, ebp
0x83223A: call    eax
0x83223C: test    ebx, ebx
0x83223E: mov     [esi+58h], ebx
0x832241: jz      short loc_83224D
0x832243: add     ebx, 4
0x832246: push    ebx; lpAddend
0x832247: call    dword ptr ds:0A28078h
0x83224D: mov     eax, ds:0B451D4h
0x832252: mov     ebp, [esi+44h]
0x832255: cmp     ebp, eax
0x832257: mov     ebx, eax
0x832259: jz      short loc_83228D
0x83225B: test    ebp, ebp
0x83225D: jz      short loc_83227C
0x83225F: lea     ecx, [ebp+4]
0x832262: push    ecx; lpAddend
0x832263: call    dword ptr ds:0A2807Ch
0x832269: test    eax, eax
0x83226B: jnz     short loc_83227C
0x83226D: test    ebp, ebp
0x83226F: jz      short loc_83227C
0x832271: mov     edx, [ebp+0]
0x832274: mov     eax, [edx]
0x832276: push    1
0x832278: mov     ecx, ebp
0x83227A: call    eax
0x83227C: test    ebx, ebx
0x83227E: mov     [esi+44h], ebx
0x832281: jz      short loc_83228D
0x832283: add     ebx, 4
0x832286: push    ebx; lpAddend
0x832287: call    dword ptr ds:0A28078h
0x83228D: cmp     dword ptr [esi+30h], 0
0x832291: jnz     short loc_83229B
0x832293: call    sub_772DF0
0x832298: mov     [esi+30h], eax
0x83229B: mov     ecx, [esi+30h]
0x83229E: push    0
0x8322A0: push    1
0x8322A2: push    1Bh
0x8322A4: call    sub_772CD0
0x8322A9: cmp     dword ptr [esi+30h], 0
0x8322AD: jnz     short loc_8322B7
0x8322AF: call    sub_772DF0
0x8322B4: mov     [esi+30h], eax
0x8322B7: mov     ecx, [esi+30h]
0x8322BA: push    0
0x8322BC: push    2
0x8322BE: push    13h
0x8322C0: call    sub_772CD0
0x8322C5: cmp     dword ptr [esi+30h], 0
0x8322C9: jnz     short loc_8322D3
0x8322CB: call    sub_772DF0
0x8322D0: mov     [esi+30h], eax
0x8322D3: mov     ecx, [esi+30h]
0x8322D6: push    0
0x8322D8: push    2
0x8322DA: push    14h
0x8322DC: call    sub_772CD0
0x8322E1: cmp     dword ptr [esi+30h], 0
0x8322E5: jnz     short loc_8322EF
0x8322E7: call    sub_772DF0
0x8322EC: mov     [esi+30h], eax
0x8322EF: mov     ecx, [esi+30h]
0x8322F2: push    0
0x8322F4: push    0
0x8322F6: push    0Fh
0x8322F8: call    sub_772CD0
0x8322FD: cmp     dword ptr [esi+30h], 0
0x832301: jnz     short loc_83230B
0x832303: call    sub_772DF0
0x832308: mov     [esi+30h], eax
0x83230B: mov     ecx, [esi+30h]
0x83230E: push    0
0x832310: push    1
0x832312: push    7
0x832314: call    sub_772CD0
0x832319: cmp     dword ptr [esi+30h], 0
0x83231D: jnz     short loc_832327
0x83231F: call    sub_772DF0
0x832324: mov     [esi+30h], eax
0x832327: mov     ecx, [esi+30h]
0x83232A: push    0
0x83232C: push    3
0x83232E: push    17h
0x832330: call    sub_772CD0
0x832335: cmp     dword ptr [esi+30h], 0
0x832339: jnz     short loc_832343
0x83233B: call    sub_772DF0
0x832340: mov     [esi+30h], eax
0x832343: mov     ecx, [esi+30h]
0x832346: push    0
0x832348: push    0
0x83234A: push    0Eh
0x83234C: call    sub_772CD0
0x832351: cmp     dword ptr [esi+30h], 0
0x832355: jnz     short loc_83235F
0x832357: call    sub_772DF0
0x83235C: mov     [esi+30h], eax
0x83235F: mov     ecx, [esi+30h]
0x832362: push    0
0x832364: push    0
0x832366: push    34h ; '4'
0x832368: call    sub_772CD0
0x83236D: or      ebx, 0FFFFFFFFh
0x832370: cmp     esi, ds:0B45984h
0x832376: mov     dword ptr ds:0B43EF8h, 3802h
0x832380: mov     dword ptr ds:0B44588h, 38h ; '8'
0x83238A: jz      short loc_8323AA
0x83238C: add     [esi+60h], ebx
0x83238F: jnz     short loc_832398
0x832391: mov     ecx, esi
0x832393: call    sub_7604D0
0x832398: mov     esi, ds:0B45984h
0x83239E: test    esi, esi
0x8323A0: mov     [esp+2Ch+var_14], esi
0x8323A4: jz      short loc_8323AA
0x8323A6: add     dword ptr [esi+60h], 1
0x8323AA: cmp     dword ptr [esi+18h], 4
0x8323AE: jnb     loc_832582
0x8323B4: lea     ecx, [esp+2Ch+var_10]
0x8323B8: push    ecx
0x8323B9: call    sub_772630
0x8323BE: add     esp, 4
0x8323C1: mov     ebp, eax
0x8323C3: cmp     edi, [ebp+0]
0x8323C6: mov     byte ptr [esp+2Ch+var_4], 0Eh
0x8323CB: jz      short loc_8323EC
0x8323CD: test    edi, edi
0x8323CF: jz      short loc_8323DD
0x8323D1: add     [edi+5Ch], ebx
0x8323D4: jnz     short loc_8323DD
0x8323D6: mov     ecx, edi
0x8323D8: call    sub_772560
0x8323DD: mov     edi, [ebp+0]
0x8323E0: test    edi, edi
0x8323E2: mov     [esp+2Ch+var_18], edi
0x8323E6: jz      short loc_8323EC
0x8323E8: add     dword ptr [edi+5Ch], 1
0x8323EC: mov     eax, [esp+2Ch+var_10]
0x8323F0: test    eax, eax
0x8323F2: mov     byte ptr [esp+2Ch+var_4], 1
0x8323F7: jz      short loc_83240B
0x8323F9: add     [eax+5Ch], ebx
0x8323FC: mov     ecx, eax
0x8323FE: add     eax, 5Ch ; '\'
0x832401: cmp     dword ptr [eax], 0
0x832404: jnz     short loc_83240B
0x832406: call    sub_772560
0x83240B: push    2
0x83240D: push    1
0x83240F: push    0
0x832411: push    edi
0x832412: call    sub_801110
0x832417: add     esp, 10h
0x83241A: push    edi; a3
0x83241B: push    0; a2
0x83241D: mov     ecx, esi; this
0x83241F: call    sub_760010
0x832424: lea     edx, [esp+2Ch+var_10]
0x832428: push    edx
0x832429: call    sub_772630
0x83242E: add     esp, 4
0x832431: mov     ebp, eax
0x832433: cmp     edi, [ebp+0]
0x832436: mov     byte ptr [esp+2Ch+var_4], 0Fh
0x83243B: jz      short loc_83245C
0x83243D: test    edi, edi
0x83243F: jz      short loc_83244D
0x832441: add     [edi+5Ch], ebx
0x832444: jnz     short loc_83244D
0x832446: mov     ecx, edi
0x832448: call    sub_772560
0x83244D: mov     edi, [ebp+0]
0x832450: test    edi, edi
0x832452: mov     [esp+2Ch+var_18], edi
0x832456: jz      short loc_83245C
0x832458: add     dword ptr [edi+5Ch], 1
0x83245C: mov     eax, [esp+2Ch+var_10]
0x832460: test    eax, eax
0x832462: mov     byte ptr [esp+2Ch+var_4], 1
0x832467: jz      short loc_83247B
0x832469: add     [eax+5Ch], ebx
0x83246C: mov     ecx, eax
0x83246E: add     eax, 5Ch ; '\'
0x832471: cmp     dword ptr [eax], 0
0x832474: jnz     short loc_83247B
0x832476: call    sub_772560
0x83247B: push    2
0x83247D: push    1
0x83247F: push    1
0x832481: push    edi
0x832482: call    sub_801110
0x832487: add     esp, 10h
0x83248A: push    edi; a3
0x83248B: push    1; a2
0x83248D: mov     ecx, esi; this
0x83248F: call    sub_760010
0x832494: lea     eax, [esp+2Ch+var_10]
0x832498: push    eax
0x832499: call    sub_772630
0x83249E: add     esp, 4
0x8324A1: mov     ebp, eax
0x8324A3: cmp     edi, [ebp+0]
0x8324A6: mov     byte ptr [esp+2Ch+var_4], 10h
0x8324AB: jz      short loc_8324CC
0x8324AD: test    edi, edi
0x8324AF: jz      short loc_8324BD
0x8324B1: add     [edi+5Ch], ebx
0x8324B4: jnz     short loc_8324BD
0x8324B6: mov     ecx, edi
0x8324B8: call    sub_772560
0x8324BD: mov     edi, [ebp+0]
0x8324C0: test    edi, edi
0x8324C2: mov     [esp+2Ch+var_18], edi
0x8324C6: jz      short loc_8324CC
0x8324C8: add     dword ptr [edi+5Ch], 1
0x8324CC: mov     eax, [esp+2Ch+var_10]
0x8324D0: test    eax, eax
0x8324D2: mov     byte ptr [esp+2Ch+var_4], 1
0x8324D7: jz      short loc_8324EB
0x8324D9: add     [eax+5Ch], ebx
0x8324DC: mov     ecx, eax
0x8324DE: add     eax, 5Ch ; '\'
0x8324E1: cmp     dword ptr [eax], 0
0x8324E4: jnz     short loc_8324EB
0x8324E6: call    sub_772560
0x8324EB: push    2
0x8324ED: push    1
0x8324EF: push    2
0x8324F1: push    edi
0x8324F2: call    sub_801110
0x8324F7: add     esp, 10h
0x8324FA: push    edi; a3
0x8324FB: push    2; a2
0x8324FD: mov     ecx, esi; this
0x8324FF: call    sub_760010
0x832504: lea     ecx, [esp+2Ch+var_10]
0x832508: push    ecx
0x832509: call    sub_772630
0x83250E: add     esp, 4
0x832511: mov     ebp, eax
0x832513: cmp     edi, [ebp+0]
0x832516: mov     byte ptr [esp+2Ch+var_4], 11h
0x83251B: jz      short loc_83253C
0x83251D: test    edi, edi
0x83251F: jz      short loc_83252D
0x832521: add     [edi+5Ch], ebx
0x832524: jnz     short loc_83252D
0x832526: mov     ecx, edi
0x832528: call    sub_772560
0x83252D: mov     edi, [ebp+0]
0x832530: test    edi, edi
0x832532: mov     [esp+2Ch+var_18], edi
0x832536: jz      short loc_83253C
0x832538: add     dword ptr [edi+5Ch], 1
0x83253C: mov     eax, [esp+2Ch+var_10]
0x832540: test    eax, eax
0x832542: mov     byte ptr [esp+2Ch+var_4], 1
0x832547: jz      short loc_83255B
0x832549: add     [eax+5Ch], ebx
0x83254C: mov     ecx, eax
0x83254E: add     eax, 5Ch ; '\'
0x832551: cmp     dword ptr [eax], 0
0x832554: jnz     short loc_83255B
0x832556: call    sub_772560
0x83255B: mov     edx, ds:0B43110h
0x832561: push    edx; a2
0x832562: mov     ecx, edi; this
0x832564: call    sub_76C910
0x832569: push    0
0x83256B: push    3
0x83256D: push    3
0x83256F: push    edi
0x832570: call    sub_801110
0x832575: add     esp, 10h
0x832578: push    edi; a3
0x832579: push    3; a2
0x83257B: mov     ecx, esi; this
0x83257D: call    sub_760010
0x832582: mov     eax, ds:0B453DCh
0x832587: mov     ebp, [esi+58h]
0x83258A: cmp     ebp, eax
0x83258C: mov     ebx, eax
0x83258E: jz      short loc_8325C2
0x832590: test    ebp, ebp
0x832592: jz      short loc_8325B1
0x832594: lea     eax, [ebp+4]
0x832597: push    eax; lpAddend
0x832598: call    dword ptr ds:0A2807Ch
0x83259E: test    eax, eax
0x8325A0: jnz     short loc_8325B1
0x8325A2: test    ebp, ebp
0x8325A4: jz      short loc_8325B1
0x8325A6: mov     edx, [ebp+0]
0x8325A9: mov     eax, [edx]
0x8325AB: push    1
0x8325AD: mov     ecx, ebp
0x8325AF: call    eax
0x8325B1: test    ebx, ebx
0x8325B3: mov     [esi+58h], ebx
0x8325B6: jz      short loc_8325C2
0x8325B8: add     ebx, 4
0x8325BB: push    ebx; lpAddend
0x8325BC: call    dword ptr ds:0A28078h
0x8325C2: mov     eax, ds:0B451D4h
0x8325C7: mov     ebp, [esi+44h]
0x8325CA: cmp     ebp, eax
0x8325CC: mov     ebx, eax
0x8325CE: jz      short loc_832602
0x8325D0: test    ebp, ebp
0x8325D2: jz      short loc_8325F1
0x8325D4: lea     ecx, [ebp+4]
0x8325D7: push    ecx; lpAddend
0x8325D8: call    dword ptr ds:0A2807Ch
0x8325DE: test    eax, eax
0x8325E0: jnz     short loc_8325F1
0x8325E2: test    ebp, ebp
0x8325E4: jz      short loc_8325F1
0x8325E6: mov     edx, [ebp+0]
0x8325E9: mov     eax, [edx]
0x8325EB: push    1
0x8325ED: mov     ecx, ebp
0x8325EF: call    eax
0x8325F1: test    ebx, ebx
0x8325F3: mov     [esi+44h], ebx
0x8325F6: jz      short loc_832602
0x8325F8: add     ebx, 4
0x8325FB: push    ebx; lpAddend
0x8325FC: call    dword ptr ds:0A28078h
0x832602: cmp     dword ptr [esi+30h], 0
0x832606: jnz     short loc_832610
0x832608: call    sub_772DF0
0x83260D: mov     [esi+30h], eax
0x832610: mov     ecx, [esi+30h]
0x832613: push    0
0x832615: push    1
0x832617: push    1Bh
0x832619: call    sub_772CD0
0x83261E: cmp     dword ptr [esi+30h], 0
0x832622: jnz     short loc_83262C
0x832624: call    sub_772DF0
0x832629: mov     [esi+30h], eax
0x83262C: mov     ecx, [esi+30h]
0x83262F: push    0
0x832631: push    2
0x832633: push    13h
0x832635: call    sub_772CD0
0x83263A: cmp     dword ptr [esi+30h], 0
0x83263E: jnz     short loc_832648
0x832640: call    sub_772DF0
0x832645: mov     [esi+30h], eax
0x832648: mov     ecx, [esi+30h]
0x83264B: push    0
0x83264D: push    2
0x83264F: push    14h
0x832651: call    sub_772CD0
0x832656: cmp     dword ptr [esi+30h], 0
0x83265A: jnz     short loc_832664
0x83265C: call    sub_772DF0
0x832661: mov     [esi+30h], eax
0x832664: mov     ecx, [esi+30h]
0x832667: push    0
0x832669: push    0
0x83266B: push    0Fh
0x83266D: call    sub_772CD0
0x832672: cmp     dword ptr [esi+30h], 0
0x832676: jnz     short loc_832680
0x832678: call    sub_772DF0
0x83267D: mov     [esi+30h], eax
0x832680: mov     ecx, [esi+30h]
0x832683: push    0
0x832685: push    1
0x832687: push    7
0x832689: call    sub_772CD0
0x83268E: cmp     dword ptr [esi+30h], 0
0x832692: jnz     short loc_83269C
0x832694: call    sub_772DF0
0x832699: mov     [esi+30h], eax
0x83269C: mov     ecx, [esi+30h]
0x83269F: push    0
0x8326A1: push    3
0x8326A3: push    17h
0x8326A5: call    sub_772CD0
0x8326AA: cmp     dword ptr [esi+30h], 0
0x8326AE: jnz     short loc_8326B8
0x8326B0: call    sub_772DF0
0x8326B5: mov     [esi+30h], eax
0x8326B8: mov     ecx, [esi+30h]
0x8326BB: push    0
0x8326BD: push    0
0x8326BF: push    0Eh
0x8326C1: call    sub_772CD0
0x8326C6: cmp     dword ptr [esi+30h], 0
0x8326CA: jnz     short loc_8326D4
0x8326CC: call    sub_772DF0
0x8326D1: mov     [esi+30h], eax
0x8326D4: mov     ecx, [esi+30h]
0x8326D7: push    0
0x8326D9: push    0
0x8326DB: push    34h ; '4'
0x8326DD: call    sub_772CD0
0x8326E2: or      ebx, 0FFFFFFFFh
0x8326E5: test    edi, edi
0x8326E7: mov     dword ptr ds:0B43F04h, 43808h
0x8326F1: mov     dword ptr ds:0B44594h, 38h ; '8'
0x8326FB: mov     byte ptr [esp+2Ch+var_4], 0
0x832700: jz      short loc_83270E
0x832702: add     [edi+5Ch], ebx
0x832705: jnz     short loc_83270E
0x832707: mov     ecx, edi
0x832709: call    sub_772560
0x83270E: add     [esi+60h], ebx
0x832711: mov     [esp+2Ch+var_4], ebx
0x832715: jnz     short loc_83271E
0x832717: mov     ecx, esi
0x832719: call    sub_7604D0
0x83271E: mov     ecx, dword ptr [esp+2Ch+var_C]
0x832722: mov     large fs:0, ecx
0x832729: pop     ecx
0x83272A: pop     edi
0x83272B: pop     esi
0x83272C: pop     ebp
0x83272D: pop     ebx
0x83272E: add     esp, 18h
0x832731: retn
