0x8C1030: push    ebp
0x8C1031: mov     ebp, esp
0x8C1033: and     esp, 0FFFFFFF0h
0x8C1036: sub     esp, 0A4h
0x8C103C: fldz
0x8C103E: push    ebx
0x8C103F: mov     ebx, [ebp+arg_0]
0x8C1042: fst     [esp+0A8h+var_80]
0x8C1046: fst     [esp+0A8h+var_7C]
0x8C104A: push    esi
0x8C104B: mov     esi, [ebp+arg_4]
0x8C104E: fst     [esp+0ACh+var_78]
0x8C1052: fst     [esp+0ACh+var_74]
0x8C1056: push    edi
0x8C1057: fst     [esp+0B0h+var_70]
0x8C105B: mov     edi, ecx
0x8C105D: fst     [esp+0B0h+var_6C]
0x8C1061: xor     ecx, ecx
0x8C1063: cmp     esi, ecx
0x8C1065: fst     [esp+0B0h+var_68]
0x8C1069: fst     [esp+0B0h+var_64]
0x8C106D: mov     [esp+0B0h+var_90], ecx
0x8C1071: fst     [esp+0B0h+var_60]
0x8C1075: mov     [esp+0B0h+var_8C], ecx
0x8C1079: fst     [esp+0B0h+var_5C]
0x8C107D: mov     [esp+0B0h+var_88], ecx
0x8C1081: fst     [esp+0B0h+var_58]
0x8C1085: fst     [esp+0B0h+var_54]
0x8C1089: fst     [esp+0B0h+var_50]
0x8C108D: fst     [esp+0B0h+var_4C]
0x8C1091: fst     [esp+0B0h+var_48]
0x8C1095: fst     [esp+0B0h+var_44]
0x8C1099: fst     [esp+0B0h+var_40]
0x8C109D: fst     [esp+0B0h+var_3C]
0x8C10A1: fst     [esp+0B0h+var_38]
0x8C10A5: fst     [esp+0B0h+var_34]
0x8C10A9: fst     [esp+0B0h+var_30]
0x8C10B0: fst     [esp+0B0h+var_2C]
0x8C10B7: fst     [esp+0B0h+var_28]
0x8C10BE: fstp    [esp+0B0h+var_24]
0x8C10C5: jnz     short loc_8C10E4
0x8C10C7: mov     eax, [ebx+21Ch]
0x8C10CD: mov     edx, [eax+4]
0x8C10D0: push    ecx
0x8C10D1: push    ecx
0x8C10D2: lea     esi, [esp+0B8h+var_90]
0x8C10D6: push    90h
0x8C10DB: mov     ecx, esi
0x8C10DD: push    ecx
0x8C10DE: push    eax
0x8C10DF: call    edx
0x8C10E1: add     esp, 14h
0x8C10E4: push    esi
0x8C10E5: push    ebx
0x8C10E6: mov     ecx, edi
0x8C10E8: call    sub_8A01F0
0x8C10ED: fld     dword ptr [esi+14h]
0x8C10F0: fstp    [esp+0B0h+var_94]
0x8C10F4: mov     eax, [edi+4]
0x8C10F7: fld     dword ptr [esi+18h]
0x8C10FA: fstp    [esp+0B0h+var_9C]
0x8C10FE: fld     dword ptr [esi+1Ch]
0x8C1101: fstp    [esp+0B0h+var_98]
0x8C1105: fld     dword ptr [esi+10h]
0x8C1108: fstp    dword ptr [eax+10h]
0x8C110B: fld     [esp+0B0h+var_94]
0x8C110F: fstp    dword ptr [eax+14h]
0x8C1112: fld     [esp+0B0h+var_9C]
0x8C1116: fstp    dword ptr [eax+18h]
0x8C1119: fld     [esp+0B0h+var_98]
0x8C111D: fstp    dword ptr [eax+1Ch]
0x8C1120: fld     dword ptr [esi+34h]
0x8C1123: fstp    [esp+0B0h+var_98]
0x8C1127: fld     dword ptr [esi+38h]
0x8C112A: fstp    [esp+0B0h+var_9C]
0x8C112E: fld     dword ptr [esi+3Ch]
0x8C1131: fstp    [esp+0B0h+var_94]
0x8C1135: fld     dword ptr [esi+30h]
0x8C1138: fstp    dword ptr [eax+20h]
0x8C113B: fld     [esp+0B0h+var_98]
0x8C113F: fstp    dword ptr [eax+24h]
0x8C1142: fld     [esp+0B0h+var_9C]
0x8C1146: fstp    dword ptr [eax+28h]
0x8C1149: fld     [esp+0B0h+var_94]
0x8C114D: fstp    dword ptr [eax+2Ch]
0x8C1150: fld     dword ptr [esi+54h]
0x8C1153: fstp    [esp+0B0h+var_98]
0x8C1157: fld     dword ptr [esi+58h]
0x8C115A: fstp    [esp+0B0h+var_9C]
0x8C115E: fld     dword ptr [esi+5Ch]
0x8C1161: fstp    [esp+0B0h+var_94]
0x8C1165: fld     dword ptr [esi+50h]
0x8C1168: fstp    dword ptr [eax+30h]
0x8C116B: fld     [esp+0B0h+var_98]
0x8C116F: fstp    dword ptr [eax+34h]
0x8C1172: fld     [esp+0B0h+var_9C]
0x8C1176: fstp    dword ptr [eax+38h]
0x8C1179: fld     [esp+0B0h+var_94]
0x8C117D: fstp    dword ptr [eax+3Ch]
0x8C1180: fld     dword ptr [esi+24h]
0x8C1183: fstp    [esp+0B0h+var_98]
0x8C1187: fld     dword ptr [esi+28h]
0x8C118A: fstp    [esp+0B0h+var_9C]
0x8C118E: fld     dword ptr [esi+2Ch]
0x8C1191: fstp    [esp+0B0h+var_94]
0x8C1195: fld     dword ptr [esi+20h]
0x8C1198: fstp    dword ptr [eax+40h]
0x8C119B: fld     [esp+0B0h+var_98]
0x8C119F: fstp    dword ptr [eax+44h]
0x8C11A2: fld     [esp+0B0h+var_9C]
0x8C11A6: fstp    dword ptr [eax+48h]
0x8C11A9: fld     [esp+0B0h+var_94]
0x8C11AD: fstp    dword ptr [eax+4Ch]
0x8C11B0: fld     dword ptr [esi+44h]
0x8C11B3: fstp    [esp+0B0h+var_98]
0x8C11B7: fld     dword ptr [esi+48h]
0x8C11BA: fstp    [esp+0B0h+var_9C]
0x8C11BE: fld     dword ptr [esi+4Ch]
0x8C11C1: fstp    [esp+0B0h+var_94]
0x8C11C5: fld     dword ptr [esi+40h]
0x8C11C8: fstp    dword ptr [eax+50h]
0x8C11CB: fld     [esp+0B0h+var_98]
0x8C11CF: fstp    dword ptr [eax+54h]
0x8C11D2: fld     [esp+0B0h+var_9C]
0x8C11D6: fstp    dword ptr [eax+58h]
0x8C11D9: fld     [esp+0B0h+var_94]
0x8C11DD: fstp    dword ptr [eax+5Ch]
0x8C11E0: fld     dword ptr [esi+64h]
0x8C11E3: fstp    [esp+0B0h+var_98]
0x8C11E7: fld     dword ptr [esi+68h]
0x8C11EA: fstp    [esp+0B0h+var_9C]
0x8C11EE: fld     dword ptr [esi+6Ch]
0x8C11F1: fstp    [esp+0B0h+var_94]
0x8C11F5: fld     dword ptr [esi+60h]
0x8C11F8: pop     edi
0x8C11F9: fstp    dword ptr [eax+60h]
0x8C11FC: fld     [esp+0ACh+var_98]
0x8C1200: fstp    dword ptr [eax+64h]
0x8C1203: fld     [esp+0ACh+var_9C]
0x8C1207: fstp    dword ptr [eax+68h]
0x8C120A: fld     [esp+0ACh+var_94]
0x8C120E: fstp    dword ptr [eax+6Ch]
0x8C1211: fld     dword ptr [esi+70h]
0x8C1214: fstp    dword ptr [eax+70h]
0x8C1217: fld     dword ptr [esi+74h]
0x8C121A: fstp    dword ptr [eax+74h]
0x8C121D: fld     dword ptr [esi+78h]
0x8C1220: fstp    dword ptr [eax+78h]
0x8C1223: fld     dword ptr [esi+7Ch]
0x8C1226: fstp    dword ptr [eax+7Ch]
0x8C1229: fld     dword ptr [esi+80h]
0x8C122F: fstp    dword ptr [eax+80h]
0x8C1235: fld     dword ptr [esi+84h]
0x8C123B: pop     esi
0x8C123C: fstp    dword ptr [eax+84h]
0x8C1242: pop     ebx
0x8C1243: mov     esp, ebp
0x8C1245: pop     ebp
0x8C1246: retn    8
