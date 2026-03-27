0x7249F0: sub     esp, 24h
0x7249F3: push    esi
0x7249F4: push    edi
0x7249F5: mov     edi, [esp+2Ch+arg_0]
0x7249F9: fld     dword ptr [edi+94h]
0x7249FF: add     edi, 64h ; 'd'
0x724A02: fstp    [esp+2Ch+arg_0]
0x724A06: mov     esi, ecx
0x724A08: fld     [esp+2Ch+arg_0]
0x724A0C: lea     eax, [esp+2Ch+var_18]
0x724A10: fld     st
0x724A12: push    eax
0x724A13: fmul    dword ptr [esi+8]
0x724A16: lea     ecx, [esp+30h+var_C]
0x724A1A: push    ecx
0x724A1B: mov     ecx, edi
0x724A1D: fstp    [esp+34h+var_18]
0x724A21: fld     dword ptr [esi+0Ch]
0x724A24: fmul    st, st(1)
0x724A26: fstp    [esp+34h+var_14]
0x724A2A: fmul    dword ptr [esi+10h]
0x724A2D: fstp    [esp+34h+var_10]
0x724A31: call    sub_7101F0
0x724A36: fld     dword ptr [edi+24h]
0x724A39: fadd    dword ptr [eax]
0x724A3B: fstp    [esp+2Ch+var_24]
0x724A3F: mov     edx, [esp+2Ch+var_24]
0x724A43: fld     dword ptr [edi+28h]
0x724A46: fadd    dword ptr [eax+4]
0x724A49: fstp    [esp+2Ch+var_20]
0x724A4D: fld     dword ptr [edi+2Ch]
0x724A50: fadd    dword ptr [eax+8]
0x724A53: mov     eax, [esp+2Ch+var_20]
0x724A57: mov     [esi+14h], edx
0x724A5A: xor     edx, edx
0x724A5C: cmp     [esi+20h], edx
0x724A5F: fstp    [esp+2Ch+var_1C]
0x724A63: mov     ecx, [esp+2Ch+var_1C]
0x724A67: mov     [esi+18h], eax
0x724A6A: mov     [esi+1Ch], ecx
0x724A6D: jbe     short loc_724A99
0x724A6F: xor     eax, eax
0x724A71: mov     ecx, [esi+24h]
0x724A74: fld     dword ptr [edi+30h]
0x724A77: fmul    dword ptr [ecx+eax]
0x724A7A: add     ecx, eax
0x724A7C: add     edx, 1
0x724A7F: fstp    dword ptr [ecx+8]
0x724A82: mov     ecx, [esi+24h]
0x724A85: fld     dword ptr [ecx+eax+4]
0x724A89: add     ecx, eax
0x724A8B: fmul    dword ptr [edi+30h]
0x724A8E: add     eax, 10h
0x724A91: fstp    dword ptr [ecx+0Ch]
0x724A94: cmp     edx, [esi+20h]
0x724A97: jb      short loc_724A71
0x724A99: pop     edi
0x724A9A: pop     esi
0x724A9B: add     esp, 24h
0x724A9E: retn    4
