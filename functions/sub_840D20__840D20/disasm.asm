0x840D20: push    0FFFFFFFFh
0x840D22: push    offset SEH_882120
0x840D27: mov     eax, large fs:0
0x840D2D: push    eax
0x840D2E: push    ebx
0x840D2F: push    ebp
0x840D30: push    esi
0x840D31: push    edi
0x840D32: mov     eax, ds:0B30AACh
0x840D37: xor     eax, esp
0x840D39: push    eax
0x840D3A: lea     eax, [esp+20h+var_C]
0x840D3E: mov     large fs:0, eax
0x840D44: mov     esi, ecx
0x840D46: mov     edi, [esp+20h+arg_8]
0x840D4A: mov     eax, [edi+10h]
0x840D4D: mov     ebx, ds:0B458F0h
0x840D53: push    eax
0x840D54: call    sub_848DA0
0x840D59: mov     ebp, [edi+0Ch]
0x840D5C: push    ebp
0x840D5D: mov     ecx, esi
0x840D5F: call    sub_848E50
0x840D64: mov     edi, [edi+10h]
0x840D67: mov     ecx, [esp+20h+arg_0]
0x840D6B: mov     eax, [esi]
0x840D6D: mov     edx, [eax+0BCh]
0x840D73: push    edi
0x840D74: push    ebp
0x840D75: push    ecx
0x840D76: mov     ecx, esi
0x840D78: call    edx
0x840D7A: mov     eax, [ebx+24h]
0x840D7D: mov     edi, [esp+20h+arg_C]
0x840D81: mov     ebp, [eax]
0x840D83: mov     edx, [edi]
0x840D85: mov     eax, [edx+88h]
0x840D8B: push    0
0x840D8D: mov     ecx, edi
0x840D8F: mov     [esp+24h+arg_8], ebp
0x840D93: call    eax
0x840D95: mov     ebp, [ebp+4]
0x840D98: cmp     ebp, eax
0x840D9A: mov     [esp+20h+arg_0], eax
0x840D9E: jz      short loc_840DDA
0x840DA0: test    ebp, ebp
0x840DA2: jz      short loc_840DC5
0x840DA4: lea     ecx, [ebp+4]
0x840DA7: push    ecx; lpAddend
0x840DA8: call    dword ptr ds:0A2807Ch
0x840DAE: test    eax, eax
0x840DB0: jnz     short loc_840DC1
0x840DB2: test    ebp, ebp
0x840DB4: jz      short loc_840DC1
0x840DB6: mov     edx, [ebp+0]
0x840DB9: mov     eax, [edx]
0x840DBB: push    1
0x840DBD: mov     ecx, ebp
0x840DBF: call    eax
0x840DC1: mov     eax, [esp+20h+arg_0]
0x840DC5: test    eax, eax
0x840DC7: mov     ecx, [esp+20h+arg_8]
0x840DCB: mov     [ecx+4], eax
0x840DCE: jz      short loc_840DDA
0x840DD0: add     eax, 4
0x840DD3: push    eax; lpAddend
0x840DD4: call    dword ptr ds:0A28078h
0x840DDA: mov     edx, [esp+20h+arg_8]
0x840DDE: push    edi
0x840DDF: push    edx
0x840DE0: mov     ecx, esi
0x840DE2: call    sub_848FA0
0x840DE7: mov     eax, [ebx+24h]
0x840DEA: mov     ebp, [eax+4]
0x840DED: push    0
0x840DEF: push    edi
0x840DF0: mov     ecx, esi
0x840DF2: mov     [esp+28h+arg_8], ebp
0x840DF6: call    sub_848FD0
0x840DFB: mov     ebp, [ebp+4]
0x840DFE: cmp     ebp, eax
0x840E00: mov     [esp+20h+arg_0], eax
0x840E04: jz      short loc_840E40
0x840E06: test    ebp, ebp
0x840E08: jz      short loc_840E2B
0x840E0A: lea     ecx, [ebp+4]
0x840E0D: push    ecx; lpAddend
0x840E0E: call    dword ptr ds:0A2807Ch
0x840E14: test    eax, eax
0x840E16: jnz     short loc_840E27
0x840E18: test    ebp, ebp
0x840E1A: jz      short loc_840E27
0x840E1C: mov     edx, [ebp+0]
0x840E1F: mov     eax, [edx]
0x840E21: push    1
0x840E23: mov     ecx, ebp
0x840E25: call    eax
0x840E27: mov     eax, [esp+20h+arg_0]
0x840E2B: test    eax, eax
0x840E2D: mov     ecx, [esp+20h+arg_8]
0x840E31: mov     [ecx+4], eax
0x840E34: jz      short loc_840E40
0x840E36: add     eax, 4
0x840E39: push    eax; lpAddend
0x840E3A: call    dword ptr ds:0A28078h
0x840E40: mov     edx, [esp+20h+arg_8]
0x840E44: push    edi
0x840E45: push    edx
0x840E46: mov     ecx, esi
0x840E48: call    sub_848FA0
0x840E4D: mov     eax, [ebx+24h]
0x840E50: mov     ebp, [eax+10h]
0x840E53: mov     edx, [edi]
0x840E55: mov     eax, [edx+90h]
0x840E5B: push    0
0x840E5D: mov     ecx, edi
0x840E5F: mov     [esp+24h+arg_8], ebp
0x840E63: call    eax
0x840E65: mov     ebp, [ebp+4]
0x840E68: cmp     ebp, eax
0x840E6A: mov     [esp+20h+arg_0], eax
0x840E6E: jz      short loc_840EAA
0x840E70: test    ebp, ebp
0x840E72: jz      short loc_840E95
0x840E74: lea     ecx, [ebp+4]
0x840E77: push    ecx; lpAddend
0x840E78: call    dword ptr ds:0A2807Ch
0x840E7E: test    eax, eax
0x840E80: jnz     short loc_840E91
0x840E82: test    ebp, ebp
0x840E84: jz      short loc_840E91
0x840E86: mov     edx, [ebp+0]
0x840E89: mov     eax, [edx]
0x840E8B: push    1
0x840E8D: mov     ecx, ebp
0x840E8F: call    eax
0x840E91: mov     eax, [esp+20h+arg_0]
0x840E95: test    eax, eax
0x840E97: mov     ecx, [esp+20h+arg_8]
0x840E9B: mov     [ecx+4], eax
0x840E9E: jz      short loc_840EAA
0x840EA0: add     eax, 4
0x840EA3: push    eax; lpAddend
0x840EA4: call    dword ptr ds:0A28078h
0x840EAA: mov     edx, [esp+20h+arg_8]
0x840EAE: push    edi
0x840EAF: push    edx
0x840EB0: mov     ecx, esi
0x840EB2: call    sub_848FA0
0x840EB7: mov     ecx, [ebx+24h]
0x840EBA: mov     edi, [ecx+18h]
0x840EBD: mov     eax, ds:0B43108h
0x840EC2: mov     ebp, [edi+4]
0x840EC5: add     edi, 4
0x840EC8: cmp     ebp, eax
0x840ECA: mov     [esp+20h+arg_8], eax
0x840ECE: jz      short loc_840F05
0x840ED0: test    ebp, ebp
0x840ED2: jz      short loc_840EF5
0x840ED4: lea     edx, [ebp+4]
0x840ED7: push    edx; lpAddend
0x840ED8: call    dword ptr ds:0A2807Ch
0x840EDE: test    eax, eax
0x840EE0: jnz     short loc_840EF1
0x840EE2: test    ebp, ebp
0x840EE4: jz      short loc_840EF1
0x840EE6: mov     eax, [ebp+0]
0x840EE9: mov     edx, [eax]
0x840EEB: push    1
0x840EED: mov     ecx, ebp
0x840EEF: call    edx
0x840EF1: mov     eax, [esp+20h+arg_8]
0x840EF5: test    eax, eax
0x840EF7: mov     [edi], eax
0x840EF9: jz      short loc_840F05
0x840EFB: add     eax, 4
0x840EFE: push    eax; lpAddend
0x840EFF: call    dword ptr ds:0A28078h
0x840F05: mov     eax, [ebx+24h]
0x840F08: mov     ebp, [eax+1Ch]
0x840F0B: mov     eax, ds:0B4310Ch
0x840F10: mov     edi, [ebp+4]
0x840F13: cmp     edi, eax
0x840F15: mov     ecx, eax
0x840F17: mov     [esp+20h+arg_8], ecx
0x840F1B: jz      short loc_840F52
0x840F1D: test    edi, edi
0x840F1F: jz      short loc_840F41
0x840F21: lea     ecx, [edi+4]
0x840F24: push    ecx; lpAddend
0x840F25: call    dword ptr ds:0A2807Ch
0x840F2B: test    eax, eax
0x840F2D: jnz     short loc_840F3D
0x840F2F: test    edi, edi
0x840F31: jz      short loc_840F3D
0x840F33: mov     edx, [edi]
0x840F35: mov     eax, [edx]
0x840F37: push    1
0x840F39: mov     ecx, edi
0x840F3B: call    eax
0x840F3D: mov     ecx, [esp+20h+arg_8]
0x840F41: test    ecx, ecx
0x840F43: mov     [ebp+4], ecx
0x840F46: jz      short loc_840F52
0x840F48: add     ecx, 4
0x840F4B: push    ecx; lpAddend
0x840F4C: call    dword ptr ds:0A28078h
0x840F52: mov     edi, 1
0x840F57: add     [ebx+60h], edi
0x840F5A: mov     [esp+20h+arg_8], ebx
0x840F5E: mov     edx, [esi+38h]
0x840F61: lea     ecx, [esp+20h+arg_8]
0x840F65: push    ecx
0x840F66: push    edx
0x840F67: lea     ecx, [esi+40h]
0x840F6A: mov     [esp+28h+var_4], 0
0x840F72: call    sub_76CE40
0x840F77: or      eax, 0FFFFFFFFh
0x840F7A: add     [ebx+60h], eax
0x840F7D: mov     [esp+20h+var_4], eax
0x840F81: jnz     short loc_840F8A
0x840F83: mov     ecx, ebx
0x840F85: call    sub_7604D0
0x840F8A: add     [esi+38h], edi
0x840F8D: mov     ecx, [esp+20h+var_C]
0x840F91: mov     large fs:0, ecx
0x840F98: pop     ecx
0x840F99: pop     edi
0x840F9A: pop     esi
0x840F9B: pop     ebp
0x840F9C: pop     ebx
0x840F9D: add     esp, 0Ch
0x840FA0: retn    10h
