0x8F1190: push    ebp
0x8F1191: mov     ebp, esp
0x8F1193: and     esp, 0FFFFFFF0h
0x8F1196: push    ecx
0x8F1197: mov     ecx, [ebp+arg_8]
0x8F119A: mov     eax, [ecx+14h]
0x8F119D: mov     ecx, [ecx+18h]
0x8F11A0: mov     edx, [ebp+arg_C]
0x8F11A3: push    ebx
0x8F11A4: push    esi
0x8F11A5: mov     esi, [ebp+arg_0]
0x8F11A8: movaps  xmm0, xmmword ptr [esi]
0x8F11AB: movaps  xmmword ptr [edx], xmm0
0x8F11AE: movaps  xmm2, xmmword ptr [eax+40h]
0x8F11B2: mov     bl, [eax+0Ch]
0x8F11B5: test    bl, bl
0x8F11B7: push    edi
0x8F11B8: mov     edi, [ebp+arg_4]
0x8F11BB: movaps  xmm1, xmmword ptr [edi]
0x8F11BE: movaps  xmm0, xmm1
0x8F11C1: subps   xmm0, xmm2
0x8F11C4: movaps  xmm2, xmmword ptr [ecx+40h]
0x8F11C8: subps   xmm1, xmm2
0x8F11CB: movaps  xmm2, xmmword ptr [esi]
0x8F11CE: movaps  xmm4, xmm0
0x8F11D1: movaps  xmm3, xmm2
0x8F11D4: shufps  xmm3, xmm2, 0C9h ; 'É'
0x8F11D8: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x8F11DC: mulps   xmm4, xmm3
0x8F11DF: movaps  xmm3, xmm2
0x8F11E2: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x8F11E6: movaps  xmm2, xmm0
0x8F11E9: shufps  xmm2, xmm0, 0C9h ; 'É'
0x8F11ED: movaps  xmm0, xmm2
0x8F11F0: mulps   xmm0, xmm3
0x8F11F3: subps   xmm0, xmm4
0x8F11F6: jnz     short loc_8F1228
0x8F11F8: movaps  xmm3, xmmword ptr [eax+70h]
0x8F11FC: movaps  xmm4, xmmword ptr [eax+60h]
0x8F1200: movaps  xmm2, xmm0
0x8F1203: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1207: mulps   xmm3, xmm2
0x8F120A: movaps  xmm2, xmm0
0x8F120D: shufps  xmm2, xmm0, 55h ; 'U'
0x8F1211: mulps   xmm4, xmm2
0x8F1214: movaps  xmm2, xmm0
0x8F1217: shufps  xmm2, xmm0, 0
0x8F121B: movaps  xmm0, xmmword ptr [eax+50h]
0x8F121F: mulps   xmm0, xmm2
0x8F1222: addps   xmm0, xmm4
0x8F1225: addps   xmm0, xmm3
0x8F1228: movaps  xmmword ptr [edx+10h], xmm0
0x8F122C: movaps  xmm0, xmmword ptr [esi]
0x8F122F: mov     bl, [ecx+0Ch]
0x8F1232: test    bl, bl
0x8F1234: movaps  xmm3, xmm0
0x8F1237: movaps  xmm2, xmm1
0x8F123A: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8F123E: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8F1242: mulps   xmm3, xmm2
0x8F1245: movaps  xmm2, xmm1
0x8F1248: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8F124C: movaps  xmm1, xmm0
0x8F124F: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8F1253: movaps  xmm0, xmm1
0x8F1256: mulps   xmm0, xmm2
0x8F1259: subps   xmm0, xmm3
0x8F125C: jnz     short loc_8F128E
0x8F125E: movaps  xmm2, xmmword ptr [ecx+70h]
0x8F1262: movaps  xmm3, xmmword ptr [ecx+60h]
0x8F1266: movaps  xmm1, xmm0
0x8F1269: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F126D: mulps   xmm2, xmm1
0x8F1270: movaps  xmm1, xmm0
0x8F1273: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1277: mulps   xmm3, xmm1
0x8F127A: movaps  xmm1, xmm0
0x8F127D: shufps  xmm1, xmm0, 0
0x8F1281: movaps  xmm0, xmmword ptr [ecx+50h]
0x8F1285: mulps   xmm0, xmm1
0x8F1288: addps   xmm0, xmm3
0x8F128B: addps   xmm0, xmm2
0x8F128E: movaps  xmm1, xmmword ptr [edx+10h]
0x8F1292: movaps  xmmword ptr [edx+20h], xmm0
0x8F1296: fld     dword ptr [ecx+3Ch]
0x8F1299: movaps  xmm0, xmmword ptr [edx+20h]
0x8F129D: fadd    dword ptr [eax+3Ch]
0x8F12A0: movaps  xmm2, xmmword ptr [ecx+30h]
0x8F12A4: movaps  xmm3, xmm0
0x8F12A7: fadd    dword ptr ds:0A9B1ECh
0x8F12AD: mulps   xmm3, xmm0
0x8F12B0: movaps  xmm0, xmmword ptr [eax+30h]
0x8F12B4: mulps   xmm3, xmm2
0x8F12B7: movaps  xmm2, xmm1
0x8F12BA: mulps   xmm2, xmm1
0x8F12BD: movaps  xmm1, xmm2
0x8F12C0: mulps   xmm1, xmm0
0x8F12C3: movaps  xmm0, xmm1
0x8F12C6: addps   xmm0, xmm3
0x8F12C9: movaps  xmm1, xmm0
0x8F12CC: shufps  xmm1, xmm0, 55h ; 'U'
0x8F12D0: movaps  xmm2, xmm0
0x8F12D3: lea     esi, [esp+10h+var_4]
0x8F12D7: addss   xmm1, xmm0
0x8F12DB: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F12DF: addss   xmm2, xmm1
0x8F12E3: movss   dword ptr [esi], xmm2
0x8F12E7: fadd    [esp+10h+var_4]
0x8F12EB: mov     eax, [ebp+arg_10]
0x8F12EE: pop     edi
0x8F12EF: fst     dword ptr [edx+2Ch]
0x8F12F2: pop     esi
0x8F12F3: fdivr   dword ptr ds:0A2F948h
0x8F12F9: pop     ebx
0x8F12FA: fst     dword ptr [edx+1Ch]
0x8F12FD: fstp    dword ptr [eax]
0x8F12FF: mov     esp, ebp
0x8F1301: pop     ebp
0x8F1302: retn
