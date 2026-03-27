0x8E1160: push    ebp
0x8E1161: mov     ebp, esp
0x8E1163: and     esp, 0FFFFFFF0h
0x8E1166: sub     esp, 2Ch
0x8E1169: mov     eax, [ebp+arg_0]
0x8E116C: movaps  xmm1, xmmword ptr [eax]
0x8E116F: mov     eax, [ebp+arg_8]
0x8E1172: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8E1179: push    esi
0x8E117A: mov     esi, ecx
0x8E117C: mov     edx, [esi]
0x8E117E: push    eax
0x8E117F: lea     ecx, [esp+34h+var_10]
0x8E1183: push    ecx
0x8E1184: lea     eax, [esp+38h+var_2C+0Ch]
0x8E1188: xorps   xmm1, xmm0
0x8E118B: push    eax
0x8E118C: mov     ecx, esi
0x8E118E: movaps  xmmword ptr [esp+3Ch+var_2C+0Ch], xmm1
0x8E1193: call    dword ptr [edx+30h]
0x8E1196: fld     dword ptr ds:0A2F948h
0x8E119C: movaps  xmm1, xmmword ptr [esi+10h]
0x8E11A0: movaps  xmm0, [esp+30h+var_10]
0x8E11A5: addps   xmm1, xmm0
0x8E11A8: movaps  xmmword ptr [esi+10h], xmm1
0x8E11AC: fdiv    dword ptr [esi+30h]
0x8E11AF: movaps  xmm2, xmmword ptr [esi+10h]
0x8E11B3: mov     ecx, [ebp+arg_4]
0x8E11B6: mov     dword ptr [esp+30h+var_2C+18h], 0
0x8E11BE: fstp    dword ptr [esp+30h+var_2C+0Ch]
0x8E11C2: fld     dword ptr ds:0A2F948h
0x8E11C8: fdiv    dword ptr [esi+34h]
0x8E11CB: fstp    dword ptr [esp+30h+var_2C+10h]
0x8E11CF: fld     dword ptr ds:0A2F948h
0x8E11D5: fdiv    dword ptr [esi+38h]
0x8E11D8: fstp    dword ptr [esp+30h+var_2C+14h]
0x8E11DC: movaps  xmm1, xmmword ptr [esp+30h+var_2C+0Ch]
0x8E11E1: addps   xmm2, xmm1
0x8E11E4: movaps  xmmword ptr [esi+20h], xmm2
0x8E11E8: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8E11EF: xorps   xmm0, xmm1
0x8E11F2: movaps  xmmword ptr [ecx], xmm0
0x8E11F5: pop     esi
0x8E11F6: mov     esp, ebp
0x8E11F8: pop     ebp
0x8E11F9: retn    0Ch
