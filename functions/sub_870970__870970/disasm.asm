0x870970: push    0FFFFFFFFh
0x870972: push    offset SEH_870970
0x870977: mov     eax, large fs:0
0x87097D: push    eax
0x87097E: sub     esp, 10h
0x870981: push    ebx
0x870982: push    ebp
0x870983: push    esi
0x870984: push    edi
0x870985: mov     eax, ds:0B30AACh
0x87098A: xor     eax, esp
0x87098C: push    eax
0x87098D: lea     eax, [esp+30h+var_C]
0x870991: mov     large fs:0, eax
0x870997: mov     [esp+30h+var_18], ecx
0x87099B: xor     esi, esi
0x87099D: mov     [esp+30h+var_14], esi
0x8709A1: xor     edi, edi
0x8709A3: mov     [esp+30h+var_4], esi
0x8709A7: mov     [esp+30h+var_1C], edi
0x8709AB: mov     eax, ds:0B476E0h
0x8709B0: test    eax, eax
0x8709B2: mov     ebp, 1
0x8709B7: mov     byte ptr [esp+30h+var_4], 1
0x8709BC: jz      short loc_8709CB
0x8709BE: mov     esi, eax
0x8709C0: test    esi, esi
0x8709C2: mov     [esp+30h+var_14], esi
0x8709C6: jz      short loc_8709CB
0x8709C8: add     [esi+60h], ebp
0x8709CB: mov     eax, [esi+18h]
0x8709CE: cmp     eax, 4
0x8709D1: jnb     loc_870B82
0x8709D7: lea     eax, [esp+30h+var_10]
0x8709DB: push    eax
0x8709DC: call    sub_772630
0x8709E1: add     esp, 4
0x8709E4: mov     eax, [eax]
0x8709E6: test    eax, eax
0x8709E8: jz      short loc_8709F3
0x8709EA: mov     edi, eax
0x8709EC: add     [edi+5Ch], ebp
0x8709EF: mov     [esp+30h+var_1C], edi
0x8709F3: mov     eax, [esp+30h+var_10]
0x8709F7: test    eax, eax
0x8709F9: mov     byte ptr [esp+30h+var_4], 1
0x8709FE: jz      short loc_870A13
0x870A00: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x870A04: mov     ecx, eax
0x870A06: add     eax, 5Ch ; '\'
0x870A09: cmp     dword ptr [eax], 0
0x870A0C: jnz     short loc_870A13
0x870A0E: call    sub_772560
0x870A13: push    2
0x870A15: push    ebp
0x870A16: push    0
0x870A18: push    edi
0x870A19: call    sub_801110
0x870A1E: add     esp, 10h
0x870A21: push    edi; a3
0x870A22: push    0; a2
0x870A24: mov     ecx, esi; this
0x870A26: call    sub_760010
0x870A2B: lea     ecx, [esp+30h+var_10]
0x870A2F: push    ecx
0x870A30: call    sub_772630
0x870A35: add     esp, 4
0x870A38: mov     ebx, eax
0x870A3A: cmp     edi, [ebx]
0x870A3C: mov     byte ptr [esp+30h+var_4], 3
0x870A41: jz      short loc_870A61
0x870A43: test    edi, edi
0x870A45: jz      short loc_870A54
0x870A47: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x870A4B: jnz     short loc_870A54
0x870A4D: mov     ecx, edi
0x870A4F: call    sub_772560
0x870A54: mov     edi, [ebx]
0x870A56: test    edi, edi
0x870A58: mov     [esp+30h+var_1C], edi
0x870A5C: jz      short loc_870A61
0x870A5E: add     [edi+5Ch], ebp
0x870A61: mov     eax, [esp+30h+var_10]
0x870A65: test    eax, eax
0x870A67: mov     byte ptr [esp+30h+var_4], 1
0x870A6C: jz      short loc_870A81
0x870A6E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x870A72: mov     ecx, eax
0x870A74: add     eax, 5Ch ; '\'
0x870A77: cmp     dword ptr [eax], 0
0x870A7A: jnz     short loc_870A81
0x870A7C: call    sub_772560
0x870A81: push    2
0x870A83: push    ebp
0x870A84: push    ebp
0x870A85: push    edi
0x870A86: call    sub_801110
0x870A8B: add     esp, 10h
0x870A8E: push    edi; a3
0x870A8F: push    ebp; a2
0x870A90: mov     ecx, esi; this
0x870A92: call    sub_760010
0x870A97: lea     edx, [esp+30h+var_10]
0x870A9B: push    edx
0x870A9C: call    sub_772630
0x870AA1: add     esp, 4
0x870AA4: mov     ebx, eax
0x870AA6: cmp     edi, [ebx]
0x870AA8: mov     byte ptr [esp+30h+var_4], 4
0x870AAD: jz      short loc_870ACD
0x870AAF: test    edi, edi
0x870AB1: jz      short loc_870AC0
0x870AB3: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x870AB7: jnz     short loc_870AC0
0x870AB9: mov     ecx, edi
0x870ABB: call    sub_772560
0x870AC0: mov     edi, [ebx]
0x870AC2: test    edi, edi
0x870AC4: mov     [esp+30h+var_1C], edi
0x870AC8: jz      short loc_870ACD
0x870ACA: add     [edi+5Ch], ebp
0x870ACD: mov     eax, [esp+30h+var_10]
0x870AD1: test    eax, eax
0x870AD3: mov     byte ptr [esp+30h+var_4], 1
0x870AD8: jz      short loc_870AED
0x870ADA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x870ADE: mov     ecx, eax
0x870AE0: add     eax, 5Ch ; '\'
0x870AE3: cmp     dword ptr [eax], 0
0x870AE6: jnz     short loc_870AED
0x870AE8: call    sub_772560
0x870AED: push    2
0x870AEF: push    ebp
0x870AF0: push    2
0x870AF2: push    edi
0x870AF3: call    sub_801110
0x870AF8: add     esp, 10h
0x870AFB: push    edi; a3
0x870AFC: push    2; a2
0x870AFE: mov     ecx, esi; this
0x870B00: call    sub_760010
0x870B05: lea     eax, [esp+30h+var_10]
0x870B09: push    eax
0x870B0A: call    sub_772630
0x870B0F: add     esp, 4
0x870B12: mov     ebx, eax
0x870B14: cmp     edi, [ebx]
0x870B16: mov     byte ptr [esp+30h+var_4], 5
0x870B1B: jz      short loc_870B3B
0x870B1D: test    edi, edi
0x870B1F: jz      short loc_870B2E
0x870B21: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x870B25: jnz     short loc_870B2E
0x870B27: mov     ecx, edi
0x870B29: call    sub_772560
0x870B2E: mov     edi, [ebx]
0x870B30: test    edi, edi
0x870B32: mov     [esp+30h+var_1C], edi
0x870B36: jz      short loc_870B3B
0x870B38: add     [edi+5Ch], ebp
0x870B3B: mov     eax, [esp+30h+var_10]
0x870B3F: test    eax, eax
0x870B41: mov     byte ptr [esp+30h+var_4], 1
0x870B46: jz      short loc_870B5B
0x870B48: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x870B4C: mov     ecx, eax
0x870B4E: add     eax, 5Ch ; '\'
0x870B51: cmp     dword ptr [eax], 0
0x870B54: jnz     short loc_870B5B
0x870B56: call    sub_772560
0x870B5B: mov     ecx, ds:0B43110h
0x870B61: push    ecx; a2
0x870B62: mov     ecx, edi; this
0x870B64: call    sub_76C910
0x870B69: push    0
0x870B6B: push    3
0x870B6D: push    3
0x870B6F: push    edi
0x870B70: call    sub_801110
0x870B75: add     esp, 10h
0x870B78: push    edi; a3
0x870B79: push    3; a2
0x870B7B: mov     ecx, esi; this
0x870B7D: call    sub_760010
0x870B82: mov     edx, [esp+30h+var_18]
0x870B86: mov     ebx, [edx+0FCh]
0x870B8C: mov     ebp, [esi+58h]
0x870B8F: cmp     ebp, ebx
0x870B91: jz      short loc_870BC5
0x870B93: test    ebp, ebp
0x870B95: jz      short loc_870BB4
0x870B97: lea     eax, [ebp+4]
0x870B9A: push    eax; lpAddend
0x870B9B: call    dword ptr ds:0A2807Ch
0x870BA1: test    eax, eax
0x870BA3: jnz     short loc_870BB4
0x870BA5: test    ebp, ebp
0x870BA7: jz      short loc_870BB4
0x870BA9: mov     edx, [ebp+0]
0x870BAC: mov     eax, [edx]
0x870BAE: push    1
0x870BB0: mov     ecx, ebp
0x870BB2: call    eax
0x870BB4: test    ebx, ebx
0x870BB6: mov     [esi+58h], ebx
0x870BB9: jz      short loc_870BC5
0x870BBB: add     ebx, 4
0x870BBE: push    ebx; lpAddend
0x870BBF: call    dword ptr ds:0A28078h
0x870BC5: mov     ecx, [esp+30h+var_18]
0x870BC9: mov     ebx, [ecx+17Ch]
0x870BCF: mov     ebp, [esi+44h]
0x870BD2: cmp     ebp, ebx
0x870BD4: jz      short loc_870C08
0x870BD6: test    ebp, ebp
0x870BD8: jz      short loc_870BF7
0x870BDA: lea     edx, [ebp+4]
0x870BDD: push    edx; lpAddend
0x870BDE: call    dword ptr ds:0A2807Ch
0x870BE4: test    eax, eax
0x870BE6: jnz     short loc_870BF7
0x870BE8: test    ebp, ebp
0x870BEA: jz      short loc_870BF7
0x870BEC: mov     eax, [ebp+0]
0x870BEF: mov     edx, [eax]
0x870BF1: push    1
0x870BF3: mov     ecx, ebp
0x870BF5: call    edx
0x870BF7: test    ebx, ebx
0x870BF9: mov     [esi+44h], ebx
0x870BFC: jz      short loc_870C08
0x870BFE: add     ebx, 4
0x870C01: push    ebx; lpAddend
0x870C02: call    dword ptr ds:0A28078h
0x870C08: cmp     dword ptr [esi+30h], 0
0x870C0C: jnz     short loc_870C16
0x870C0E: call    sub_772DF0
0x870C13: mov     [esi+30h], eax
0x870C16: mov     ecx, [esi+30h]
0x870C19: push    0
0x870C1B: push    1
0x870C1D: push    1Bh
0x870C1F: call    sub_772CD0
0x870C24: cmp     dword ptr [esi+30h], 0
0x870C28: jnz     short loc_870C32
0x870C2A: call    sub_772DF0
0x870C2F: mov     [esi+30h], eax
0x870C32: mov     ecx, [esi+30h]
0x870C35: push    0
0x870C37: push    2
0x870C39: push    13h
0x870C3B: call    sub_772CD0
0x870C40: cmp     dword ptr [esi+30h], 0
0x870C44: jnz     short loc_870C4E
0x870C46: call    sub_772DF0
0x870C4B: mov     [esi+30h], eax
0x870C4E: mov     ecx, [esi+30h]
0x870C51: push    0
0x870C53: push    2
0x870C55: push    14h
0x870C57: call    sub_772CD0
0x870C5C: cmp     dword ptr [esi+30h], 0
0x870C60: jnz     short loc_870C6A
0x870C62: call    sub_772DF0
0x870C67: mov     [esi+30h], eax
0x870C6A: mov     ecx, [esi+30h]
0x870C6D: push    0
0x870C6F: push    0
0x870C71: push    0Fh
0x870C73: call    sub_772CD0
0x870C78: cmp     dword ptr [esi+30h], 0
0x870C7C: jnz     short loc_870C86
0x870C7E: call    sub_772DF0
0x870C83: mov     [esi+30h], eax
0x870C86: mov     ecx, [esi+30h]
0x870C89: push    0
0x870C8B: push    1
0x870C8D: push    7
0x870C8F: call    sub_772CD0
0x870C94: cmp     dword ptr [esi+30h], 0
0x870C98: jnz     short loc_870CA2
0x870C9A: call    sub_772DF0
0x870C9F: mov     [esi+30h], eax
0x870CA2: mov     ecx, [esi+30h]
0x870CA5: push    0
0x870CA7: push    3
0x870CA9: push    17h
0x870CAB: call    sub_772CD0
0x870CB0: cmp     dword ptr [esi+30h], 0
0x870CB4: jnz     short loc_870CBE
0x870CB6: call    sub_772DF0
0x870CBB: mov     [esi+30h], eax
0x870CBE: mov     ecx, [esi+30h]
0x870CC1: push    0
0x870CC3: push    0
0x870CC5: push    0Eh
0x870CC7: call    sub_772CD0
0x870CCC: cmp     dword ptr [esi+30h], 0
0x870CD0: jnz     short loc_870CDA
0x870CD2: call    sub_772DF0
0x870CD7: mov     [esi+30h], eax
0x870CDA: mov     ecx, [esi+30h]
0x870CDD: push    0
0x870CDF: push    0
0x870CE1: push    34h ; '4'
0x870CE3: call    sub_772CD0
0x870CE8: or      ebx, 0FFFFFFFFh
0x870CEB: cmp     esi, ds:0B476E4h
0x870CF1: mov     dword ptr ds:0B43EC8h, 21802h
0x870CFB: mov     dword ptr ds:0B44558h, 18h
0x870D05: jz      short loc_870D25
0x870D07: add     [esi+60h], ebx
0x870D0A: jnz     short loc_870D13
0x870D0C: mov     ecx, esi
0x870D0E: call    sub_7604D0
0x870D13: mov     esi, ds:0B476E4h
0x870D19: test    esi, esi
0x870D1B: mov     [esp+30h+var_14], esi
0x870D1F: jz      short loc_870D25
0x870D21: add     dword ptr [esi+60h], 1
0x870D25: cmp     dword ptr [esi+18h], 4
0x870D29: jnb     loc_870EFD
0x870D2F: lea     eax, [esp+30h+var_10]
0x870D33: push    eax
0x870D34: call    sub_772630
0x870D39: add     esp, 4
0x870D3C: mov     ebp, eax
0x870D3E: cmp     edi, [ebp+0]
0x870D41: mov     byte ptr [esp+30h+var_4], 6
0x870D46: jz      short loc_870D67
0x870D48: test    edi, edi
0x870D4A: jz      short loc_870D58
0x870D4C: add     [edi+5Ch], ebx
0x870D4F: jnz     short loc_870D58
0x870D51: mov     ecx, edi
0x870D53: call    sub_772560
0x870D58: mov     edi, [ebp+0]
0x870D5B: test    edi, edi
0x870D5D: mov     [esp+30h+var_1C], edi
0x870D61: jz      short loc_870D67
0x870D63: add     dword ptr [edi+5Ch], 1
0x870D67: mov     eax, [esp+30h+var_10]
0x870D6B: test    eax, eax
0x870D6D: mov     byte ptr [esp+30h+var_4], 1
0x870D72: jz      short loc_870D86
0x870D74: add     [eax+5Ch], ebx
0x870D77: mov     ecx, eax
0x870D79: add     eax, 5Ch ; '\'
0x870D7C: cmp     dword ptr [eax], 0
0x870D7F: jnz     short loc_870D86
0x870D81: call    sub_772560
0x870D86: push    2
0x870D88: push    1
0x870D8A: push    0
0x870D8C: push    edi
0x870D8D: call    sub_801110
0x870D92: add     esp, 10h
0x870D95: push    edi; a3
0x870D96: push    0; a2
0x870D98: mov     ecx, esi; this
0x870D9A: call    sub_760010
0x870D9F: lea     ecx, [esp+30h+var_10]
0x870DA3: push    ecx
0x870DA4: call    sub_772630
0x870DA9: add     esp, 4
0x870DAC: mov     ebp, eax
0x870DAE: cmp     edi, [ebp+0]
0x870DB1: mov     byte ptr [esp+30h+var_4], 7
0x870DB6: jz      short loc_870DD7
0x870DB8: test    edi, edi
0x870DBA: jz      short loc_870DC8
0x870DBC: add     [edi+5Ch], ebx
0x870DBF: jnz     short loc_870DC8
0x870DC1: mov     ecx, edi
0x870DC3: call    sub_772560
0x870DC8: mov     edi, [ebp+0]
0x870DCB: test    edi, edi
0x870DCD: mov     [esp+30h+var_1C], edi
0x870DD1: jz      short loc_870DD7
0x870DD3: add     dword ptr [edi+5Ch], 1
0x870DD7: mov     eax, [esp+30h+var_10]
0x870DDB: test    eax, eax
0x870DDD: mov     byte ptr [esp+30h+var_4], 1
0x870DE2: jz      short loc_870DF6
0x870DE4: add     [eax+5Ch], ebx
0x870DE7: mov     ecx, eax
0x870DE9: add     eax, 5Ch ; '\'
0x870DEC: cmp     dword ptr [eax], 0
0x870DEF: jnz     short loc_870DF6
0x870DF1: call    sub_772560
0x870DF6: push    2
0x870DF8: push    1
0x870DFA: push    1
0x870DFC: push    edi
0x870DFD: call    sub_801110
0x870E02: add     esp, 10h
0x870E05: push    edi; a3
0x870E06: push    1; a2
0x870E08: mov     ecx, esi; this
0x870E0A: call    sub_760010
0x870E0F: lea     edx, [esp+30h+var_10]
0x870E13: push    edx
0x870E14: call    sub_772630
0x870E19: add     esp, 4
0x870E1C: mov     ebp, eax
0x870E1E: cmp     edi, [ebp+0]
0x870E21: mov     byte ptr [esp+30h+var_4], 8
0x870E26: jz      short loc_870E47
0x870E28: test    edi, edi
0x870E2A: jz      short loc_870E38
0x870E2C: add     [edi+5Ch], ebx
0x870E2F: jnz     short loc_870E38
0x870E31: mov     ecx, edi
0x870E33: call    sub_772560
0x870E38: mov     edi, [ebp+0]
0x870E3B: test    edi, edi
0x870E3D: mov     [esp+30h+var_1C], edi
0x870E41: jz      short loc_870E47
0x870E43: add     dword ptr [edi+5Ch], 1
0x870E47: mov     eax, [esp+30h+var_10]
0x870E4B: test    eax, eax
0x870E4D: mov     byte ptr [esp+30h+var_4], 1
0x870E52: jz      short loc_870E66
0x870E54: add     [eax+5Ch], ebx
0x870E57: mov     ecx, eax
0x870E59: add     eax, 5Ch ; '\'
0x870E5C: cmp     dword ptr [eax], 0
0x870E5F: jnz     short loc_870E66
0x870E61: call    sub_772560
0x870E66: push    2
0x870E68: push    1
0x870E6A: push    2
0x870E6C: push    edi
0x870E6D: call    sub_801110
0x870E72: add     esp, 10h
0x870E75: push    edi; a3
0x870E76: push    2; a2
0x870E78: mov     ecx, esi; this
0x870E7A: call    sub_760010
0x870E7F: lea     eax, [esp+30h+var_10]
0x870E83: push    eax
0x870E84: call    sub_772630
0x870E89: add     esp, 4
0x870E8C: mov     ebp, eax
0x870E8E: cmp     edi, [ebp+0]
0x870E91: mov     byte ptr [esp+30h+var_4], 9
0x870E96: jz      short loc_870EB7
0x870E98: test    edi, edi
0x870E9A: jz      short loc_870EA8
0x870E9C: add     [edi+5Ch], ebx
0x870E9F: jnz     short loc_870EA8
0x870EA1: mov     ecx, edi
0x870EA3: call    sub_772560
0x870EA8: mov     edi, [ebp+0]
0x870EAB: test    edi, edi
0x870EAD: mov     [esp+30h+var_1C], edi
0x870EB1: jz      short loc_870EB7
0x870EB3: add     dword ptr [edi+5Ch], 1
0x870EB7: mov     eax, [esp+30h+var_10]
0x870EBB: test    eax, eax
0x870EBD: mov     byte ptr [esp+30h+var_4], 1
0x870EC2: jz      short loc_870ED6
0x870EC4: add     [eax+5Ch], ebx
0x870EC7: mov     ecx, eax
0x870EC9: add     eax, 5Ch ; '\'
0x870ECC: cmp     dword ptr [eax], 0
0x870ECF: jnz     short loc_870ED6
0x870ED1: call    sub_772560
0x870ED6: mov     ecx, ds:0B43110h
0x870EDC: push    ecx; a2
0x870EDD: mov     ecx, edi; this
0x870EDF: call    sub_76C910
0x870EE4: push    0
0x870EE6: push    3
0x870EE8: push    3
0x870EEA: push    edi
0x870EEB: call    sub_801110
0x870EF0: add     esp, 10h
0x870EF3: push    edi; a3
0x870EF4: push    3; a2
0x870EF6: mov     ecx, esi; this
0x870EF8: call    sub_760010
0x870EFD: mov     edx, [esp+30h+var_18]
0x870F01: mov     ebx, [edx+100h]
0x870F07: mov     ebp, [esi+58h]
0x870F0A: cmp     ebp, ebx
0x870F0C: jz      short loc_870F40
0x870F0E: test    ebp, ebp
0x870F10: jz      short loc_870F2F
0x870F12: lea     eax, [ebp+4]
0x870F15: push    eax; lpAddend
0x870F16: call    dword ptr ds:0A2807Ch
0x870F1C: test    eax, eax
0x870F1E: jnz     short loc_870F2F
0x870F20: test    ebp, ebp
0x870F22: jz      short loc_870F2F
0x870F24: mov     edx, [ebp+0]
0x870F27: mov     eax, [edx]
0x870F29: push    1
0x870F2B: mov     ecx, ebp
0x870F2D: call    eax
0x870F2F: test    ebx, ebx
0x870F31: mov     [esi+58h], ebx
0x870F34: jz      short loc_870F40
0x870F36: add     ebx, 4
0x870F39: push    ebx; lpAddend
0x870F3A: call    dword ptr ds:0A28078h
0x870F40: mov     ecx, [esp+30h+var_18]
0x870F44: mov     ebx, [ecx+17Ch]
0x870F4A: mov     ebp, [esi+44h]
0x870F4D: cmp     ebp, ebx
0x870F4F: jz      short loc_870F83
0x870F51: test    ebp, ebp
0x870F53: jz      short loc_870F72
0x870F55: lea     edx, [ebp+4]
0x870F58: push    edx; lpAddend
0x870F59: call    dword ptr ds:0A2807Ch
0x870F5F: test    eax, eax
0x870F61: jnz     short loc_870F72
0x870F63: test    ebp, ebp
0x870F65: jz      short loc_870F72
0x870F67: mov     eax, [ebp+0]
0x870F6A: mov     edx, [eax]
0x870F6C: push    1
0x870F6E: mov     ecx, ebp
0x870F70: call    edx
0x870F72: test    ebx, ebx
0x870F74: mov     [esi+44h], ebx
0x870F77: jz      short loc_870F83
0x870F79: add     ebx, 4
0x870F7C: push    ebx; lpAddend
0x870F7D: call    dword ptr ds:0A28078h
0x870F83: cmp     dword ptr [esi+30h], 0
0x870F87: jnz     short loc_870F91
0x870F89: call    sub_772DF0
0x870F8E: mov     [esi+30h], eax
0x870F91: mov     ecx, [esi+30h]
0x870F94: push    0
0x870F96: push    1
0x870F98: push    1Bh
0x870F9A: call    sub_772CD0
0x870F9F: cmp     dword ptr [esi+30h], 0
0x870FA3: jnz     short loc_870FAD
0x870FA5: call    sub_772DF0
0x870FAA: mov     [esi+30h], eax
0x870FAD: mov     ecx, [esi+30h]
0x870FB0: push    0
0x870FB2: push    2
0x870FB4: push    13h
0x870FB6: call    sub_772CD0
0x870FBB: cmp     dword ptr [esi+30h], 0
0x870FBF: jnz     short loc_870FC9
0x870FC1: call    sub_772DF0
0x870FC6: mov     [esi+30h], eax
0x870FC9: mov     ecx, [esi+30h]
0x870FCC: push    0
0x870FCE: push    2
0x870FD0: push    14h
0x870FD2: call    sub_772CD0
0x870FD7: cmp     dword ptr [esi+30h], 0
0x870FDB: jnz     short loc_870FE5
0x870FDD: call    sub_772DF0
0x870FE2: mov     [esi+30h], eax
0x870FE5: mov     ecx, [esi+30h]
0x870FE8: push    0
0x870FEA: push    0
0x870FEC: push    0Fh
0x870FEE: call    sub_772CD0
0x870FF3: cmp     dword ptr [esi+30h], 0
0x870FF7: jnz     short loc_871001
0x870FF9: call    sub_772DF0
0x870FFE: mov     [esi+30h], eax
0x871001: mov     ecx, [esi+30h]
0x871004: push    0
0x871006: push    1
0x871008: push    7
0x87100A: call    sub_772CD0
0x87100F: cmp     dword ptr [esi+30h], 0
0x871013: jnz     short loc_87101D
0x871015: call    sub_772DF0
0x87101A: mov     [esi+30h], eax
0x87101D: mov     ecx, [esi+30h]
0x871020: push    0
0x871022: push    3
0x871024: push    17h
0x871026: call    sub_772CD0
0x87102B: cmp     dword ptr [esi+30h], 0
0x87102F: jnz     short loc_871039
0x871031: call    sub_772DF0
0x871036: mov     [esi+30h], eax
0x871039: mov     ecx, [esi+30h]
0x87103C: push    0
0x87103E: push    0
0x871040: push    0Eh
0x871042: call    sub_772CD0
0x871047: cmp     dword ptr [esi+30h], 0
0x87104B: jnz     short loc_871055
0x87104D: call    sub_772DF0
0x871052: mov     [esi+30h], eax
0x871055: mov     ecx, [esi+30h]
0x871058: push    0
0x87105A: push    0
0x87105C: push    34h ; '4'
0x87105E: call    sub_772CD0
0x871063: or      ebx, 0FFFFFFFFh
0x871066: cmp     esi, ds:0B476E8h
0x87106C: mov     dword ptr ds:0B43ED4h, 61808h
0x871076: mov     dword ptr ds:0B44564h, 18h
0x871080: jz      short loc_8710A0
0x871082: add     [esi+60h], ebx
0x871085: jnz     short loc_87108E
0x871087: mov     ecx, esi
0x871089: call    sub_7604D0
0x87108E: mov     esi, ds:0B476E8h
0x871094: test    esi, esi
0x871096: mov     [esp+30h+var_14], esi
0x87109A: jz      short loc_8710A0
0x87109C: add     dword ptr [esi+60h], 1
0x8710A0: cmp     dword ptr [esi+18h], 4
0x8710A4: jnb     loc_871278
0x8710AA: lea     eax, [esp+30h+var_10]
0x8710AE: push    eax
0x8710AF: call    sub_772630
0x8710B4: add     esp, 4
0x8710B7: mov     ebp, eax
0x8710B9: cmp     edi, [ebp+0]
0x8710BC: mov     byte ptr [esp+30h+var_4], 0Ah
0x8710C1: jz      short loc_8710E2
0x8710C3: test    edi, edi
0x8710C5: jz      short loc_8710D3
0x8710C7: add     [edi+5Ch], ebx
0x8710CA: jnz     short loc_8710D3
0x8710CC: mov     ecx, edi
0x8710CE: call    sub_772560
0x8710D3: mov     edi, [ebp+0]
0x8710D6: test    edi, edi
0x8710D8: mov     [esp+30h+var_1C], edi
0x8710DC: jz      short loc_8710E2
0x8710DE: add     dword ptr [edi+5Ch], 1
0x8710E2: mov     eax, [esp+30h+var_10]
0x8710E6: test    eax, eax
0x8710E8: mov     byte ptr [esp+30h+var_4], 1
0x8710ED: jz      short loc_871101
0x8710EF: add     [eax+5Ch], ebx
0x8710F2: mov     ecx, eax
0x8710F4: add     eax, 5Ch ; '\'
0x8710F7: cmp     dword ptr [eax], 0
0x8710FA: jnz     short loc_871101
0x8710FC: call    sub_772560
0x871101: push    2
0x871103: push    1
0x871105: push    0
0x871107: push    edi
0x871108: call    sub_801110
0x87110D: add     esp, 10h
0x871110: push    edi; a3
0x871111: push    0; a2
0x871113: mov     ecx, esi; this
0x871115: call    sub_760010
0x87111A: lea     ecx, [esp+30h+var_10]
0x87111E: push    ecx
0x87111F: call    sub_772630
0x871124: add     esp, 4
0x871127: mov     ebp, eax
0x871129: cmp     edi, [ebp+0]
0x87112C: mov     byte ptr [esp+30h+var_4], 0Bh
0x871131: jz      short loc_871152
0x871133: test    edi, edi
0x871135: jz      short loc_871143
0x871137: add     [edi+5Ch], ebx
0x87113A: jnz     short loc_871143
0x87113C: mov     ecx, edi
0x87113E: call    sub_772560
0x871143: mov     edi, [ebp+0]
0x871146: test    edi, edi
0x871148: mov     [esp+30h+var_1C], edi
0x87114C: jz      short loc_871152
0x87114E: add     dword ptr [edi+5Ch], 1
0x871152: mov     eax, [esp+30h+var_10]
0x871156: test    eax, eax
0x871158: mov     byte ptr [esp+30h+var_4], 1
0x87115D: jz      short loc_871171
0x87115F: add     [eax+5Ch], ebx
0x871162: mov     ecx, eax
0x871164: add     eax, 5Ch ; '\'
0x871167: cmp     dword ptr [eax], 0
0x87116A: jnz     short loc_871171
0x87116C: call    sub_772560
0x871171: push    2
0x871173: push    1
0x871175: push    1
0x871177: push    edi
0x871178: call    sub_801110
0x87117D: add     esp, 10h
0x871180: push    edi; a3
0x871181: push    1; a2
0x871183: mov     ecx, esi; this
0x871185: call    sub_760010
0x87118A: lea     edx, [esp+30h+var_10]
0x87118E: push    edx
0x87118F: call    sub_772630
0x871194: add     esp, 4
0x871197: mov     ebp, eax
0x871199: cmp     edi, [ebp+0]
0x87119C: mov     byte ptr [esp+30h+var_4], 0Ch
0x8711A1: jz      short loc_8711C2
0x8711A3: test    edi, edi
0x8711A5: jz      short loc_8711B3
0x8711A7: add     [edi+5Ch], ebx
0x8711AA: jnz     short loc_8711B3
0x8711AC: mov     ecx, edi
0x8711AE: call    sub_772560
0x8711B3: mov     edi, [ebp+0]
0x8711B6: test    edi, edi
0x8711B8: mov     [esp+30h+var_1C], edi
0x8711BC: jz      short loc_8711C2
0x8711BE: add     dword ptr [edi+5Ch], 1
0x8711C2: mov     eax, [esp+30h+var_10]
0x8711C6: test    eax, eax
0x8711C8: mov     byte ptr [esp+30h+var_4], 1
0x8711CD: jz      short loc_8711E1
0x8711CF: add     [eax+5Ch], ebx
0x8711D2: mov     ecx, eax
0x8711D4: add     eax, 5Ch ; '\'
0x8711D7: cmp     dword ptr [eax], 0
0x8711DA: jnz     short loc_8711E1
0x8711DC: call    sub_772560
0x8711E1: push    2
0x8711E3: push    1
0x8711E5: push    2
0x8711E7: push    edi
0x8711E8: call    sub_801110
0x8711ED: add     esp, 10h
0x8711F0: push    edi; a3
0x8711F1: push    2; a2
0x8711F3: mov     ecx, esi; this
0x8711F5: call    sub_760010
0x8711FA: lea     eax, [esp+30h+var_10]
0x8711FE: push    eax
0x8711FF: call    sub_772630
0x871204: add     esp, 4
0x871207: mov     ebp, eax
0x871209: cmp     edi, [ebp+0]
0x87120C: mov     byte ptr [esp+30h+var_4], 0Dh
0x871211: jz      short loc_871232
0x871213: test    edi, edi
0x871215: jz      short loc_871223
0x871217: add     [edi+5Ch], ebx
0x87121A: jnz     short loc_871223
0x87121C: mov     ecx, edi
0x87121E: call    sub_772560
0x871223: mov     edi, [ebp+0]
0x871226: test    edi, edi
0x871228: mov     [esp+30h+var_1C], edi
0x87122C: jz      short loc_871232
0x87122E: add     dword ptr [edi+5Ch], 1
0x871232: mov     eax, [esp+30h+var_10]
0x871236: test    eax, eax
0x871238: mov     byte ptr [esp+30h+var_4], 1
0x87123D: jz      short loc_871251
0x87123F: add     [eax+5Ch], ebx
0x871242: mov     ecx, eax
0x871244: add     eax, 5Ch ; '\'
0x871247: cmp     dword ptr [eax], 0
0x87124A: jnz     short loc_871251
0x87124C: call    sub_772560
0x871251: mov     ecx, ds:0B43110h
0x871257: push    ecx; a2
0x871258: mov     ecx, edi; this
0x87125A: call    sub_76C910
0x87125F: push    0
0x871261: push    3
0x871263: push    3
0x871265: push    edi
0x871266: call    sub_801110
0x87126B: add     esp, 10h
0x87126E: push    edi; a3
0x87126F: push    3; a2
0x871271: mov     ecx, esi; this
0x871273: call    sub_760010
0x871278: mov     edx, [esp+30h+var_18]
0x87127C: mov     ebx, [edx+104h]
0x871282: mov     ebp, [esi+58h]
0x871285: cmp     ebp, ebx
0x871287: jz      short loc_8712BB
0x871289: test    ebp, ebp
0x87128B: jz      short loc_8712AA
0x87128D: lea     eax, [ebp+4]
0x871290: push    eax; lpAddend
0x871291: call    dword ptr ds:0A2807Ch
0x871297: test    eax, eax
0x871299: jnz     short loc_8712AA
0x87129B: test    ebp, ebp
0x87129D: jz      short loc_8712AA
0x87129F: mov     edx, [ebp+0]
0x8712A2: mov     eax, [edx]
0x8712A4: push    1
0x8712A6: mov     ecx, ebp
0x8712A8: call    eax
0x8712AA: test    ebx, ebx
0x8712AC: mov     [esi+58h], ebx
0x8712AF: jz      short loc_8712BB
0x8712B1: add     ebx, 4
0x8712B4: push    ebx; lpAddend
0x8712B5: call    dword ptr ds:0A28078h
0x8712BB: mov     ecx, [esp+30h+var_18]
0x8712BF: mov     ebx, [ecx+180h]
0x8712C5: mov     ebp, [esi+44h]
0x8712C8: cmp     ebp, ebx
0x8712CA: jz      short loc_8712FE
0x8712CC: test    ebp, ebp
0x8712CE: jz      short loc_8712ED
0x8712D0: lea     edx, [ebp+4]
0x8712D3: push    edx; lpAddend
0x8712D4: call    dword ptr ds:0A2807Ch
0x8712DA: test    eax, eax
0x8712DC: jnz     short loc_8712ED
0x8712DE: test    ebp, ebp
0x8712E0: jz      short loc_8712ED
0x8712E2: mov     eax, [ebp+0]
0x8712E5: mov     edx, [eax]
0x8712E7: push    1
0x8712E9: mov     ecx, ebp
0x8712EB: call    edx
0x8712ED: test    ebx, ebx
0x8712EF: mov     [esi+44h], ebx
0x8712F2: jz      short loc_8712FE
0x8712F4: add     ebx, 4
0x8712F7: push    ebx; lpAddend
0x8712F8: call    dword ptr ds:0A28078h
0x8712FE: cmp     dword ptr [esi+30h], 0
0x871302: jnz     short loc_87130C
0x871304: call    sub_772DF0
0x871309: mov     [esi+30h], eax
0x87130C: mov     ecx, [esi+30h]
0x87130F: push    0
0x871311: push    1
0x871313: push    1Bh
0x871315: call    sub_772CD0
0x87131A: cmp     dword ptr [esi+30h], 0
0x87131E: jnz     short loc_871328
0x871320: call    sub_772DF0
0x871325: mov     [esi+30h], eax
0x871328: mov     ecx, [esi+30h]
0x87132B: push    0
0x87132D: push    2
0x87132F: push    13h
0x871331: call    sub_772CD0
0x871336: cmp     dword ptr [esi+30h], 0
0x87133A: jnz     short loc_871344
0x87133C: call    sub_772DF0
0x871341: mov     [esi+30h], eax
0x871344: mov     ecx, [esi+30h]
0x871347: push    0
0x871349: push    2
0x87134B: push    14h
0x87134D: call    sub_772CD0
0x871352: cmp     dword ptr [esi+30h], 0
0x871356: jnz     short loc_871360
0x871358: call    sub_772DF0
0x87135D: mov     [esi+30h], eax
0x871360: mov     ecx, [esi+30h]
0x871363: push    0
0x871365: push    0
0x871367: push    0Fh
0x871369: call    sub_772CD0
0x87136E: cmp     dword ptr [esi+30h], 0
0x871372: jnz     short loc_87137C
0x871374: call    sub_772DF0
0x871379: mov     [esi+30h], eax
0x87137C: mov     ecx, [esi+30h]
0x87137F: push    0
0x871381: push    1
0x871383: push    7
0x871385: call    sub_772CD0
0x87138A: cmp     dword ptr [esi+30h], 0
0x87138E: jnz     short loc_871398
0x871390: call    sub_772DF0
0x871395: mov     [esi+30h], eax
0x871398: mov     ecx, [esi+30h]
0x87139B: push    0
0x87139D: push    3
0x87139F: push    17h
0x8713A1: call    sub_772CD0
0x8713A6: cmp     dword ptr [esi+30h], 0
0x8713AA: jnz     short loc_8713B4
0x8713AC: call    sub_772DF0
0x8713B1: mov     [esi+30h], eax
0x8713B4: mov     ecx, [esi+30h]
0x8713B7: push    0
0x8713B9: push    0
0x8713BB: push    0Eh
0x8713BD: call    sub_772CD0
0x8713C2: cmp     dword ptr [esi+30h], 0
0x8713C6: jnz     short loc_8713D0
0x8713C8: call    sub_772DF0
0x8713CD: mov     [esi+30h], eax
0x8713D0: mov     ecx, [esi+30h]
0x8713D3: push    0
0x8713D5: push    0
0x8713D7: push    34h ; '4'
0x8713D9: call    sub_772CD0
0x8713DE: or      ebx, 0FFFFFFFFh
0x8713E1: cmp     esi, ds:0B476ECh
0x8713E7: mov     dword ptr ds:0B43F00h, 23802h
0x8713F1: mov     dword ptr ds:0B44590h, 38h ; '8'
0x8713FB: jz      short loc_87141B
0x8713FD: add     [esi+60h], ebx
0x871400: jnz     short loc_871409
0x871402: mov     ecx, esi
0x871404: call    sub_7604D0
0x871409: mov     esi, ds:0B476ECh
0x87140F: test    esi, esi
0x871411: mov     [esp+30h+var_14], esi
0x871415: jz      short loc_87141B
0x871417: add     dword ptr [esi+60h], 1
0x87141B: cmp     dword ptr [esi+18h], 4
0x87141F: jnb     loc_8715F3
0x871425: lea     eax, [esp+30h+var_10]
0x871429: push    eax
0x87142A: call    sub_772630
0x87142F: add     esp, 4
0x871432: mov     ebp, eax
0x871434: cmp     edi, [ebp+0]
0x871437: mov     byte ptr [esp+30h+var_4], 0Eh
0x87143C: jz      short loc_87145D
0x87143E: test    edi, edi
0x871440: jz      short loc_87144E
0x871442: add     [edi+5Ch], ebx
0x871445: jnz     short loc_87144E
0x871447: mov     ecx, edi
0x871449: call    sub_772560
0x87144E: mov     edi, [ebp+0]
0x871451: test    edi, edi
0x871453: mov     [esp+30h+var_1C], edi
0x871457: jz      short loc_87145D
0x871459: add     dword ptr [edi+5Ch], 1
0x87145D: mov     eax, [esp+30h+var_10]
0x871461: test    eax, eax
0x871463: mov     byte ptr [esp+30h+var_4], 1
0x871468: jz      short loc_87147C
0x87146A: add     [eax+5Ch], ebx
0x87146D: mov     ecx, eax
0x87146F: add     eax, 5Ch ; '\'
0x871472: cmp     dword ptr [eax], 0
0x871475: jnz     short loc_87147C
0x871477: call    sub_772560
0x87147C: push    2
0x87147E: push    1
0x871480: push    0
0x871482: push    edi
0x871483: call    sub_801110
0x871488: add     esp, 10h
0x87148B: push    edi; a3
0x87148C: push    0; a2
0x87148E: mov     ecx, esi; this
0x871490: call    sub_760010
0x871495: lea     ecx, [esp+30h+var_10]
0x871499: push    ecx
0x87149A: call    sub_772630
0x87149F: add     esp, 4
0x8714A2: mov     ebp, eax
0x8714A4: cmp     edi, [ebp+0]
0x8714A7: mov     byte ptr [esp+30h+var_4], 0Fh
0x8714AC: jz      short loc_8714CD
0x8714AE: test    edi, edi
0x8714B0: jz      short loc_8714BE
0x8714B2: add     [edi+5Ch], ebx
0x8714B5: jnz     short loc_8714BE
0x8714B7: mov     ecx, edi
0x8714B9: call    sub_772560
0x8714BE: mov     edi, [ebp+0]
0x8714C1: test    edi, edi
0x8714C3: mov     [esp+30h+var_1C], edi
0x8714C7: jz      short loc_8714CD
0x8714C9: add     dword ptr [edi+5Ch], 1
0x8714CD: mov     eax, [esp+30h+var_10]
0x8714D1: test    eax, eax
0x8714D3: mov     byte ptr [esp+30h+var_4], 1
0x8714D8: jz      short loc_8714EC
0x8714DA: add     [eax+5Ch], ebx
0x8714DD: mov     ecx, eax
0x8714DF: add     eax, 5Ch ; '\'
0x8714E2: cmp     dword ptr [eax], 0
0x8714E5: jnz     short loc_8714EC
0x8714E7: call    sub_772560
0x8714EC: push    2
0x8714EE: push    1
0x8714F0: push    1
0x8714F2: push    edi
0x8714F3: call    sub_801110
0x8714F8: add     esp, 10h
0x8714FB: push    edi; a3
0x8714FC: push    1; a2
0x8714FE: mov     ecx, esi; this
0x871500: call    sub_760010
0x871505: lea     edx, [esp+30h+var_10]
0x871509: push    edx
0x87150A: call    sub_772630
0x87150F: add     esp, 4
0x871512: mov     ebp, eax
0x871514: cmp     edi, [ebp+0]
0x871517: mov     byte ptr [esp+30h+var_4], 10h
0x87151C: jz      short loc_87153D
0x87151E: test    edi, edi
0x871520: jz      short loc_87152E
0x871522: add     [edi+5Ch], ebx
0x871525: jnz     short loc_87152E
0x871527: mov     ecx, edi
0x871529: call    sub_772560
0x87152E: mov     edi, [ebp+0]
0x871531: test    edi, edi
0x871533: mov     [esp+30h+var_1C], edi
0x871537: jz      short loc_87153D
0x871539: add     dword ptr [edi+5Ch], 1
0x87153D: mov     eax, [esp+30h+var_10]
0x871541: test    eax, eax
0x871543: mov     byte ptr [esp+30h+var_4], 1
0x871548: jz      short loc_87155C
0x87154A: add     [eax+5Ch], ebx
0x87154D: mov     ecx, eax
0x87154F: add     eax, 5Ch ; '\'
0x871552: cmp     dword ptr [eax], 0
0x871555: jnz     short loc_87155C
0x871557: call    sub_772560
0x87155C: push    2
0x87155E: push    1
0x871560: push    2
0x871562: push    edi
0x871563: call    sub_801110
0x871568: add     esp, 10h
0x87156B: push    edi; a3
0x87156C: push    2; a2
0x87156E: mov     ecx, esi; this
0x871570: call    sub_760010
0x871575: lea     eax, [esp+30h+var_10]
0x871579: push    eax
0x87157A: call    sub_772630
0x87157F: add     esp, 4
0x871582: mov     ebp, eax
0x871584: cmp     edi, [ebp+0]
0x871587: mov     byte ptr [esp+30h+var_4], 11h
0x87158C: jz      short loc_8715AD
0x87158E: test    edi, edi
0x871590: jz      short loc_87159E
0x871592: add     [edi+5Ch], ebx
0x871595: jnz     short loc_87159E
0x871597: mov     ecx, edi
0x871599: call    sub_772560
0x87159E: mov     edi, [ebp+0]
0x8715A1: test    edi, edi
0x8715A3: mov     [esp+30h+var_1C], edi
0x8715A7: jz      short loc_8715AD
0x8715A9: add     dword ptr [edi+5Ch], 1
0x8715AD: mov     eax, [esp+30h+var_10]
0x8715B1: test    eax, eax
0x8715B3: mov     byte ptr [esp+30h+var_4], 1
0x8715B8: jz      short loc_8715CC
0x8715BA: add     [eax+5Ch], ebx
0x8715BD: mov     ecx, eax
0x8715BF: add     eax, 5Ch ; '\'
0x8715C2: cmp     dword ptr [eax], 0
0x8715C5: jnz     short loc_8715CC
0x8715C7: call    sub_772560
0x8715CC: mov     ecx, ds:0B43110h
0x8715D2: push    ecx; a2
0x8715D3: mov     ecx, edi; this
0x8715D5: call    sub_76C910
0x8715DA: push    0
0x8715DC: push    3
0x8715DE: push    3
0x8715E0: push    edi
0x8715E1: call    sub_801110
0x8715E6: add     esp, 10h
0x8715E9: push    edi; a3
0x8715EA: push    3; a2
0x8715EC: mov     ecx, esi; this
0x8715EE: call    sub_760010
0x8715F3: mov     edx, [esp+30h+var_18]
0x8715F7: mov     ebx, [edx+108h]
0x8715FD: mov     ebp, [esi+58h]
0x871600: cmp     ebp, ebx
0x871602: jz      short loc_871636
0x871604: test    ebp, ebp
0x871606: jz      short loc_871625
0x871608: lea     eax, [ebp+4]
0x87160B: push    eax; lpAddend
0x87160C: call    dword ptr ds:0A2807Ch
0x871612: test    eax, eax
0x871614: jnz     short loc_871625
0x871616: test    ebp, ebp
0x871618: jz      short loc_871625
0x87161A: mov     edx, [ebp+0]
0x87161D: mov     eax, [edx]
0x87161F: push    1
0x871621: mov     ecx, ebp
0x871623: call    eax
0x871625: test    ebx, ebx
0x871627: mov     [esi+58h], ebx
0x87162A: jz      short loc_871636
0x87162C: add     ebx, 4
0x87162F: push    ebx; lpAddend
0x871630: call    dword ptr ds:0A28078h
0x871636: mov     ecx, [esp+30h+var_18]
0x87163A: mov     ebx, [ecx+180h]
0x871640: mov     ebp, [esi+44h]
0x871643: cmp     ebp, ebx
0x871645: jz      short loc_871679
0x871647: test    ebp, ebp
0x871649: jz      short loc_871668
0x87164B: lea     edx, [ebp+4]
0x87164E: push    edx; lpAddend
0x87164F: call    dword ptr ds:0A2807Ch
0x871655: test    eax, eax
0x871657: jnz     short loc_871668
0x871659: test    ebp, ebp
0x87165B: jz      short loc_871668
0x87165D: mov     eax, [ebp+0]
0x871660: mov     edx, [eax]
0x871662: push    1
0x871664: mov     ecx, ebp
0x871666: call    edx
0x871668: test    ebx, ebx
0x87166A: mov     [esi+44h], ebx
0x87166D: jz      short loc_871679
0x87166F: add     ebx, 4
0x871672: push    ebx; lpAddend
0x871673: call    dword ptr ds:0A28078h
0x871679: cmp     dword ptr [esi+30h], 0
0x87167D: jnz     short loc_871687
0x87167F: call    sub_772DF0
0x871684: mov     [esi+30h], eax
0x871687: mov     ecx, [esi+30h]
0x87168A: push    0
0x87168C: push    1
0x87168E: push    1Bh
0x871690: call    sub_772CD0
0x871695: cmp     dword ptr [esi+30h], 0
0x871699: jnz     short loc_8716A3
0x87169B: call    sub_772DF0
0x8716A0: mov     [esi+30h], eax
0x8716A3: mov     ecx, [esi+30h]
0x8716A6: push    0
0x8716A8: push    2
0x8716AA: push    13h
0x8716AC: call    sub_772CD0
0x8716B1: cmp     dword ptr [esi+30h], 0
0x8716B5: jnz     short loc_8716BF
0x8716B7: call    sub_772DF0
0x8716BC: mov     [esi+30h], eax
0x8716BF: mov     ecx, [esi+30h]
0x8716C2: push    0
0x8716C4: push    2
0x8716C6: push    14h
0x8716C8: call    sub_772CD0
0x8716CD: cmp     dword ptr [esi+30h], 0
0x8716D1: jnz     short loc_8716DB
0x8716D3: call    sub_772DF0
0x8716D8: mov     [esi+30h], eax
0x8716DB: mov     ecx, [esi+30h]
0x8716DE: push    0
0x8716E0: push    0
0x8716E2: push    0Fh
0x8716E4: call    sub_772CD0
0x8716E9: cmp     dword ptr [esi+30h], 0
0x8716ED: jnz     short loc_8716F7
0x8716EF: call    sub_772DF0
0x8716F4: mov     [esi+30h], eax
0x8716F7: mov     ecx, [esi+30h]
0x8716FA: push    0
0x8716FC: push    1
0x8716FE: push    7
0x871700: call    sub_772CD0
0x871705: cmp     dword ptr [esi+30h], 0
0x871709: jnz     short loc_871713
0x87170B: call    sub_772DF0
0x871710: mov     [esi+30h], eax
0x871713: mov     ecx, [esi+30h]
0x871716: push    0
0x871718: push    3
0x87171A: push    17h
0x87171C: call    sub_772CD0
0x871721: cmp     dword ptr [esi+30h], 0
0x871725: jnz     short loc_87172F
0x871727: call    sub_772DF0
0x87172C: mov     [esi+30h], eax
0x87172F: mov     ecx, [esi+30h]
0x871732: push    0
0x871734: push    0
0x871736: push    0Eh
0x871738: call    sub_772CD0
0x87173D: cmp     dword ptr [esi+30h], 0
0x871741: jnz     short loc_87174B
0x871743: call    sub_772DF0
0x871748: mov     [esi+30h], eax
0x87174B: mov     ecx, [esi+30h]
0x87174E: push    0
0x871750: push    0
0x871752: push    34h ; '4'
0x871754: call    sub_772CD0
0x871759: or      ebx, 0FFFFFFFFh
0x87175C: test    edi, edi
0x87175E: mov     dword ptr ds:0B43F0Ch, 63808h
0x871768: mov     dword ptr ds:0B4459Ch, 38h ; '8'
0x871772: mov     byte ptr [esp+30h+var_4], 0
0x871777: jz      short loc_871785
0x871779: add     [edi+5Ch], ebx
0x87177C: jnz     short loc_871785
0x87177E: mov     ecx, edi
0x871780: call    sub_772560
0x871785: add     [esi+60h], ebx
0x871788: mov     [esp+30h+var_4], ebx
0x87178C: jnz     short loc_871795
0x87178E: mov     ecx, esi
0x871790: call    sub_7604D0
0x871795: mov     ecx, dword ptr [esp+30h+var_C]
0x871799: mov     large fs:0, ecx
0x8717A0: pop     ecx
0x8717A1: pop     edi
0x8717A2: pop     esi
0x8717A3: pop     ebp
0x8717A4: pop     ebx
0x8717A5: add     esp, 1Ch
0x8717A8: retn
