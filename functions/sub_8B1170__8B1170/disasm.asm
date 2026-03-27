0x8B1170: sub     esp, 8
0x8B1173: push    ebx
0x8B1174: push    ebp
0x8B1175: push    esi
0x8B1176: mov     esi, ecx
0x8B1178: mov     ecx, [esi+4]
0x8B117B: mov     eax, [esi+8]
0x8B117E: shl     ecx, 1
0x8B1180: cmp     ecx, eax
0x8B1182: push    edi
0x8B1183: jle     short loc_8B1191
0x8B1185: lea     edx, [eax+eax+2]
0x8B1189: push    edx
0x8B118A: mov     ecx, esi
0x8B118C: call    sub_8B14B0
0x8B1191: mov     eax, [esi+8]
0x8B1194: mov     ebp, dword ptr [esp+18h+arg_0+4]
0x8B1198: cdq
0x8B1199: mov     ebx, eax
0x8B119B: mov     eax, dword ptr [esp+18h+arg_0]
0x8B119F: mov     ecx, ebp
0x8B11A1: shrd    eax, ecx, 4
0x8B11A5: push    0
0x8B11A7: push    9E3779B1h
0x8B11AC: shr     ecx, 4
0x8B11AF: push    ecx
0x8B11B0: mov     edi, edx
0x8B11B2: push    eax
0x8B11B3: mov     [esp+28h+var_4], edi
0x8B11B7: call    __allmul
0x8B11BC: and     edx, edi
0x8B11BE: mov     edi, [esi]
0x8B11C0: and     eax, ebx
0x8B11C2: mov     ecx, [edi+eax*8]
0x8B11C5: or      ecx, [edi+eax*8+4]
0x8B11C9: jz      short loc_8B1202
0x8B11CB: jmp     short loc_8B11D0
0x8B11CD: align 10h
0x8B11D0: mov     ecx, [edi+eax*8]
0x8B11D3: cmp     ecx, dword ptr [esp+18h+arg_0]
0x8B11D7: jnz     short loc_8B11E5
0x8B11D9: mov     ecx, [edi+eax*8+4]
0x8B11DD: mov     ebp, dword ptr [esp+18h+arg_0+4]
0x8B11E1: cmp     ecx, ebp
0x8B11E3: jz      short loc_8B1202
0x8B11E5: mov     ecx, [esp+18h+var_4]
0x8B11E9: add     eax, 1
0x8B11EC: adc     edx, 0
0x8B11EF: and     edx, ecx
0x8B11F1: mov     ecx, [esi]
0x8B11F3: and     eax, ebx
0x8B11F5: mov     ebp, [ecx+eax*8]
0x8B11F8: or      ebp, [ecx+eax*8+4]
0x8B11FC: jnz     short loc_8B11D0
0x8B11FE: mov     ebp, dword ptr [esp+18h+arg_0+4]
0x8B1202: mov     ecx, [edi+eax*8]
0x8B1205: mov     edx, dword ptr [esp+18h+arg_0]
0x8B1209: cmp     ecx, edx
0x8B120B: jnz     short loc_8B1215
0x8B120D: mov     ecx, [edi+eax*8+4]
0x8B1211: cmp     ecx, ebp
0x8B1213: jz      short loc_8B121C
0x8B1215: mov     ecx, 1
0x8B121A: jmp     short loc_8B121E
0x8B121C: xor     ecx, ecx
0x8B121E: mov     ebx, [esi+4]
0x8B1221: add     ebx, ecx
0x8B1223: mov     ecx, [esp+18h+arg_8]
0x8B1227: mov     [esi+4], ebx
0x8B122A: mov     [edi+eax*8], edx
0x8B122D: mov     [edi+eax*8+4], ebp
0x8B1231: mov     edx, [esi+8]
0x8B1234: pop     edi
0x8B1235: add     edx, eax
0x8B1237: mov     eax, [esi]
0x8B1239: pop     esi
0x8B123A: mov     [eax+edx*8+8], ecx
0x8B123E: mov     ecx, [esp+10h+arg_C]
0x8B1242: pop     ebp
0x8B1243: mov     [eax+edx*8+0Ch], ecx
0x8B1247: pop     ebx
0x8B1248: add     esp, 8
0x8B124B: retn    10h
