0x8E1060: push    ebp
0x8E1061: mov     ebp, esp
0x8E1063: and     esp, 0FFFFFFF0h
0x8E1066: sub     esp, 24h
0x8E1069: fld     dword ptr ds:0A2F948h
0x8E106F: mov     eax, [ebp+arg_0]
0x8E1072: fdiv    dword ptr [ecx+30h]
0x8E1075: mov     edx, [ecx+4Ch]
0x8E1078: push    ebx
0x8E1079: push    esi
0x8E107A: movzx   esi, word ptr [eax+8]
0x8E107E: movzx   esi, word ptr [edx+esi*4]
0x8E1082: mov     [esp+2Ch+var_18], esi
0x8E1086: mov     esi, [ecx+58h]
0x8E1089: push    edi
0x8E108A: movzx   edi, word ptr [eax]
0x8E108D: movzx   edi, word ptr [esi+edi*4]
0x8E1091: movzx   ebx, word ptr [eax+2]
0x8E1095: movaps  xmm2, xmmword ptr [ecx+10h]
0x8E1099: mov     dword ptr [esp+30h+var_10+0Ch], 0
0x8E10A1: fild    [esp+30h+var_18]
0x8E10A5: mov     [esp+30h+var_18], edi
0x8E10A9: mov     edi, [ecx+64h]
0x8E10AC: movzx   ebx, word ptr [edi+ebx*4]
0x8E10B0: fmul    st, st(1)
0x8E10B2: mov     [esp+30h+var_14], ebx
0x8E10B6: fstp    dword ptr [esp+30h+var_10]
0x8E10BA: fld     dword ptr ds:0A2F948h
0x8E10C0: fdiv    dword ptr [ecx+34h]
0x8E10C3: fild    [esp+30h+var_18]
0x8E10C7: fmul    st, st(1)
0x8E10C9: fstp    dword ptr [esp+30h+var_10+4]
0x8E10CD: fld     dword ptr ds:0A2F948h
0x8E10D3: fdiv    dword ptr [ecx+38h]
0x8E10D6: movzx   ecx, word ptr [eax+0Ah]
0x8E10DA: movzx   edx, word ptr [edx+ecx*4]
0x8E10DE: movzx   ecx, word ptr [eax+4]
0x8E10E2: movzx   eax, word ptr [eax+6]
0x8E10E6: fstp    [esp+30h+var_18]
0x8E10EA: fild    [esp+30h+var_14]
0x8E10EE: mov     [esp+30h+var_14], edx
0x8E10F2: movzx   edx, word ptr [esi+ecx*4]
0x8E10F6: movzx   ecx, word ptr [edi+eax*4]
0x8E10FA: fmul    [esp+30h+var_18]
0x8E10FE: mov     eax, [ebp+arg_4]
0x8E1101: fstp    dword ptr [esp+30h+var_10+8]
0x8E1105: movaps  xmm0, [esp+30h+var_10]
0x8E110A: fild    [esp+30h+var_14]
0x8E110E: mov     [esp+30h+var_14], edx
0x8E1112: pop     edi
0x8E1113: mov     dword ptr [esp+2Ch+var_10+0Ch], 0
0x8E111B: fmul    st, st(2)
0x8E111D: pop     esi
0x8E111E: subps   xmm0, xmm2
0x8E1121: movaps  xmmword ptr [eax], xmm0
0x8E1124: fstp    dword ptr [esp+28h+var_10]
0x8E1128: pop     ebx
0x8E1129: fild    [esp+24h+var_14]
0x8E112D: mov     [esp+24h+var_14], ecx
0x8E1131: fmul    st, st(1)
0x8E1133: fstp    dword ptr [esp+24h+var_10+4]
0x8E1137: fstp    st
0x8E1139: fstp    st
0x8E113B: fild    [esp+24h+var_14]
0x8E113F: fmul    [esp+24h+var_18]
0x8E1143: fstp    dword ptr [esp+24h+var_10+8]
0x8E1147: movaps  xmm1, [esp+24h+var_10]
0x8E114C: subps   xmm1, xmm2
0x8E114F: movaps  xmmword ptr [eax+10h], xmm1
0x8E1153: mov     esp, ebp
0x8E1155: pop     ebp
0x8E1156: retn    8
