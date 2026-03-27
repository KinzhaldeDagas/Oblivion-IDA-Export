0x4C1E80: mov     eax, [ecx+24h]
0x4C1E83: sub     esp, 0Ch
0x4C1E86: test    eax, eax
0x4C1E88: jz      short loc_4C1E90
0x4C1E8A: cmp     dword ptr [eax+4], 0
0x4C1E8E: jnz     short loc_4C1EBC
0x4C1E90: fldz
0x4C1E92: mov     eax, [esp+0Ch+arg_8]
0x4C1E96: fst     [esp+0Ch+var_C]
0x4C1E99: mov     ecx, [esp+0Ch+var_C]
0x4C1E9C: fstp    [esp+0Ch+var_8]
0x4C1EA0: fld1
0x4C1EA2: mov     edx, [esp+0Ch+var_8]
0x4C1EA6: mov     [eax], ecx
0x4C1EA8: fstp    [esp+0Ch+var_4]
0x4C1EAC: mov     [eax+4], edx
0x4C1EAF: mov     ecx, [esp+0Ch+var_4]
0x4C1EB3: mov     [eax+8], ecx
0x4C1EB6: add     esp, 0Ch
0x4C1EB9: retn    0Ch
0x4C1EBC: mov     ecx, [eax+8]
0x4C1EBF: test    ecx, ecx
0x4C1EC1: mov     edx, [esp+0Ch+arg_0]
0x4C1EC5: jz      short loc_4C1EF5
0x4C1EC7: cmp     dword ptr [ecx+edx*4], 0
0x4C1ECB: jz      short loc_4C1EF5
0x4C1ECD: mov     ecx, [ecx+edx*4]
0x4C1ED0: mov     eax, [esp+0Ch+arg_4]
0x4C1ED4: lea     eax, [eax+eax*2]
0x4C1ED7: mov     edx, [ecx+eax*4]
0x4C1EDA: lea     eax, [ecx+eax*4]
0x4C1EDD: mov     ecx, [esp+0Ch+arg_8]
0x4C1EE1: mov     [ecx], edx
0x4C1EE3: mov     edx, [eax+4]
0x4C1EE6: mov     [ecx+4], edx
0x4C1EE9: mov     eax, [eax+8]
0x4C1EEC: mov     [ecx+8], eax
0x4C1EEF: add     esp, 0Ch
0x4C1EF2: retn    0Ch
0x4C1EF5: cmp     dword ptr [eax], 0
0x4C1EF8: push    esi
0x4C1EF9: jz      loc_4C1FC8
0x4C1EFF: mov     ecx, [eax]
0x4C1F01: cmp     dword ptr [ecx+edx*4], 0
0x4C1F05: lea     eax, [ecx+edx*4]
0x4C1F08: jz      loc_4C1FC8
0x4C1F0E: mov     eax, [eax]
0x4C1F10: cmp     word ptr [eax+0B6h], 0
0x4C1F18: ja      short loc_4C1F1E
0x4C1F1A: xor     eax, eax
0x4C1F1C: jmp     short loc_4C1F26
0x4C1F1E: mov     edx, [eax+0B0h]
0x4C1F24: mov     eax, [edx]
0x4C1F26: mov     esi, [eax+0B4h]
0x4C1F2C: mov     ecx, [esi+20h]
0x4C1F2F: test    ecx, ecx
0x4C1F31: jz      short loc_4C1F59
0x4C1F33: mov     eax, [esp+10h+arg_4]
0x4C1F37: lea     eax, [eax+eax*2]
0x4C1F3A: mov     edx, [ecx+eax*4]
0x4C1F3D: lea     eax, [ecx+eax*4]
0x4C1F40: mov     ecx, [esp+10h+arg_8]
0x4C1F44: mov     [ecx], edx
0x4C1F46: mov     edx, [eax+4]
0x4C1F49: mov     [ecx+4], edx
0x4C1F4C: mov     eax, [eax+8]
0x4C1F4F: mov     [ecx+8], eax
0x4C1F52: pop     esi
0x4C1F53: add     esp, 0Ch
0x4C1F56: retn    0Ch
0x4C1F59: mov     [esp+10h+var_C], 0
0x4C1F61: mov     [esp+10h+var_8], 0
0x4C1F69: mov     byte ptr [esp+10h+var_4], 0
0x4C1F6E: mov     ecx, [esi+34h]
0x4C1F71: test    ecx, ecx
0x4C1F73: jz      short loc_4C1FC8
0x4C1F75: mov     edx, [ecx]
0x4C1F77: mov     eax, [edx+4Ch]
0x4C1F7A: call    eax
0x4C1F7C: test    al, al
0x4C1F7E: jz      short loc_4C1FC8
0x4C1F80: push    1
0x4C1F82: mov     ecx, esi
0x4C1F84: call    sub_728AB0
0x4C1F89: test    al, al
0x4C1F8B: jz      short loc_4C1FC8
0x4C1F8D: lea     ecx, [esp+10h+var_C]
0x4C1F91: push    ecx
0x4C1F92: mov     ecx, esi
0x4C1F94: call    sub_728D00
0x4C1F99: mov     eax, [esp+10h+var_8]
0x4C1F9D: imul    eax, [esp+10h+arg_4]
0x4C1FA2: add     eax, [esp+10h+var_C]
0x4C1FA6: mov     ecx, [esp+10h+arg_8]
0x4C1FAA: mov     edx, [eax]
0x4C1FAC: mov     [ecx], edx
0x4C1FAE: mov     edx, [eax+4]
0x4C1FB1: mov     [ecx+4], edx
0x4C1FB4: mov     eax, [eax+8]
0x4C1FB7: mov     [ecx+8], eax
0x4C1FBA: mov     ecx, esi
0x4C1FBC: call    sub_728B20
0x4C1FC1: pop     esi
0x4C1FC2: add     esp, 0Ch
0x4C1FC5: retn    0Ch
0x4C1FC8: fldz
0x4C1FCA: mov     eax, [esp+10h+arg_8]
0x4C1FCE: fst     [esp+10h+var_C]
0x4C1FD2: pop     esi
0x4C1FD3: mov     ecx, [esp+0Ch+var_C]
0x4C1FD6: fstp    [esp+0Ch+var_8]
0x4C1FDA: fld1
0x4C1FDC: mov     edx, [esp+0Ch+var_8]
0x4C1FE0: mov     [eax], ecx
0x4C1FE2: fstp    [esp+0Ch+var_4]
0x4C1FE6: mov     [eax+4], edx
0x4C1FE9: mov     ecx, [esp+0Ch+var_4]
0x4C1FED: mov     [eax+8], ecx
0x4C1FF0: add     esp, 0Ch
0x4C1FF3: retn    0Ch
