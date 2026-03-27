0x8A1170: push    0FFFFFFFFh
0x8A1172: push    offset SEH_8A1170
0x8A1177: mov     eax, large fs:0
0x8A117D: push    eax
0x8A117E: sub     esp, 0Ch
0x8A1181: push    ebx
0x8A1182: push    ebp
0x8A1183: push    esi
0x8A1184: push    edi
0x8A1185: mov     eax, ds:0B30AACh
0x8A118A: xor     eax, esp
0x8A118C: push    eax
0x8A118D: lea     eax, [esp+2Ch+var_C]
0x8A1191: mov     large fs:0, eax
0x8A1197: mov     [esp+2Ch+var_14], ecx
0x8A119B: mov     edi, [esp+2Ch+arg_0]
0x8A119F: test    edi, edi
0x8A11A1: jz      loc_8A12C5
0x8A11A7: mov     ebp, [edi+8]
0x8A11AA: mov     eax, [edi+4]
0x8A11AD: xor     ebx, ebx
0x8A11AF: test    ebp, ebp
0x8A11B1: mov     [esp+2Ch+var_18], eax
0x8A11B5: jbe     loc_8A12E6
0x8A11BB: mov     ecx, [edi+4]
0x8A11BE: mov     eax, [ecx+ebx*4]
0x8A11C1: test    eax, eax
0x8A11C3: jz      short loc_8A11CA
0x8A11C5: mov     esi, [eax+8]
0x8A11C8: jmp     short loc_8A11CC
0x8A11CA: xor     esi, esi
0x8A11CC: test    esi, esi
0x8A11CE: jz      loc_8A12DB
0x8A11D4: mov     edx, [esi]
0x8A11D6: mov     eax, [edx+4]
0x8A11D9: mov     ecx, esi
0x8A11DB: call    eax
0x8A11DD: test    eax, eax
0x8A11DF: jz      short loc_8A11F3
0x8A11E1: cmp     eax, offset dword_BA8150
0x8A11E6: jz      loc_8A12DB
0x8A11EC: mov     eax, [eax+4]
0x8A11EF: test    eax, eax
0x8A11F1: jnz     short loc_8A11E1
0x8A11F3: mov     edx, [esi]
0x8A11F5: mov     eax, [edx+4]
0x8A11F8: mov     ecx, esi
0x8A11FA: call    eax
0x8A11FC: test    eax, eax
0x8A11FE: jz      short loc_8A1212
0x8A1200: cmp     eax, offset dword_BA7FF8
0x8A1205: jz      loc_8A12DB
0x8A120B: mov     eax, [eax+4]
0x8A120E: test    eax, eax
0x8A1210: jnz     short loc_8A1200
0x8A1212: mov     ecx, ds:0BA7D98h
0x8A1218: mov     edx, [ecx]
0x8A121A: mov     eax, [edx+10h]
0x8A121D: push    24h ; '$'
0x8A121F: push    1Ch
0x8A1221: call    eax
0x8A1223: mov     word ptr [eax+4], 1Ch
0x8A1229: mov     [esp+2Ch+var_10], eax
0x8A122D: mov     ecx, [esp+2Ch+var_18]
0x8A1231: push    ebp
0x8A1232: push    ecx
0x8A1233: mov     ecx, eax
0x8A1235: mov     [esp+34h+var_4], 1
0x8A123D: call    sub_8E89D0
0x8A1242: mov     esi, eax
0x8A1244: mov     edx, [esi]
0x8A1246: mov     eax, [edx+20h]
0x8A1249: mov     ecx, esi
0x8A124B: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8A1253: call    eax
0x8A1255: mov     ebx, eax
0x8A1257: mov     eax, [edi+14h]
0x8A125A: cmp     ebp, eax
0x8A125C: jb      short loc_8A1260
0x8A125E: mov     ebp, eax
0x8A1260: xor     edi, edi
0x8A1262: test    ebp, ebp
0x8A1264: jbe     short loc_8A128A
0x8A1266: mov     ecx, [esp+2Ch+arg_0]
0x8A126A: mov     edx, [ecx+10h]
0x8A126D: mov     eax, [edx+edi*4]
0x8A1270: push    eax
0x8A1271: push    ebx
0x8A1272: mov     ecx, esi
0x8A1274: call    sub_8E8880
0x8A1279: mov     edx, [esi]
0x8A127B: mov     eax, [edx+24h]
0x8A127E: push    ebx
0x8A127F: mov     ecx, esi
0x8A1281: call    eax
0x8A1283: add     edi, 1
0x8A1286: cmp     edi, ebp
0x8A1288: jb      short loc_8A1266
0x8A128A: mov     edi, [esp+2Ch+var_14]
0x8A128E: mov     edx, [edi]
0x8A1290: mov     eax, [edx+4Ch]
0x8A1293: push    esi
0x8A1294: mov     ecx, edi
0x8A1296: call    eax
0x8A1298: cmp     word ptr [esi+4], 0
0x8A129D: jz      short loc_8A12B7
0x8A129F: add     word ptr [esi+6], 0FFFFh
0x8A12A4: movzx   eax, word ptr [esi+6]
0x8A12A8: test    ax, ax
0x8A12AB: jnz     short loc_8A12B7
0x8A12AD: mov     edx, [esi]
0x8A12AF: mov     eax, [edx]
0x8A12B1: push    1
0x8A12B3: mov     ecx, esi
0x8A12B5: call    eax
0x8A12B7: mov     edx, [edi]
0x8A12B9: mov     eax, [esp+2Ch+arg_0]
0x8A12BD: mov     edx, [edx+7Ch]
0x8A12C0: push    eax
0x8A12C1: mov     ecx, edi
0x8A12C3: call    edx
0x8A12C5: mov     ecx, [esp+2Ch+var_C]
0x8A12C9: mov     large fs:0, ecx
0x8A12D0: pop     ecx
0x8A12D1: pop     edi
0x8A12D2: pop     esi
0x8A12D3: pop     ebp
0x8A12D4: pop     ebx
0x8A12D5: add     esp, 18h
0x8A12D8: retn    4
0x8A12DB: add     ebx, 1
0x8A12DE: cmp     ebx, ebp
0x8A12E0: jb      loc_8A11BB
0x8A12E6: mov     ecx, ds:0BA7D98h
0x8A12EC: mov     edx, [ecx]
0x8A12EE: mov     eax, [edx+10h]
0x8A12F1: push    24h ; '$'
0x8A12F3: push    20h ; ' '
0x8A12F5: call    eax
0x8A12F7: mov     word ptr [eax+4], 20h ; ' '
0x8A12FD: mov     [esp+2Ch+var_10], eax
0x8A1301: mov     ecx, [esp+2Ch+var_18]
0x8A1305: push    ebp
0x8A1306: push    ecx
0x8A1307: mov     ecx, eax
0x8A1309: mov     [esp+34h+var_4], 0
0x8A1311: call    sub_8E86E0
0x8A1316: jmp     loc_8A1242
