0x8F1070: push    ebp
0x8F1071: mov     ebp, esp
0x8F1073: and     esp, 0FFFFFFF0h
0x8F1076: sub     esp, 8
0x8F1079: mov     eax, [ebp+arg_4]
0x8F107C: mov     ecx, [eax+14h]
0x8F107F: mov     edx, [eax+18h]
0x8F1082: mov     al, [ecx+0Ch]
0x8F1085: push    ebx
0x8F1086: push    esi
0x8F1087: mov     esi, [ebp+arg_0]
0x8F108A: movaps  xmm0, xmmword ptr [esi]
0x8F108D: test    al, al
0x8F108F: mov     eax, [ebp+arg_8]
0x8F1092: jnz     short loc_8F10C4
0x8F1094: movaps  xmm2, xmmword ptr [ecx+70h]
0x8F1098: movaps  xmm3, xmmword ptr [ecx+60h]
0x8F109C: movaps  xmm1, xmm0
0x8F109F: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F10A3: mulps   xmm2, xmm1
0x8F10A6: movaps  xmm1, xmm0
0x8F10A9: shufps  xmm1, xmm0, 55h ; 'U'
0x8F10AD: mulps   xmm3, xmm1
0x8F10B0: movaps  xmm1, xmm0
0x8F10B3: shufps  xmm1, xmm0, 0
0x8F10B7: movaps  xmm0, xmmword ptr [ecx+50h]
0x8F10BB: mulps   xmm0, xmm1
0x8F10BE: addps   xmm0, xmm3
0x8F10C1: addps   xmm0, xmm2
0x8F10C4: movaps  xmmword ptr [eax], xmm0
0x8F10C7: mov     bl, [edx+0Ch]
0x8F10CA: test    bl, bl
0x8F10CC: jz      short loc_8F10E1
0x8F10CE: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8F10D5: movaps  xmm1, xmmword ptr [esi]
0x8F10D8: xorps   xmm1, xmm0
0x8F10DB: movaps  xmmword ptr [eax+10h], xmm1
0x8F10DF: jmp     short loc_8F1122
0x8F10E1: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8F10E8: movaps  xmm0, xmmword ptr [esi]
0x8F10EB: movaps  xmm2, xmmword ptr [edx+70h]
0x8F10EF: movaps  xmm3, xmmword ptr [edx+60h]
0x8F10F3: xorps   xmm0, xmm1
0x8F10F6: movaps  xmm1, xmm0
0x8F10F9: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F10FD: mulps   xmm2, xmm1
0x8F1100: movaps  xmm1, xmm0
0x8F1103: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1107: mulps   xmm3, xmm1
0x8F110A: movaps  xmm1, xmm0
0x8F110D: shufps  xmm1, xmm0, 0
0x8F1111: movaps  xmm0, xmmword ptr [edx+50h]
0x8F1115: mulps   xmm0, xmm1
0x8F1118: addps   xmm0, xmm3
0x8F111B: addps   xmm0, xmm2
0x8F111E: movaps  xmmword ptr [eax+10h], xmm0
0x8F1122: movaps  xmm0, xmmword ptr [eax+10h]
0x8F1126: movaps  xmm2, xmmword ptr [edx+30h]
0x8F112A: movaps  xmm1, xmmword ptr [eax]
0x8F112D: movaps  xmm3, xmm0
0x8F1130: mulps   xmm3, xmm0
0x8F1133: movaps  xmm0, xmmword ptr [ecx+30h]
0x8F1137: mulps   xmm3, xmm2
0x8F113A: movaps  xmm2, xmm1
0x8F113D: mulps   xmm2, xmm1
0x8F1140: movaps  xmm1, xmm2
0x8F1143: mulps   xmm1, xmm0
0x8F1146: movaps  xmm0, xmm1
0x8F1149: addps   xmm0, xmm3
0x8F114C: movaps  xmm1, xmm0
0x8F114F: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1153: movaps  xmm2, xmm0
0x8F1156: addss   xmm1, xmm0
0x8F115A: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F115E: lea     ecx, [esp+10h+var_4]
0x8F1162: addss   xmm2, xmm1
0x8F1166: movss   dword ptr [ecx], xmm2
0x8F116A: fld     [esp+10h+var_4]
0x8F116E: fadd    dword ptr ds:0A9B1ECh
0x8F1174: mov     edx, [ebp+arg_C]
0x8F1177: pop     esi
0x8F1178: pop     ebx
0x8F1179: fdivr   dword ptr ds:0A2F948h
0x8F117F: fst     dword ptr [eax+0Ch]
0x8F1182: fstp    dword ptr [edx]
0x8F1184: mov     esp, ebp
0x8F1186: pop     ebp
0x8F1187: retn
