0x7A1040: push    ebp
0x7A1041: mov     ebp, esp
0x7A1043: push    0FFFFFFFFh
0x7A1045: push    offset SEH_7A1040
0x7A104A: mov     eax, large fs:0
0x7A1050: push    eax
0x7A1051: sub     esp, 1Ch
0x7A1054: push    ebx
0x7A1055: push    esi
0x7A1056: push    edi
0x7A1057: mov     eax, ds:0B30AACh
0x7A105C: xor     eax, ebp
0x7A105E: push    eax
0x7A105F: lea     eax, [ebp+var_C]
0x7A1062: mov     large fs:0, eax
0x7A1068: mov     [ebp+var_10], esp
0x7A106B: mov     esi, ecx
0x7A106D: mov     [ebp+var_14], esi
0x7A1070: mov     eax, [ebp+arg_C]
0x7A1073: push    eax
0x7A1074: lea     ecx, [ebp+var_28]
0x7A1077: call    sub_79EE40
0x7A107C: mov     ecx, [esi+4]
0x7A107F: xor     eax, eax
0x7A1081: cmp     ecx, eax
0x7A1083: mov     [ebp+var_4], eax
0x7A1086: jnz     short loc_7A108C
0x7A1088: xor     ebx, ebx
0x7A108A: jmp     short loc_7A1094
0x7A108C: mov     ebx, [esi+0Ch]
0x7A108F: sub     ebx, ecx
0x7A1091: sar     ebx, 4
0x7A1094: mov     edi, [ebp+arg_8]
0x7A1097: cmp     edi, eax
0x7A1099: jz      loc_7A12A6
0x7A109F: cmp     ecx, eax
0x7A10A1: jz      short loc_7A10AB
0x7A10A3: mov     eax, [esi+8]
0x7A10A6: sub     eax, ecx
0x7A10A8: sar     eax, 4
0x7A10AB: mov     edx, 0FFFFFFFh
0x7A10B0: sub     edx, eax
0x7A10B2: cmp     edx, edi
0x7A10B4: jnb     short loc_7A10BB
0x7A10B6: call    sub_790B90
0x7A10BB: test    ecx, ecx
0x7A10BD: jnz     short loc_7A10C3
0x7A10BF: xor     eax, eax
0x7A10C1: jmp     short loc_7A10CB
0x7A10C3: mov     eax, [esi+8]
0x7A10C6: sub     eax, ecx
0x7A10C8: sar     eax, 4
0x7A10CB: add     eax, edi
0x7A10CD: cmp     ebx, eax
0x7A10CF: jnb     loc_7A11E5
0x7A10D5: mov     eax, ebx
0x7A10D7: shr     eax, 1
0x7A10D9: mov     edx, 0FFFFFFFh
0x7A10DE: sub     edx, eax
0x7A10E0: cmp     edx, ebx
0x7A10E2: jnb     short loc_7A10E8
0x7A10E4: xor     ebx, ebx
0x7A10E6: jmp     short loc_7A10EA
0x7A10E8: add     ebx, eax
0x7A10EA: test    ecx, ecx
0x7A10EC: jnz     short loc_7A10F2
0x7A10EE: xor     eax, eax
0x7A10F0: jmp     short loc_7A10FA
0x7A10F2: mov     eax, [esi+8]
0x7A10F5: sub     eax, ecx
0x7A10F7: sar     eax, 4
0x7A10FA: add     eax, edi
0x7A10FC: cmp     ebx, eax
0x7A10FE: jnb     short loc_7A1113
0x7A1100: test    ecx, ecx
0x7A1102: jnz     short loc_7A1108
0x7A1104: xor     eax, eax
0x7A1106: jmp     short loc_7A1110
0x7A1108: mov     eax, [esi+8]
0x7A110B: sub     eax, ecx
0x7A110D: sar     eax, 4
0x7A1110: lea     ebx, [eax+edi]
0x7A1113: push    0
0x7A1115: push    ebx; char *
0x7A1116: call    sub_794550
0x7A111B: mov     ecx, [esi+4]
0x7A111E: mov     byte ptr [ebp+var_18], 0
0x7A1122: mov     edx, [ebp+var_18]
0x7A1125: push    edx
0x7A1126: mov     [ebp+arg_8], eax
0x7A1129: mov     edx, [ebp+arg_8]
0x7A112C: push    edx
0x7A112D: push    esi
0x7A112E: push    eax
0x7A112F: mov     [ebp+arg_C], eax
0x7A1132: mov     eax, [ebp+arg_4]
0x7A1135: push    eax
0x7A1136: push    ecx
0x7A1137: mov     byte ptr [ebp+var_4], 1
0x7A113B: call    sub_7A0D40
0x7A1140: add     esp, 20h
0x7A1143: lea     ecx, [ebp+var_28]
0x7A1146: push    ecx
0x7A1147: push    edi
0x7A1148: push    eax
0x7A1149: mov     ecx, esi
0x7A114B: mov     [ebp+arg_8], eax
0x7A114E: call    sub_7A0F70
0x7A1153: mov     ecx, [esi+8]
0x7A1156: mov     byte ptr [ebp+var_18], 0
0x7A115A: mov     edx, [ebp+var_18]
0x7A115D: push    edx
0x7A115E: mov     [ebp+arg_8], eax
0x7A1161: mov     edx, [ebp+arg_8]
0x7A1164: push    edx
0x7A1165: push    esi
0x7A1166: push    eax
0x7A1167: mov     eax, [ebp+arg_4]
0x7A116A: push    ecx
0x7A116B: push    eax
0x7A116C: call    sub_7A0D40
0x7A1171: mov     ecx, [esi+4]
0x7A1174: add     esp, 18h
0x7A1177: test    ecx, ecx
0x7A1179: jnz     short loc_7A117F
0x7A117B: xor     eax, eax
0x7A117D: jmp     short loc_7A1187
0x7A117F: mov     eax, [esi+8]
0x7A1182: sub     eax, ecx
0x7A1184: sar     eax, 4
0x7A1187: add     edi, eax
0x7A1189: test    ecx, ecx
0x7A118B: jz      short loc_7A11A8
0x7A118D: mov     edx, [ebp+arg_8]
0x7A1190: mov     eax, [esi+8]
0x7A1193: push    edx
0x7A1194: push    esi
0x7A1195: push    eax
0x7A1196: push    ecx
0x7A1197: call    sub_7A0CD0
0x7A119C: mov     ecx, [esi+4]
0x7A119F: push    ecx
0x7A11A0: call    FormHeapFree
0x7A11A5: add     esp, 14h
0x7A11A8: mov     eax, [ebp+arg_C]
0x7A11AB: shl     ebx, 4
0x7A11AE: add     ebx, eax
0x7A11B0: shl     edi, 4
0x7A11B3: add     edi, eax
0x7A11B5: mov     [esi+0Ch], ebx
0x7A11B8: mov     [esi+8], edi
0x7A11BB: mov     [esi+4], eax
0x7A11BE: jmp     loc_7A12A6
0x7A11C3: mov     edx, [ebp+arg_8]
0x7A11C6: mov     esi, [ebp+arg_C]
0x7A11C9: mov     ecx, [ebp+var_14]
0x7A11CC: push    edx
0x7A11CD: push    esi
0x7A11CE: call    sub_7A0FB0
0x7A11D3: push    esi
0x7A11D4: call    FormHeapFree
0x7A11D9: add     esp, 4
0x7A11DC: push    0
0x7A11DE: push    0
0x7A11E0: call    ThrowException??
0x7A11E5: mov     eax, [esi+8]
0x7A11E8: mov     ebx, [ebp+arg_4]
0x7A11EB: mov     ecx, eax
0x7A11ED: sub     ecx, ebx
0x7A11EF: sar     ecx, 4
0x7A11F2: cmp     ecx, edi
0x7A11F4: mov     [ebp+var_18], eax
0x7A11F7: jnb     short loc_7A126F
0x7A11F9: mov     ecx, edi
0x7A11FB: shl     ecx, 4
0x7A11FE: mov     [ebp+arg_C], ecx
0x7A1201: add     ecx, ebx
0x7A1203: push    ecx
0x7A1204: push    eax
0x7A1205: push    ebx
0x7A1206: mov     ecx, esi
0x7A1208: call    sub_7A0FD0
0x7A120D: mov     eax, [esi+8]
0x7A1210: mov     ecx, eax
0x7A1212: sub     ecx, ebx
0x7A1214: sar     ecx, 4
0x7A1217: lea     edx, [ebp+var_28]
0x7A121A: push    edx
0x7A121B: sub     edi, ecx
0x7A121D: push    edi
0x7A121E: push    eax
0x7A121F: mov     ecx, esi
0x7A1221: mov     byte ptr [ebp+var_4], 3
0x7A1225: call    sub_7A0F70
0x7A122A: mov     eax, [ebp+arg_C]
0x7A122D: add     [esi+8], eax
0x7A1230: mov     esi, [esi+8]
0x7A1233: lea     edx, [ebp+var_28]
0x7A1236: push    edx
0x7A1237: sub     esi, eax
0x7A1239: push    esi
0x7A123A: push    ebx
0x7A123B: mov     [ebp+var_4], 0
0x7A1242: call    sub_7A0BF0
0x7A1247: add     esp, 0Ch
0x7A124A: jmp     short loc_7A12A6
0x7A124C: mov     ecx, [ebp+var_14]
0x7A124F: mov     eax, [ebp+arg_8]
0x7A1252: mov     edx, [ecx+8]
0x7A1255: shl     eax, 4
0x7A1258: add     edx, eax
0x7A125A: push    edx
0x7A125B: mov     edx, [ebp+arg_4]
0x7A125E: add     eax, edx
0x7A1260: push    eax
0x7A1261: call    sub_7A0FB0
0x7A1266: push    0
0x7A1268: push    0
0x7A126A: call    ThrowException??
0x7A126F: shl     edi, 4
0x7A1272: mov     ecx, edi
0x7A1274: push    eax
0x7A1275: mov     edi, eax
0x7A1277: sub     edi, ecx
0x7A1279: push    eax
0x7A127A: mov     [ebp+arg_C], ecx
0x7A127D: push    edi
0x7A127E: mov     ecx, esi
0x7A1280: call    sub_7A0FD0
0x7A1285: mov     [esi+8], eax
0x7A1288: mov     eax, [ebp+var_18]
0x7A128B: push    eax
0x7A128C: push    edi
0x7A128D: push    ebx
0x7A128E: call    sub_7A1000
0x7A1293: mov     edx, [ebp+arg_C]
0x7A1296: lea     ecx, [ebp+var_28]
0x7A1299: push    ecx
0x7A129A: add     edx, ebx
0x7A129C: push    edx
0x7A129D: push    ebx
0x7A129E: call    sub_7A0BF0
0x7A12A3: add     esp, 18h
0x7A12A6: mov     esi, [ebp+var_24]
0x7A12A9: test    esi, esi
0x7A12AB: jz      short loc_7A12C8
0x7A12AD: mov     eax, [ebp+arg_8]
0x7A12B0: mov     edx, [ebp+var_20]
0x7A12B3: push    eax
0x7A12B4: lea     ecx, [ebp+var_28]
0x7A12B7: push    ecx
0x7A12B8: push    edx
0x7A12B9: push    esi
0x7A12BA: call    sub_79E150
0x7A12BF: push    esi
0x7A12C0: call    FormHeapFree
0x7A12C5: add     esp, 14h
0x7A12C8: mov     ecx, [ebp+var_C]
0x7A12CB: mov     large fs:0, ecx
0x7A12D2: pop     ecx
0x7A12D3: pop     edi
0x7A12D4: pop     esi
0x7A12D5: pop     ebx
0x7A12D6: mov     esp, ebp
0x7A12D8: pop     ebp
0x7A12D9: retn    10h
