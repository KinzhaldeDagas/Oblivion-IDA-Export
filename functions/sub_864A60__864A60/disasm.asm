0x864A60: push    0FFFFFFFFh
0x864A62: push    offset SEH_864A60
0x864A67: mov     eax, large fs:0
0x864A6D: push    eax
0x864A6E: sub     esp, 10h
0x864A71: push    ebx
0x864A72: push    ebp
0x864A73: push    esi
0x864A74: push    edi
0x864A75: mov     eax, ds:0B30AACh
0x864A7A: xor     eax, esp
0x864A7C: push    eax
0x864A7D: lea     eax, [esp+30h+var_C]
0x864A81: mov     large fs:0, eax
0x864A87: mov     [esp+30h+var_18], ecx
0x864A8B: xor     esi, esi
0x864A8D: xor     edi, edi
0x864A8F: mov     [esp+30h+var_14], esi
0x864A93: mov     [esp+30h+var_4], edi
0x864A97: mov     [esp+30h+a3], edi
0x864A9B: mov     eax, ds:0B47620h
0x864AA0: cmp     eax, edi
0x864AA2: mov     ebx, 1
0x864AA7: mov     byte ptr [esp+30h+var_4], bl
0x864AAB: jz      short loc_864ABA
0x864AAD: mov     esi, eax
0x864AAF: cmp     esi, edi
0x864AB1: mov     [esp+30h+var_14], esi
0x864AB5: jz      short loc_864ABA
0x864AB7: add     [esi+60h], ebx
0x864ABA: mov     eax, [esi+18h]
0x864ABD: or      ebp, 0FFFFFFFFh
0x864AC0: cmp     eax, 7
0x864AC3: jnb     loc_864DBF
0x864AC9: lea     eax, [esp+30h+var_10]
0x864ACD: push    eax
0x864ACE: call    sub_772630
0x864AD3: add     esp, 4
0x864AD6: mov     eax, [eax]
0x864AD8: test    eax, eax
0x864ADA: jz      short loc_864AE5
0x864ADC: mov     edi, eax
0x864ADE: add     [edi+5Ch], ebx
0x864AE1: mov     [esp+30h+a3], edi
0x864AE5: mov     eax, [esp+30h+var_10]
0x864AE9: test    eax, eax
0x864AEB: mov     byte ptr [esp+30h+var_4], 1
0x864AF0: jz      short loc_864B04
0x864AF2: add     [eax+5Ch], ebp
0x864AF5: mov     ecx, eax
0x864AF7: add     eax, 5Ch ; '\'
0x864AFA: cmp     dword ptr [eax], 0
0x864AFD: jnz     short loc_864B04
0x864AFF: call    sub_772560
0x864B04: push    2
0x864B06: push    1
0x864B08: push    0
0x864B0A: push    edi
0x864B0B: call    sub_801110
0x864B10: add     esp, 10h
0x864B13: push    edi; a3
0x864B14: push    0; a2
0x864B16: mov     ecx, esi; this
0x864B18: call    sub_760010
0x864B1D: lea     ecx, [esp+30h+var_10]
0x864B21: push    ecx
0x864B22: call    sub_772630
0x864B27: add     esp, 4
0x864B2A: mov     ebx, eax
0x864B2C: cmp     edi, [ebx]
0x864B2E: mov     byte ptr [esp+30h+var_4], 3
0x864B33: jz      short loc_864B53
0x864B35: test    edi, edi
0x864B37: jz      short loc_864B45
0x864B39: add     [edi+5Ch], ebp
0x864B3C: jnz     short loc_864B45
0x864B3E: mov     ecx, edi
0x864B40: call    sub_772560
0x864B45: mov     edi, [ebx]
0x864B47: test    edi, edi
0x864B49: mov     [esp+30h+a3], edi
0x864B4D: jz      short loc_864B53
0x864B4F: add     dword ptr [edi+5Ch], 1
0x864B53: mov     eax, [esp+30h+var_10]
0x864B57: test    eax, eax
0x864B59: mov     byte ptr [esp+30h+var_4], 1
0x864B5E: jz      short loc_864B72
0x864B60: add     [eax+5Ch], ebp
0x864B63: mov     ecx, eax
0x864B65: add     eax, 5Ch ; '\'
0x864B68: cmp     dword ptr [eax], 0
0x864B6B: jnz     short loc_864B72
0x864B6D: call    sub_772560
0x864B72: push    2
0x864B74: push    1
0x864B76: push    1
0x864B78: push    edi
0x864B79: call    sub_801110
0x864B7E: add     esp, 10h
0x864B81: push    edi; a3
0x864B82: push    1; a2
0x864B84: mov     ecx, esi; this
0x864B86: call    sub_760010
0x864B8B: lea     edx, [esp+30h+var_10]
0x864B8F: push    edx
0x864B90: call    sub_772630
0x864B95: add     esp, 4
0x864B98: mov     ebx, eax
0x864B9A: cmp     edi, [ebx]
0x864B9C: mov     byte ptr [esp+30h+var_4], 4
0x864BA1: jz      short loc_864BC1
0x864BA3: test    edi, edi
0x864BA5: jz      short loc_864BB3
0x864BA7: add     [edi+5Ch], ebp
0x864BAA: jnz     short loc_864BB3
0x864BAC: mov     ecx, edi
0x864BAE: call    sub_772560
0x864BB3: mov     edi, [ebx]
0x864BB5: test    edi, edi
0x864BB7: mov     [esp+30h+a3], edi
0x864BBB: jz      short loc_864BC1
0x864BBD: add     dword ptr [edi+5Ch], 1
0x864BC1: mov     eax, [esp+30h+var_10]
0x864BC5: test    eax, eax
0x864BC7: mov     byte ptr [esp+30h+var_4], 1
0x864BCC: jz      short loc_864BE0
0x864BCE: add     [eax+5Ch], ebp
0x864BD1: mov     ecx, eax
0x864BD3: add     eax, 5Ch ; '\'
0x864BD6: cmp     dword ptr [eax], 0
0x864BD9: jnz     short loc_864BE0
0x864BDB: call    sub_772560
0x864BE0: push    2
0x864BE2: push    1
0x864BE4: push    2
0x864BE6: push    edi
0x864BE7: call    sub_801110
0x864BEC: add     esp, 10h
0x864BEF: push    edi; a3
0x864BF0: push    2; a2
0x864BF2: mov     ecx, esi; this
0x864BF4: call    sub_760010
0x864BF9: lea     eax, [esp+30h+var_10]
0x864BFD: push    eax
0x864BFE: call    sub_772630
0x864C03: add     esp, 4
0x864C06: mov     ebx, eax
0x864C08: cmp     edi, [ebx]
0x864C0A: mov     byte ptr [esp+30h+var_4], 5
0x864C0F: jz      short loc_864C2F
0x864C11: test    edi, edi
0x864C13: jz      short loc_864C21
0x864C15: add     [edi+5Ch], ebp
0x864C18: jnz     short loc_864C21
0x864C1A: mov     ecx, edi
0x864C1C: call    sub_772560
0x864C21: mov     edi, [ebx]
0x864C23: test    edi, edi
0x864C25: mov     [esp+30h+a3], edi
0x864C29: jz      short loc_864C2F
0x864C2B: add     dword ptr [edi+5Ch], 1
0x864C2F: mov     eax, [esp+30h+var_10]
0x864C33: test    eax, eax
0x864C35: mov     byte ptr [esp+30h+var_4], 1
0x864C3A: jz      short loc_864C4E
0x864C3C: add     [eax+5Ch], ebp
0x864C3F: mov     ecx, eax
0x864C41: add     eax, 5Ch ; '\'
0x864C44: cmp     dword ptr [eax], 0
0x864C47: jnz     short loc_864C4E
0x864C49: call    sub_772560
0x864C4E: push    2
0x864C50: push    1
0x864C52: push    3
0x864C54: push    edi
0x864C55: call    sub_801110
0x864C5A: add     esp, 10h
0x864C5D: push    edi; a3
0x864C5E: push    3; a2
0x864C60: mov     ecx, esi; this
0x864C62: call    sub_760010
0x864C67: lea     ecx, [esp+30h+var_10]
0x864C6B: push    ecx
0x864C6C: call    sub_772630
0x864C71: add     esp, 4
0x864C74: mov     ebx, eax
0x864C76: cmp     edi, [ebx]
0x864C78: mov     byte ptr [esp+30h+var_4], 6
0x864C7D: jz      short loc_864C9D
0x864C7F: test    edi, edi
0x864C81: jz      short loc_864C8F
0x864C83: add     [edi+5Ch], ebp
0x864C86: jnz     short loc_864C8F
0x864C88: mov     ecx, edi
0x864C8A: call    sub_772560
0x864C8F: mov     edi, [ebx]
0x864C91: test    edi, edi
0x864C93: mov     [esp+30h+a3], edi
0x864C97: jz      short loc_864C9D
0x864C99: add     dword ptr [edi+5Ch], 1
0x864C9D: mov     eax, [esp+30h+var_10]
0x864CA1: test    eax, eax
0x864CA3: mov     byte ptr [esp+30h+var_4], 1
0x864CA8: jz      short loc_864CBC
0x864CAA: add     [eax+5Ch], ebp
0x864CAD: mov     ecx, eax
0x864CAF: add     eax, 5Ch ; '\'
0x864CB2: cmp     dword ptr [eax], 0
0x864CB5: jnz     short loc_864CBC
0x864CB7: call    sub_772560
0x864CBC: push    0
0x864CBE: push    3
0x864CC0: push    4
0x864CC2: push    edi
0x864CC3: call    sub_801110
0x864CC8: mov     edx, ds:0B43110h
0x864CCE: add     esp, 10h
0x864CD1: push    edx; a2
0x864CD2: mov     ecx, edi; this
0x864CD4: call    sub_76C910
0x864CD9: push    edi; a3
0x864CDA: push    4; a2
0x864CDC: mov     ecx, esi; this
0x864CDE: call    sub_760010
0x864CE3: lea     eax, [esp+30h+var_10]
0x864CE7: push    eax
0x864CE8: call    sub_772630
0x864CED: add     esp, 4
0x864CF0: mov     ebx, eax
0x864CF2: cmp     edi, [ebx]
0x864CF4: mov     byte ptr [esp+30h+var_4], 7
0x864CF9: jz      short loc_864D19
0x864CFB: test    edi, edi
0x864CFD: jz      short loc_864D0B
0x864CFF: add     [edi+5Ch], ebp
0x864D02: jnz     short loc_864D0B
0x864D04: mov     ecx, edi
0x864D06: call    sub_772560
0x864D0B: mov     edi, [ebx]
0x864D0D: test    edi, edi
0x864D0F: mov     [esp+30h+a3], edi
0x864D13: jz      short loc_864D19
0x864D15: add     dword ptr [edi+5Ch], 1
0x864D19: mov     eax, [esp+30h+var_10]
0x864D1D: test    eax, eax
0x864D1F: mov     byte ptr [esp+30h+var_4], 1
0x864D24: jz      short loc_864D38
0x864D26: add     [eax+5Ch], ebp
0x864D29: mov     ecx, eax
0x864D2B: add     eax, 5Ch ; '\'
0x864D2E: cmp     dword ptr [eax], 0
0x864D31: jnz     short loc_864D38
0x864D33: call    sub_772560
0x864D38: push    2
0x864D3A: push    1
0x864D3C: push    5
0x864D3E: push    edi
0x864D3F: call    sub_801110
0x864D44: add     esp, 10h
0x864D47: push    edi; a3
0x864D48: push    5; a2
0x864D4A: mov     ecx, esi; this
0x864D4C: call    sub_760010
0x864D51: lea     ecx, [esp+30h+var_10]
0x864D55: push    ecx
0x864D56: call    sub_772630
0x864D5B: add     esp, 4
0x864D5E: mov     ebx, eax
0x864D60: cmp     edi, [ebx]
0x864D62: mov     byte ptr [esp+30h+var_4], 8
0x864D67: jz      short loc_864D87
0x864D69: test    edi, edi
0x864D6B: jz      short loc_864D79
0x864D6D: add     [edi+5Ch], ebp
0x864D70: jnz     short loc_864D79
0x864D72: mov     ecx, edi
0x864D74: call    sub_772560
0x864D79: mov     edi, [ebx]
0x864D7B: test    edi, edi
0x864D7D: mov     [esp+30h+a3], edi
0x864D81: jz      short loc_864D87
0x864D83: add     dword ptr [edi+5Ch], 1
0x864D87: mov     eax, [esp+30h+var_10]
0x864D8B: test    eax, eax
0x864D8D: mov     byte ptr [esp+30h+var_4], 1
0x864D92: jz      short loc_864DA6
0x864D94: add     [eax+5Ch], ebp
0x864D97: mov     ecx, eax
0x864D99: add     eax, 5Ch ; '\'
0x864D9C: cmp     dword ptr [eax], 0
0x864D9F: jnz     short loc_864DA6
0x864DA1: call    sub_772560
0x864DA6: push    0
0x864DA8: push    3
0x864DAA: push    6
0x864DAC: push    edi
0x864DAD: call    sub_801110
0x864DB2: add     esp, 10h
0x864DB5: push    edi; a3
0x864DB6: push    6; a2
0x864DB8: mov     ecx, esi; this
0x864DBA: call    sub_760010
0x864DBF: mov     edx, [esp+30h+var_18]
0x864DC3: mov     ebx, [edx+0DCh]
0x864DC9: mov     ebp, [esi+58h]
0x864DCC: cmp     ebp, ebx
0x864DCE: jz      short loc_864E02
0x864DD0: test    ebp, ebp
0x864DD2: jz      short loc_864DF1
0x864DD4: lea     eax, [ebp+4]
0x864DD7: push    eax; lpAddend
0x864DD8: call    dword ptr ds:0A2807Ch
0x864DDE: test    eax, eax
0x864DE0: jnz     short loc_864DF1
0x864DE2: test    ebp, ebp
0x864DE4: jz      short loc_864DF1
0x864DE6: mov     edx, [ebp+0]
0x864DE9: mov     eax, [edx]
0x864DEB: push    1
0x864DED: mov     ecx, ebp
0x864DEF: call    eax
0x864DF1: test    ebx, ebx
0x864DF3: mov     [esi+58h], ebx
0x864DF6: jz      short loc_864E02
0x864DF8: add     ebx, 4
0x864DFB: push    ebx; lpAddend
0x864DFC: call    dword ptr ds:0A28078h
0x864E02: mov     ecx, [esp+30h+var_18]
0x864E06: mov     ebx, [ecx+15Ch]
0x864E0C: mov     ebp, [esi+44h]
0x864E0F: cmp     ebp, ebx
0x864E11: jz      short loc_864E45
0x864E13: test    ebp, ebp
0x864E15: jz      short loc_864E34
0x864E17: lea     edx, [ebp+4]
0x864E1A: push    edx; lpAddend
0x864E1B: call    dword ptr ds:0A2807Ch
0x864E21: test    eax, eax
0x864E23: jnz     short loc_864E34
0x864E25: test    ebp, ebp
0x864E27: jz      short loc_864E34
0x864E29: mov     eax, [ebp+0]
0x864E2C: mov     edx, [eax]
0x864E2E: push    1
0x864E30: mov     ecx, ebp
0x864E32: call    edx
0x864E34: test    ebx, ebx
0x864E36: mov     [esi+44h], ebx
0x864E39: jz      short loc_864E45
0x864E3B: add     ebx, 4
0x864E3E: push    ebx; lpAddend
0x864E3F: call    dword ptr ds:0A28078h
0x864E45: cmp     dword ptr [esi+30h], 0
0x864E49: jnz     short loc_864E53
0x864E4B: call    sub_772DF0
0x864E50: mov     [esi+30h], eax
0x864E53: mov     ecx, [esi+30h]
0x864E56: push    0
0x864E58: push    0
0x864E5A: push    1Bh
0x864E5C: call    sub_772CD0
0x864E61: cmp     dword ptr [esi+30h], 0
0x864E65: jnz     short loc_864E6F
0x864E67: call    sub_772DF0
0x864E6C: mov     [esi+30h], eax
0x864E6F: mov     ecx, [esi+30h]
0x864E72: push    0
0x864E74: push    0
0x864E76: push    0Fh
0x864E78: call    sub_772CD0
0x864E7D: cmp     dword ptr [esi+30h], 0
0x864E81: jnz     short loc_864E8B
0x864E83: call    sub_772DF0
0x864E88: mov     [esi+30h], eax
0x864E8B: mov     ecx, [esi+30h]
0x864E8E: push    0
0x864E90: push    1
0x864E92: push    7
0x864E94: call    sub_772CD0
0x864E99: cmp     dword ptr [esi+30h], 0
0x864E9D: jnz     short loc_864EA7
0x864E9F: call    sub_772DF0
0x864EA4: mov     [esi+30h], eax
0x864EA7: mov     ecx, [esi+30h]
0x864EAA: push    0
0x864EAC: push    4
0x864EAE: push    17h
0x864EB0: call    sub_772CD0
0x864EB5: cmp     dword ptr [esi+30h], 0
0x864EB9: jnz     short loc_864EC3
0x864EBB: call    sub_772DF0
0x864EC0: mov     [esi+30h], eax
0x864EC3: mov     ecx, [esi+30h]
0x864EC6: push    0
0x864EC8: push    1
0x864ECA: push    0Eh
0x864ECC: call    sub_772CD0
0x864ED1: cmp     dword ptr [esi+30h], 0
0x864ED5: jnz     short loc_864EDF
0x864ED7: call    sub_772DF0
0x864EDC: mov     [esi+30h], eax
0x864EDF: mov     ecx, [esi+30h]
0x864EE2: push    0
0x864EE4: push    0
0x864EE6: push    34h ; '4'
0x864EE8: call    sub_772CD0
0x864EED: or      ebx, 0FFFFFFFFh
0x864EF0: cmp     esi, ds:0B47624h
0x864EF6: mov     dword ptr ds:0B43C50h, 39082h
0x864F00: mov     dword ptr ds:0B442E0h, 11Ch
0x864F0A: jz      short loc_864F2A
0x864F0C: add     [esi+60h], ebx
0x864F0F: jnz     short loc_864F18
0x864F11: mov     ecx, esi
0x864F13: call    sub_7604D0
0x864F18: mov     esi, ds:0B47624h
0x864F1E: test    esi, esi
0x864F20: mov     [esp+30h+var_14], esi
0x864F24: jz      short loc_864F2A
0x864F26: add     dword ptr [esi+60h], 1
0x864F2A: cmp     dword ptr [esi+18h], 7
0x864F2E: jnb     loc_865252
0x864F34: lea     eax, [esp+30h+var_10]
0x864F38: push    eax
0x864F39: call    sub_772630
0x864F3E: add     esp, 4
0x864F41: mov     ebp, eax
0x864F43: cmp     edi, [ebp+0]
0x864F46: mov     byte ptr [esp+30h+var_4], 9
0x864F4B: jz      short loc_864F6C
0x864F4D: test    edi, edi
0x864F4F: jz      short loc_864F5D
0x864F51: add     [edi+5Ch], ebx
0x864F54: jnz     short loc_864F5D
0x864F56: mov     ecx, edi
0x864F58: call    sub_772560
0x864F5D: mov     edi, [ebp+0]
0x864F60: test    edi, edi
0x864F62: mov     [esp+30h+a3], edi
0x864F66: jz      short loc_864F6C
0x864F68: add     dword ptr [edi+5Ch], 1
0x864F6C: mov     eax, [esp+30h+var_10]
0x864F70: test    eax, eax
0x864F72: mov     byte ptr [esp+30h+var_4], 1
0x864F77: jz      short loc_864F8B
0x864F79: add     [eax+5Ch], ebx
0x864F7C: mov     ecx, eax
0x864F7E: add     eax, 5Ch ; '\'
0x864F81: cmp     dword ptr [eax], 0
0x864F84: jnz     short loc_864F8B
0x864F86: call    sub_772560
0x864F8B: push    2
0x864F8D: push    1
0x864F8F: push    0
0x864F91: push    edi
0x864F92: call    sub_801110
0x864F97: add     esp, 10h
0x864F9A: push    edi; a3
0x864F9B: push    0; a2
0x864F9D: mov     ecx, esi; this
0x864F9F: call    sub_760010
0x864FA4: lea     ecx, [esp+30h+var_10]
0x864FA8: push    ecx
0x864FA9: call    sub_772630
0x864FAE: add     esp, 4
0x864FB1: mov     ebp, eax
0x864FB3: cmp     edi, [ebp+0]
0x864FB6: mov     byte ptr [esp+30h+var_4], 0Ah
0x864FBB: jz      short loc_864FDC
0x864FBD: test    edi, edi
0x864FBF: jz      short loc_864FCD
0x864FC1: add     [edi+5Ch], ebx
0x864FC4: jnz     short loc_864FCD
0x864FC6: mov     ecx, edi
0x864FC8: call    sub_772560
0x864FCD: mov     edi, [ebp+0]
0x864FD0: test    edi, edi
0x864FD2: mov     [esp+30h+a3], edi
0x864FD6: jz      short loc_864FDC
0x864FD8: add     dword ptr [edi+5Ch], 1
0x864FDC: mov     eax, [esp+30h+var_10]
0x864FE0: test    eax, eax
0x864FE2: mov     byte ptr [esp+30h+var_4], 1
0x864FE7: jz      short loc_864FFB
0x864FE9: add     [eax+5Ch], ebx
0x864FEC: mov     ecx, eax
0x864FEE: add     eax, 5Ch ; '\'
0x864FF1: cmp     dword ptr [eax], 0
0x864FF4: jnz     short loc_864FFB
0x864FF6: call    sub_772560
0x864FFB: push    2
0x864FFD: push    1
0x864FFF: push    1
0x865001: push    edi
0x865002: call    sub_801110
0x865007: add     esp, 10h
0x86500A: push    edi; a3
0x86500B: push    1; a2
0x86500D: mov     ecx, esi; this
0x86500F: call    sub_760010
0x865014: lea     edx, [esp+30h+var_10]
0x865018: push    edx
0x865019: call    sub_772630
0x86501E: add     esp, 4
0x865021: mov     ebp, eax
0x865023: cmp     edi, [ebp+0]
0x865026: mov     byte ptr [esp+30h+var_4], 0Bh
0x86502B: jz      short loc_86504C
0x86502D: test    edi, edi
0x86502F: jz      short loc_86503D
0x865031: add     [edi+5Ch], ebx
0x865034: jnz     short loc_86503D
0x865036: mov     ecx, edi
0x865038: call    sub_772560
0x86503D: mov     edi, [ebp+0]
0x865040: test    edi, edi
0x865042: mov     [esp+30h+a3], edi
0x865046: jz      short loc_86504C
0x865048: add     dword ptr [edi+5Ch], 1
0x86504C: mov     eax, [esp+30h+var_10]
0x865050: test    eax, eax
0x865052: mov     byte ptr [esp+30h+var_4], 1
0x865057: jz      short loc_86506B
0x865059: add     [eax+5Ch], ebx
0x86505C: mov     ecx, eax
0x86505E: add     eax, 5Ch ; '\'
0x865061: cmp     dword ptr [eax], 0
0x865064: jnz     short loc_86506B
0x865066: call    sub_772560
0x86506B: push    2
0x86506D: push    1
0x86506F: push    2
0x865071: push    edi
0x865072: call    sub_801110
0x865077: add     esp, 10h
0x86507A: push    edi; a3
0x86507B: push    2; a2
0x86507D: mov     ecx, esi; this
0x86507F: call    sub_760010
0x865084: lea     eax, [esp+30h+var_10]
0x865088: push    eax
0x865089: call    sub_772630
0x86508E: add     esp, 4
0x865091: mov     ebp, eax
0x865093: cmp     edi, [ebp+0]
0x865096: mov     byte ptr [esp+30h+var_4], 0Ch
0x86509B: jz      short loc_8650BC
0x86509D: test    edi, edi
0x86509F: jz      short loc_8650AD
0x8650A1: add     [edi+5Ch], ebx
0x8650A4: jnz     short loc_8650AD
0x8650A6: mov     ecx, edi
0x8650A8: call    sub_772560
0x8650AD: mov     edi, [ebp+0]
0x8650B0: test    edi, edi
0x8650B2: mov     [esp+30h+a3], edi
0x8650B6: jz      short loc_8650BC
0x8650B8: add     dword ptr [edi+5Ch], 1
0x8650BC: mov     eax, [esp+30h+var_10]
0x8650C0: test    eax, eax
0x8650C2: mov     byte ptr [esp+30h+var_4], 1
0x8650C7: jz      short loc_8650DB
0x8650C9: add     [eax+5Ch], ebx
0x8650CC: mov     ecx, eax
0x8650CE: add     eax, 5Ch ; '\'
0x8650D1: cmp     dword ptr [eax], 0
0x8650D4: jnz     short loc_8650DB
0x8650D6: call    sub_772560
0x8650DB: push    2
0x8650DD: push    1
0x8650DF: push    3
0x8650E1: push    edi
0x8650E2: call    sub_801110
0x8650E7: add     esp, 10h
0x8650EA: push    edi; a3
0x8650EB: push    3; a2
0x8650ED: mov     ecx, esi; this
0x8650EF: call    sub_760010
0x8650F4: lea     ecx, [esp+30h+var_10]
0x8650F8: push    ecx
0x8650F9: call    sub_772630
0x8650FE: add     esp, 4
0x865101: mov     ebp, eax
0x865103: cmp     edi, [ebp+0]
0x865106: mov     byte ptr [esp+30h+var_4], 0Dh
0x86510B: jz      short loc_86512C
0x86510D: test    edi, edi
0x86510F: jz      short loc_86511D
0x865111: add     [edi+5Ch], ebx
0x865114: jnz     short loc_86511D
0x865116: mov     ecx, edi
0x865118: call    sub_772560
0x86511D: mov     edi, [ebp+0]
0x865120: test    edi, edi
0x865122: mov     [esp+30h+a3], edi
0x865126: jz      short loc_86512C
0x865128: add     dword ptr [edi+5Ch], 1
0x86512C: mov     eax, [esp+30h+var_10]
0x865130: test    eax, eax
0x865132: mov     byte ptr [esp+30h+var_4], 1
0x865137: jz      short loc_86514B
0x865139: add     [eax+5Ch], ebx
0x86513C: mov     ecx, eax
0x86513E: add     eax, 5Ch ; '\'
0x865141: cmp     dword ptr [eax], 0
0x865144: jnz     short loc_86514B
0x865146: call    sub_772560
0x86514B: push    0
0x86514D: push    3
0x86514F: push    4
0x865151: push    edi
0x865152: call    sub_801110
0x865157: mov     edx, ds:0B43110h
0x86515D: add     esp, 10h
0x865160: push    edx; a2
0x865161: mov     ecx, edi; this
0x865163: call    sub_76C910
0x865168: push    edi; a3
0x865169: push    4; a2
0x86516B: mov     ecx, esi; this
0x86516D: call    sub_760010
0x865172: lea     eax, [esp+30h+var_10]
0x865176: push    eax
0x865177: call    sub_772630
0x86517C: add     esp, 4
0x86517F: mov     ebp, eax
0x865181: cmp     edi, [ebp+0]
0x865184: mov     byte ptr [esp+30h+var_4], 0Eh
0x865189: jz      short loc_8651AA
0x86518B: test    edi, edi
0x86518D: jz      short loc_86519B
0x86518F: add     [edi+5Ch], ebx
0x865192: jnz     short loc_86519B
0x865194: mov     ecx, edi
0x865196: call    sub_772560
0x86519B: mov     edi, [ebp+0]
0x86519E: test    edi, edi
0x8651A0: mov     [esp+30h+a3], edi
0x8651A4: jz      short loc_8651AA
0x8651A6: add     dword ptr [edi+5Ch], 1
0x8651AA: mov     eax, [esp+30h+var_10]
0x8651AE: test    eax, eax
0x8651B0: mov     byte ptr [esp+30h+var_4], 1
0x8651B5: jz      short loc_8651C9
0x8651B7: add     [eax+5Ch], ebx
0x8651BA: mov     ecx, eax
0x8651BC: add     eax, 5Ch ; '\'
0x8651BF: cmp     dword ptr [eax], 0
0x8651C2: jnz     short loc_8651C9
0x8651C4: call    sub_772560
0x8651C9: push    2
0x8651CB: push    1
0x8651CD: push    5
0x8651CF: push    edi
0x8651D0: call    sub_801110
0x8651D5: add     esp, 10h
0x8651D8: push    edi; a3
0x8651D9: push    5; a2
0x8651DB: mov     ecx, esi; this
0x8651DD: call    sub_760010
0x8651E2: lea     ecx, [esp+30h+var_10]
0x8651E6: push    ecx
0x8651E7: call    sub_772630
0x8651EC: add     esp, 4
0x8651EF: mov     ebp, eax
0x8651F1: cmp     edi, [ebp+0]
0x8651F4: mov     byte ptr [esp+30h+var_4], 0Fh
0x8651F9: jz      short loc_86521A
0x8651FB: test    edi, edi
0x8651FD: jz      short loc_86520B
0x8651FF: add     [edi+5Ch], ebx
0x865202: jnz     short loc_86520B
0x865204: mov     ecx, edi
0x865206: call    sub_772560
0x86520B: mov     edi, [ebp+0]
0x86520E: test    edi, edi
0x865210: mov     [esp+30h+a3], edi
0x865214: jz      short loc_86521A
0x865216: add     dword ptr [edi+5Ch], 1
0x86521A: mov     eax, [esp+30h+var_10]
0x86521E: test    eax, eax
0x865220: mov     byte ptr [esp+30h+var_4], 1
0x865225: jz      short loc_865239
0x865227: add     [eax+5Ch], ebx
0x86522A: mov     ecx, eax
0x86522C: add     eax, 5Ch ; '\'
0x86522F: cmp     dword ptr [eax], 0
0x865232: jnz     short loc_865239
0x865234: call    sub_772560
0x865239: push    0
0x86523B: push    3
0x86523D: push    6
0x86523F: push    edi
0x865240: call    sub_801110
0x865245: add     esp, 10h
0x865248: push    edi; a3
0x865249: push    6; a2
0x86524B: mov     ecx, esi; this
0x86524D: call    sub_760010
0x865252: mov     edx, [esp+30h+var_18]
0x865256: mov     ebx, [edx+0DCh]
0x86525C: mov     ebp, [esi+58h]
0x86525F: cmp     ebp, ebx
0x865261: jz      short loc_865295
0x865263: test    ebp, ebp
0x865265: jz      short loc_865284
0x865267: lea     eax, [ebp+4]
0x86526A: push    eax; lpAddend
0x86526B: call    dword ptr ds:0A2807Ch
0x865271: test    eax, eax
0x865273: jnz     short loc_865284
0x865275: test    ebp, ebp
0x865277: jz      short loc_865284
0x865279: mov     edx, [ebp+0]
0x86527C: mov     eax, [edx]
0x86527E: push    1
0x865280: mov     ecx, ebp
0x865282: call    eax
0x865284: test    ebx, ebx
0x865286: mov     [esi+58h], ebx
0x865289: jz      short loc_865295
0x86528B: add     ebx, 4
0x86528E: push    ebx; lpAddend
0x86528F: call    dword ptr ds:0A28078h
0x865295: mov     ecx, [esp+30h+var_18]
0x865299: mov     ebx, [ecx+160h]
0x86529F: mov     ebp, [esi+44h]
0x8652A2: cmp     ebp, ebx
0x8652A4: jz      short loc_8652D8
0x8652A6: test    ebp, ebp
0x8652A8: jz      short loc_8652C7
0x8652AA: lea     edx, [ebp+4]
0x8652AD: push    edx; lpAddend
0x8652AE: call    dword ptr ds:0A2807Ch
0x8652B4: test    eax, eax
0x8652B6: jnz     short loc_8652C7
0x8652B8: test    ebp, ebp
0x8652BA: jz      short loc_8652C7
0x8652BC: mov     eax, [ebp+0]
0x8652BF: mov     edx, [eax]
0x8652C1: push    1
0x8652C3: mov     ecx, ebp
0x8652C5: call    edx
0x8652C7: test    ebx, ebx
0x8652C9: mov     [esi+44h], ebx
0x8652CC: jz      short loc_8652D8
0x8652CE: add     ebx, 4
0x8652D1: push    ebx; lpAddend
0x8652D2: call    dword ptr ds:0A28078h
0x8652D8: cmp     dword ptr [esi+30h], 0
0x8652DC: jnz     short loc_8652E6
0x8652DE: call    sub_772DF0
0x8652E3: mov     [esi+30h], eax
0x8652E6: mov     ecx, [esi+30h]
0x8652E9: push    0
0x8652EB: push    0
0x8652ED: push    1Bh
0x8652EF: call    sub_772CD0
0x8652F4: cmp     dword ptr [esi+30h], 0
0x8652F8: jnz     short loc_865302
0x8652FA: call    sub_772DF0
0x8652FF: mov     [esi+30h], eax
0x865302: mov     ecx, [esi+30h]
0x865305: push    0
0x865307: push    0
0x865309: push    0Fh
0x86530B: call    sub_772CD0
0x865310: cmp     dword ptr [esi+30h], 0
0x865314: jnz     short loc_86531E
0x865316: call    sub_772DF0
0x86531B: mov     [esi+30h], eax
0x86531E: mov     ecx, [esi+30h]
0x865321: push    0
0x865323: push    1
0x865325: push    7
0x865327: call    sub_772CD0
0x86532C: cmp     dword ptr [esi+30h], 0
0x865330: jnz     short loc_86533A
0x865332: call    sub_772DF0
0x865337: mov     [esi+30h], eax
0x86533A: mov     ecx, [esi+30h]
0x86533D: push    0
0x86533F: push    4
0x865341: push    17h
0x865343: call    sub_772CD0
0x865348: cmp     dword ptr [esi+30h], 0
0x86534C: jnz     short loc_865356
0x86534E: call    sub_772DF0
0x865353: mov     [esi+30h], eax
0x865356: mov     ecx, [esi+30h]
0x865359: push    0
0x86535B: push    1
0x86535D: push    0Eh
0x86535F: call    sub_772CD0
0x865364: cmp     dword ptr [esi+30h], 0
0x865368: jnz     short loc_865372
0x86536A: call    sub_772DF0
0x86536F: mov     [esi+30h], eax
0x865372: mov     ecx, [esi+30h]
0x865375: push    0
0x865377: push    0
0x865379: push    34h ; '4'
0x86537B: call    sub_772CD0
0x865380: or      ebx, 0FFFFFFFFh
0x865383: cmp     esi, ds:0B47628h
0x865389: mov     dword ptr ds:0B43C54h, 39082h
0x865393: mov     dword ptr ds:0B442E4h, 19Ch
0x86539D: jz      short loc_8653BD
0x86539F: add     [esi+60h], ebx
0x8653A2: jnz     short loc_8653AB
0x8653A4: mov     ecx, esi
0x8653A6: call    sub_7604D0
0x8653AB: mov     esi, ds:0B47628h
0x8653B1: test    esi, esi
0x8653B3: mov     [esp+30h+var_14], esi
0x8653B7: jz      short loc_8653BD
0x8653B9: add     dword ptr [esi+60h], 1
0x8653BD: cmp     dword ptr [esi+18h], 7
0x8653C1: jnb     loc_8656E5
0x8653C7: lea     eax, [esp+30h+var_10]
0x8653CB: push    eax
0x8653CC: call    sub_772630
0x8653D1: add     esp, 4
0x8653D4: mov     ebp, eax
0x8653D6: cmp     edi, [ebp+0]
0x8653D9: mov     byte ptr [esp+30h+var_4], 10h
0x8653DE: jz      short loc_8653FF
0x8653E0: test    edi, edi
0x8653E2: jz      short loc_8653F0
0x8653E4: add     [edi+5Ch], ebx
0x8653E7: jnz     short loc_8653F0
0x8653E9: mov     ecx, edi
0x8653EB: call    sub_772560
0x8653F0: mov     edi, [ebp+0]
0x8653F3: test    edi, edi
0x8653F5: mov     [esp+30h+a3], edi
0x8653F9: jz      short loc_8653FF
0x8653FB: add     dword ptr [edi+5Ch], 1
0x8653FF: mov     eax, [esp+30h+var_10]
0x865403: test    eax, eax
0x865405: mov     byte ptr [esp+30h+var_4], 1
0x86540A: jz      short loc_86541E
0x86540C: add     [eax+5Ch], ebx
0x86540F: mov     ecx, eax
0x865411: add     eax, 5Ch ; '\'
0x865414: cmp     dword ptr [eax], 0
0x865417: jnz     short loc_86541E
0x865419: call    sub_772560
0x86541E: push    2
0x865420: push    1
0x865422: push    0
0x865424: push    edi
0x865425: call    sub_801110
0x86542A: add     esp, 10h
0x86542D: push    edi; a3
0x86542E: push    0; a2
0x865430: mov     ecx, esi; this
0x865432: call    sub_760010
0x865437: lea     ecx, [esp+30h+var_10]
0x86543B: push    ecx
0x86543C: call    sub_772630
0x865441: add     esp, 4
0x865444: mov     ebp, eax
0x865446: cmp     edi, [ebp+0]
0x865449: mov     byte ptr [esp+30h+var_4], 11h
0x86544E: jz      short loc_86546F
0x865450: test    edi, edi
0x865452: jz      short loc_865460
0x865454: add     [edi+5Ch], ebx
0x865457: jnz     short loc_865460
0x865459: mov     ecx, edi
0x86545B: call    sub_772560
0x865460: mov     edi, [ebp+0]
0x865463: test    edi, edi
0x865465: mov     [esp+30h+a3], edi
0x865469: jz      short loc_86546F
0x86546B: add     dword ptr [edi+5Ch], 1
0x86546F: mov     eax, [esp+30h+var_10]
0x865473: test    eax, eax
0x865475: mov     byte ptr [esp+30h+var_4], 1
0x86547A: jz      short loc_86548E
0x86547C: add     [eax+5Ch], ebx
0x86547F: mov     ecx, eax
0x865481: add     eax, 5Ch ; '\'
0x865484: cmp     dword ptr [eax], 0
0x865487: jnz     short loc_86548E
0x865489: call    sub_772560
0x86548E: push    2
0x865490: push    1
0x865492: push    1
0x865494: push    edi
0x865495: call    sub_801110
0x86549A: add     esp, 10h
0x86549D: push    edi; a3
0x86549E: push    1; a2
0x8654A0: mov     ecx, esi; this
0x8654A2: call    sub_760010
0x8654A7: lea     edx, [esp+30h+var_10]
0x8654AB: push    edx
0x8654AC: call    sub_772630
0x8654B1: add     esp, 4
0x8654B4: mov     ebp, eax
0x8654B6: cmp     edi, [ebp+0]
0x8654B9: mov     byte ptr [esp+30h+var_4], 12h
0x8654BE: jz      short loc_8654DF
0x8654C0: test    edi, edi
0x8654C2: jz      short loc_8654D0
0x8654C4: add     [edi+5Ch], ebx
0x8654C7: jnz     short loc_8654D0
0x8654C9: mov     ecx, edi
0x8654CB: call    sub_772560
0x8654D0: mov     edi, [ebp+0]
0x8654D3: test    edi, edi
0x8654D5: mov     [esp+30h+a3], edi
0x8654D9: jz      short loc_8654DF
0x8654DB: add     dword ptr [edi+5Ch], 1
0x8654DF: mov     eax, [esp+30h+var_10]
0x8654E3: test    eax, eax
0x8654E5: mov     byte ptr [esp+30h+var_4], 1
0x8654EA: jz      short loc_8654FE
0x8654EC: add     [eax+5Ch], ebx
0x8654EF: mov     ecx, eax
0x8654F1: add     eax, 5Ch ; '\'
0x8654F4: cmp     dword ptr [eax], 0
0x8654F7: jnz     short loc_8654FE
0x8654F9: call    sub_772560
0x8654FE: push    2
0x865500: push    1
0x865502: push    2
0x865504: push    edi
0x865505: call    sub_801110
0x86550A: add     esp, 10h
0x86550D: push    edi; a3
0x86550E: push    2; a2
0x865510: mov     ecx, esi; this
0x865512: call    sub_760010
0x865517: lea     eax, [esp+30h+var_10]
0x86551B: push    eax
0x86551C: call    sub_772630
0x865521: add     esp, 4
0x865524: mov     ebp, eax
0x865526: cmp     edi, [ebp+0]
0x865529: mov     byte ptr [esp+30h+var_4], 13h
0x86552E: jz      short loc_86554F
0x865530: test    edi, edi
0x865532: jz      short loc_865540
0x865534: add     [edi+5Ch], ebx
0x865537: jnz     short loc_865540
0x865539: mov     ecx, edi
0x86553B: call    sub_772560
0x865540: mov     edi, [ebp+0]
0x865543: test    edi, edi
0x865545: mov     [esp+30h+a3], edi
0x865549: jz      short loc_86554F
0x86554B: add     dword ptr [edi+5Ch], 1
0x86554F: mov     eax, [esp+30h+var_10]
0x865553: test    eax, eax
0x865555: mov     byte ptr [esp+30h+var_4], 1
0x86555A: jz      short loc_86556E
0x86555C: add     [eax+5Ch], ebx
0x86555F: mov     ecx, eax
0x865561: add     eax, 5Ch ; '\'
0x865564: cmp     dword ptr [eax], 0
0x865567: jnz     short loc_86556E
0x865569: call    sub_772560
0x86556E: push    2
0x865570: push    1
0x865572: push    3
0x865574: push    edi
0x865575: call    sub_801110
0x86557A: add     esp, 10h
0x86557D: push    edi; a3
0x86557E: push    3; a2
0x865580: mov     ecx, esi; this
0x865582: call    sub_760010
0x865587: lea     ecx, [esp+30h+var_10]
0x86558B: push    ecx
0x86558C: call    sub_772630
0x865591: add     esp, 4
0x865594: mov     ebp, eax
0x865596: cmp     edi, [ebp+0]
0x865599: mov     byte ptr [esp+30h+var_4], 14h
0x86559E: jz      short loc_8655BF
0x8655A0: test    edi, edi
0x8655A2: jz      short loc_8655B0
0x8655A4: add     [edi+5Ch], ebx
0x8655A7: jnz     short loc_8655B0
0x8655A9: mov     ecx, edi
0x8655AB: call    sub_772560
0x8655B0: mov     edi, [ebp+0]
0x8655B3: test    edi, edi
0x8655B5: mov     [esp+30h+a3], edi
0x8655B9: jz      short loc_8655BF
0x8655BB: add     dword ptr [edi+5Ch], 1
0x8655BF: mov     eax, [esp+30h+var_10]
0x8655C3: test    eax, eax
0x8655C5: mov     byte ptr [esp+30h+var_4], 1
0x8655CA: jz      short loc_8655DE
0x8655CC: add     [eax+5Ch], ebx
0x8655CF: mov     ecx, eax
0x8655D1: add     eax, 5Ch ; '\'
0x8655D4: cmp     dword ptr [eax], 0
0x8655D7: jnz     short loc_8655DE
0x8655D9: call    sub_772560
0x8655DE: push    0
0x8655E0: push    3
0x8655E2: push    4
0x8655E4: push    edi
0x8655E5: call    sub_801110
0x8655EA: mov     edx, ds:0B43110h
0x8655F0: add     esp, 10h
0x8655F3: push    edx; a2
0x8655F4: mov     ecx, edi; this
0x8655F6: call    sub_76C910
0x8655FB: push    edi; a3
0x8655FC: push    4; a2
0x8655FE: mov     ecx, esi; this
0x865600: call    sub_760010
0x865605: lea     eax, [esp+30h+var_10]
0x865609: push    eax
0x86560A: call    sub_772630
0x86560F: add     esp, 4
0x865612: mov     ebp, eax
0x865614: cmp     edi, [ebp+0]
0x865617: mov     byte ptr [esp+30h+var_4], 15h
0x86561C: jz      short loc_86563D
0x86561E: test    edi, edi
0x865620: jz      short loc_86562E
0x865622: add     [edi+5Ch], ebx
0x865625: jnz     short loc_86562E
0x865627: mov     ecx, edi
0x865629: call    sub_772560
0x86562E: mov     edi, [ebp+0]
0x865631: test    edi, edi
0x865633: mov     [esp+30h+a3], edi
0x865637: jz      short loc_86563D
0x865639: add     dword ptr [edi+5Ch], 1
0x86563D: mov     eax, [esp+30h+var_10]
0x865641: test    eax, eax
0x865643: mov     byte ptr [esp+30h+var_4], 1
0x865648: jz      short loc_86565C
0x86564A: add     [eax+5Ch], ebx
0x86564D: mov     ecx, eax
0x86564F: add     eax, 5Ch ; '\'
0x865652: cmp     dword ptr [eax], 0
0x865655: jnz     short loc_86565C
0x865657: call    sub_772560
0x86565C: push    2
0x86565E: push    1
0x865660: push    5
0x865662: push    edi
0x865663: call    sub_801110
0x865668: add     esp, 10h
0x86566B: push    edi; a3
0x86566C: push    5; a2
0x86566E: mov     ecx, esi; this
0x865670: call    sub_760010
0x865675: lea     ecx, [esp+30h+var_10]
0x865679: push    ecx
0x86567A: call    sub_772630
0x86567F: add     esp, 4
0x865682: mov     ebp, eax
0x865684: cmp     edi, [ebp+0]
0x865687: mov     byte ptr [esp+30h+var_4], 16h
0x86568C: jz      short loc_8656AD
0x86568E: test    edi, edi
0x865690: jz      short loc_86569E
0x865692: add     [edi+5Ch], ebx
0x865695: jnz     short loc_86569E
0x865697: mov     ecx, edi
0x865699: call    sub_772560
0x86569E: mov     edi, [ebp+0]
0x8656A1: test    edi, edi
0x8656A3: mov     [esp+30h+a3], edi
0x8656A7: jz      short loc_8656AD
0x8656A9: add     dword ptr [edi+5Ch], 1
0x8656AD: mov     eax, [esp+30h+var_10]
0x8656B1: test    eax, eax
0x8656B3: mov     byte ptr [esp+30h+var_4], 1
0x8656B8: jz      short loc_8656CC
0x8656BA: add     [eax+5Ch], ebx
0x8656BD: mov     ecx, eax
0x8656BF: add     eax, 5Ch ; '\'
0x8656C2: cmp     dword ptr [eax], 0
0x8656C5: jnz     short loc_8656CC
0x8656C7: call    sub_772560
0x8656CC: push    0
0x8656CE: push    3
0x8656D0: push    6
0x8656D2: push    edi
0x8656D3: call    sub_801110
0x8656D8: add     esp, 10h
0x8656DB: push    edi; a3
0x8656DC: push    6; a2
0x8656DE: mov     ecx, esi; this
0x8656E0: call    sub_760010
0x8656E5: mov     edx, [esp+30h+var_18]
0x8656E9: mov     ebx, [edx+0E0h]
0x8656EF: mov     ebp, [esi+58h]
0x8656F2: cmp     ebp, ebx
0x8656F4: jz      short loc_865728
0x8656F6: test    ebp, ebp
0x8656F8: jz      short loc_865717
0x8656FA: lea     eax, [ebp+4]
0x8656FD: push    eax; lpAddend
0x8656FE: call    dword ptr ds:0A2807Ch
0x865704: test    eax, eax
0x865706: jnz     short loc_865717
0x865708: test    ebp, ebp
0x86570A: jz      short loc_865717
0x86570C: mov     edx, [ebp+0]
0x86570F: mov     eax, [edx]
0x865711: push    1
0x865713: mov     ecx, ebp
0x865715: call    eax
0x865717: test    ebx, ebx
0x865719: mov     [esi+58h], ebx
0x86571C: jz      short loc_865728
0x86571E: add     ebx, 4
0x865721: push    ebx; lpAddend
0x865722: call    dword ptr ds:0A28078h
0x865728: mov     ecx, [esp+30h+var_18]
0x86572C: mov     ebx, [ecx+15Ch]
0x865732: mov     ebp, [esi+44h]
0x865735: cmp     ebp, ebx
0x865737: jz      short loc_86576B
0x865739: test    ebp, ebp
0x86573B: jz      short loc_86575A
0x86573D: lea     edx, [ebp+4]
0x865740: push    edx; lpAddend
0x865741: call    dword ptr ds:0A2807Ch
0x865747: test    eax, eax
0x865749: jnz     short loc_86575A
0x86574B: test    ebp, ebp
0x86574D: jz      short loc_86575A
0x86574F: mov     eax, [ebp+0]
0x865752: mov     edx, [eax]
0x865754: push    1
0x865756: mov     ecx, ebp
0x865758: call    edx
0x86575A: test    ebx, ebx
0x86575C: mov     [esi+44h], ebx
0x86575F: jz      short loc_86576B
0x865761: add     ebx, 4
0x865764: push    ebx; lpAddend
0x865765: call    dword ptr ds:0A28078h
0x86576B: cmp     dword ptr [esi+30h], 0
0x86576F: jnz     short loc_865779
0x865771: call    sub_772DF0
0x865776: mov     [esi+30h], eax
0x865779: mov     ecx, [esi+30h]
0x86577C: push    0
0x86577E: push    0
0x865780: push    1Bh
0x865782: call    sub_772CD0
0x865787: cmp     dword ptr [esi+30h], 0
0x86578B: jnz     short loc_865795
0x86578D: call    sub_772DF0
0x865792: mov     [esi+30h], eax
0x865795: mov     ecx, [esi+30h]
0x865798: push    0
0x86579A: push    0
0x86579C: push    0Fh
0x86579E: call    sub_772CD0
0x8657A3: cmp     dword ptr [esi+30h], 0
0x8657A7: jnz     short loc_8657B1
0x8657A9: call    sub_772DF0
0x8657AE: mov     [esi+30h], eax
0x8657B1: mov     ecx, [esi+30h]
0x8657B4: push    0
0x8657B6: push    1
0x8657B8: push    7
0x8657BA: call    sub_772CD0
0x8657BF: cmp     dword ptr [esi+30h], 0
0x8657C3: jnz     short loc_8657CD
0x8657C5: call    sub_772DF0
0x8657CA: mov     [esi+30h], eax
0x8657CD: mov     ecx, [esi+30h]
0x8657D0: push    0
0x8657D2: push    4
0x8657D4: push    17h
0x8657D6: call    sub_772CD0
0x8657DB: cmp     dword ptr [esi+30h], 0
0x8657DF: jnz     short loc_8657E9
0x8657E1: call    sub_772DF0
0x8657E6: mov     [esi+30h], eax
0x8657E9: mov     ecx, [esi+30h]
0x8657EC: push    0
0x8657EE: push    1
0x8657F0: push    0Eh
0x8657F2: call    sub_772CD0
0x8657F7: cmp     dword ptr [esi+30h], 0
0x8657FB: jnz     short loc_865805
0x8657FD: call    sub_772DF0
0x865802: mov     [esi+30h], eax
0x865805: mov     ecx, [esi+30h]
0x865808: push    0
0x86580A: push    0
0x86580C: push    34h ; '4'
0x86580E: call    sub_772CD0
0x865813: or      ebx, 0FFFFFFFFh
0x865816: cmp     esi, ds:0B4762Ch
0x86581C: mov     dword ptr ds:0B43C60h, 79088h
0x865826: mov     dword ptr ds:0B442F0h, 11Ch
0x865830: jz      short loc_865850
0x865832: add     [esi+60h], ebx
0x865835: jnz     short loc_86583E
0x865837: mov     ecx, esi
0x865839: call    sub_7604D0
0x86583E: mov     esi, ds:0B4762Ch
0x865844: test    esi, esi
0x865846: mov     [esp+30h+var_14], esi
0x86584A: jz      short loc_865850
0x86584C: add     dword ptr [esi+60h], 1
0x865850: cmp     dword ptr [esi+18h], 7
0x865854: jnb     loc_865B78
0x86585A: lea     eax, [esp+30h+var_10]
0x86585E: push    eax
0x86585F: call    sub_772630
0x865864: add     esp, 4
0x865867: mov     ebp, eax
0x865869: cmp     edi, [ebp+0]
0x86586C: mov     byte ptr [esp+30h+var_4], 17h
0x865871: jz      short loc_865892
0x865873: test    edi, edi
0x865875: jz      short loc_865883
0x865877: add     [edi+5Ch], ebx
0x86587A: jnz     short loc_865883
0x86587C: mov     ecx, edi
0x86587E: call    sub_772560
0x865883: mov     edi, [ebp+0]
0x865886: test    edi, edi
0x865888: mov     [esp+30h+a3], edi
0x86588C: jz      short loc_865892
0x86588E: add     dword ptr [edi+5Ch], 1
0x865892: mov     eax, [esp+30h+var_10]
0x865896: test    eax, eax
0x865898: mov     byte ptr [esp+30h+var_4], 1
0x86589D: jz      short loc_8658B1
0x86589F: add     [eax+5Ch], ebx
0x8658A2: mov     ecx, eax
0x8658A4: add     eax, 5Ch ; '\'
0x8658A7: cmp     dword ptr [eax], 0
0x8658AA: jnz     short loc_8658B1
0x8658AC: call    sub_772560
0x8658B1: push    2
0x8658B3: push    1
0x8658B5: push    0
0x8658B7: push    edi
0x8658B8: call    sub_801110
0x8658BD: add     esp, 10h
0x8658C0: push    edi; a3
0x8658C1: push    0; a2
0x8658C3: mov     ecx, esi; this
0x8658C5: call    sub_760010
0x8658CA: lea     ecx, [esp+30h+var_10]
0x8658CE: push    ecx
0x8658CF: call    sub_772630
0x8658D4: add     esp, 4
0x8658D7: mov     ebp, eax
0x8658D9: cmp     edi, [ebp+0]
0x8658DC: mov     byte ptr [esp+30h+var_4], 18h
0x8658E1: jz      short loc_865902
0x8658E3: test    edi, edi
0x8658E5: jz      short loc_8658F3
0x8658E7: add     [edi+5Ch], ebx
0x8658EA: jnz     short loc_8658F3
0x8658EC: mov     ecx, edi
0x8658EE: call    sub_772560
0x8658F3: mov     edi, [ebp+0]
0x8658F6: test    edi, edi
0x8658F8: mov     [esp+30h+a3], edi
0x8658FC: jz      short loc_865902
0x8658FE: add     dword ptr [edi+5Ch], 1
0x865902: mov     eax, [esp+30h+var_10]
0x865906: test    eax, eax
0x865908: mov     byte ptr [esp+30h+var_4], 1
0x86590D: jz      short loc_865921
0x86590F: add     [eax+5Ch], ebx
0x865912: mov     ecx, eax
0x865914: add     eax, 5Ch ; '\'
0x865917: cmp     dword ptr [eax], 0
0x86591A: jnz     short loc_865921
0x86591C: call    sub_772560
0x865921: push    2
0x865923: push    1
0x865925: push    1
0x865927: push    edi
0x865928: call    sub_801110
0x86592D: add     esp, 10h
0x865930: push    edi; a3
0x865931: push    1; a2
0x865933: mov     ecx, esi; this
0x865935: call    sub_760010
0x86593A: lea     edx, [esp+30h+var_10]
0x86593E: push    edx
0x86593F: call    sub_772630
0x865944: add     esp, 4
0x865947: mov     ebp, eax
0x865949: cmp     edi, [ebp+0]
0x86594C: mov     byte ptr [esp+30h+var_4], 19h
0x865951: jz      short loc_865972
0x865953: test    edi, edi
0x865955: jz      short loc_865963
0x865957: add     [edi+5Ch], ebx
0x86595A: jnz     short loc_865963
0x86595C: mov     ecx, edi
0x86595E: call    sub_772560
0x865963: mov     edi, [ebp+0]
0x865966: test    edi, edi
0x865968: mov     [esp+30h+a3], edi
0x86596C: jz      short loc_865972
0x86596E: add     dword ptr [edi+5Ch], 1
0x865972: mov     eax, [esp+30h+var_10]
0x865976: test    eax, eax
0x865978: mov     byte ptr [esp+30h+var_4], 1
0x86597D: jz      short loc_865991
0x86597F: add     [eax+5Ch], ebx
0x865982: mov     ecx, eax
0x865984: add     eax, 5Ch ; '\'
0x865987: cmp     dword ptr [eax], 0
0x86598A: jnz     short loc_865991
0x86598C: call    sub_772560
0x865991: push    2
0x865993: push    1
0x865995: push    2
0x865997: push    edi
0x865998: call    sub_801110
0x86599D: add     esp, 10h
0x8659A0: push    edi; a3
0x8659A1: push    2; a2
0x8659A3: mov     ecx, esi; this
0x8659A5: call    sub_760010
0x8659AA: lea     eax, [esp+30h+var_10]
0x8659AE: push    eax
0x8659AF: call    sub_772630
0x8659B4: add     esp, 4
0x8659B7: mov     ebp, eax
0x8659B9: cmp     edi, [ebp+0]
0x8659BC: mov     byte ptr [esp+30h+var_4], 1Ah
0x8659C1: jz      short loc_8659E2
0x8659C3: test    edi, edi
0x8659C5: jz      short loc_8659D3
0x8659C7: add     [edi+5Ch], ebx
0x8659CA: jnz     short loc_8659D3
0x8659CC: mov     ecx, edi
0x8659CE: call    sub_772560
0x8659D3: mov     edi, [ebp+0]
0x8659D6: test    edi, edi
0x8659D8: mov     [esp+30h+a3], edi
0x8659DC: jz      short loc_8659E2
0x8659DE: add     dword ptr [edi+5Ch], 1
0x8659E2: mov     eax, [esp+30h+var_10]
0x8659E6: test    eax, eax
0x8659E8: mov     byte ptr [esp+30h+var_4], 1
0x8659ED: jz      short loc_865A01
0x8659EF: add     [eax+5Ch], ebx
0x8659F2: mov     ecx, eax
0x8659F4: add     eax, 5Ch ; '\'
0x8659F7: cmp     dword ptr [eax], 0
0x8659FA: jnz     short loc_865A01
0x8659FC: call    sub_772560
0x865A01: push    2
0x865A03: push    1
0x865A05: push    3
0x865A07: push    edi
0x865A08: call    sub_801110
0x865A0D: add     esp, 10h
0x865A10: push    edi; a3
0x865A11: push    3; a2
0x865A13: mov     ecx, esi; this
0x865A15: call    sub_760010
0x865A1A: lea     ecx, [esp+30h+var_10]
0x865A1E: push    ecx
0x865A1F: call    sub_772630
0x865A24: add     esp, 4
0x865A27: mov     ebp, eax
0x865A29: cmp     edi, [ebp+0]
0x865A2C: mov     byte ptr [esp+30h+var_4], 1Bh
0x865A31: jz      short loc_865A52
0x865A33: test    edi, edi
0x865A35: jz      short loc_865A43
0x865A37: add     [edi+5Ch], ebx
0x865A3A: jnz     short loc_865A43
0x865A3C: mov     ecx, edi
0x865A3E: call    sub_772560
0x865A43: mov     edi, [ebp+0]
0x865A46: test    edi, edi
0x865A48: mov     [esp+30h+a3], edi
0x865A4C: jz      short loc_865A52
0x865A4E: add     dword ptr [edi+5Ch], 1
0x865A52: mov     eax, [esp+30h+var_10]
0x865A56: test    eax, eax
0x865A58: mov     byte ptr [esp+30h+var_4], 1
0x865A5D: jz      short loc_865A71
0x865A5F: add     [eax+5Ch], ebx
0x865A62: mov     ecx, eax
0x865A64: add     eax, 5Ch ; '\'
0x865A67: cmp     dword ptr [eax], 0
0x865A6A: jnz     short loc_865A71
0x865A6C: call    sub_772560
0x865A71: push    0
0x865A73: push    3
0x865A75: push    4
0x865A77: push    edi
0x865A78: call    sub_801110
0x865A7D: mov     edx, ds:0B43110h
0x865A83: add     esp, 10h
0x865A86: push    edx; a2
0x865A87: mov     ecx, edi; this
0x865A89: call    sub_76C910
0x865A8E: push    edi; a3
0x865A8F: push    4; a2
0x865A91: mov     ecx, esi; this
0x865A93: call    sub_760010
0x865A98: lea     eax, [esp+30h+var_10]
0x865A9C: push    eax
0x865A9D: call    sub_772630
0x865AA2: add     esp, 4
0x865AA5: mov     ebp, eax
0x865AA7: cmp     edi, [ebp+0]
0x865AAA: mov     byte ptr [esp+30h+var_4], 1Ch
0x865AAF: jz      short loc_865AD0
0x865AB1: test    edi, edi
0x865AB3: jz      short loc_865AC1
0x865AB5: add     [edi+5Ch], ebx
0x865AB8: jnz     short loc_865AC1
0x865ABA: mov     ecx, edi
0x865ABC: call    sub_772560
0x865AC1: mov     edi, [ebp+0]
0x865AC4: test    edi, edi
0x865AC6: mov     [esp+30h+a3], edi
0x865ACA: jz      short loc_865AD0
0x865ACC: add     dword ptr [edi+5Ch], 1
0x865AD0: mov     eax, [esp+30h+var_10]
0x865AD4: test    eax, eax
0x865AD6: mov     byte ptr [esp+30h+var_4], 1
0x865ADB: jz      short loc_865AEF
0x865ADD: add     [eax+5Ch], ebx
0x865AE0: mov     ecx, eax
0x865AE2: add     eax, 5Ch ; '\'
0x865AE5: cmp     dword ptr [eax], 0
0x865AE8: jnz     short loc_865AEF
0x865AEA: call    sub_772560
0x865AEF: push    2
0x865AF1: push    1
0x865AF3: push    5
0x865AF5: push    edi
0x865AF6: call    sub_801110
0x865AFB: add     esp, 10h
0x865AFE: push    edi; a3
0x865AFF: push    5; a2
0x865B01: mov     ecx, esi; this
0x865B03: call    sub_760010
0x865B08: lea     ecx, [esp+30h+var_10]
0x865B0C: push    ecx
0x865B0D: call    sub_772630
0x865B12: add     esp, 4
0x865B15: mov     ebp, eax
0x865B17: cmp     edi, [ebp+0]
0x865B1A: mov     byte ptr [esp+30h+var_4], 1Dh
0x865B1F: jz      short loc_865B40
0x865B21: test    edi, edi
0x865B23: jz      short loc_865B31
0x865B25: add     [edi+5Ch], ebx
0x865B28: jnz     short loc_865B31
0x865B2A: mov     ecx, edi
0x865B2C: call    sub_772560
0x865B31: mov     edi, [ebp+0]
0x865B34: test    edi, edi
0x865B36: mov     [esp+30h+a3], edi
0x865B3A: jz      short loc_865B40
0x865B3C: add     dword ptr [edi+5Ch], 1
0x865B40: mov     eax, [esp+30h+var_10]
0x865B44: test    eax, eax
0x865B46: mov     byte ptr [esp+30h+var_4], 1
0x865B4B: jz      short loc_865B5F
0x865B4D: add     [eax+5Ch], ebx
0x865B50: mov     ecx, eax
0x865B52: add     eax, 5Ch ; '\'
0x865B55: cmp     dword ptr [eax], 0
0x865B58: jnz     short loc_865B5F
0x865B5A: call    sub_772560
0x865B5F: push    0
0x865B61: push    3
0x865B63: push    6
0x865B65: push    edi
0x865B66: call    sub_801110
0x865B6B: add     esp, 10h
0x865B6E: push    edi; a3
0x865B6F: push    6; a2
0x865B71: mov     ecx, esi; this
0x865B73: call    sub_760010
0x865B78: mov     edx, [esp+30h+var_18]
0x865B7C: mov     ebx, [edx+0E0h]
0x865B82: mov     ebp, [esi+58h]
0x865B85: cmp     ebp, ebx
0x865B87: jz      short loc_865BBB
0x865B89: test    ebp, ebp
0x865B8B: jz      short loc_865BAA
0x865B8D: lea     eax, [ebp+4]
0x865B90: push    eax; lpAddend
0x865B91: call    dword ptr ds:0A2807Ch
0x865B97: test    eax, eax
0x865B99: jnz     short loc_865BAA
0x865B9B: test    ebp, ebp
0x865B9D: jz      short loc_865BAA
0x865B9F: mov     edx, [ebp+0]
0x865BA2: mov     eax, [edx]
0x865BA4: push    1
0x865BA6: mov     ecx, ebp
0x865BA8: call    eax
0x865BAA: test    ebx, ebx
0x865BAC: mov     [esi+58h], ebx
0x865BAF: jz      short loc_865BBB
0x865BB1: add     ebx, 4
0x865BB4: push    ebx; lpAddend
0x865BB5: call    dword ptr ds:0A28078h
0x865BBB: mov     ecx, [esp+30h+var_18]
0x865BBF: mov     ebx, [ecx+160h]
0x865BC5: mov     ebp, [esi+44h]
0x865BC8: cmp     ebp, ebx
0x865BCA: jz      short loc_865BFE
0x865BCC: test    ebp, ebp
0x865BCE: jz      short loc_865BED
0x865BD0: lea     edx, [ebp+4]
0x865BD3: push    edx; lpAddend
0x865BD4: call    dword ptr ds:0A2807Ch
0x865BDA: test    eax, eax
0x865BDC: jnz     short loc_865BED
0x865BDE: test    ebp, ebp
0x865BE0: jz      short loc_865BED
0x865BE2: mov     eax, [ebp+0]
0x865BE5: mov     edx, [eax]
0x865BE7: push    1
0x865BE9: mov     ecx, ebp
0x865BEB: call    edx
0x865BED: test    ebx, ebx
0x865BEF: mov     [esi+44h], ebx
0x865BF2: jz      short loc_865BFE
0x865BF4: add     ebx, 4
0x865BF7: push    ebx; lpAddend
0x865BF8: call    dword ptr ds:0A28078h
0x865BFE: cmp     dword ptr [esi+30h], 0
0x865C02: jnz     short loc_865C0C
0x865C04: call    sub_772DF0
0x865C09: mov     [esi+30h], eax
0x865C0C: mov     ecx, [esi+30h]
0x865C0F: push    0
0x865C11: push    0
0x865C13: push    1Bh
0x865C15: call    sub_772CD0
0x865C1A: cmp     dword ptr [esi+30h], 0
0x865C1E: jnz     short loc_865C28
0x865C20: call    sub_772DF0
0x865C25: mov     [esi+30h], eax
0x865C28: mov     ecx, [esi+30h]
0x865C2B: push    0
0x865C2D: push    0
0x865C2F: push    0Fh
0x865C31: call    sub_772CD0
0x865C36: cmp     dword ptr [esi+30h], 0
0x865C3A: jnz     short loc_865C44
0x865C3C: call    sub_772DF0
0x865C41: mov     [esi+30h], eax
0x865C44: mov     ecx, [esi+30h]
0x865C47: push    0
0x865C49: push    1
0x865C4B: push    7
0x865C4D: call    sub_772CD0
0x865C52: cmp     dword ptr [esi+30h], 0
0x865C56: jnz     short loc_865C60
0x865C58: call    sub_772DF0
0x865C5D: mov     [esi+30h], eax
0x865C60: mov     ecx, [esi+30h]
0x865C63: push    0
0x865C65: push    4
0x865C67: push    17h
0x865C69: call    sub_772CD0
0x865C6E: cmp     dword ptr [esi+30h], 0
0x865C72: jnz     short loc_865C7C
0x865C74: call    sub_772DF0
0x865C79: mov     [esi+30h], eax
0x865C7C: mov     ecx, [esi+30h]
0x865C7F: push    0
0x865C81: push    1
0x865C83: push    0Eh
0x865C85: call    sub_772CD0
0x865C8A: cmp     dword ptr [esi+30h], 0
0x865C8E: jnz     short loc_865C98
0x865C90: call    sub_772DF0
0x865C95: mov     [esi+30h], eax
0x865C98: mov     ecx, [esi+30h]
0x865C9B: push    0
0x865C9D: push    0
0x865C9F: push    34h ; '4'
0x865CA1: call    sub_772CD0
0x865CA6: or      ebx, 0FFFFFFFFh
0x865CA9: cmp     esi, ds:0B47630h
0x865CAF: mov     dword ptr ds:0B43C68h, 79088h
0x865CB9: mov     dword ptr ds:0B442F8h, 19Ch
0x865CC3: jz      short loc_865CE3
0x865CC5: add     [esi+60h], ebx
0x865CC8: jnz     short loc_865CD1
0x865CCA: mov     ecx, esi
0x865CCC: call    sub_7604D0
0x865CD1: mov     esi, ds:0B47630h
0x865CD7: test    esi, esi
0x865CD9: mov     [esp+30h+var_14], esi
0x865CDD: jz      short loc_865CE3
0x865CDF: add     dword ptr [esi+60h], 1
0x865CE3: cmp     dword ptr [esi+18h], 7
0x865CE7: jnb     loc_86600B
0x865CED: lea     eax, [esp+30h+var_10]
0x865CF1: push    eax
0x865CF2: call    sub_772630
0x865CF7: add     esp, 4
0x865CFA: mov     ebp, eax
0x865CFC: cmp     edi, [ebp+0]
0x865CFF: mov     byte ptr [esp+30h+var_4], 1Eh
0x865D04: jz      short loc_865D25
0x865D06: test    edi, edi
0x865D08: jz      short loc_865D16
0x865D0A: add     [edi+5Ch], ebx
0x865D0D: jnz     short loc_865D16
0x865D0F: mov     ecx, edi
0x865D11: call    sub_772560
0x865D16: mov     edi, [ebp+0]
0x865D19: test    edi, edi
0x865D1B: mov     [esp+30h+a3], edi
0x865D1F: jz      short loc_865D25
0x865D21: add     dword ptr [edi+5Ch], 1
0x865D25: mov     eax, [esp+30h+var_10]
0x865D29: test    eax, eax
0x865D2B: mov     byte ptr [esp+30h+var_4], 1
0x865D30: jz      short loc_865D44
0x865D32: add     [eax+5Ch], ebx
0x865D35: mov     ecx, eax
0x865D37: add     eax, 5Ch ; '\'
0x865D3A: cmp     dword ptr [eax], 0
0x865D3D: jnz     short loc_865D44
0x865D3F: call    sub_772560
0x865D44: push    2
0x865D46: push    1
0x865D48: push    0
0x865D4A: push    edi
0x865D4B: call    sub_801110
0x865D50: add     esp, 10h
0x865D53: push    edi; a3
0x865D54: push    0; a2
0x865D56: mov     ecx, esi; this
0x865D58: call    sub_760010
0x865D5D: lea     ecx, [esp+30h+var_10]
0x865D61: push    ecx
0x865D62: call    sub_772630
0x865D67: add     esp, 4
0x865D6A: mov     ebp, eax
0x865D6C: cmp     edi, [ebp+0]
0x865D6F: mov     byte ptr [esp+30h+var_4], 1Fh
0x865D74: jz      short loc_865D95
0x865D76: test    edi, edi
0x865D78: jz      short loc_865D86
0x865D7A: add     [edi+5Ch], ebx
0x865D7D: jnz     short loc_865D86
0x865D7F: mov     ecx, edi
0x865D81: call    sub_772560
0x865D86: mov     edi, [ebp+0]
0x865D89: test    edi, edi
0x865D8B: mov     [esp+30h+a3], edi
0x865D8F: jz      short loc_865D95
0x865D91: add     dword ptr [edi+5Ch], 1
0x865D95: mov     eax, [esp+30h+var_10]
0x865D99: test    eax, eax
0x865D9B: mov     byte ptr [esp+30h+var_4], 1
0x865DA0: jz      short loc_865DB4
0x865DA2: add     [eax+5Ch], ebx
0x865DA5: mov     ecx, eax
0x865DA7: add     eax, 5Ch ; '\'
0x865DAA: cmp     dword ptr [eax], 0
0x865DAD: jnz     short loc_865DB4
0x865DAF: call    sub_772560
0x865DB4: push    2
0x865DB6: push    1
0x865DB8: push    1
0x865DBA: push    edi
0x865DBB: call    sub_801110
0x865DC0: add     esp, 10h
0x865DC3: push    edi; a3
0x865DC4: push    1; a2
0x865DC6: mov     ecx, esi; this
0x865DC8: call    sub_760010
0x865DCD: lea     edx, [esp+30h+var_10]
0x865DD1: push    edx
0x865DD2: call    sub_772630
0x865DD7: add     esp, 4
0x865DDA: mov     ebp, eax
0x865DDC: cmp     edi, [ebp+0]
0x865DDF: mov     byte ptr [esp+30h+var_4], 20h ; ' '
0x865DE4: jz      short loc_865E05
0x865DE6: test    edi, edi
0x865DE8: jz      short loc_865DF6
0x865DEA: add     [edi+5Ch], ebx
0x865DED: jnz     short loc_865DF6
0x865DEF: mov     ecx, edi
0x865DF1: call    sub_772560
0x865DF6: mov     edi, [ebp+0]
0x865DF9: test    edi, edi
0x865DFB: mov     [esp+30h+a3], edi
0x865DFF: jz      short loc_865E05
0x865E01: add     dword ptr [edi+5Ch], 1
0x865E05: mov     eax, [esp+30h+var_10]
0x865E09: test    eax, eax
0x865E0B: mov     byte ptr [esp+30h+var_4], 1
0x865E10: jz      short loc_865E24
0x865E12: add     [eax+5Ch], ebx
0x865E15: mov     ecx, eax
0x865E17: add     eax, 5Ch ; '\'
0x865E1A: cmp     dword ptr [eax], 0
0x865E1D: jnz     short loc_865E24
0x865E1F: call    sub_772560
0x865E24: push    2
0x865E26: push    1
0x865E28: push    2
0x865E2A: push    edi
0x865E2B: call    sub_801110
0x865E30: add     esp, 10h
0x865E33: push    edi; a3
0x865E34: push    2; a2
0x865E36: mov     ecx, esi; this
0x865E38: call    sub_760010
0x865E3D: lea     eax, [esp+30h+var_10]
0x865E41: push    eax
0x865E42: call    sub_772630
0x865E47: add     esp, 4
0x865E4A: mov     ebp, eax
0x865E4C: cmp     edi, [ebp+0]
0x865E4F: mov     byte ptr [esp+30h+var_4], 21h ; '!'
0x865E54: jz      short loc_865E75
0x865E56: test    edi, edi
0x865E58: jz      short loc_865E66
0x865E5A: add     [edi+5Ch], ebx
0x865E5D: jnz     short loc_865E66
0x865E5F: mov     ecx, edi
0x865E61: call    sub_772560
0x865E66: mov     edi, [ebp+0]
0x865E69: test    edi, edi
0x865E6B: mov     [esp+30h+a3], edi
0x865E6F: jz      short loc_865E75
0x865E71: add     dword ptr [edi+5Ch], 1
0x865E75: mov     eax, [esp+30h+var_10]
0x865E79: test    eax, eax
0x865E7B: mov     byte ptr [esp+30h+var_4], 1
0x865E80: jz      short loc_865E94
0x865E82: add     [eax+5Ch], ebx
0x865E85: mov     ecx, eax
0x865E87: add     eax, 5Ch ; '\'
0x865E8A: cmp     dword ptr [eax], 0
0x865E8D: jnz     short loc_865E94
0x865E8F: call    sub_772560
0x865E94: push    2
0x865E96: push    1
0x865E98: push    3
0x865E9A: push    edi
0x865E9B: call    sub_801110
0x865EA0: add     esp, 10h
0x865EA3: push    edi; a3
0x865EA4: push    3; a2
0x865EA6: mov     ecx, esi; this
0x865EA8: call    sub_760010
0x865EAD: lea     ecx, [esp+30h+var_10]
0x865EB1: push    ecx
0x865EB2: call    sub_772630
0x865EB7: add     esp, 4
0x865EBA: mov     ebp, eax
0x865EBC: cmp     edi, [ebp+0]
0x865EBF: mov     byte ptr [esp+30h+var_4], 22h ; '"'
0x865EC4: jz      short loc_865EE5
0x865EC6: test    edi, edi
0x865EC8: jz      short loc_865ED6
0x865ECA: add     [edi+5Ch], ebx
0x865ECD: jnz     short loc_865ED6
0x865ECF: mov     ecx, edi
0x865ED1: call    sub_772560
0x865ED6: mov     edi, [ebp+0]
0x865ED9: test    edi, edi
0x865EDB: mov     [esp+30h+a3], edi
0x865EDF: jz      short loc_865EE5
0x865EE1: add     dword ptr [edi+5Ch], 1
0x865EE5: mov     eax, [esp+30h+var_10]
0x865EE9: test    eax, eax
0x865EEB: mov     byte ptr [esp+30h+var_4], 1
0x865EF0: jz      short loc_865F04
0x865EF2: add     [eax+5Ch], ebx
0x865EF5: mov     ecx, eax
0x865EF7: add     eax, 5Ch ; '\'
0x865EFA: cmp     dword ptr [eax], 0
0x865EFD: jnz     short loc_865F04
0x865EFF: call    sub_772560
0x865F04: push    0
0x865F06: push    3
0x865F08: push    4
0x865F0A: push    edi
0x865F0B: call    sub_801110
0x865F10: mov     edx, ds:0B43110h
0x865F16: add     esp, 10h
0x865F19: push    edx; a2
0x865F1A: mov     ecx, edi; this
0x865F1C: call    sub_76C910
0x865F21: push    edi; a3
0x865F22: push    4; a2
0x865F24: mov     ecx, esi; this
0x865F26: call    sub_760010
0x865F2B: lea     eax, [esp+30h+var_10]
0x865F2F: push    eax
0x865F30: call    sub_772630
0x865F35: add     esp, 4
0x865F38: mov     ebp, eax
0x865F3A: cmp     edi, [ebp+0]
0x865F3D: mov     byte ptr [esp+30h+var_4], 23h ; '#'
0x865F42: jz      short loc_865F63
0x865F44: test    edi, edi
0x865F46: jz      short loc_865F54
0x865F48: add     [edi+5Ch], ebx
0x865F4B: jnz     short loc_865F54
0x865F4D: mov     ecx, edi
0x865F4F: call    sub_772560
0x865F54: mov     edi, [ebp+0]
0x865F57: test    edi, edi
0x865F59: mov     [esp+30h+a3], edi
0x865F5D: jz      short loc_865F63
0x865F5F: add     dword ptr [edi+5Ch], 1
0x865F63: mov     eax, [esp+30h+var_10]
0x865F67: test    eax, eax
0x865F69: mov     byte ptr [esp+30h+var_4], 1
0x865F6E: jz      short loc_865F82
0x865F70: add     [eax+5Ch], ebx
0x865F73: mov     ecx, eax
0x865F75: add     eax, 5Ch ; '\'
0x865F78: cmp     dword ptr [eax], 0
0x865F7B: jnz     short loc_865F82
0x865F7D: call    sub_772560
0x865F82: push    2
0x865F84: push    1
0x865F86: push    5
0x865F88: push    edi
0x865F89: call    sub_801110
0x865F8E: add     esp, 10h
0x865F91: push    edi; a3
0x865F92: push    5; a2
0x865F94: mov     ecx, esi; this
0x865F96: call    sub_760010
0x865F9B: lea     ecx, [esp+30h+var_10]
0x865F9F: push    ecx
0x865FA0: call    sub_772630
0x865FA5: add     esp, 4
0x865FA8: mov     ebp, eax
0x865FAA: cmp     edi, [ebp+0]
0x865FAD: mov     byte ptr [esp+30h+var_4], 24h ; '$'
0x865FB2: jz      short loc_865FD3
0x865FB4: test    edi, edi
0x865FB6: jz      short loc_865FC4
0x865FB8: add     [edi+5Ch], ebx
0x865FBB: jnz     short loc_865FC4
0x865FBD: mov     ecx, edi
0x865FBF: call    sub_772560
0x865FC4: mov     edi, [ebp+0]
0x865FC7: test    edi, edi
0x865FC9: mov     [esp+30h+a3], edi
0x865FCD: jz      short loc_865FD3
0x865FCF: add     dword ptr [edi+5Ch], 1
0x865FD3: mov     eax, [esp+30h+var_10]
0x865FD7: test    eax, eax
0x865FD9: mov     byte ptr [esp+30h+var_4], 1
0x865FDE: jz      short loc_865FF2
0x865FE0: add     [eax+5Ch], ebx
0x865FE3: mov     ecx, eax
0x865FE5: add     eax, 5Ch ; '\'
0x865FE8: cmp     dword ptr [eax], 0
0x865FEB: jnz     short loc_865FF2
0x865FED: call    sub_772560
0x865FF2: push    0
0x865FF4: push    3
0x865FF6: push    6
0x865FF8: push    edi
0x865FF9: call    sub_801110
0x865FFE: add     esp, 10h
0x866001: push    edi; a3
0x866002: push    6; a2
0x866004: mov     ecx, esi; this
0x866006: call    sub_760010
0x86600B: mov     edx, [esp+30h+var_18]
0x86600F: mov     ebx, [edx+0E4h]
0x866015: mov     ebp, [esi+58h]
0x866018: cmp     ebp, ebx
0x86601A: jz      short loc_86604E
0x86601C: test    ebp, ebp
0x86601E: jz      short loc_86603D
0x866020: lea     eax, [ebp+4]
0x866023: push    eax; lpAddend
0x866024: call    dword ptr ds:0A2807Ch
0x86602A: test    eax, eax
0x86602C: jnz     short loc_86603D
0x86602E: test    ebp, ebp
0x866030: jz      short loc_86603D
0x866032: mov     edx, [ebp+0]
0x866035: mov     eax, [edx]
0x866037: push    1
0x866039: mov     ecx, ebp
0x86603B: call    eax
0x86603D: test    ebx, ebx
0x86603F: mov     [esi+58h], ebx
0x866042: jz      short loc_86604E
0x866044: add     ebx, 4
0x866047: push    ebx; lpAddend
0x866048: call    dword ptr ds:0A28078h
0x86604E: mov     ecx, [esp+30h+var_18]
0x866052: mov     ebx, [ecx+164h]
0x866058: mov     ebp, [esi+44h]
0x86605B: cmp     ebp, ebx
0x86605D: jz      short loc_866091
0x86605F: test    ebp, ebp
0x866061: jz      short loc_866080
0x866063: lea     edx, [ebp+4]
0x866066: push    edx; lpAddend
0x866067: call    dword ptr ds:0A2807Ch
0x86606D: test    eax, eax
0x86606F: jnz     short loc_866080
0x866071: test    ebp, ebp
0x866073: jz      short loc_866080
0x866075: mov     eax, [ebp+0]
0x866078: mov     edx, [eax]
0x86607A: push    1
0x86607C: mov     ecx, ebp
0x86607E: call    edx
0x866080: test    ebx, ebx
0x866082: mov     [esi+44h], ebx
0x866085: jz      short loc_866091
0x866087: add     ebx, 4
0x86608A: push    ebx; lpAddend
0x86608B: call    dword ptr ds:0A28078h
0x866091: cmp     dword ptr [esi+30h], 0
0x866095: jnz     short loc_86609F
0x866097: call    sub_772DF0
0x86609C: mov     [esi+30h], eax
0x86609F: mov     ecx, [esi+30h]
0x8660A2: push    0
0x8660A4: push    0
0x8660A6: push    1Bh
0x8660A8: call    sub_772CD0
0x8660AD: cmp     dword ptr [esi+30h], 0
0x8660B1: jnz     short loc_8660BB
0x8660B3: call    sub_772DF0
0x8660B8: mov     [esi+30h], eax
0x8660BB: mov     ecx, [esi+30h]
0x8660BE: push    0
0x8660C0: push    0
0x8660C2: push    0Fh
0x8660C4: call    sub_772CD0
0x8660C9: cmp     dword ptr [esi+30h], 0
0x8660CD: jnz     short loc_8660D7
0x8660CF: call    sub_772DF0
0x8660D4: mov     [esi+30h], eax
0x8660D7: mov     ecx, [esi+30h]
0x8660DA: push    0
0x8660DC: push    1
0x8660DE: push    7
0x8660E0: call    sub_772CD0
0x8660E5: cmp     dword ptr [esi+30h], 0
0x8660E9: jnz     short loc_8660F3
0x8660EB: call    sub_772DF0
0x8660F0: mov     [esi+30h], eax
0x8660F3: mov     ecx, [esi+30h]
0x8660F6: push    0
0x8660F8: push    4
0x8660FA: push    17h
0x8660FC: call    sub_772CD0
0x866101: cmp     dword ptr [esi+30h], 0
0x866105: jnz     short loc_86610F
0x866107: call    sub_772DF0
0x86610C: mov     [esi+30h], eax
0x86610F: mov     ecx, [esi+30h]
0x866112: push    0
0x866114: push    1
0x866116: push    0Eh
0x866118: call    sub_772CD0
0x86611D: cmp     dword ptr [esi+30h], 0
0x866121: jnz     short loc_86612B
0x866123: call    sub_772DF0
0x866128: mov     [esi+30h], eax
0x86612B: mov     ecx, [esi+30h]
0x86612E: push    0
0x866130: push    0
0x866132: push    34h ; '4'
0x866134: call    sub_772CD0
0x866139: cmp     esi, ds:0B47634h
0x86613F: mov     ebx, 390F2h
0x866144: mov     ds:0B43C7Ch, ebx
0x86614A: mov     dword ptr ds:0B4430Ch, 11Ch
0x866154: jz      short loc_866175
0x866156: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86615A: jnz     short loc_866163
0x86615C: mov     ecx, esi
0x86615E: call    sub_7604D0
0x866163: mov     esi, ds:0B47634h
0x866169: test    esi, esi
0x86616B: mov     [esp+30h+var_14], esi
0x86616F: jz      short loc_866175
0x866171: add     dword ptr [esi+60h], 1
0x866175: cmp     dword ptr [esi+18h], 7
0x866179: jnb     loc_8664AB
0x86617F: lea     eax, [esp+30h+var_10]
0x866183: push    eax
0x866184: call    sub_772630
0x866189: add     esp, 4
0x86618C: mov     ebp, eax
0x86618E: cmp     edi, [ebp+0]
0x866191: mov     byte ptr [esp+30h+var_4], 25h ; '%'
0x866196: jz      short loc_8661B8
0x866198: test    edi, edi
0x86619A: jz      short loc_8661A9
0x86619C: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8661A0: jnz     short loc_8661A9
0x8661A2: mov     ecx, edi
0x8661A4: call    sub_772560
0x8661A9: mov     edi, [ebp+0]
0x8661AC: test    edi, edi
0x8661AE: mov     [esp+30h+a3], edi
0x8661B2: jz      short loc_8661B8
0x8661B4: add     dword ptr [edi+5Ch], 1
0x8661B8: mov     eax, [esp+30h+var_10]
0x8661BC: test    eax, eax
0x8661BE: mov     byte ptr [esp+30h+var_4], 1
0x8661C3: jz      short loc_8661D8
0x8661C5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8661C9: mov     ecx, eax
0x8661CB: add     eax, 5Ch ; '\'
0x8661CE: cmp     dword ptr [eax], 0
0x8661D1: jnz     short loc_8661D8
0x8661D3: call    sub_772560
0x8661D8: push    2
0x8661DA: push    1
0x8661DC: push    0
0x8661DE: push    edi
0x8661DF: call    sub_801110
0x8661E4: add     esp, 10h
0x8661E7: push    edi; a3
0x8661E8: push    0; a2
0x8661EA: mov     ecx, esi; this
0x8661EC: call    sub_760010
0x8661F1: lea     ecx, [esp+30h+var_10]
0x8661F5: push    ecx
0x8661F6: call    sub_772630
0x8661FB: add     esp, 4
0x8661FE: mov     ebp, eax
0x866200: cmp     edi, [ebp+0]
0x866203: mov     byte ptr [esp+30h+var_4], 26h ; '&'
0x866208: jz      short loc_86622A
0x86620A: test    edi, edi
0x86620C: jz      short loc_86621B
0x86620E: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x866212: jnz     short loc_86621B
0x866214: mov     ecx, edi
0x866216: call    sub_772560
0x86621B: mov     edi, [ebp+0]
0x86621E: test    edi, edi
0x866220: mov     [esp+30h+a3], edi
0x866224: jz      short loc_86622A
0x866226: add     dword ptr [edi+5Ch], 1
0x86622A: mov     eax, [esp+30h+var_10]
0x86622E: test    eax, eax
0x866230: mov     byte ptr [esp+30h+var_4], 1
0x866235: jz      short loc_86624A
0x866237: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86623B: mov     ecx, eax
0x86623D: add     eax, 5Ch ; '\'
0x866240: cmp     dword ptr [eax], 0
0x866243: jnz     short loc_86624A
0x866245: call    sub_772560
0x86624A: push    2
0x86624C: push    1
0x86624E: push    1
0x866250: push    edi
0x866251: call    sub_801110
0x866256: add     esp, 10h
0x866259: push    edi; a3
0x86625A: push    1; a2
0x86625C: mov     ecx, esi; this
0x86625E: call    sub_760010
0x866263: lea     edx, [esp+30h+var_10]
0x866267: push    edx
0x866268: call    sub_772630
0x86626D: add     esp, 4
0x866270: mov     ebp, eax
0x866272: cmp     edi, [ebp+0]
0x866275: mov     byte ptr [esp+30h+var_4], 27h ; '''
0x86627A: jz      short loc_86629C
0x86627C: test    edi, edi
0x86627E: jz      short loc_86628D
0x866280: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x866284: jnz     short loc_86628D
0x866286: mov     ecx, edi
0x866288: call    sub_772560
0x86628D: mov     edi, [ebp+0]
0x866290: test    edi, edi
0x866292: mov     [esp+30h+a3], edi
0x866296: jz      short loc_86629C
0x866298: add     dword ptr [edi+5Ch], 1
0x86629C: mov     eax, [esp+30h+var_10]
0x8662A0: test    eax, eax
0x8662A2: mov     byte ptr [esp+30h+var_4], 1
0x8662A7: jz      short loc_8662BC
0x8662A9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8662AD: mov     ecx, eax
0x8662AF: add     eax, 5Ch ; '\'
0x8662B2: cmp     dword ptr [eax], 0
0x8662B5: jnz     short loc_8662BC
0x8662B7: call    sub_772560
0x8662BC: push    2
0x8662BE: push    1
0x8662C0: push    2
0x8662C2: push    edi
0x8662C3: call    sub_801110
0x8662C8: add     esp, 10h
0x8662CB: push    edi; a3
0x8662CC: push    2; a2
0x8662CE: mov     ecx, esi; this
0x8662D0: call    sub_760010
0x8662D5: lea     eax, [esp+30h+var_10]
0x8662D9: push    eax
0x8662DA: call    sub_772630
0x8662DF: add     esp, 4
0x8662E2: mov     ebp, eax
0x8662E4: cmp     edi, [ebp+0]
0x8662E7: mov     byte ptr [esp+30h+var_4], 28h ; '('
0x8662EC: jz      short loc_86630E
0x8662EE: test    edi, edi
0x8662F0: jz      short loc_8662FF
0x8662F2: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8662F6: jnz     short loc_8662FF
0x8662F8: mov     ecx, edi
0x8662FA: call    sub_772560
0x8662FF: mov     edi, [ebp+0]
0x866302: test    edi, edi
0x866304: mov     [esp+30h+a3], edi
0x866308: jz      short loc_86630E
0x86630A: add     dword ptr [edi+5Ch], 1
0x86630E: mov     eax, [esp+30h+var_10]
0x866312: test    eax, eax
0x866314: mov     byte ptr [esp+30h+var_4], 1
0x866319: jz      short loc_86632E
0x86631B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86631F: mov     ecx, eax
0x866321: add     eax, 5Ch ; '\'
0x866324: cmp     dword ptr [eax], 0
0x866327: jnz     short loc_86632E
0x866329: call    sub_772560
0x86632E: push    2
0x866330: push    1
0x866332: push    3
0x866334: push    edi
0x866335: call    sub_801110
0x86633A: add     esp, 10h
0x86633D: push    edi; a3
0x86633E: push    3; a2
0x866340: mov     ecx, esi; this
0x866342: call    sub_760010
0x866347: lea     ecx, [esp+30h+var_10]
0x86634B: push    ecx
0x86634C: call    sub_772630
0x866351: add     esp, 4
0x866354: mov     ebp, eax
0x866356: cmp     edi, [ebp+0]
0x866359: mov     byte ptr [esp+30h+var_4], 29h ; ')'
0x86635E: jz      short loc_866380
0x866360: test    edi, edi
0x866362: jz      short loc_866371
0x866364: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x866368: jnz     short loc_866371
0x86636A: mov     ecx, edi
0x86636C: call    sub_772560
0x866371: mov     edi, [ebp+0]
0x866374: test    edi, edi
0x866376: mov     [esp+30h+a3], edi
0x86637A: jz      short loc_866380
0x86637C: add     dword ptr [edi+5Ch], 1
0x866380: mov     eax, [esp+30h+var_10]
0x866384: test    eax, eax
0x866386: mov     byte ptr [esp+30h+var_4], 1
0x86638B: jz      short loc_8663A0
0x86638D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866391: mov     ecx, eax
0x866393: add     eax, 5Ch ; '\'
0x866396: cmp     dword ptr [eax], 0
0x866399: jnz     short loc_8663A0
0x86639B: call    sub_772560
0x8663A0: push    0
0x8663A2: push    3
0x8663A4: push    4
0x8663A6: push    edi
0x8663A7: call    sub_801110
0x8663AC: mov     edx, ds:0B43110h
0x8663B2: add     esp, 10h
0x8663B5: push    edx; a2
0x8663B6: mov     ecx, edi; this
0x8663B8: call    sub_76C910
0x8663BD: push    edi; a3
0x8663BE: push    4; a2
0x8663C0: mov     ecx, esi; this
0x8663C2: call    sub_760010
0x8663C7: lea     eax, [esp+30h+var_10]
0x8663CB: push    eax
0x8663CC: call    sub_772630
0x8663D1: add     esp, 4
0x8663D4: mov     ebp, eax
0x8663D6: cmp     edi, [ebp+0]
0x8663D9: mov     byte ptr [esp+30h+var_4], 2Ah ; '*'
0x8663DE: jz      short loc_866400
0x8663E0: test    edi, edi
0x8663E2: jz      short loc_8663F1
0x8663E4: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8663E8: jnz     short loc_8663F1
0x8663EA: mov     ecx, edi
0x8663EC: call    sub_772560
0x8663F1: mov     edi, [ebp+0]
0x8663F4: test    edi, edi
0x8663F6: mov     [esp+30h+a3], edi
0x8663FA: jz      short loc_866400
0x8663FC: add     dword ptr [edi+5Ch], 1
0x866400: mov     eax, [esp+30h+var_10]
0x866404: test    eax, eax
0x866406: mov     byte ptr [esp+30h+var_4], 1
0x86640B: jz      short loc_866420
0x86640D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866411: mov     ecx, eax
0x866413: add     eax, 5Ch ; '\'
0x866416: cmp     dword ptr [eax], 0
0x866419: jnz     short loc_866420
0x86641B: call    sub_772560
0x866420: push    2
0x866422: push    1
0x866424: push    5
0x866426: push    edi
0x866427: call    sub_801110
0x86642C: add     esp, 10h
0x86642F: push    edi; a3
0x866430: push    5; a2
0x866432: mov     ecx, esi; this
0x866434: call    sub_760010
0x866439: lea     ecx, [esp+30h+var_10]
0x86643D: push    ecx
0x86643E: call    sub_772630
0x866443: add     esp, 4
0x866446: mov     ebp, eax
0x866448: cmp     edi, [ebp+0]
0x86644B: mov     byte ptr [esp+30h+var_4], 2Bh ; '+'
0x866450: jz      short loc_866472
0x866452: test    edi, edi
0x866454: jz      short loc_866463
0x866456: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86645A: jnz     short loc_866463
0x86645C: mov     ecx, edi
0x86645E: call    sub_772560
0x866463: mov     edi, [ebp+0]
0x866466: test    edi, edi
0x866468: mov     [esp+30h+a3], edi
0x86646C: jz      short loc_866472
0x86646E: add     dword ptr [edi+5Ch], 1
0x866472: mov     eax, [esp+30h+var_10]
0x866476: test    eax, eax
0x866478: mov     byte ptr [esp+30h+var_4], 1
0x86647D: jz      short loc_866492
0x86647F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866483: mov     ecx, eax
0x866485: add     eax, 5Ch ; '\'
0x866488: cmp     dword ptr [eax], 0
0x86648B: jnz     short loc_866492
0x86648D: call    sub_772560
0x866492: push    0
0x866494: push    3
0x866496: push    6
0x866498: push    edi
0x866499: call    sub_801110
0x86649E: add     esp, 10h
0x8664A1: push    edi; a3
0x8664A2: push    6; a2
0x8664A4: mov     ecx, esi; this
0x8664A6: call    sub_760010
0x8664AB: mov     ebp, [esp+30h+var_18]
0x8664AF: mov     eax, [ebp+0E4h]
0x8664B5: push    eax; a2
0x8664B6: mov     ecx, esi; this
0x8664B8: call    sub_7AECB0
0x8664BD: mov     eax, [ebp+168h]
0x8664C3: push    eax; a2
0x8664C4: mov     ecx, esi; this
0x8664C6: call    sub_7AEC60
0x8664CB: cmp     dword ptr [esi+30h], 0
0x8664CF: jnz     short loc_8664D9
0x8664D1: call    sub_772DF0
0x8664D6: mov     [esi+30h], eax
0x8664D9: mov     ecx, [esi+30h]
0x8664DC: push    0
0x8664DE: push    0
0x8664E0: push    1Bh
0x8664E2: call    sub_772CD0
0x8664E7: cmp     dword ptr [esi+30h], 0
0x8664EB: jnz     short loc_8664F5
0x8664ED: call    sub_772DF0
0x8664F2: mov     [esi+30h], eax
0x8664F5: mov     ecx, [esi+30h]
0x8664F8: push    0
0x8664FA: push    0
0x8664FC: push    0Fh
0x8664FE: call    sub_772CD0
0x866503: cmp     dword ptr [esi+30h], 0
0x866507: jnz     short loc_866511
0x866509: call    sub_772DF0
0x86650E: mov     [esi+30h], eax
0x866511: mov     ecx, [esi+30h]
0x866514: push    0
0x866516: push    1
0x866518: push    7
0x86651A: call    sub_772CD0
0x86651F: cmp     dword ptr [esi+30h], 0
0x866523: jnz     short loc_86652D
0x866525: call    sub_772DF0
0x86652A: mov     [esi+30h], eax
0x86652D: mov     ecx, [esi+30h]
0x866530: push    0
0x866532: push    4
0x866534: push    17h
0x866536: call    sub_772CD0
0x86653B: cmp     dword ptr [esi+30h], 0
0x86653F: jnz     short loc_866549
0x866541: call    sub_772DF0
0x866546: mov     [esi+30h], eax
0x866549: mov     ecx, [esi+30h]
0x86654C: push    0
0x86654E: push    1
0x866550: push    0Eh
0x866552: call    sub_772CD0
0x866557: cmp     dword ptr [esi+30h], 0
0x86655B: jnz     short loc_866565
0x86655D: call    sub_772DF0
0x866562: mov     [esi+30h], eax
0x866565: mov     ecx, [esi+30h]
0x866568: push    0
0x86656A: push    0
0x86656C: push    34h ; '4'
0x86656E: call    sub_772CD0
0x866573: cmp     esi, ds:0B47638h
0x866579: mov     ds:0B43C80h, ebx
0x86657F: mov     ebx, 19Ch
0x866584: mov     ds:0B44310h, ebx
0x86658A: jz      short loc_8665AB
0x86658C: add     dword ptr [esi+60h], 0FFFFFFFFh
0x866590: jnz     short loc_866599
0x866592: mov     ecx, esi
0x866594: call    sub_7604D0
0x866599: mov     esi, ds:0B47638h
0x86659F: test    esi, esi
0x8665A1: mov     [esp+30h+var_14], esi
0x8665A5: jz      short loc_8665AB
0x8665A7: add     dword ptr [esi+60h], 1
0x8665AB: cmp     dword ptr [esi+18h], 7
0x8665AF: jnb     loc_866868
0x8665B5: lea     edx, [esp+30h+var_10]
0x8665B9: push    edx
0x8665BA: call    sub_772630
0x8665BF: add     esp, 4
0x8665C2: mov     ebp, eax
0x8665C4: cmp     edi, [ebp+0]
0x8665C7: mov     byte ptr [esp+30h+var_4], 2Ch ; ','
0x8665CC: jz      short loc_8665EE
0x8665CE: test    edi, edi
0x8665D0: jz      short loc_8665DF
0x8665D2: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8665D6: jnz     short loc_8665DF
0x8665D8: mov     ecx, edi
0x8665DA: call    sub_772560
0x8665DF: mov     edi, [ebp+0]
0x8665E2: test    edi, edi
0x8665E4: mov     [esp+30h+a3], edi
0x8665E8: jz      short loc_8665EE
0x8665EA: add     dword ptr [edi+5Ch], 1
0x8665EE: mov     eax, [esp+30h+var_10]
0x8665F2: test    eax, eax
0x8665F4: mov     byte ptr [esp+30h+var_4], 1
0x8665F9: jz      short loc_86660E
0x8665FB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8665FF: mov     ecx, eax
0x866601: add     eax, 5Ch ; '\'
0x866604: cmp     dword ptr [eax], 0
0x866607: jnz     short loc_86660E
0x866609: call    sub_772560
0x86660E: push    2
0x866610: push    1
0x866612: push    0
0x866614: push    edi
0x866615: call    sub_801110
0x86661A: add     esp, 10h
0x86661D: push    edi; a3
0x86661E: push    0; a2
0x866620: mov     ecx, esi; this
0x866622: call    sub_760010
0x866627: lea     eax, [esp+30h+var_10]
0x86662B: push    eax
0x86662C: call    sub_772630
0x866631: add     esp, 4
0x866634: mov     ebp, eax
0x866636: cmp     edi, [ebp+0]
0x866639: mov     byte ptr [esp+30h+var_4], 2Dh ; '-'
0x86663E: jz      short loc_866660
0x866640: test    edi, edi
0x866642: jz      short loc_866651
0x866644: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x866648: jnz     short loc_866651
0x86664A: mov     ecx, edi
0x86664C: call    sub_772560
0x866651: mov     edi, [ebp+0]
0x866654: test    edi, edi
0x866656: mov     [esp+30h+a3], edi
0x86665A: jz      short loc_866660
0x86665C: add     dword ptr [edi+5Ch], 1
0x866660: mov     eax, [esp+30h+var_10]
0x866664: test    eax, eax
0x866666: mov     byte ptr [esp+30h+var_4], 1
0x86666B: jz      short loc_866680
0x86666D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866671: mov     ecx, eax
0x866673: add     eax, 5Ch ; '\'
0x866676: cmp     dword ptr [eax], 0
0x866679: jnz     short loc_866680
0x86667B: call    sub_772560
0x866680: push    2
0x866682: push    1
0x866684: push    1
0x866686: push    edi
0x866687: call    sub_801110
0x86668C: add     esp, 10h
0x86668F: push    edi; a3
0x866690: push    1; a2
0x866692: mov     ecx, esi; this
0x866694: call    sub_760010
0x866699: lea     ecx, [esp+30h+var_10]
0x86669D: push    ecx
0x86669E: call    sub_772630
0x8666A3: add     esp, 4
0x8666A6: push    eax
0x8666A7: lea     ecx, [esp+34h+a3]
0x8666AB: mov     byte ptr [esp+34h+var_4], 2Eh ; '.'
0x8666B0: call    sub_75FAE0
0x8666B5: mov     eax, [esp+30h+var_10]
0x8666B9: test    eax, eax
0x8666BB: mov     byte ptr [esp+30h+var_4], 1
0x8666C0: jz      short loc_8666D5
0x8666C2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8666C6: mov     ecx, eax
0x8666C8: add     eax, 5Ch ; '\'
0x8666CB: cmp     dword ptr [eax], 0
0x8666CE: jnz     short loc_8666D5
0x8666D0: call    sub_772560
0x8666D5: mov     edi, [esp+30h+a3]
0x8666D9: push    2
0x8666DB: push    1
0x8666DD: push    2
0x8666DF: push    edi
0x8666E0: call    sub_801110
0x8666E5: add     esp, 10h
0x8666E8: push    edi; a3
0x8666E9: push    2; a2
0x8666EB: mov     ecx, esi; this
0x8666ED: call    sub_760010
0x8666F2: lea     edx, [esp+30h+var_10]
0x8666F6: push    edx
0x8666F7: call    sub_772630
0x8666FC: add     esp, 4
0x8666FF: push    eax
0x866700: lea     ecx, [esp+34h+a3]
0x866704: mov     byte ptr [esp+34h+var_4], 2Fh ; '/'
0x866709: call    sub_75FAE0
0x86670E: mov     eax, [esp+30h+var_10]
0x866712: test    eax, eax
0x866714: mov     byte ptr [esp+30h+var_4], 1
0x866719: jz      short loc_86672E
0x86671B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86671F: mov     ecx, eax
0x866721: add     eax, 5Ch ; '\'
0x866724: cmp     dword ptr [eax], 0
0x866727: jnz     short loc_86672E
0x866729: call    sub_772560
0x86672E: mov     edi, [esp+30h+a3]
0x866732: push    2
0x866734: push    1
0x866736: push    3
0x866738: push    edi
0x866739: call    sub_801110
0x86673E: add     esp, 10h
0x866741: push    edi; a3
0x866742: push    3; a2
0x866744: mov     ecx, esi; this
0x866746: call    sub_760010
0x86674B: lea     eax, [esp+30h+var_10]
0x86674F: push    eax
0x866750: call    sub_772630
0x866755: add     esp, 4
0x866758: push    eax
0x866759: lea     ecx, [esp+34h+a3]
0x86675D: mov     byte ptr [esp+34h+var_4], 30h ; '0'
0x866762: call    sub_75FAE0
0x866767: mov     eax, [esp+30h+var_10]
0x86676B: test    eax, eax
0x86676D: mov     byte ptr [esp+30h+var_4], 1
0x866772: jz      short loc_866787
0x866774: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866778: mov     ecx, eax
0x86677A: add     eax, 5Ch ; '\'
0x86677D: cmp     dword ptr [eax], 0
0x866780: jnz     short loc_866787
0x866782: call    sub_772560
0x866787: mov     edi, [esp+30h+a3]
0x86678B: push    0
0x86678D: push    3
0x86678F: push    4
0x866791: push    edi
0x866792: call    sub_801110
0x866797: mov     ecx, ds:0B43110h
0x86679D: add     esp, 10h
0x8667A0: push    ecx; a2
0x8667A1: mov     ecx, edi; this
0x8667A3: call    sub_76C910
0x8667A8: push    edi; a3
0x8667A9: push    4; a2
0x8667AB: mov     ecx, esi; this
0x8667AD: call    sub_760010
0x8667B2: lea     edx, [esp+30h+var_10]
0x8667B6: push    edx
0x8667B7: call    sub_772630
0x8667BC: add     esp, 4
0x8667BF: push    eax
0x8667C0: lea     ecx, [esp+34h+a3]
0x8667C4: mov     byte ptr [esp+34h+var_4], 31h ; '1'
0x8667C9: call    sub_75FAE0
0x8667CE: mov     eax, [esp+30h+var_10]
0x8667D2: test    eax, eax
0x8667D4: mov     byte ptr [esp+30h+var_4], 1
0x8667D9: jz      short loc_8667EE
0x8667DB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8667DF: mov     ecx, eax
0x8667E1: add     eax, 5Ch ; '\'
0x8667E4: cmp     dword ptr [eax], 0
0x8667E7: jnz     short loc_8667EE
0x8667E9: call    sub_772560
0x8667EE: mov     edi, [esp+30h+a3]
0x8667F2: push    2
0x8667F4: push    1
0x8667F6: push    5
0x8667F8: push    edi
0x8667F9: call    sub_801110
0x8667FE: add     esp, 10h
0x866801: push    edi; a3
0x866802: push    5; a2
0x866804: mov     ecx, esi; this
0x866806: call    sub_760010
0x86680B: lea     eax, [esp+30h+var_10]
0x86680F: push    eax
0x866810: call    sub_772630
0x866815: add     esp, 4
0x866818: push    eax
0x866819: lea     ecx, [esp+34h+a3]
0x86681D: mov     byte ptr [esp+34h+var_4], 32h ; '2'
0x866822: call    sub_75FAE0
0x866827: mov     eax, [esp+30h+var_10]
0x86682B: test    eax, eax
0x86682D: mov     byte ptr [esp+30h+var_4], 1
0x866832: jz      short loc_866847
0x866834: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866838: mov     ecx, eax
0x86683A: add     eax, 5Ch ; '\'
0x86683D: cmp     dword ptr [eax], 0
0x866840: jnz     short loc_866847
0x866842: call    sub_772560
0x866847: mov     edi, [esp+30h+a3]
0x86684B: push    0
0x86684D: push    3
0x86684F: push    6
0x866851: push    edi
0x866852: call    sub_801110
0x866857: add     esp, 10h
0x86685A: push    edi; a3
0x86685B: push    6; a2
0x86685D: mov     ecx, esi; this
0x86685F: call    sub_760010
0x866864: mov     ebp, [esp+30h+var_18]
0x866868: mov     eax, [ebp+0E8h]
0x86686E: push    eax; a2
0x86686F: mov     ecx, esi; this
0x866871: call    sub_7AECB0
0x866876: mov     eax, [ebp+164h]
0x86687C: push    eax; a2
0x86687D: mov     ecx, esi; this
0x86687F: call    sub_7AEC60
0x866884: cmp     dword ptr [esi+30h], 0
0x866888: jnz     short loc_866892
0x86688A: call    sub_772DF0
0x86688F: mov     [esi+30h], eax
0x866892: mov     ecx, [esi+30h]
0x866895: push    0
0x866897: push    0
0x866899: push    1Bh
0x86689B: call    sub_772CD0
0x8668A0: cmp     dword ptr [esi+30h], 0
0x8668A4: jnz     short loc_8668AE
0x8668A6: call    sub_772DF0
0x8668AB: mov     [esi+30h], eax
0x8668AE: mov     ecx, [esi+30h]
0x8668B1: push    0
0x8668B3: push    0
0x8668B5: push    0Fh
0x8668B7: call    sub_772CD0
0x8668BC: cmp     dword ptr [esi+30h], 0
0x8668C0: jnz     short loc_8668CA
0x8668C2: call    sub_772DF0
0x8668C7: mov     [esi+30h], eax
0x8668CA: mov     ecx, [esi+30h]
0x8668CD: push    0
0x8668CF: push    1
0x8668D1: push    7
0x8668D3: call    sub_772CD0
0x8668D8: cmp     dword ptr [esi+30h], 0
0x8668DC: jnz     short loc_8668E6
0x8668DE: call    sub_772DF0
0x8668E3: mov     [esi+30h], eax
0x8668E6: mov     ecx, [esi+30h]
0x8668E9: push    0
0x8668EB: push    4
0x8668ED: push    17h
0x8668EF: call    sub_772CD0
0x8668F4: cmp     dword ptr [esi+30h], 0
0x8668F8: jnz     short loc_866902
0x8668FA: call    sub_772DF0
0x8668FF: mov     [esi+30h], eax
0x866902: mov     ecx, [esi+30h]
0x866905: push    0
0x866907: push    1
0x866909: push    0Eh
0x86690B: call    sub_772CD0
0x866910: cmp     dword ptr [esi+30h], 0
0x866914: jnz     short loc_86691E
0x866916: call    sub_772DF0
0x86691B: mov     [esi+30h], eax
0x86691E: mov     ecx, [esi+30h]
0x866921: push    0
0x866923: push    0
0x866925: push    34h ; '4'
0x866927: call    sub_772CD0
0x86692C: cmp     esi, ds:0B4763Ch
0x866932: mov     ebp, 790F8h
0x866937: mov     ds:0B43C8Ch, ebp
0x86693D: mov     dword ptr ds:0B4431Ch, 11Ch
0x866947: jz      short loc_866968
0x866949: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86694D: jnz     short loc_866956
0x86694F: mov     ecx, esi
0x866951: call    sub_7604D0
0x866956: mov     esi, ds:0B4763Ch
0x86695C: test    esi, esi
0x86695E: mov     [esp+30h+var_14], esi
0x866962: jz      short loc_866968
0x866964: add     dword ptr [esi+60h], 1
0x866968: cmp     dword ptr [esi+18h], 7
0x86696C: jnb     loc_866BEE
0x866972: lea     ecx, [esp+30h+var_10]
0x866976: push    ecx
0x866977: call    sub_772630
0x86697C: add     esp, 4
0x86697F: push    eax
0x866980: lea     ecx, [esp+34h+a3]
0x866984: mov     byte ptr [esp+34h+var_4], 33h ; '3'
0x866989: call    sub_75FAE0
0x86698E: mov     eax, [esp+30h+var_10]
0x866992: test    eax, eax
0x866994: mov     byte ptr [esp+30h+var_4], 1
0x866999: jz      short loc_8669AE
0x86699B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86699F: mov     ecx, eax
0x8669A1: add     eax, 5Ch ; '\'
0x8669A4: cmp     dword ptr [eax], 0
0x8669A7: jnz     short loc_8669AE
0x8669A9: call    sub_772560
0x8669AE: mov     edi, [esp+30h+a3]
0x8669B2: push    2
0x8669B4: push    1
0x8669B6: push    0
0x8669B8: push    edi
0x8669B9: call    sub_801110
0x8669BE: add     esp, 10h
0x8669C1: push    edi; a3
0x8669C2: push    0; a2
0x8669C4: mov     ecx, esi; this
0x8669C6: call    sub_760010
0x8669CB: lea     edx, [esp+30h+var_10]
0x8669CF: push    edx
0x8669D0: call    sub_772630
0x8669D5: add     esp, 4
0x8669D8: push    eax
0x8669D9: lea     ecx, [esp+34h+a3]
0x8669DD: mov     byte ptr [esp+34h+var_4], 34h ; '4'
0x8669E2: call    sub_75FAE0
0x8669E7: mov     eax, [esp+30h+var_10]
0x8669EB: test    eax, eax
0x8669ED: mov     byte ptr [esp+30h+var_4], 1
0x8669F2: jz      short loc_866A07
0x8669F4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8669F8: mov     ecx, eax
0x8669FA: add     eax, 5Ch ; '\'
0x8669FD: cmp     dword ptr [eax], 0
0x866A00: jnz     short loc_866A07
0x866A02: call    sub_772560
0x866A07: mov     edi, [esp+30h+a3]
0x866A0B: push    2
0x866A0D: push    1
0x866A0F: push    1
0x866A11: push    edi
0x866A12: call    sub_801110
0x866A17: add     esp, 10h
0x866A1A: push    edi; a3
0x866A1B: push    1; a2
0x866A1D: mov     ecx, esi; this
0x866A1F: call    sub_760010
0x866A24: lea     eax, [esp+30h+var_10]
0x866A28: push    eax
0x866A29: call    sub_772630
0x866A2E: add     esp, 4
0x866A31: push    eax
0x866A32: lea     ecx, [esp+34h+a3]
0x866A36: mov     byte ptr [esp+34h+var_4], 35h ; '5'
0x866A3B: call    sub_75FAE0
0x866A40: mov     eax, [esp+30h+var_10]
0x866A44: test    eax, eax
0x866A46: mov     byte ptr [esp+30h+var_4], 1
0x866A4B: jz      short loc_866A60
0x866A4D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866A51: mov     ecx, eax
0x866A53: add     eax, 5Ch ; '\'
0x866A56: cmp     dword ptr [eax], 0
0x866A59: jnz     short loc_866A60
0x866A5B: call    sub_772560
0x866A60: mov     edi, [esp+30h+a3]
0x866A64: push    2
0x866A66: push    1
0x866A68: push    2
0x866A6A: push    edi
0x866A6B: call    sub_801110
0x866A70: add     esp, 10h
0x866A73: push    edi; a3
0x866A74: push    2; a2
0x866A76: mov     ecx, esi; this
0x866A78: call    sub_760010
0x866A7D: lea     ecx, [esp+30h+var_10]
0x866A81: push    ecx
0x866A82: call    sub_772630
0x866A87: add     esp, 4
0x866A8A: push    eax
0x866A8B: lea     ecx, [esp+34h+a3]
0x866A8F: mov     byte ptr [esp+34h+var_4], 36h ; '6'
0x866A94: call    sub_75FAE0
0x866A99: mov     eax, [esp+30h+var_10]
0x866A9D: test    eax, eax
0x866A9F: mov     byte ptr [esp+30h+var_4], 1
0x866AA4: jz      short loc_866AB9
0x866AA6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866AAA: mov     ecx, eax
0x866AAC: add     eax, 5Ch ; '\'
0x866AAF: cmp     dword ptr [eax], 0
0x866AB2: jnz     short loc_866AB9
0x866AB4: call    sub_772560
0x866AB9: mov     edi, [esp+30h+a3]
0x866ABD: push    2
0x866ABF: push    1
0x866AC1: push    3
0x866AC3: push    edi
0x866AC4: call    sub_801110
0x866AC9: add     esp, 10h
0x866ACC: push    edi; a3
0x866ACD: push    3; a2
0x866ACF: mov     ecx, esi; this
0x866AD1: call    sub_760010
0x866AD6: lea     edx, [esp+30h+var_10]
0x866ADA: push    edx
0x866ADB: call    sub_772630
0x866AE0: add     esp, 4
0x866AE3: push    eax
0x866AE4: lea     ecx, [esp+34h+a3]
0x866AE8: mov     byte ptr [esp+34h+var_4], 37h ; '7'
0x866AED: call    sub_75FAE0
0x866AF2: mov     eax, [esp+30h+var_10]
0x866AF6: test    eax, eax
0x866AF8: mov     byte ptr [esp+30h+var_4], 1
0x866AFD: jz      short loc_866B12
0x866AFF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866B03: mov     ecx, eax
0x866B05: add     eax, 5Ch ; '\'
0x866B08: cmp     dword ptr [eax], 0
0x866B0B: jnz     short loc_866B12
0x866B0D: call    sub_772560
0x866B12: mov     edi, [esp+30h+a3]
0x866B16: push    0
0x866B18: push    3
0x866B1A: push    4
0x866B1C: push    edi
0x866B1D: call    sub_801110
0x866B22: mov     eax, ds:0B43110h
0x866B27: add     esp, 10h
0x866B2A: push    eax; a2
0x866B2B: mov     ecx, edi; this
0x866B2D: call    sub_76C910
0x866B32: push    edi; a3
0x866B33: push    4; a2
0x866B35: mov     ecx, esi; this
0x866B37: call    sub_760010
0x866B3C: lea     ecx, [esp+30h+var_10]
0x866B40: push    ecx
0x866B41: call    sub_772630
0x866B46: add     esp, 4
0x866B49: push    eax
0x866B4A: lea     ecx, [esp+34h+a3]
0x866B4E: mov     byte ptr [esp+34h+var_4], 38h ; '8'
0x866B53: call    sub_75FAE0
0x866B58: mov     eax, [esp+30h+var_10]
0x866B5C: test    eax, eax
0x866B5E: mov     byte ptr [esp+30h+var_4], 1
0x866B63: jz      short loc_866B78
0x866B65: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866B69: mov     ecx, eax
0x866B6B: add     eax, 5Ch ; '\'
0x866B6E: cmp     dword ptr [eax], 0
0x866B71: jnz     short loc_866B78
0x866B73: call    sub_772560
0x866B78: mov     edi, [esp+30h+a3]
0x866B7C: push    2
0x866B7E: push    1
0x866B80: push    5
0x866B82: push    edi
0x866B83: call    sub_801110
0x866B88: add     esp, 10h
0x866B8B: push    edi; a3
0x866B8C: push    5; a2
0x866B8E: mov     ecx, esi; this
0x866B90: call    sub_760010
0x866B95: lea     edx, [esp+30h+var_10]
0x866B99: push    edx
0x866B9A: call    sub_772630
0x866B9F: add     esp, 4
0x866BA2: push    eax
0x866BA3: lea     ecx, [esp+34h+a3]
0x866BA7: mov     byte ptr [esp+34h+var_4], 39h ; '9'
0x866BAC: call    sub_75FAE0
0x866BB1: mov     eax, [esp+30h+var_10]
0x866BB5: test    eax, eax
0x866BB7: mov     byte ptr [esp+30h+var_4], 1
0x866BBC: jz      short loc_866BD1
0x866BBE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866BC2: mov     ecx, eax
0x866BC4: add     eax, 5Ch ; '\'
0x866BC7: cmp     dword ptr [eax], 0
0x866BCA: jnz     short loc_866BD1
0x866BCC: call    sub_772560
0x866BD1: mov     edi, [esp+30h+a3]
0x866BD5: push    0
0x866BD7: push    3
0x866BD9: push    6
0x866BDB: push    edi
0x866BDC: call    sub_801110
0x866BE1: add     esp, 10h
0x866BE4: push    edi; a3
0x866BE5: push    6; a2
0x866BE7: mov     ecx, esi; this
0x866BE9: call    sub_760010
0x866BEE: mov     eax, [esp+30h+var_18]
0x866BF2: mov     eax, [eax+0E8h]
0x866BF8: push    eax; a2
0x866BF9: mov     ecx, esi; this
0x866BFB: call    sub_7AECB0
0x866C00: mov     ecx, [esp+30h+var_18]
0x866C04: mov     eax, [ecx+168h]
0x866C0A: push    eax; a2
0x866C0B: mov     ecx, esi; this
0x866C0D: call    sub_7AEC60
0x866C12: cmp     dword ptr [esi+30h], 0
0x866C16: jnz     short loc_866C20
0x866C18: call    sub_772DF0
0x866C1D: mov     [esi+30h], eax
0x866C20: mov     ecx, [esi+30h]
0x866C23: push    0
0x866C25: push    0
0x866C27: push    1Bh
0x866C29: call    sub_772CD0
0x866C2E: cmp     dword ptr [esi+30h], 0
0x866C32: jnz     short loc_866C3C
0x866C34: call    sub_772DF0
0x866C39: mov     [esi+30h], eax
0x866C3C: mov     ecx, [esi+30h]
0x866C3F: push    0
0x866C41: push    0
0x866C43: push    0Fh
0x866C45: call    sub_772CD0
0x866C4A: cmp     dword ptr [esi+30h], 0
0x866C4E: jnz     short loc_866C58
0x866C50: call    sub_772DF0
0x866C55: mov     [esi+30h], eax
0x866C58: mov     ecx, [esi+30h]
0x866C5B: push    0
0x866C5D: push    1
0x866C5F: push    7
0x866C61: call    sub_772CD0
0x866C66: cmp     dword ptr [esi+30h], 0
0x866C6A: jnz     short loc_866C74
0x866C6C: call    sub_772DF0
0x866C71: mov     [esi+30h], eax
0x866C74: mov     ecx, [esi+30h]
0x866C77: push    0
0x866C79: push    4
0x866C7B: push    17h
0x866C7D: call    sub_772CD0
0x866C82: cmp     dword ptr [esi+30h], 0
0x866C86: jnz     short loc_866C90
0x866C88: call    sub_772DF0
0x866C8D: mov     [esi+30h], eax
0x866C90: mov     ecx, [esi+30h]
0x866C93: push    0
0x866C95: push    1
0x866C97: push    0Eh
0x866C99: call    sub_772CD0
0x866C9E: cmp     dword ptr [esi+30h], 0
0x866CA2: jnz     short loc_866CAC
0x866CA4: call    sub_772DF0
0x866CA9: mov     [esi+30h], eax
0x866CAC: mov     ecx, [esi+30h]
0x866CAF: push    0
0x866CB1: push    0
0x866CB3: push    34h ; '4'
0x866CB5: call    sub_772CD0
0x866CBA: cmp     esi, ds:0B47640h
0x866CC0: mov     ds:0B43C8Ch, ebp
0x866CC6: mov     ds:0B4431Ch, ebx
0x866CCC: jz      short loc_866CF3
0x866CCE: add     dword ptr [esi+60h], 0FFFFFFFFh
0x866CD2: jnz     short loc_866CDB
0x866CD4: mov     ecx, esi
0x866CD6: call    sub_7604D0
0x866CDB: mov     esi, ds:0B47640h
0x866CE1: test    esi, esi
0x866CE3: mov     [esp+30h+var_14], esi
0x866CE7: mov     ebx, 1
0x866CEC: jz      short loc_866CF8
0x866CEE: add     [esi+60h], ebx
0x866CF1: jmp     short loc_866CF8
0x866CF3: mov     ebx, 1
0x866CF8: cmp     dword ptr [esi+18h], 7
0x866CFC: jnb     loc_866F78
0x866D02: lea     edx, [esp+30h+var_10]
0x866D06: push    edx
0x866D07: call    sub_772630
0x866D0C: add     esp, 4
0x866D0F: push    eax
0x866D10: lea     ecx, [esp+34h+a3]
0x866D14: mov     byte ptr [esp+34h+var_4], 3Ah ; ':'
0x866D19: call    sub_75FAE0
0x866D1E: mov     eax, [esp+30h+var_10]
0x866D22: test    eax, eax
0x866D24: mov     byte ptr [esp+30h+var_4], 1
0x866D29: jz      short loc_866D3E
0x866D2B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866D2F: mov     ecx, eax
0x866D31: add     eax, 5Ch ; '\'
0x866D34: cmp     dword ptr [eax], 0
0x866D37: jnz     short loc_866D3E
0x866D39: call    sub_772560
0x866D3E: mov     edi, [esp+30h+a3]
0x866D42: push    2
0x866D44: push    ebx
0x866D45: push    0
0x866D47: push    edi
0x866D48: call    sub_801110
0x866D4D: add     esp, 10h
0x866D50: push    edi; a3
0x866D51: push    0; a2
0x866D53: mov     ecx, esi; this
0x866D55: call    sub_760010
0x866D5A: lea     eax, [esp+30h+var_10]
0x866D5E: push    eax
0x866D5F: call    sub_772630
0x866D64: add     esp, 4
0x866D67: push    eax
0x866D68: lea     ecx, [esp+34h+a3]
0x866D6C: mov     byte ptr [esp+34h+var_4], 3Bh ; ';'
0x866D71: call    sub_75FAE0
0x866D76: mov     eax, [esp+30h+var_10]
0x866D7A: test    eax, eax
0x866D7C: mov     byte ptr [esp+30h+var_4], 1
0x866D81: jz      short loc_866D96
0x866D83: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866D87: mov     ecx, eax
0x866D89: add     eax, 5Ch ; '\'
0x866D8C: cmp     dword ptr [eax], 0
0x866D8F: jnz     short loc_866D96
0x866D91: call    sub_772560
0x866D96: mov     edi, [esp+30h+a3]
0x866D9A: push    2
0x866D9C: push    ebx
0x866D9D: push    ebx
0x866D9E: push    edi
0x866D9F: call    sub_801110
0x866DA4: add     esp, 10h
0x866DA7: push    edi; a3
0x866DA8: push    ebx; a2
0x866DA9: mov     ecx, esi; this
0x866DAB: call    sub_760010
0x866DB0: lea     ecx, [esp+30h+var_10]
0x866DB4: push    ecx
0x866DB5: call    sub_772630
0x866DBA: add     esp, 4
0x866DBD: push    eax
0x866DBE: lea     ecx, [esp+34h+a3]
0x866DC2: mov     byte ptr [esp+34h+var_4], 3Ch ; '<'
0x866DC7: call    sub_75FAE0
0x866DCC: mov     eax, [esp+30h+var_10]
0x866DD0: test    eax, eax
0x866DD2: mov     byte ptr [esp+30h+var_4], 1
0x866DD7: jz      short loc_866DEC
0x866DD9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866DDD: mov     ecx, eax
0x866DDF: add     eax, 5Ch ; '\'
0x866DE2: cmp     dword ptr [eax], 0
0x866DE5: jnz     short loc_866DEC
0x866DE7: call    sub_772560
0x866DEC: mov     edi, [esp+30h+a3]
0x866DF0: push    2
0x866DF2: push    ebx
0x866DF3: push    2
0x866DF5: push    edi
0x866DF6: call    sub_801110
0x866DFB: add     esp, 10h
0x866DFE: push    edi; a3
0x866DFF: push    2; a2
0x866E01: mov     ecx, esi; this
0x866E03: call    sub_760010
0x866E08: lea     edx, [esp+30h+var_10]
0x866E0C: push    edx
0x866E0D: call    sub_772630
0x866E12: add     esp, 4
0x866E15: push    eax
0x866E16: lea     ecx, [esp+34h+a3]
0x866E1A: mov     byte ptr [esp+34h+var_4], 3Dh ; '='
0x866E1F: call    sub_75FAE0
0x866E24: mov     eax, [esp+30h+var_10]
0x866E28: test    eax, eax
0x866E2A: mov     byte ptr [esp+30h+var_4], 1
0x866E2F: jz      short loc_866E44
0x866E31: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866E35: mov     ecx, eax
0x866E37: add     eax, 5Ch ; '\'
0x866E3A: cmp     dword ptr [eax], 0
0x866E3D: jnz     short loc_866E44
0x866E3F: call    sub_772560
0x866E44: mov     edi, [esp+30h+a3]
0x866E48: push    2
0x866E4A: push    ebx
0x866E4B: push    3
0x866E4D: push    edi
0x866E4E: call    sub_801110
0x866E53: add     esp, 10h
0x866E56: push    edi; a3
0x866E57: push    3; a2
0x866E59: mov     ecx, esi; this
0x866E5B: call    sub_760010
0x866E60: lea     eax, [esp+30h+var_10]
0x866E64: push    eax
0x866E65: call    sub_772630
0x866E6A: add     esp, 4
0x866E6D: push    eax
0x866E6E: lea     ecx, [esp+34h+a3]
0x866E72: mov     byte ptr [esp+34h+var_4], 3Eh ; '>'
0x866E77: call    sub_75FAE0
0x866E7C: mov     eax, [esp+30h+var_10]
0x866E80: test    eax, eax
0x866E82: mov     byte ptr [esp+30h+var_4], 1
0x866E87: jz      short loc_866E9C
0x866E89: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866E8D: mov     ecx, eax
0x866E8F: add     eax, 5Ch ; '\'
0x866E92: cmp     dword ptr [eax], 0
0x866E95: jnz     short loc_866E9C
0x866E97: call    sub_772560
0x866E9C: mov     edi, [esp+30h+a3]
0x866EA0: push    0
0x866EA2: push    3
0x866EA4: push    4
0x866EA6: push    edi
0x866EA7: call    sub_801110
0x866EAC: mov     ecx, ds:0B43110h
0x866EB2: add     esp, 10h
0x866EB5: push    ecx; a2
0x866EB6: mov     ecx, edi; this
0x866EB8: call    sub_76C910
0x866EBD: push    edi; a3
0x866EBE: push    4; a2
0x866EC0: mov     ecx, esi; this
0x866EC2: call    sub_760010
0x866EC7: lea     edx, [esp+30h+var_10]
0x866ECB: push    edx
0x866ECC: call    sub_772630
0x866ED1: add     esp, 4
0x866ED4: push    eax
0x866ED5: lea     ecx, [esp+34h+a3]
0x866ED9: mov     byte ptr [esp+34h+var_4], 3Fh ; '?'
0x866EDE: call    sub_75FAE0
0x866EE3: mov     eax, [esp+30h+var_10]
0x866EE7: test    eax, eax
0x866EE9: mov     byte ptr [esp+30h+var_4], 1
0x866EEE: jz      short loc_866F03
0x866EF0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866EF4: mov     ecx, eax
0x866EF6: add     eax, 5Ch ; '\'
0x866EF9: cmp     dword ptr [eax], 0
0x866EFC: jnz     short loc_866F03
0x866EFE: call    sub_772560
0x866F03: mov     edi, [esp+30h+a3]
0x866F07: push    2
0x866F09: push    ebx
0x866F0A: push    5
0x866F0C: push    edi
0x866F0D: call    sub_801110
0x866F12: add     esp, 10h
0x866F15: push    edi; a3
0x866F16: push    5; a2
0x866F18: mov     ecx, esi; this
0x866F1A: call    sub_760010
0x866F1F: lea     eax, [esp+30h+var_10]
0x866F23: push    eax
0x866F24: call    sub_772630
0x866F29: add     esp, 4
0x866F2C: push    eax
0x866F2D: lea     ecx, [esp+34h+a3]
0x866F31: mov     byte ptr [esp+34h+var_4], 40h ; '@'
0x866F36: call    sub_75FAE0
0x866F3B: mov     eax, [esp+30h+var_10]
0x866F3F: test    eax, eax
0x866F41: mov     byte ptr [esp+30h+var_4], 1
0x866F46: jz      short loc_866F5B
0x866F48: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x866F4C: mov     ecx, eax
0x866F4E: add     eax, 5Ch ; '\'
0x866F51: cmp     dword ptr [eax], 0
0x866F54: jnz     short loc_866F5B
0x866F56: call    sub_772560
0x866F5B: mov     edi, [esp+30h+a3]
0x866F5F: push    0
0x866F61: push    3
0x866F63: push    6
0x866F65: push    edi
0x866F66: call    sub_801110
0x866F6B: add     esp, 10h
0x866F6E: push    edi; a3
0x866F6F: push    6; a2
0x866F71: mov     ecx, esi; this
0x866F73: call    sub_760010
0x866F78: mov     ebp, [esp+30h+var_18]
0x866F7C: mov     eax, [ebp+0ECh]
0x866F82: push    eax; a2
0x866F83: mov     ecx, esi; this
0x866F85: call    sub_7AECB0
0x866F8A: mov     eax, [ebp+16Ch]
0x866F90: push    eax; a2
0x866F91: mov     ecx, esi; this
0x866F93: call    sub_7AEC60
0x866F98: cmp     dword ptr [esi+30h], 0
0x866F9C: jnz     short loc_866FA6
0x866F9E: call    sub_772DF0
0x866FA3: mov     [esi+30h], eax
0x866FA6: mov     ecx, [esi+30h]
0x866FA9: push    0
0x866FAB: push    0
0x866FAD: push    1Bh
0x866FAF: call    sub_772CD0
0x866FB4: cmp     dword ptr [esi+30h], 0
0x866FB8: jnz     short loc_866FC2
0x866FBA: call    sub_772DF0
0x866FBF: mov     [esi+30h], eax
0x866FC2: mov     ecx, [esi+30h]
0x866FC5: push    0
0x866FC7: push    0
0x866FC9: push    0Fh
0x866FCB: call    sub_772CD0
0x866FD0: cmp     dword ptr [esi+30h], 0
0x866FD4: jnz     short loc_866FDE
0x866FD6: call    sub_772DF0
0x866FDB: mov     [esi+30h], eax
0x866FDE: mov     ecx, [esi+30h]
0x866FE1: push    0
0x866FE3: push    ebx
0x866FE4: push    7
0x866FE6: call    sub_772CD0
0x866FEB: cmp     dword ptr [esi+30h], 0
0x866FEF: jnz     short loc_866FF9
0x866FF1: call    sub_772DF0
0x866FF6: mov     [esi+30h], eax
0x866FF9: mov     ecx, [esi+30h]
0x866FFC: push    0
0x866FFE: push    4
0x867000: push    17h
0x867002: call    sub_772CD0
0x867007: cmp     dword ptr [esi+30h], 0
0x86700B: jnz     short loc_867015
0x86700D: call    sub_772DF0
0x867012: mov     [esi+30h], eax
0x867015: mov     ecx, [esi+30h]
0x867018: push    0
0x86701A: push    ebx
0x86701B: push    0Eh
0x86701D: call    sub_772CD0
0x867022: cmp     dword ptr [esi+30h], 0
0x867026: jnz     short loc_867030
0x867028: call    sub_772DF0
0x86702D: mov     [esi+30h], eax
0x867030: mov     ecx, [esi+30h]
0x867033: push    0
0x867035: push    0
0x867037: push    34h ; '4'
0x867039: call    sub_772CD0
0x86703E: cmp     esi, ds:0B47644h
0x867044: mov     ebp, 3B082h
0x867049: mov     ds:0B43CA8h, ebp
0x86704F: mov     dword ptr ds:0B44338h, 13Ch
0x867059: jz      short loc_867079
0x86705B: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86705F: jnz     short loc_867068
0x867061: mov     ecx, esi
0x867063: call    sub_7604D0
0x867068: mov     esi, ds:0B47644h
0x86706E: test    esi, esi
0x867070: mov     [esp+30h+var_14], esi
0x867074: jz      short loc_867079
0x867076: add     [esi+60h], ebx
0x867079: cmp     dword ptr [esi+18h], 7
0x86707D: jnb     loc_8672F8
0x867083: lea     ecx, [esp+30h+var_10]
0x867087: push    ecx
0x867088: call    sub_772630
0x86708D: add     esp, 4
0x867090: push    eax
0x867091: lea     ecx, [esp+34h+a3]
0x867095: mov     byte ptr [esp+34h+var_4], 41h ; 'A'
0x86709A: call    sub_75FAE0
0x86709F: mov     eax, [esp+30h+var_10]
0x8670A3: test    eax, eax
0x8670A5: mov     byte ptr [esp+30h+var_4], 1
0x8670AA: jz      short loc_8670BF
0x8670AC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8670B0: mov     ecx, eax
0x8670B2: add     eax, 5Ch ; '\'
0x8670B5: cmp     dword ptr [eax], 0
0x8670B8: jnz     short loc_8670BF
0x8670BA: call    sub_772560
0x8670BF: mov     edi, [esp+30h+a3]
0x8670C3: push    2
0x8670C5: push    ebx
0x8670C6: push    0
0x8670C8: push    edi
0x8670C9: call    sub_801110
0x8670CE: add     esp, 10h
0x8670D1: push    edi; a3
0x8670D2: push    0; a2
0x8670D4: mov     ecx, esi; this
0x8670D6: call    sub_760010
0x8670DB: lea     edx, [esp+30h+var_10]
0x8670DF: push    edx
0x8670E0: call    sub_772630
0x8670E5: add     esp, 4
0x8670E8: push    eax
0x8670E9: lea     ecx, [esp+34h+a3]
0x8670ED: mov     byte ptr [esp+34h+var_4], 42h ; 'B'
0x8670F2: call    sub_75FAE0
0x8670F7: mov     eax, [esp+30h+var_10]
0x8670FB: test    eax, eax
0x8670FD: mov     byte ptr [esp+30h+var_4], 1
0x867102: jz      short loc_867117
0x867104: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867108: mov     ecx, eax
0x86710A: add     eax, 5Ch ; '\'
0x86710D: cmp     dword ptr [eax], 0
0x867110: jnz     short loc_867117
0x867112: call    sub_772560
0x867117: mov     edi, [esp+30h+a3]
0x86711B: push    2
0x86711D: push    ebx
0x86711E: push    ebx
0x86711F: push    edi
0x867120: call    sub_801110
0x867125: add     esp, 10h
0x867128: push    edi; a3
0x867129: push    ebx; a2
0x86712A: mov     ecx, esi; this
0x86712C: call    sub_760010
0x867131: lea     eax, [esp+30h+var_10]
0x867135: push    eax
0x867136: call    sub_772630
0x86713B: add     esp, 4
0x86713E: push    eax
0x86713F: lea     ecx, [esp+34h+a3]
0x867143: mov     byte ptr [esp+34h+var_4], 43h ; 'C'
0x867148: call    sub_75FAE0
0x86714D: mov     eax, [esp+30h+var_10]
0x867151: test    eax, eax
0x867153: mov     byte ptr [esp+30h+var_4], 1
0x867158: jz      short loc_86716D
0x86715A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86715E: mov     ecx, eax
0x867160: add     eax, 5Ch ; '\'
0x867163: cmp     dword ptr [eax], 0
0x867166: jnz     short loc_86716D
0x867168: call    sub_772560
0x86716D: mov     edi, [esp+30h+a3]
0x867171: push    2
0x867173: push    ebx
0x867174: push    2
0x867176: push    edi
0x867177: call    sub_801110
0x86717C: add     esp, 10h
0x86717F: push    edi; a3
0x867180: push    2; a2
0x867182: mov     ecx, esi; this
0x867184: call    sub_760010
0x867189: lea     ecx, [esp+30h+var_10]
0x86718D: push    ecx
0x86718E: call    sub_772630
0x867193: add     esp, 4
0x867196: push    eax
0x867197: lea     ecx, [esp+34h+a3]
0x86719B: mov     byte ptr [esp+34h+var_4], 44h ; 'D'
0x8671A0: call    sub_75FAE0
0x8671A5: mov     eax, [esp+30h+var_10]
0x8671A9: test    eax, eax
0x8671AB: mov     byte ptr [esp+30h+var_4], 1
0x8671B0: jz      short loc_8671C5
0x8671B2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8671B6: mov     ecx, eax
0x8671B8: add     eax, 5Ch ; '\'
0x8671BB: cmp     dword ptr [eax], 0
0x8671BE: jnz     short loc_8671C5
0x8671C0: call    sub_772560
0x8671C5: mov     edi, [esp+30h+a3]
0x8671C9: push    2
0x8671CB: push    ebx
0x8671CC: push    3
0x8671CE: push    edi
0x8671CF: call    sub_801110
0x8671D4: add     esp, 10h
0x8671D7: push    edi; a3
0x8671D8: push    3; a2
0x8671DA: mov     ecx, esi; this
0x8671DC: call    sub_760010
0x8671E1: lea     edx, [esp+30h+var_10]
0x8671E5: push    edx
0x8671E6: call    sub_772630
0x8671EB: add     esp, 4
0x8671EE: push    eax
0x8671EF: lea     ecx, [esp+34h+a3]
0x8671F3: mov     byte ptr [esp+34h+var_4], 45h ; 'E'
0x8671F8: call    sub_75FAE0
0x8671FD: mov     eax, [esp+30h+var_10]
0x867201: test    eax, eax
0x867203: mov     byte ptr [esp+30h+var_4], 1
0x867208: jz      short loc_86721D
0x86720A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86720E: mov     ecx, eax
0x867210: add     eax, 5Ch ; '\'
0x867213: cmp     dword ptr [eax], 0
0x867216: jnz     short loc_86721D
0x867218: call    sub_772560
0x86721D: mov     edi, [esp+30h+a3]
0x867221: push    0
0x867223: push    3
0x867225: push    4
0x867227: push    edi
0x867228: call    sub_801110
0x86722D: mov     eax, ds:0B43110h
0x867232: add     esp, 10h
0x867235: push    eax; a2
0x867236: mov     ecx, edi; this
0x867238: call    sub_76C910
0x86723D: push    edi; a3
0x86723E: push    4; a2
0x867240: mov     ecx, esi; this
0x867242: call    sub_760010
0x867247: lea     ecx, [esp+30h+var_10]
0x86724B: push    ecx
0x86724C: call    sub_772630
0x867251: add     esp, 4
0x867254: push    eax
0x867255: lea     ecx, [esp+34h+a3]
0x867259: mov     byte ptr [esp+34h+var_4], 46h ; 'F'
0x86725E: call    sub_75FAE0
0x867263: mov     eax, [esp+30h+var_10]
0x867267: test    eax, eax
0x867269: mov     byte ptr [esp+30h+var_4], 1
0x86726E: jz      short loc_867283
0x867270: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867274: mov     ecx, eax
0x867276: add     eax, 5Ch ; '\'
0x867279: cmp     dword ptr [eax], 0
0x86727C: jnz     short loc_867283
0x86727E: call    sub_772560
0x867283: mov     edi, [esp+30h+a3]
0x867287: push    2
0x867289: push    ebx
0x86728A: push    5
0x86728C: push    edi
0x86728D: call    sub_801110
0x867292: add     esp, 10h
0x867295: push    edi; a3
0x867296: push    5; a2
0x867298: mov     ecx, esi; this
0x86729A: call    sub_760010
0x86729F: lea     edx, [esp+30h+var_10]
0x8672A3: push    edx
0x8672A4: call    sub_772630
0x8672A9: add     esp, 4
0x8672AC: push    eax
0x8672AD: lea     ecx, [esp+34h+a3]
0x8672B1: mov     byte ptr [esp+34h+var_4], 47h ; 'G'
0x8672B6: call    sub_75FAE0
0x8672BB: mov     eax, [esp+30h+var_10]
0x8672BF: test    eax, eax
0x8672C1: mov     byte ptr [esp+30h+var_4], 1
0x8672C6: jz      short loc_8672DB
0x8672C8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8672CC: mov     ecx, eax
0x8672CE: add     eax, 5Ch ; '\'
0x8672D1: cmp     dword ptr [eax], 0
0x8672D4: jnz     short loc_8672DB
0x8672D6: call    sub_772560
0x8672DB: mov     edi, [esp+30h+a3]
0x8672DF: push    0
0x8672E1: push    3
0x8672E3: push    6
0x8672E5: push    edi
0x8672E6: call    sub_801110
0x8672EB: add     esp, 10h
0x8672EE: push    edi; a3
0x8672EF: push    6; a2
0x8672F1: mov     ecx, esi; this
0x8672F3: call    sub_760010
0x8672F8: mov     eax, [esp+30h+var_18]
0x8672FC: mov     eax, [eax+0ECh]
0x867302: push    eax; a2
0x867303: mov     ecx, esi; this
0x867305: call    sub_7AECB0
0x86730A: mov     ecx, [esp+30h+var_18]
0x86730E: mov     eax, [ecx+170h]
0x867314: push    eax; a2
0x867315: mov     ecx, esi; this
0x867317: call    sub_7AEC60
0x86731C: cmp     dword ptr [esi+30h], 0
0x867320: jnz     short loc_86732A
0x867322: call    sub_772DF0
0x867327: mov     [esi+30h], eax
0x86732A: mov     ecx, [esi+30h]
0x86732D: push    0
0x86732F: push    0
0x867331: push    1Bh
0x867333: call    sub_772CD0
0x867338: cmp     dword ptr [esi+30h], 0
0x86733C: jnz     short loc_867346
0x86733E: call    sub_772DF0
0x867343: mov     [esi+30h], eax
0x867346: mov     ecx, [esi+30h]
0x867349: push    0
0x86734B: push    0
0x86734D: push    0Fh
0x86734F: call    sub_772CD0
0x867354: cmp     dword ptr [esi+30h], 0
0x867358: jnz     short loc_867362
0x86735A: call    sub_772DF0
0x86735F: mov     [esi+30h], eax
0x867362: mov     ecx, [esi+30h]
0x867365: push    0
0x867367: push    ebx
0x867368: push    7
0x86736A: call    sub_772CD0
0x86736F: cmp     dword ptr [esi+30h], 0
0x867373: jnz     short loc_86737D
0x867375: call    sub_772DF0
0x86737A: mov     [esi+30h], eax
0x86737D: mov     ecx, [esi+30h]
0x867380: push    0
0x867382: push    4
0x867384: push    17h
0x867386: call    sub_772CD0
0x86738B: cmp     dword ptr [esi+30h], 0
0x86738F: jnz     short loc_867399
0x867391: call    sub_772DF0
0x867396: mov     [esi+30h], eax
0x867399: mov     ecx, [esi+30h]
0x86739C: push    0
0x86739E: push    ebx
0x86739F: push    0Eh
0x8673A1: call    sub_772CD0
0x8673A6: cmp     dword ptr [esi+30h], 0
0x8673AA: jnz     short loc_8673B4
0x8673AC: call    sub_772DF0
0x8673B1: mov     [esi+30h], eax
0x8673B4: mov     ecx, [esi+30h]
0x8673B7: push    0
0x8673B9: push    0
0x8673BB: push    34h ; '4'
0x8673BD: call    sub_772CD0
0x8673C2: cmp     esi, ds:0B47648h
0x8673C8: mov     ds:0B43CACh, ebp
0x8673CE: mov     dword ptr ds:0B4433Ch, 1BCh
0x8673D8: jz      short loc_8673F8
0x8673DA: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8673DE: jnz     short loc_8673E7
0x8673E0: mov     ecx, esi
0x8673E2: call    sub_7604D0
0x8673E7: mov     esi, ds:0B47648h
0x8673ED: test    esi, esi
0x8673EF: mov     [esp+30h+var_14], esi
0x8673F3: jz      short loc_8673F8
0x8673F5: add     [esi+60h], ebx
0x8673F8: cmp     dword ptr [esi+18h], 7
0x8673FC: jnb     loc_867678
0x867402: lea     edx, [esp+30h+var_10]
0x867406: push    edx
0x867407: call    sub_772630
0x86740C: add     esp, 4
0x86740F: push    eax
0x867410: lea     ecx, [esp+34h+a3]
0x867414: mov     byte ptr [esp+34h+var_4], 48h ; 'H'
0x867419: call    sub_75FAE0
0x86741E: mov     eax, [esp+30h+var_10]
0x867422: test    eax, eax
0x867424: mov     byte ptr [esp+30h+var_4], 1
0x867429: jz      short loc_86743E
0x86742B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86742F: mov     ecx, eax
0x867431: add     eax, 5Ch ; '\'
0x867434: cmp     dword ptr [eax], 0
0x867437: jnz     short loc_86743E
0x867439: call    sub_772560
0x86743E: mov     edi, [esp+30h+a3]
0x867442: push    2
0x867444: push    ebx
0x867445: push    0
0x867447: push    edi
0x867448: call    sub_801110
0x86744D: add     esp, 10h
0x867450: push    edi; a3
0x867451: push    0; a2
0x867453: mov     ecx, esi; this
0x867455: call    sub_760010
0x86745A: lea     eax, [esp+30h+var_10]
0x86745E: push    eax
0x86745F: call    sub_772630
0x867464: add     esp, 4
0x867467: push    eax
0x867468: lea     ecx, [esp+34h+a3]
0x86746C: mov     byte ptr [esp+34h+var_4], 49h ; 'I'
0x867471: call    sub_75FAE0
0x867476: mov     eax, [esp+30h+var_10]
0x86747A: test    eax, eax
0x86747C: mov     byte ptr [esp+30h+var_4], 1
0x867481: jz      short loc_867496
0x867483: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867487: mov     ecx, eax
0x867489: add     eax, 5Ch ; '\'
0x86748C: cmp     dword ptr [eax], 0
0x86748F: jnz     short loc_867496
0x867491: call    sub_772560
0x867496: mov     edi, [esp+30h+a3]
0x86749A: push    2
0x86749C: push    ebx
0x86749D: push    ebx
0x86749E: push    edi
0x86749F: call    sub_801110
0x8674A4: add     esp, 10h
0x8674A7: push    edi; a3
0x8674A8: push    ebx; a2
0x8674A9: mov     ecx, esi; this
0x8674AB: call    sub_760010
0x8674B0: lea     ecx, [esp+30h+var_10]
0x8674B4: push    ecx
0x8674B5: call    sub_772630
0x8674BA: add     esp, 4
0x8674BD: push    eax
0x8674BE: lea     ecx, [esp+34h+a3]
0x8674C2: mov     byte ptr [esp+34h+var_4], 4Ah ; 'J'
0x8674C7: call    sub_75FAE0
0x8674CC: mov     eax, [esp+30h+var_10]
0x8674D0: test    eax, eax
0x8674D2: mov     byte ptr [esp+30h+var_4], 1
0x8674D7: jz      short loc_8674EC
0x8674D9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8674DD: mov     ecx, eax
0x8674DF: add     eax, 5Ch ; '\'
0x8674E2: cmp     dword ptr [eax], 0
0x8674E5: jnz     short loc_8674EC
0x8674E7: call    sub_772560
0x8674EC: mov     edi, [esp+30h+a3]
0x8674F0: push    2
0x8674F2: push    ebx
0x8674F3: push    2
0x8674F5: push    edi
0x8674F6: call    sub_801110
0x8674FB: add     esp, 10h
0x8674FE: push    edi; a3
0x8674FF: push    2; a2
0x867501: mov     ecx, esi; this
0x867503: call    sub_760010
0x867508: lea     edx, [esp+30h+var_10]
0x86750C: push    edx
0x86750D: call    sub_772630
0x867512: add     esp, 4
0x867515: push    eax
0x867516: lea     ecx, [esp+34h+a3]
0x86751A: mov     byte ptr [esp+34h+var_4], 4Bh ; 'K'
0x86751F: call    sub_75FAE0
0x867524: mov     eax, [esp+30h+var_10]
0x867528: test    eax, eax
0x86752A: mov     byte ptr [esp+30h+var_4], 1
0x86752F: jz      short loc_867544
0x867531: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867535: mov     ecx, eax
0x867537: add     eax, 5Ch ; '\'
0x86753A: cmp     dword ptr [eax], 0
0x86753D: jnz     short loc_867544
0x86753F: call    sub_772560
0x867544: mov     edi, [esp+30h+a3]
0x867548: push    2
0x86754A: push    ebx
0x86754B: push    3
0x86754D: push    edi
0x86754E: call    sub_801110
0x867553: add     esp, 10h
0x867556: push    edi; a3
0x867557: push    3; a2
0x867559: mov     ecx, esi; this
0x86755B: call    sub_760010
0x867560: lea     eax, [esp+30h+var_10]
0x867564: push    eax
0x867565: call    sub_772630
0x86756A: add     esp, 4
0x86756D: push    eax
0x86756E: lea     ecx, [esp+34h+a3]
0x867572: mov     byte ptr [esp+34h+var_4], 4Ch ; 'L'
0x867577: call    sub_75FAE0
0x86757C: mov     eax, [esp+30h+var_10]
0x867580: test    eax, eax
0x867582: mov     byte ptr [esp+30h+var_4], 1
0x867587: jz      short loc_86759C
0x867589: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86758D: mov     ecx, eax
0x86758F: add     eax, 5Ch ; '\'
0x867592: cmp     dword ptr [eax], 0
0x867595: jnz     short loc_86759C
0x867597: call    sub_772560
0x86759C: mov     edi, [esp+30h+a3]
0x8675A0: push    0
0x8675A2: push    3
0x8675A4: push    4
0x8675A6: push    edi
0x8675A7: call    sub_801110
0x8675AC: mov     ecx, ds:0B43110h
0x8675B2: add     esp, 10h
0x8675B5: push    ecx; a2
0x8675B6: mov     ecx, edi; this
0x8675B8: call    sub_76C910
0x8675BD: push    edi; a3
0x8675BE: push    4; a2
0x8675C0: mov     ecx, esi; this
0x8675C2: call    sub_760010
0x8675C7: lea     edx, [esp+30h+var_10]
0x8675CB: push    edx
0x8675CC: call    sub_772630
0x8675D1: add     esp, 4
0x8675D4: push    eax
0x8675D5: lea     ecx, [esp+34h+a3]
0x8675D9: mov     byte ptr [esp+34h+var_4], 4Dh ; 'M'
0x8675DE: call    sub_75FAE0
0x8675E3: mov     eax, [esp+30h+var_10]
0x8675E7: test    eax, eax
0x8675E9: mov     byte ptr [esp+30h+var_4], 1
0x8675EE: jz      short loc_867603
0x8675F0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8675F4: mov     ecx, eax
0x8675F6: add     eax, 5Ch ; '\'
0x8675F9: cmp     dword ptr [eax], 0
0x8675FC: jnz     short loc_867603
0x8675FE: call    sub_772560
0x867603: mov     edi, [esp+30h+a3]
0x867607: push    2
0x867609: push    ebx
0x86760A: push    5
0x86760C: push    edi
0x86760D: call    sub_801110
0x867612: add     esp, 10h
0x867615: push    edi; a3
0x867616: push    5; a2
0x867618: mov     ecx, esi; this
0x86761A: call    sub_760010
0x86761F: lea     eax, [esp+30h+var_10]
0x867623: push    eax
0x867624: call    sub_772630
0x867629: add     esp, 4
0x86762C: push    eax
0x86762D: lea     ecx, [esp+34h+a3]
0x867631: mov     byte ptr [esp+34h+var_4], 4Eh ; 'N'
0x867636: call    sub_75FAE0
0x86763B: mov     eax, [esp+30h+var_10]
0x86763F: test    eax, eax
0x867641: mov     byte ptr [esp+30h+var_4], 1
0x867646: jz      short loc_86765B
0x867648: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86764C: mov     ecx, eax
0x86764E: add     eax, 5Ch ; '\'
0x867651: cmp     dword ptr [eax], 0
0x867654: jnz     short loc_86765B
0x867656: call    sub_772560
0x86765B: mov     edi, [esp+30h+a3]
0x86765F: push    0
0x867661: push    3
0x867663: push    6
0x867665: push    edi
0x867666: call    sub_801110
0x86766B: add     esp, 10h
0x86766E: push    edi; a3
0x86766F: push    6; a2
0x867671: mov     ecx, esi; this
0x867673: call    sub_760010
0x867678: mov     ebp, [esp+30h+var_18]
0x86767C: mov     eax, [ebp+0F0h]
0x867682: push    eax; a2
0x867683: mov     ecx, esi; this
0x867685: call    sub_7AECB0
0x86768A: mov     eax, [ebp+16Ch]
0x867690: push    eax; a2
0x867691: mov     ecx, esi; this
0x867693: call    sub_7AEC60
0x867698: cmp     dword ptr [esi+30h], 0
0x86769C: jnz     short loc_8676A6
0x86769E: call    sub_772DF0
0x8676A3: mov     [esi+30h], eax
0x8676A6: mov     ecx, [esi+30h]
0x8676A9: push    0
0x8676AB: push    0
0x8676AD: push    1Bh
0x8676AF: call    sub_772CD0
0x8676B4: cmp     dword ptr [esi+30h], 0
0x8676B8: jnz     short loc_8676C2
0x8676BA: call    sub_772DF0
0x8676BF: mov     [esi+30h], eax
0x8676C2: mov     ecx, [esi+30h]
0x8676C5: push    0
0x8676C7: push    0
0x8676C9: push    0Fh
0x8676CB: call    sub_772CD0
0x8676D0: cmp     dword ptr [esi+30h], 0
0x8676D4: jnz     short loc_8676DE
0x8676D6: call    sub_772DF0
0x8676DB: mov     [esi+30h], eax
0x8676DE: mov     ecx, [esi+30h]
0x8676E1: push    0
0x8676E3: push    ebx
0x8676E4: push    7
0x8676E6: call    sub_772CD0
0x8676EB: cmp     dword ptr [esi+30h], 0
0x8676EF: jnz     short loc_8676F9
0x8676F1: call    sub_772DF0
0x8676F6: mov     [esi+30h], eax
0x8676F9: mov     ecx, [esi+30h]
0x8676FC: push    0
0x8676FE: push    4
0x867700: push    17h
0x867702: call    sub_772CD0
0x867707: cmp     dword ptr [esi+30h], 0
0x86770B: jnz     short loc_867715
0x86770D: call    sub_772DF0
0x867712: mov     [esi+30h], eax
0x867715: mov     ecx, [esi+30h]
0x867718: push    0
0x86771A: push    ebx
0x86771B: push    0Eh
0x86771D: call    sub_772CD0
0x867722: cmp     dword ptr [esi+30h], 0
0x867726: jnz     short loc_867730
0x867728: call    sub_772DF0
0x86772D: mov     [esi+30h], eax
0x867730: mov     ecx, [esi+30h]
0x867733: push    0
0x867735: push    0
0x867737: push    34h ; '4'
0x867739: call    sub_772CD0
0x86773E: cmp     esi, ds:0B4764Ch
0x867744: mov     ebp, 7B088h
0x867749: mov     ds:0B43CB8h, ebp
0x86774F: mov     dword ptr ds:0B44348h, 13Ch
0x867759: jz      short loc_867779
0x86775B: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86775F: jnz     short loc_867768
0x867761: mov     ecx, esi
0x867763: call    sub_7604D0
0x867768: mov     esi, ds:0B4764Ch
0x86776E: test    esi, esi
0x867770: mov     [esp+30h+var_14], esi
0x867774: jz      short loc_867779
0x867776: add     [esi+60h], ebx
0x867779: cmp     dword ptr [esi+18h], 7
0x86777D: jnb     loc_8679F8
0x867783: lea     ecx, [esp+30h+var_10]
0x867787: push    ecx
0x867788: call    sub_772630
0x86778D: add     esp, 4
0x867790: push    eax
0x867791: lea     ecx, [esp+34h+a3]
0x867795: mov     byte ptr [esp+34h+var_4], 4Fh ; 'O'
0x86779A: call    sub_75FAE0
0x86779F: mov     eax, [esp+30h+var_10]
0x8677A3: test    eax, eax
0x8677A5: mov     byte ptr [esp+30h+var_4], 1
0x8677AA: jz      short loc_8677BF
0x8677AC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8677B0: mov     ecx, eax
0x8677B2: add     eax, 5Ch ; '\'
0x8677B5: cmp     dword ptr [eax], 0
0x8677B8: jnz     short loc_8677BF
0x8677BA: call    sub_772560
0x8677BF: mov     edi, [esp+30h+a3]
0x8677C3: push    2
0x8677C5: push    ebx
0x8677C6: push    0
0x8677C8: push    edi
0x8677C9: call    sub_801110
0x8677CE: add     esp, 10h
0x8677D1: push    edi; a3
0x8677D2: push    0; a2
0x8677D4: mov     ecx, esi; this
0x8677D6: call    sub_760010
0x8677DB: lea     edx, [esp+30h+var_10]
0x8677DF: push    edx
0x8677E0: call    sub_772630
0x8677E5: add     esp, 4
0x8677E8: push    eax
0x8677E9: lea     ecx, [esp+34h+a3]
0x8677ED: mov     byte ptr [esp+34h+var_4], 50h ; 'P'
0x8677F2: call    sub_75FAE0
0x8677F7: mov     eax, [esp+30h+var_10]
0x8677FB: test    eax, eax
0x8677FD: mov     byte ptr [esp+30h+var_4], 1
0x867802: jz      short loc_867817
0x867804: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867808: mov     ecx, eax
0x86780A: add     eax, 5Ch ; '\'
0x86780D: cmp     dword ptr [eax], 0
0x867810: jnz     short loc_867817
0x867812: call    sub_772560
0x867817: mov     edi, [esp+30h+a3]
0x86781B: push    2
0x86781D: push    ebx
0x86781E: push    ebx
0x86781F: push    edi
0x867820: call    sub_801110
0x867825: add     esp, 10h
0x867828: push    edi; a3
0x867829: push    ebx; a2
0x86782A: mov     ecx, esi; this
0x86782C: call    sub_760010
0x867831: lea     eax, [esp+30h+var_10]
0x867835: push    eax
0x867836: call    sub_772630
0x86783B: add     esp, 4
0x86783E: push    eax
0x86783F: lea     ecx, [esp+34h+a3]
0x867843: mov     byte ptr [esp+34h+var_4], 51h ; 'Q'
0x867848: call    sub_75FAE0
0x86784D: mov     eax, [esp+30h+var_10]
0x867851: test    eax, eax
0x867853: mov     byte ptr [esp+30h+var_4], 1
0x867858: jz      short loc_86786D
0x86785A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86785E: mov     ecx, eax
0x867860: add     eax, 5Ch ; '\'
0x867863: cmp     dword ptr [eax], 0
0x867866: jnz     short loc_86786D
0x867868: call    sub_772560
0x86786D: mov     edi, [esp+30h+a3]
0x867871: push    2
0x867873: push    ebx
0x867874: push    2
0x867876: push    edi
0x867877: call    sub_801110
0x86787C: add     esp, 10h
0x86787F: push    edi; a3
0x867880: push    2; a2
0x867882: mov     ecx, esi; this
0x867884: call    sub_760010
0x867889: lea     ecx, [esp+30h+var_10]
0x86788D: push    ecx
0x86788E: call    sub_772630
0x867893: add     esp, 4
0x867896: push    eax
0x867897: lea     ecx, [esp+34h+a3]
0x86789B: mov     byte ptr [esp+34h+var_4], 52h ; 'R'
0x8678A0: call    sub_75FAE0
0x8678A5: mov     eax, [esp+30h+var_10]
0x8678A9: test    eax, eax
0x8678AB: mov     byte ptr [esp+30h+var_4], 1
0x8678B0: jz      short loc_8678C5
0x8678B2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8678B6: mov     ecx, eax
0x8678B8: add     eax, 5Ch ; '\'
0x8678BB: cmp     dword ptr [eax], 0
0x8678BE: jnz     short loc_8678C5
0x8678C0: call    sub_772560
0x8678C5: mov     edi, [esp+30h+a3]
0x8678C9: push    2
0x8678CB: push    ebx
0x8678CC: push    3
0x8678CE: push    edi
0x8678CF: call    sub_801110
0x8678D4: add     esp, 10h
0x8678D7: push    edi; a3
0x8678D8: push    3; a2
0x8678DA: mov     ecx, esi; this
0x8678DC: call    sub_760010
0x8678E1: lea     edx, [esp+30h+var_10]
0x8678E5: push    edx
0x8678E6: call    sub_772630
0x8678EB: add     esp, 4
0x8678EE: push    eax
0x8678EF: lea     ecx, [esp+34h+a3]
0x8678F3: mov     byte ptr [esp+34h+var_4], 53h ; 'S'
0x8678F8: call    sub_75FAE0
0x8678FD: mov     eax, [esp+30h+var_10]
0x867901: test    eax, eax
0x867903: mov     byte ptr [esp+30h+var_4], 1
0x867908: jz      short loc_86791D
0x86790A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86790E: mov     ecx, eax
0x867910: add     eax, 5Ch ; '\'
0x867913: cmp     dword ptr [eax], 0
0x867916: jnz     short loc_86791D
0x867918: call    sub_772560
0x86791D: mov     edi, [esp+30h+a3]
0x867921: push    0
0x867923: push    3
0x867925: push    4
0x867927: push    edi
0x867928: call    sub_801110
0x86792D: mov     eax, ds:0B43110h
0x867932: add     esp, 10h
0x867935: push    eax; a2
0x867936: mov     ecx, edi; this
0x867938: call    sub_76C910
0x86793D: push    edi; a3
0x86793E: push    4; a2
0x867940: mov     ecx, esi; this
0x867942: call    sub_760010
0x867947: lea     ecx, [esp+30h+var_10]
0x86794B: push    ecx
0x86794C: call    sub_772630
0x867951: add     esp, 4
0x867954: push    eax
0x867955: lea     ecx, [esp+34h+a3]
0x867959: mov     byte ptr [esp+34h+var_4], 54h ; 'T'
0x86795E: call    sub_75FAE0
0x867963: mov     eax, [esp+30h+var_10]
0x867967: test    eax, eax
0x867969: mov     byte ptr [esp+30h+var_4], 1
0x86796E: jz      short loc_867983
0x867970: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867974: mov     ecx, eax
0x867976: add     eax, 5Ch ; '\'
0x867979: cmp     dword ptr [eax], 0
0x86797C: jnz     short loc_867983
0x86797E: call    sub_772560
0x867983: mov     edi, [esp+30h+a3]
0x867987: push    2
0x867989: push    ebx
0x86798A: push    5
0x86798C: push    edi
0x86798D: call    sub_801110
0x867992: add     esp, 10h
0x867995: push    edi; a3
0x867996: push    5; a2
0x867998: mov     ecx, esi; this
0x86799A: call    sub_760010
0x86799F: lea     edx, [esp+30h+var_10]
0x8679A3: push    edx
0x8679A4: call    sub_772630
0x8679A9: add     esp, 4
0x8679AC: push    eax
0x8679AD: lea     ecx, [esp+34h+a3]
0x8679B1: mov     byte ptr [esp+34h+var_4], 55h ; 'U'
0x8679B6: call    sub_75FAE0
0x8679BB: mov     eax, [esp+30h+var_10]
0x8679BF: test    eax, eax
0x8679C1: mov     byte ptr [esp+30h+var_4], 1
0x8679C6: jz      short loc_8679DB
0x8679C8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8679CC: mov     ecx, eax
0x8679CE: add     eax, 5Ch ; '\'
0x8679D1: cmp     dword ptr [eax], 0
0x8679D4: jnz     short loc_8679DB
0x8679D6: call    sub_772560
0x8679DB: mov     edi, [esp+30h+a3]
0x8679DF: push    0
0x8679E1: push    3
0x8679E3: push    6
0x8679E5: push    edi
0x8679E6: call    sub_801110
0x8679EB: add     esp, 10h
0x8679EE: push    edi; a3
0x8679EF: push    6; a2
0x8679F1: mov     ecx, esi; this
0x8679F3: call    sub_760010
0x8679F8: mov     eax, [esp+30h+var_18]
0x8679FC: mov     eax, [eax+0F0h]
0x867A02: push    eax; a2
0x867A03: mov     ecx, esi; this
0x867A05: call    sub_7AECB0
0x867A0A: mov     ecx, [esp+30h+var_18]
0x867A0E: mov     eax, [ecx+170h]
0x867A14: push    eax; a2
0x867A15: mov     ecx, esi; this
0x867A17: call    sub_7AEC60
0x867A1C: cmp     dword ptr [esi+30h], 0
0x867A20: jnz     short loc_867A2A
0x867A22: call    sub_772DF0
0x867A27: mov     [esi+30h], eax
0x867A2A: mov     ecx, [esi+30h]
0x867A2D: push    0
0x867A2F: push    0
0x867A31: push    1Bh
0x867A33: call    sub_772CD0
0x867A38: cmp     dword ptr [esi+30h], 0
0x867A3C: jnz     short loc_867A46
0x867A3E: call    sub_772DF0
0x867A43: mov     [esi+30h], eax
0x867A46: mov     ecx, [esi+30h]
0x867A49: push    0
0x867A4B: push    0
0x867A4D: push    0Fh
0x867A4F: call    sub_772CD0
0x867A54: cmp     dword ptr [esi+30h], 0
0x867A58: jnz     short loc_867A62
0x867A5A: call    sub_772DF0
0x867A5F: mov     [esi+30h], eax
0x867A62: mov     ecx, [esi+30h]
0x867A65: push    0
0x867A67: push    ebx
0x867A68: push    7
0x867A6A: call    sub_772CD0
0x867A6F: cmp     dword ptr [esi+30h], 0
0x867A73: jnz     short loc_867A7D
0x867A75: call    sub_772DF0
0x867A7A: mov     [esi+30h], eax
0x867A7D: mov     ecx, [esi+30h]
0x867A80: push    0
0x867A82: push    4
0x867A84: push    17h
0x867A86: call    sub_772CD0
0x867A8B: cmp     dword ptr [esi+30h], 0
0x867A8F: jnz     short loc_867A99
0x867A91: call    sub_772DF0
0x867A96: mov     [esi+30h], eax
0x867A99: mov     ecx, [esi+30h]
0x867A9C: push    0
0x867A9E: push    ebx
0x867A9F: push    0Eh
0x867AA1: call    sub_772CD0
0x867AA6: cmp     dword ptr [esi+30h], 0
0x867AAA: jnz     short loc_867AB4
0x867AAC: call    sub_772DF0
0x867AB1: mov     [esi+30h], eax
0x867AB4: mov     ecx, [esi+30h]
0x867AB7: push    0
0x867AB9: push    0
0x867ABB: push    34h ; '4'
0x867ABD: call    sub_772CD0
0x867AC2: cmp     esi, ds:0B47650h
0x867AC8: mov     ds:0B43CC0h, ebp
0x867ACE: mov     dword ptr ds:0B44350h, 1BCh
0x867AD8: jz      short loc_867AF8
0x867ADA: add     dword ptr [esi+60h], 0FFFFFFFFh
0x867ADE: jnz     short loc_867AE7
0x867AE0: mov     ecx, esi
0x867AE2: call    sub_7604D0
0x867AE7: mov     esi, ds:0B47650h
0x867AED: test    esi, esi
0x867AEF: mov     [esp+30h+var_14], esi
0x867AF3: jz      short loc_867AF8
0x867AF5: add     [esi+60h], ebx
0x867AF8: cmp     dword ptr [esi+18h], 7
0x867AFC: jnb     loc_867D78
0x867B02: lea     edx, [esp+30h+var_10]
0x867B06: push    edx
0x867B07: call    sub_772630
0x867B0C: add     esp, 4
0x867B0F: push    eax
0x867B10: lea     ecx, [esp+34h+a3]
0x867B14: mov     byte ptr [esp+34h+var_4], 56h ; 'V'
0x867B19: call    sub_75FAE0
0x867B1E: mov     eax, [esp+30h+var_10]
0x867B22: test    eax, eax
0x867B24: mov     byte ptr [esp+30h+var_4], 1
0x867B29: jz      short loc_867B3E
0x867B2B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867B2F: mov     ecx, eax
0x867B31: add     eax, 5Ch ; '\'
0x867B34: cmp     dword ptr [eax], 0
0x867B37: jnz     short loc_867B3E
0x867B39: call    sub_772560
0x867B3E: mov     edi, [esp+30h+a3]
0x867B42: push    2
0x867B44: push    ebx
0x867B45: push    0
0x867B47: push    edi
0x867B48: call    sub_801110
0x867B4D: add     esp, 10h
0x867B50: push    edi; a3
0x867B51: push    0; a2
0x867B53: mov     ecx, esi; this
0x867B55: call    sub_760010
0x867B5A: lea     eax, [esp+30h+var_10]
0x867B5E: push    eax
0x867B5F: call    sub_772630
0x867B64: add     esp, 4
0x867B67: push    eax
0x867B68: lea     ecx, [esp+34h+a3]
0x867B6C: mov     byte ptr [esp+34h+var_4], 57h ; 'W'
0x867B71: call    sub_75FAE0
0x867B76: mov     eax, [esp+30h+var_10]
0x867B7A: test    eax, eax
0x867B7C: mov     byte ptr [esp+30h+var_4], 1
0x867B81: jz      short loc_867B96
0x867B83: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867B87: mov     ecx, eax
0x867B89: add     eax, 5Ch ; '\'
0x867B8C: cmp     dword ptr [eax], 0
0x867B8F: jnz     short loc_867B96
0x867B91: call    sub_772560
0x867B96: mov     edi, [esp+30h+a3]
0x867B9A: push    2
0x867B9C: push    ebx
0x867B9D: push    ebx
0x867B9E: push    edi
0x867B9F: call    sub_801110
0x867BA4: add     esp, 10h
0x867BA7: push    edi; a3
0x867BA8: push    ebx; a2
0x867BA9: mov     ecx, esi; this
0x867BAB: call    sub_760010
0x867BB0: lea     ecx, [esp+30h+var_10]
0x867BB4: push    ecx
0x867BB5: call    sub_772630
0x867BBA: add     esp, 4
0x867BBD: push    eax
0x867BBE: lea     ecx, [esp+34h+a3]
0x867BC2: mov     byte ptr [esp+34h+var_4], 58h ; 'X'
0x867BC7: call    sub_75FAE0
0x867BCC: mov     eax, [esp+30h+var_10]
0x867BD0: test    eax, eax
0x867BD2: mov     byte ptr [esp+30h+var_4], 1
0x867BD7: jz      short loc_867BEC
0x867BD9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867BDD: mov     ecx, eax
0x867BDF: add     eax, 5Ch ; '\'
0x867BE2: cmp     dword ptr [eax], 0
0x867BE5: jnz     short loc_867BEC
0x867BE7: call    sub_772560
0x867BEC: mov     edi, [esp+30h+a3]
0x867BF0: push    2
0x867BF2: push    ebx
0x867BF3: push    2
0x867BF5: push    edi
0x867BF6: call    sub_801110
0x867BFB: add     esp, 10h
0x867BFE: push    edi; a3
0x867BFF: push    2; a2
0x867C01: mov     ecx, esi; this
0x867C03: call    sub_760010
0x867C08: lea     edx, [esp+30h+var_10]
0x867C0C: push    edx
0x867C0D: call    sub_772630
0x867C12: add     esp, 4
0x867C15: push    eax
0x867C16: lea     ecx, [esp+34h+a3]
0x867C1A: mov     byte ptr [esp+34h+var_4], 59h ; 'Y'
0x867C1F: call    sub_75FAE0
0x867C24: mov     eax, [esp+30h+var_10]
0x867C28: test    eax, eax
0x867C2A: mov     byte ptr [esp+30h+var_4], 1
0x867C2F: jz      short loc_867C44
0x867C31: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867C35: mov     ecx, eax
0x867C37: add     eax, 5Ch ; '\'
0x867C3A: cmp     dword ptr [eax], 0
0x867C3D: jnz     short loc_867C44
0x867C3F: call    sub_772560
0x867C44: mov     edi, [esp+30h+a3]
0x867C48: push    2
0x867C4A: push    ebx
0x867C4B: push    3
0x867C4D: push    edi
0x867C4E: call    sub_801110
0x867C53: add     esp, 10h
0x867C56: push    edi; a3
0x867C57: push    3; a2
0x867C59: mov     ecx, esi; this
0x867C5B: call    sub_760010
0x867C60: lea     eax, [esp+30h+var_10]
0x867C64: push    eax
0x867C65: call    sub_772630
0x867C6A: add     esp, 4
0x867C6D: push    eax
0x867C6E: lea     ecx, [esp+34h+a3]
0x867C72: mov     byte ptr [esp+34h+var_4], 5Ah ; 'Z'
0x867C77: call    sub_75FAE0
0x867C7C: mov     eax, [esp+30h+var_10]
0x867C80: test    eax, eax
0x867C82: mov     byte ptr [esp+30h+var_4], 1
0x867C87: jz      short loc_867C9C
0x867C89: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867C8D: mov     ecx, eax
0x867C8F: add     eax, 5Ch ; '\'
0x867C92: cmp     dword ptr [eax], 0
0x867C95: jnz     short loc_867C9C
0x867C97: call    sub_772560
0x867C9C: mov     edi, [esp+30h+a3]
0x867CA0: push    0
0x867CA2: push    3
0x867CA4: push    4
0x867CA6: push    edi
0x867CA7: call    sub_801110
0x867CAC: mov     ecx, ds:0B43110h
0x867CB2: add     esp, 10h
0x867CB5: push    ecx; a2
0x867CB6: mov     ecx, edi; this
0x867CB8: call    sub_76C910
0x867CBD: push    edi; a3
0x867CBE: push    4; a2
0x867CC0: mov     ecx, esi; this
0x867CC2: call    sub_760010
0x867CC7: lea     edx, [esp+30h+var_10]
0x867CCB: push    edx
0x867CCC: call    sub_772630
0x867CD1: add     esp, 4
0x867CD4: push    eax
0x867CD5: lea     ecx, [esp+34h+a3]
0x867CD9: mov     byte ptr [esp+34h+var_4], 5Bh ; '['
0x867CDE: call    sub_75FAE0
0x867CE3: mov     eax, [esp+30h+var_10]
0x867CE7: test    eax, eax
0x867CE9: mov     byte ptr [esp+30h+var_4], 1
0x867CEE: jz      short loc_867D03
0x867CF0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867CF4: mov     ecx, eax
0x867CF6: add     eax, 5Ch ; '\'
0x867CF9: cmp     dword ptr [eax], 0
0x867CFC: jnz     short loc_867D03
0x867CFE: call    sub_772560
0x867D03: mov     edi, [esp+30h+a3]
0x867D07: push    2
0x867D09: push    ebx
0x867D0A: push    5
0x867D0C: push    edi
0x867D0D: call    sub_801110
0x867D12: add     esp, 10h
0x867D15: push    edi; a3
0x867D16: push    5; a2
0x867D18: mov     ecx, esi; this
0x867D1A: call    sub_760010
0x867D1F: lea     eax, [esp+30h+var_10]
0x867D23: push    eax
0x867D24: call    sub_772630
0x867D29: add     esp, 4
0x867D2C: push    eax
0x867D2D: lea     ecx, [esp+34h+a3]
0x867D31: mov     byte ptr [esp+34h+var_4], 5Ch ; '\'
0x867D36: call    sub_75FAE0
0x867D3B: mov     eax, [esp+30h+var_10]
0x867D3F: test    eax, eax
0x867D41: mov     byte ptr [esp+30h+var_4], 1
0x867D46: jz      short loc_867D5B
0x867D48: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867D4C: mov     ecx, eax
0x867D4E: add     eax, 5Ch ; '\'
0x867D51: cmp     dword ptr [eax], 0
0x867D54: jnz     short loc_867D5B
0x867D56: call    sub_772560
0x867D5B: mov     edi, [esp+30h+a3]
0x867D5F: push    0
0x867D61: push    3
0x867D63: push    6
0x867D65: push    edi
0x867D66: call    sub_801110
0x867D6B: add     esp, 10h
0x867D6E: push    edi; a3
0x867D6F: push    6; a2
0x867D71: mov     ecx, esi; this
0x867D73: call    sub_760010
0x867D78: mov     ebp, [esp+30h+var_18]
0x867D7C: mov     eax, [ebp+0F4h]
0x867D82: push    eax; a2
0x867D83: mov     ecx, esi; this
0x867D85: call    sub_7AECB0
0x867D8A: mov     eax, [ebp+174h]
0x867D90: push    eax; a2
0x867D91: mov     ecx, esi; this
0x867D93: call    sub_7AEC60
0x867D98: cmp     dword ptr [esi+30h], 0
0x867D9C: jnz     short loc_867DA6
0x867D9E: call    sub_772DF0
0x867DA3: mov     [esi+30h], eax
0x867DA6: mov     ecx, [esi+30h]
0x867DA9: push    0
0x867DAB: push    0
0x867DAD: push    1Bh
0x867DAF: call    sub_772CD0
0x867DB4: cmp     dword ptr [esi+30h], 0
0x867DB8: jnz     short loc_867DC2
0x867DBA: call    sub_772DF0
0x867DBF: mov     [esi+30h], eax
0x867DC2: mov     ecx, [esi+30h]
0x867DC5: push    0
0x867DC7: push    0
0x867DC9: push    0Fh
0x867DCB: call    sub_772CD0
0x867DD0: cmp     dword ptr [esi+30h], 0
0x867DD4: jnz     short loc_867DDE
0x867DD6: call    sub_772DF0
0x867DDB: mov     [esi+30h], eax
0x867DDE: mov     ecx, [esi+30h]
0x867DE1: push    0
0x867DE3: push    ebx
0x867DE4: push    7
0x867DE6: call    sub_772CD0
0x867DEB: cmp     dword ptr [esi+30h], 0
0x867DEF: jnz     short loc_867DF9
0x867DF1: call    sub_772DF0
0x867DF6: mov     [esi+30h], eax
0x867DF9: mov     ecx, [esi+30h]
0x867DFC: push    0
0x867DFE: push    4
0x867E00: push    17h
0x867E02: call    sub_772CD0
0x867E07: cmp     dword ptr [esi+30h], 0
0x867E0B: jnz     short loc_867E15
0x867E0D: call    sub_772DF0
0x867E12: mov     [esi+30h], eax
0x867E15: mov     ecx, [esi+30h]
0x867E18: push    0
0x867E1A: push    ebx
0x867E1B: push    0Eh
0x867E1D: call    sub_772CD0
0x867E22: cmp     dword ptr [esi+30h], 0
0x867E26: jnz     short loc_867E30
0x867E28: call    sub_772DF0
0x867E2D: mov     [esi+30h], eax
0x867E30: mov     ecx, [esi+30h]
0x867E33: push    0
0x867E35: push    0
0x867E37: push    34h ; '4'
0x867E39: call    sub_772CD0
0x867E3E: cmp     esi, ds:0B47654h
0x867E44: mov     ebp, 3B0F2h
0x867E49: mov     ds:0B43CD4h, ebp
0x867E4F: mov     dword ptr ds:0B44364h, 13Ch
0x867E59: jz      short loc_867E79
0x867E5B: add     dword ptr [esi+60h], 0FFFFFFFFh
0x867E5F: jnz     short loc_867E68
0x867E61: mov     ecx, esi
0x867E63: call    sub_7604D0
0x867E68: mov     esi, ds:0B47654h
0x867E6E: test    esi, esi
0x867E70: mov     [esp+30h+var_14], esi
0x867E74: jz      short loc_867E79
0x867E76: add     [esi+60h], ebx
0x867E79: cmp     dword ptr [esi+18h], 7
0x867E7D: jnb     loc_8680F8
0x867E83: lea     ecx, [esp+30h+var_10]
0x867E87: push    ecx
0x867E88: call    sub_772630
0x867E8D: add     esp, 4
0x867E90: push    eax
0x867E91: lea     ecx, [esp+34h+a3]
0x867E95: mov     byte ptr [esp+34h+var_4], 5Dh ; ']'
0x867E9A: call    sub_75FAE0
0x867E9F: mov     eax, [esp+30h+var_10]
0x867EA3: test    eax, eax
0x867EA5: mov     byte ptr [esp+30h+var_4], 1
0x867EAA: jz      short loc_867EBF
0x867EAC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867EB0: mov     ecx, eax
0x867EB2: add     eax, 5Ch ; '\'
0x867EB5: cmp     dword ptr [eax], 0
0x867EB8: jnz     short loc_867EBF
0x867EBA: call    sub_772560
0x867EBF: mov     edi, [esp+30h+a3]
0x867EC3: push    2
0x867EC5: push    ebx
0x867EC6: push    0
0x867EC8: push    edi
0x867EC9: call    sub_801110
0x867ECE: add     esp, 10h
0x867ED1: push    edi; a3
0x867ED2: push    0; a2
0x867ED4: mov     ecx, esi; this
0x867ED6: call    sub_760010
0x867EDB: lea     edx, [esp+30h+var_10]
0x867EDF: push    edx
0x867EE0: call    sub_772630
0x867EE5: add     esp, 4
0x867EE8: push    eax
0x867EE9: lea     ecx, [esp+34h+a3]
0x867EED: mov     byte ptr [esp+34h+var_4], 5Eh ; '^'
0x867EF2: call    sub_75FAE0
0x867EF7: mov     eax, [esp+30h+var_10]
0x867EFB: test    eax, eax
0x867EFD: mov     byte ptr [esp+30h+var_4], 1
0x867F02: jz      short loc_867F17
0x867F04: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867F08: mov     ecx, eax
0x867F0A: add     eax, 5Ch ; '\'
0x867F0D: cmp     dword ptr [eax], 0
0x867F10: jnz     short loc_867F17
0x867F12: call    sub_772560
0x867F17: mov     edi, [esp+30h+a3]
0x867F1B: push    2
0x867F1D: push    ebx
0x867F1E: push    ebx
0x867F1F: push    edi
0x867F20: call    sub_801110
0x867F25: add     esp, 10h
0x867F28: push    edi; a3
0x867F29: push    ebx; a2
0x867F2A: mov     ecx, esi; this
0x867F2C: call    sub_760010
0x867F31: lea     eax, [esp+30h+var_10]
0x867F35: push    eax
0x867F36: call    sub_772630
0x867F3B: add     esp, 4
0x867F3E: push    eax
0x867F3F: lea     ecx, [esp+34h+a3]
0x867F43: mov     byte ptr [esp+34h+var_4], 5Fh ; '_'
0x867F48: call    sub_75FAE0
0x867F4D: mov     eax, [esp+30h+var_10]
0x867F51: test    eax, eax
0x867F53: mov     byte ptr [esp+30h+var_4], 1
0x867F58: jz      short loc_867F6D
0x867F5A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867F5E: mov     ecx, eax
0x867F60: add     eax, 5Ch ; '\'
0x867F63: cmp     dword ptr [eax], 0
0x867F66: jnz     short loc_867F6D
0x867F68: call    sub_772560
0x867F6D: mov     edi, [esp+30h+a3]
0x867F71: push    2
0x867F73: push    ebx
0x867F74: push    2
0x867F76: push    edi
0x867F77: call    sub_801110
0x867F7C: add     esp, 10h
0x867F7F: push    edi; a3
0x867F80: push    2; a2
0x867F82: mov     ecx, esi; this
0x867F84: call    sub_760010
0x867F89: lea     ecx, [esp+30h+var_10]
0x867F8D: push    ecx
0x867F8E: call    sub_772630
0x867F93: add     esp, 4
0x867F96: push    eax
0x867F97: lea     ecx, [esp+34h+a3]
0x867F9B: mov     byte ptr [esp+34h+var_4], 60h ; '`'
0x867FA0: call    sub_75FAE0
0x867FA5: mov     eax, [esp+30h+var_10]
0x867FA9: test    eax, eax
0x867FAB: mov     byte ptr [esp+30h+var_4], 1
0x867FB0: jz      short loc_867FC5
0x867FB2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x867FB6: mov     ecx, eax
0x867FB8: add     eax, 5Ch ; '\'
0x867FBB: cmp     dword ptr [eax], 0
0x867FBE: jnz     short loc_867FC5
0x867FC0: call    sub_772560
0x867FC5: mov     edi, [esp+30h+a3]
0x867FC9: push    2
0x867FCB: push    ebx
0x867FCC: push    3
0x867FCE: push    edi
0x867FCF: call    sub_801110
0x867FD4: add     esp, 10h
0x867FD7: push    edi; a3
0x867FD8: push    3; a2
0x867FDA: mov     ecx, esi; this
0x867FDC: call    sub_760010
0x867FE1: lea     edx, [esp+30h+var_10]
0x867FE5: push    edx
0x867FE6: call    sub_772630
0x867FEB: add     esp, 4
0x867FEE: push    eax
0x867FEF: lea     ecx, [esp+34h+a3]
0x867FF3: mov     byte ptr [esp+34h+var_4], 61h ; 'a'
0x867FF8: call    sub_75FAE0
0x867FFD: mov     eax, [esp+30h+var_10]
0x868001: test    eax, eax
0x868003: mov     byte ptr [esp+30h+var_4], 1
0x868008: jz      short loc_86801D
0x86800A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86800E: mov     ecx, eax
0x868010: add     eax, 5Ch ; '\'
0x868013: cmp     dword ptr [eax], 0
0x868016: jnz     short loc_86801D
0x868018: call    sub_772560
0x86801D: mov     edi, [esp+30h+a3]
0x868021: push    0
0x868023: push    3
0x868025: push    4
0x868027: push    edi
0x868028: call    sub_801110
0x86802D: mov     eax, ds:0B43110h
0x868032: add     esp, 10h
0x868035: push    eax; a2
0x868036: mov     ecx, edi; this
0x868038: call    sub_76C910
0x86803D: push    edi; a3
0x86803E: push    4; a2
0x868040: mov     ecx, esi; this
0x868042: call    sub_760010
0x868047: lea     ecx, [esp+30h+var_10]
0x86804B: push    ecx
0x86804C: call    sub_772630
0x868051: add     esp, 4
0x868054: push    eax
0x868055: lea     ecx, [esp+34h+a3]
0x868059: mov     byte ptr [esp+34h+var_4], 62h ; 'b'
0x86805E: call    sub_75FAE0
0x868063: mov     eax, [esp+30h+var_10]
0x868067: test    eax, eax
0x868069: mov     byte ptr [esp+30h+var_4], 1
0x86806E: jz      short loc_868083
0x868070: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x868074: mov     ecx, eax
0x868076: add     eax, 5Ch ; '\'
0x868079: cmp     dword ptr [eax], 0
0x86807C: jnz     short loc_868083
0x86807E: call    sub_772560
0x868083: mov     edi, [esp+30h+a3]
0x868087: push    2
0x868089: push    ebx
0x86808A: push    5
0x86808C: push    edi
0x86808D: call    sub_801110
0x868092: add     esp, 10h
0x868095: push    edi; a3
0x868096: push    5; a2
0x868098: mov     ecx, esi; this
0x86809A: call    sub_760010
0x86809F: lea     edx, [esp+30h+var_10]
0x8680A3: push    edx
0x8680A4: call    sub_772630
0x8680A9: add     esp, 4
0x8680AC: push    eax
0x8680AD: lea     ecx, [esp+34h+a3]
0x8680B1: mov     byte ptr [esp+34h+var_4], 63h ; 'c'
0x8680B6: call    sub_75FAE0
0x8680BB: mov     eax, [esp+30h+var_10]
0x8680BF: test    eax, eax
0x8680C1: mov     byte ptr [esp+30h+var_4], 1
0x8680C6: jz      short loc_8680DB
0x8680C8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8680CC: mov     ecx, eax
0x8680CE: add     eax, 5Ch ; '\'
0x8680D1: cmp     dword ptr [eax], 0
0x8680D4: jnz     short loc_8680DB
0x8680D6: call    sub_772560
0x8680DB: mov     edi, [esp+30h+a3]
0x8680DF: push    0
0x8680E1: push    3
0x8680E3: push    6
0x8680E5: push    edi
0x8680E6: call    sub_801110
0x8680EB: add     esp, 10h
0x8680EE: push    edi; a3
0x8680EF: push    6; a2
0x8680F1: mov     ecx, esi; this
0x8680F3: call    sub_760010
0x8680F8: mov     eax, [esp+30h+var_18]
0x8680FC: mov     eax, [eax+0F4h]
0x868102: push    eax; a2
0x868103: mov     ecx, esi; this
0x868105: call    sub_7AECB0
0x86810A: mov     ecx, [esp+30h+var_18]
0x86810E: mov     eax, [ecx+178h]
0x868114: push    eax; a2
0x868115: mov     ecx, esi; this
0x868117: call    sub_7AEC60
0x86811C: cmp     dword ptr [esi+30h], 0
0x868120: jnz     short loc_86812A
0x868122: call    sub_772DF0
0x868127: mov     [esi+30h], eax
0x86812A: mov     ecx, [esi+30h]
0x86812D: push    0
0x86812F: push    0
0x868131: push    1Bh
0x868133: call    sub_772CD0
0x868138: cmp     dword ptr [esi+30h], 0
0x86813C: jnz     short loc_868146
0x86813E: call    sub_772DF0
0x868143: mov     [esi+30h], eax
0x868146: mov     ecx, [esi+30h]
0x868149: push    0
0x86814B: push    0
0x86814D: push    0Fh
0x86814F: call    sub_772CD0
0x868154: cmp     dword ptr [esi+30h], 0
0x868158: jnz     short loc_868162
0x86815A: call    sub_772DF0
0x86815F: mov     [esi+30h], eax
0x868162: mov     ecx, [esi+30h]
0x868165: push    0
0x868167: push    ebx
0x868168: push    7
0x86816A: call    sub_772CD0
0x86816F: cmp     dword ptr [esi+30h], 0
0x868173: jnz     short loc_86817D
0x868175: call    sub_772DF0
0x86817A: mov     [esi+30h], eax
0x86817D: mov     ecx, [esi+30h]
0x868180: push    0
0x868182: push    4
0x868184: push    17h
0x868186: call    sub_772CD0
0x86818B: cmp     dword ptr [esi+30h], 0
0x86818F: jnz     short loc_868199
0x868191: call    sub_772DF0
0x868196: mov     [esi+30h], eax
0x868199: mov     ecx, [esi+30h]
0x86819C: push    0
0x86819E: push    ebx
0x86819F: push    0Eh
0x8681A1: call    sub_772CD0
0x8681A6: cmp     dword ptr [esi+30h], 0
0x8681AA: jnz     short loc_8681B4
0x8681AC: call    sub_772DF0
0x8681B1: mov     [esi+30h], eax
0x8681B4: mov     ecx, [esi+30h]
0x8681B7: push    0
0x8681B9: push    0
0x8681BB: push    34h ; '4'
0x8681BD: call    sub_772CD0
0x8681C2: cmp     esi, ds:0B47658h
0x8681C8: mov     ds:0B43CD8h, ebp
0x8681CE: mov     dword ptr ds:0B44368h, 1BCh
0x8681D8: jz      short loc_8681F8
0x8681DA: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8681DE: jnz     short loc_8681E7
0x8681E0: mov     ecx, esi
0x8681E2: call    sub_7604D0
0x8681E7: mov     esi, ds:0B47658h
0x8681ED: test    esi, esi
0x8681EF: mov     [esp+30h+var_14], esi
0x8681F3: jz      short loc_8681F8
0x8681F5: add     [esi+60h], ebx
0x8681F8: cmp     dword ptr [esi+18h], 7
0x8681FC: jnb     loc_868478
0x868202: lea     edx, [esp+30h+var_10]
0x868206: push    edx
0x868207: call    sub_772630
0x86820C: add     esp, 4
0x86820F: push    eax
0x868210: lea     ecx, [esp+34h+a3]
0x868214: mov     byte ptr [esp+34h+var_4], 64h ; 'd'
0x868219: call    sub_75FAE0
0x86821E: mov     eax, [esp+30h+var_10]
0x868222: test    eax, eax
0x868224: mov     byte ptr [esp+30h+var_4], 1
0x868229: jz      short loc_86823E
0x86822B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86822F: mov     ecx, eax
0x868231: add     eax, 5Ch ; '\'
0x868234: cmp     dword ptr [eax], 0
0x868237: jnz     short loc_86823E
0x868239: call    sub_772560
0x86823E: mov     edi, [esp+30h+a3]
0x868242: push    2
0x868244: push    ebx
0x868245: push    0
0x868247: push    edi
0x868248: call    sub_801110
0x86824D: add     esp, 10h
0x868250: push    edi; a3
0x868251: push    0; a2
0x868253: mov     ecx, esi; this
0x868255: call    sub_760010
0x86825A: lea     eax, [esp+30h+var_10]
0x86825E: push    eax
0x86825F: call    sub_772630
0x868264: add     esp, 4
0x868267: push    eax
0x868268: lea     ecx, [esp+34h+a3]
0x86826C: mov     byte ptr [esp+34h+var_4], 65h ; 'e'
0x868271: call    sub_75FAE0
0x868276: mov     eax, [esp+30h+var_10]
0x86827A: test    eax, eax
0x86827C: mov     byte ptr [esp+30h+var_4], 1
0x868281: jz      short loc_868296
0x868283: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x868287: mov     ecx, eax
0x868289: add     eax, 5Ch ; '\'
0x86828C: cmp     dword ptr [eax], 0
0x86828F: jnz     short loc_868296
0x868291: call    sub_772560
0x868296: mov     edi, [esp+30h+a3]
0x86829A: push    2
0x86829C: push    ebx
0x86829D: push    ebx
0x86829E: push    edi
0x86829F: call    sub_801110
0x8682A4: add     esp, 10h
0x8682A7: push    edi; a3
0x8682A8: push    ebx; a2
0x8682A9: mov     ecx, esi; this
0x8682AB: call    sub_760010
0x8682B0: lea     ecx, [esp+30h+var_10]
0x8682B4: push    ecx
0x8682B5: call    sub_772630
0x8682BA: add     esp, 4
0x8682BD: push    eax
0x8682BE: lea     ecx, [esp+34h+a3]
0x8682C2: mov     byte ptr [esp+34h+var_4], 66h ; 'f'
0x8682C7: call    sub_75FAE0
0x8682CC: mov     eax, [esp+30h+var_10]
0x8682D0: test    eax, eax
0x8682D2: mov     byte ptr [esp+30h+var_4], 1
0x8682D7: jz      short loc_8682EC
0x8682D9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8682DD: mov     ecx, eax
0x8682DF: add     eax, 5Ch ; '\'
0x8682E2: cmp     dword ptr [eax], 0
0x8682E5: jnz     short loc_8682EC
0x8682E7: call    sub_772560
0x8682EC: mov     edi, [esp+30h+a3]
0x8682F0: push    2
0x8682F2: push    ebx
0x8682F3: push    2
0x8682F5: push    edi
0x8682F6: call    sub_801110
0x8682FB: add     esp, 10h
0x8682FE: push    edi; a3
0x8682FF: push    2; a2
0x868301: mov     ecx, esi; this
0x868303: call    sub_760010
0x868308: lea     edx, [esp+30h+var_10]
0x86830C: push    edx
0x86830D: call    sub_772630
0x868312: add     esp, 4
0x868315: push    eax
0x868316: lea     ecx, [esp+34h+a3]
0x86831A: mov     byte ptr [esp+34h+var_4], 67h ; 'g'
0x86831F: call    sub_75FAE0
0x868324: mov     eax, [esp+30h+var_10]
0x868328: test    eax, eax
0x86832A: mov     byte ptr [esp+30h+var_4], 1
0x86832F: jz      short loc_868344
0x868331: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x868335: mov     ecx, eax
0x868337: add     eax, 5Ch ; '\'
0x86833A: cmp     dword ptr [eax], 0
0x86833D: jnz     short loc_868344
0x86833F: call    sub_772560
0x868344: mov     edi, [esp+30h+a3]
0x868348: push    2
0x86834A: push    ebx
0x86834B: push    3
0x86834D: push    edi
0x86834E: call    sub_801110
0x868353: add     esp, 10h
0x868356: push    edi; a3
0x868357: push    3; a2
0x868359: mov     ecx, esi; this
0x86835B: call    sub_760010
0x868360: lea     eax, [esp+30h+var_10]
0x868364: push    eax
0x868365: call    sub_772630
0x86836A: add     esp, 4
0x86836D: push    eax
0x86836E: lea     ecx, [esp+34h+a3]
0x868372: mov     byte ptr [esp+34h+var_4], 68h ; 'h'
0x868377: call    sub_75FAE0
0x86837C: mov     eax, [esp+30h+var_10]
0x868380: test    eax, eax
0x868382: mov     byte ptr [esp+30h+var_4], 1
0x868387: jz      short loc_86839C
0x868389: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86838D: mov     ecx, eax
0x86838F: add     eax, 5Ch ; '\'
0x868392: cmp     dword ptr [eax], 0
0x868395: jnz     short loc_86839C
0x868397: call    sub_772560
0x86839C: mov     edi, [esp+30h+a3]
0x8683A0: push    0
0x8683A2: push    3
0x8683A4: push    4
0x8683A6: push    edi
0x8683A7: call    sub_801110
0x8683AC: mov     ecx, ds:0B43110h
0x8683B2: add     esp, 10h
0x8683B5: push    ecx; a2
0x8683B6: mov     ecx, edi; this
0x8683B8: call    sub_76C910
0x8683BD: push    edi; a3
0x8683BE: push    4; a2
0x8683C0: mov     ecx, esi; this
0x8683C2: call    sub_760010
0x8683C7: lea     edx, [esp+30h+var_10]
0x8683CB: push    edx
0x8683CC: call    sub_772630
0x8683D1: add     esp, 4
0x8683D4: push    eax
0x8683D5: lea     ecx, [esp+34h+a3]
0x8683D9: mov     byte ptr [esp+34h+var_4], 69h ; 'i'
0x8683DE: call    sub_75FAE0
0x8683E3: mov     eax, [esp+30h+var_10]
0x8683E7: test    eax, eax
0x8683E9: mov     byte ptr [esp+30h+var_4], 1
0x8683EE: jz      short loc_868403
0x8683F0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8683F4: mov     ecx, eax
0x8683F6: add     eax, 5Ch ; '\'
0x8683F9: cmp     dword ptr [eax], 0
0x8683FC: jnz     short loc_868403
0x8683FE: call    sub_772560
0x868403: mov     edi, [esp+30h+a3]
0x868407: push    2
0x868409: push    ebx
0x86840A: push    5
0x86840C: push    edi
0x86840D: call    sub_801110
0x868412: add     esp, 10h
0x868415: push    edi; a3
0x868416: push    5; a2
0x868418: mov     ecx, esi; this
0x86841A: call    sub_760010
0x86841F: lea     eax, [esp+30h+var_10]
0x868423: push    eax
0x868424: call    sub_772630
0x868429: add     esp, 4
0x86842C: push    eax
0x86842D: lea     ecx, [esp+34h+a3]
0x868431: mov     byte ptr [esp+34h+var_4], 6Ah ; 'j'
0x868436: call    sub_75FAE0
0x86843B: mov     eax, [esp+30h+var_10]
0x86843F: test    eax, eax
0x868441: mov     byte ptr [esp+30h+var_4], 1
0x868446: jz      short loc_86845B
0x868448: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86844C: mov     ecx, eax
0x86844E: add     eax, 5Ch ; '\'
0x868451: cmp     dword ptr [eax], 0
0x868454: jnz     short loc_86845B
0x868456: call    sub_772560
0x86845B: mov     edi, [esp+30h+a3]
0x86845F: push    0
0x868461: push    3
0x868463: push    6
0x868465: push    edi
0x868466: call    sub_801110
0x86846B: add     esp, 10h
0x86846E: push    edi; a3
0x86846F: push    6; a2
0x868471: mov     ecx, esi; this
0x868473: call    sub_760010
0x868478: mov     ebp, [esp+30h+var_18]
0x86847C: mov     eax, [ebp+0F8h]
0x868482: push    eax; a2
0x868483: mov     ecx, esi; this
0x868485: call    sub_7AECB0
0x86848A: mov     eax, [ebp+174h]
0x868490: push    eax; a2
0x868491: mov     ecx, esi; this
0x868493: call    sub_7AEC60
0x868498: cmp     dword ptr [esi+30h], 0
0x86849C: jnz     short loc_8684A6
0x86849E: call    sub_772DF0
0x8684A3: mov     [esi+30h], eax
0x8684A6: mov     ecx, [esi+30h]
0x8684A9: push    0
0x8684AB: push    0
0x8684AD: push    1Bh
0x8684AF: call    sub_772CD0
0x8684B4: cmp     dword ptr [esi+30h], 0
0x8684B8: jnz     short loc_8684C2
0x8684BA: call    sub_772DF0
0x8684BF: mov     [esi+30h], eax
0x8684C2: mov     ecx, [esi+30h]
0x8684C5: push    0
0x8684C7: push    0
0x8684C9: push    0Fh
0x8684CB: call    sub_772CD0
0x8684D0: cmp     dword ptr [esi+30h], 0
0x8684D4: jnz     short loc_8684DE
0x8684D6: call    sub_772DF0
0x8684DB: mov     [esi+30h], eax
0x8684DE: mov     ecx, [esi+30h]
0x8684E1: push    0
0x8684E3: push    ebx
0x8684E4: push    7
0x8684E6: call    sub_772CD0
0x8684EB: cmp     dword ptr [esi+30h], 0
0x8684EF: jnz     short loc_8684F9
0x8684F1: call    sub_772DF0
0x8684F6: mov     [esi+30h], eax
0x8684F9: mov     ecx, [esi+30h]
0x8684FC: push    0
0x8684FE: push    4
0x868500: push    17h
0x868502: call    sub_772CD0
0x868507: cmp     dword ptr [esi+30h], 0
0x86850B: jnz     short loc_868515
0x86850D: call    sub_772DF0
0x868512: mov     [esi+30h], eax
0x868515: mov     ecx, [esi+30h]
0x868518: push    0
0x86851A: push    ebx
0x86851B: push    0Eh
0x86851D: call    sub_772CD0
0x868522: cmp     dword ptr [esi+30h], 0
0x868526: jnz     short loc_868530
0x868528: call    sub_772DF0
0x86852D: mov     [esi+30h], eax
0x868530: mov     ecx, [esi+30h]
0x868533: push    0
0x868535: push    0
0x868537: push    34h ; '4'
0x868539: call    sub_772CD0
0x86853E: cmp     esi, ds:0B4765Ch
0x868544: mov     ebp, 7B0F8h
0x868549: mov     ds:0B43CE4h, ebp
0x86854F: mov     dword ptr ds:0B44374h, 13Ch
0x868559: jz      short loc_868579
0x86855B: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86855F: jnz     short loc_868568
0x868561: mov     ecx, esi
0x868563: call    sub_7604D0
0x868568: mov     esi, ds:0B4765Ch
0x86856E: test    esi, esi
0x868570: mov     [esp+30h+var_14], esi
0x868574: jz      short loc_868579
0x868576: add     [esi+60h], ebx
0x868579: cmp     dword ptr [esi+18h], 7
0x86857D: jnb     loc_8687F8
0x868583: lea     ecx, [esp+30h+var_10]
0x868587: push    ecx
0x868588: call    sub_772630
0x86858D: add     esp, 4
0x868590: push    eax
0x868591: lea     ecx, [esp+34h+a3]
0x868595: mov     byte ptr [esp+34h+var_4], 6Bh ; 'k'
0x86859A: call    sub_75FAE0
0x86859F: mov     eax, [esp+30h+var_10]
0x8685A3: test    eax, eax
0x8685A5: mov     byte ptr [esp+30h+var_4], 1
0x8685AA: jz      short loc_8685BF
0x8685AC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8685B0: mov     ecx, eax
0x8685B2: add     eax, 5Ch ; '\'
0x8685B5: cmp     dword ptr [eax], 0
0x8685B8: jnz     short loc_8685BF
0x8685BA: call    sub_772560
0x8685BF: mov     edi, [esp+30h+a3]
0x8685C3: push    2
0x8685C5: push    ebx
0x8685C6: push    0
0x8685C8: push    edi
0x8685C9: call    sub_801110
0x8685CE: add     esp, 10h
0x8685D1: push    edi; a3
0x8685D2: push    0; a2
0x8685D4: mov     ecx, esi; this
0x8685D6: call    sub_760010
0x8685DB: lea     edx, [esp+30h+var_10]
0x8685DF: push    edx
0x8685E0: call    sub_772630
0x8685E5: add     esp, 4
0x8685E8: push    eax
0x8685E9: lea     ecx, [esp+34h+a3]
0x8685ED: mov     byte ptr [esp+34h+var_4], 6Ch ; 'l'
0x8685F2: call    sub_75FAE0
0x8685F7: mov     eax, [esp+30h+var_10]
0x8685FB: test    eax, eax
0x8685FD: mov     byte ptr [esp+30h+var_4], 1
0x868602: jz      short loc_868617
0x868604: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x868608: mov     ecx, eax
0x86860A: add     eax, 5Ch ; '\'
0x86860D: cmp     dword ptr [eax], 0
0x868610: jnz     short loc_868617
0x868612: call    sub_772560
0x868617: mov     edi, [esp+30h+a3]
0x86861B: push    2
0x86861D: push    ebx
0x86861E: push    ebx
0x86861F: push    edi
0x868620: call    sub_801110
0x868625: add     esp, 10h
0x868628: push    edi; a3
0x868629: push    ebx; a2
0x86862A: mov     ecx, esi; this
0x86862C: call    sub_760010
0x868631: lea     eax, [esp+30h+var_10]
0x868635: push    eax
0x868636: call    sub_772630
0x86863B: add     esp, 4
0x86863E: push    eax
0x86863F: lea     ecx, [esp+34h+a3]
0x868643: mov     byte ptr [esp+34h+var_4], 6Dh ; 'm'
0x868648: call    sub_75FAE0
0x86864D: mov     eax, [esp+30h+var_10]
0x868651: test    eax, eax
0x868653: mov     byte ptr [esp+30h+var_4], 1
0x868658: jz      short loc_86866D
0x86865A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86865E: mov     ecx, eax
0x868660: add     eax, 5Ch ; '\'
0x868663: cmp     dword ptr [eax], 0
0x868666: jnz     short loc_86866D
0x868668: call    sub_772560
0x86866D: mov     edi, [esp+30h+a3]
0x868671: push    2
0x868673: push    ebx
0x868674: push    2
0x868676: push    edi
0x868677: call    sub_801110
0x86867C: add     esp, 10h
0x86867F: push    edi; a3
0x868680: push    2; a2
0x868682: mov     ecx, esi; this
0x868684: call    sub_760010
0x868689: lea     ecx, [esp+30h+var_10]
0x86868D: push    ecx
0x86868E: call    sub_772630
0x868693: add     esp, 4
0x868696: push    eax
0x868697: lea     ecx, [esp+34h+a3]
0x86869B: mov     byte ptr [esp+34h+var_4], 6Eh ; 'n'
0x8686A0: call    sub_75FAE0
0x8686A5: mov     eax, [esp+30h+var_10]
0x8686A9: test    eax, eax
0x8686AB: mov     byte ptr [esp+30h+var_4], 1
0x8686B0: jz      short loc_8686C5
0x8686B2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8686B6: mov     ecx, eax
0x8686B8: add     eax, 5Ch ; '\'
0x8686BB: cmp     dword ptr [eax], 0
0x8686BE: jnz     short loc_8686C5
0x8686C0: call    sub_772560
0x8686C5: mov     edi, [esp+30h+a3]
0x8686C9: push    2
0x8686CB: push    ebx
0x8686CC: push    3
0x8686CE: push    edi
0x8686CF: call    sub_801110
0x8686D4: add     esp, 10h
0x8686D7: push    edi; a3
0x8686D8: push    3; a2
0x8686DA: mov     ecx, esi; this
0x8686DC: call    sub_760010
0x8686E1: lea     edx, [esp+30h+var_10]
0x8686E5: push    edx
0x8686E6: call    sub_772630
0x8686EB: add     esp, 4
0x8686EE: push    eax
0x8686EF: lea     ecx, [esp+34h+a3]
0x8686F3: mov     byte ptr [esp+34h+var_4], 6Fh ; 'o'
0x8686F8: call    sub_75FAE0
0x8686FD: mov     eax, [esp+30h+var_10]
0x868701: test    eax, eax
0x868703: mov     byte ptr [esp+30h+var_4], 1
0x868708: jz      short loc_86871D
0x86870A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86870E: mov     ecx, eax
0x868710: add     eax, 5Ch ; '\'
0x868713: cmp     dword ptr [eax], 0
0x868716: jnz     short loc_86871D
0x868718: call    sub_772560
0x86871D: mov     edi, [esp+30h+a3]
0x868721: push    0
0x868723: push    3
0x868725: push    4
0x868727: push    edi
0x868728: call    sub_801110
0x86872D: mov     eax, ds:0B43110h
0x868732: add     esp, 10h
0x868735: push    eax; a2
0x868736: mov     ecx, edi; this
0x868738: call    sub_76C910
0x86873D: push    edi; a3
0x86873E: push    4; a2
0x868740: mov     ecx, esi; this
0x868742: call    sub_760010
0x868747: lea     ecx, [esp+30h+var_10]
0x86874B: push    ecx
0x86874C: call    sub_772630
0x868751: add     esp, 4
0x868754: push    eax
0x868755: lea     ecx, [esp+34h+a3]
0x868759: mov     byte ptr [esp+34h+var_4], 70h ; 'p'
0x86875E: call    sub_75FAE0
0x868763: mov     eax, [esp+30h+var_10]
0x868767: test    eax, eax
0x868769: mov     byte ptr [esp+30h+var_4], 1
0x86876E: jz      short loc_868783
0x868770: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x868774: mov     ecx, eax
0x868776: add     eax, 5Ch ; '\'
0x868779: cmp     dword ptr [eax], 0
0x86877C: jnz     short loc_868783
0x86877E: call    sub_772560
0x868783: mov     edi, [esp+30h+a3]
0x868787: push    2
0x868789: push    ebx
0x86878A: push    5
0x86878C: push    edi
0x86878D: call    sub_801110
0x868792: add     esp, 10h
0x868795: push    edi; a3
0x868796: push    5; a2
0x868798: mov     ecx, esi; this
0x86879A: call    sub_760010
0x86879F: lea     edx, [esp+30h+var_10]
0x8687A3: push    edx
0x8687A4: call    sub_772630
0x8687A9: add     esp, 4
0x8687AC: push    eax
0x8687AD: lea     ecx, [esp+34h+a3]
0x8687B1: mov     byte ptr [esp+34h+var_4], 71h ; 'q'
0x8687B6: call    sub_75FAE0
0x8687BB: mov     eax, [esp+30h+var_10]
0x8687BF: test    eax, eax
0x8687C1: mov     byte ptr [esp+30h+var_4], 1
0x8687C6: jz      short loc_8687DB
0x8687C8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8687CC: mov     ecx, eax
0x8687CE: add     eax, 5Ch ; '\'
0x8687D1: cmp     dword ptr [eax], 0
0x8687D4: jnz     short loc_8687DB
0x8687D6: call    sub_772560
0x8687DB: mov     edi, [esp+30h+a3]
0x8687DF: push    0
0x8687E1: push    3
0x8687E3: push    6
0x8687E5: push    edi
0x8687E6: call    sub_801110
0x8687EB: add     esp, 10h
0x8687EE: push    edi; a3
0x8687EF: push    6; a2
0x8687F1: mov     ecx, esi; this
0x8687F3: call    sub_760010
0x8687F8: mov     eax, [esp+30h+var_18]
0x8687FC: mov     eax, [eax+0F8h]
0x868802: push    eax; a2
0x868803: mov     ecx, esi; this
0x868805: call    sub_7AECB0
0x86880A: mov     ecx, [esp+30h+var_18]
0x86880E: mov     eax, [ecx+178h]
0x868814: push    eax; a2
0x868815: mov     ecx, esi; this
0x868817: call    sub_7AEC60
0x86881C: cmp     dword ptr [esi+30h], 0
0x868820: jnz     short loc_86882A
0x868822: call    sub_772DF0
0x868827: mov     [esi+30h], eax
0x86882A: mov     ecx, [esi+30h]
0x86882D: push    0
0x86882F: push    0
0x868831: push    1Bh
0x868833: call    sub_772CD0
0x868838: cmp     dword ptr [esi+30h], 0
0x86883C: jnz     short loc_868846
0x86883E: call    sub_772DF0
0x868843: mov     [esi+30h], eax
0x868846: mov     ecx, [esi+30h]
0x868849: push    0
0x86884B: push    0
0x86884D: push    0Fh
0x86884F: call    sub_772CD0
0x868854: cmp     dword ptr [esi+30h], 0
0x868858: jnz     short loc_868862
0x86885A: call    sub_772DF0
0x86885F: mov     [esi+30h], eax
0x868862: mov     ecx, [esi+30h]
0x868865: push    0
0x868867: push    ebx
0x868868: push    7
0x86886A: call    sub_772CD0
0x86886F: cmp     dword ptr [esi+30h], 0
0x868873: jnz     short loc_86887D
0x868875: call    sub_772DF0
0x86887A: mov     [esi+30h], eax
0x86887D: mov     ecx, [esi+30h]
0x868880: push    0
0x868882: push    4
0x868884: push    17h
0x868886: call    sub_772CD0
0x86888B: cmp     dword ptr [esi+30h], 0
0x86888F: jnz     short loc_868899
0x868891: call    sub_772DF0
0x868896: mov     [esi+30h], eax
0x868899: mov     ecx, [esi+30h]
0x86889C: push    0
0x86889E: push    ebx
0x86889F: push    0Eh
0x8688A1: call    sub_772CD0
0x8688A6: cmp     dword ptr [esi+30h], 0
0x8688AA: jnz     short loc_8688B4
0x8688AC: call    sub_772DF0
0x8688B1: mov     [esi+30h], eax
0x8688B4: mov     ecx, [esi+30h]
0x8688B7: push    0
0x8688B9: push    0
0x8688BB: push    34h ; '4'
0x8688BD: call    sub_772CD0
0x8688C2: or      ebx, 0FFFFFFFFh
0x8688C5: test    edi, edi
0x8688C7: mov     ds:0B43CECh, ebp
0x8688CD: mov     dword ptr ds:0B4437Ch, 1BCh
0x8688D7: mov     byte ptr [esp+30h+var_4], 0
0x8688DC: jz      short loc_8688EA
0x8688DE: add     [edi+5Ch], ebx
0x8688E1: jnz     short loc_8688EA
0x8688E3: mov     ecx, edi
0x8688E5: call    sub_772560
0x8688EA: add     [esi+60h], ebx
0x8688ED: mov     [esp+30h+var_4], ebx
0x8688F1: jnz     short loc_8688FA
0x8688F3: mov     ecx, esi
0x8688F5: call    sub_7604D0
0x8688FA: mov     ecx, dword ptr [esp+30h+var_C]
0x8688FE: mov     large fs:0, ecx
0x868905: pop     ecx
0x868906: pop     edi
0x868907: pop     esi
0x868908: pop     ebp
0x868909: pop     ebx
0x86890A: add     esp, 1Ch
0x86890D: retn
