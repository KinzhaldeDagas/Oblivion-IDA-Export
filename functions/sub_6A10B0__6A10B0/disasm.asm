0x6A10B0: fld     [esp+arg_0]
0x6A10B4: sub     esp, 8
0x6A10B7: push    esi
0x6A10B8: push    ecx
0x6A10B9: fstp    [esp+10h+var_10]; float
0x6A10BC: mov     esi, ecx
0x6A10BE: call    sub_69D9A0
0x6A10C3: test    al, al
0x6A10C5: jz      loc_6A12C4
0x6A10CB: mov     ecx, [esi+1Ch]
0x6A10CE: test    ecx, ecx
0x6A10D0: jz      loc_6A12C4
0x6A10D6: mov     eax, [ecx]
0x6A10D8: mov     edx, [eax+154h]
0x6A10DE: call    edx
0x6A10E0: test    eax, eax
0x6A10E2: jz      loc_6A12C4
0x6A10E8: fld     dword ptr [esi+38h]
0x6A10EB: mov     eax, [esi]
0x6A10ED: fadd    [esp+0Ch+arg_0]
0x6A10F1: mov     edx, [eax+70h]
0x6A10F4: push    ebx
0x6A10F5: mov     bl, [esi+24h]
0x6A10F8: mov     ecx, esi
0x6A10FA: fstp    dword ptr [esi+38h]
0x6A10FD: call    edx
0x6A10FF: fld1
0x6A1101: mov     ecx, [esi+1Ch]
0x6A1104: fstp    [esp+10h+var_8]
0x6A1108: mov     eax, [ecx]
0x6A110A: mov     edx, [eax+190h]
0x6A1110: call    edx
0x6A1112: test    al, al
0x6A1114: jz      loc_6A119E
0x6A111A: call    Magic_GetLifeDetectedShader
0x6A111F: cmp     [esi+34h], eax
0x6A1122: jz      short loc_6A119E
0x6A1124: mov     ecx, [esi+1Ch]
0x6A1127: mov     eax, [ecx]
0x6A1129: mov     edx, [eax+154h]
0x6A112F: push    edi
0x6A1130: call    edx
0x6A1132: mov     edi, eax
0x6A1134: push    edi
0x6A1135: push    offset dword_B35288
0x6A113A: call    NiRTTI__IsObjectOfRTTIType
0x6A113F: add     esp, 8
0x6A1142: test    al, al
0x6A1144: jz      short loc_6A114E
0x6A1146: fld     dword ptr [edi+0E8h]
0x6A114C: jmp     short loc_6A115B
0x6A114E: mov     ecx, [esi+1Ch]
0x6A1151: mov     eax, [ecx]
0x6A1153: mov     edx, [eax+328h]
0x6A1159: call    edx
0x6A115B: mov     ecx, [esi+1Ch]
0x6A115E: fstp    [esp+14h+var_8]
0x6A1162: call    sub_5E0AC0
0x6A1167: fstp    [esp+14h+var_4]
0x6A116B: fldz
0x6A116D: pop     edi
0x6A116E: fld     [esp+10h+var_4]
0x6A1172: fcom    st(1)
0x6A1174: fnstsw  ax
0x6A1176: fstp    st(1)
0x6A1178: test    ah, 41h
0x6A117B: jnz     short loc_6A119C
0x6A117D: fdivr   [esp+10h+var_8]
0x6A1181: fld1
0x6A1183: fcom    st(1)
0x6A1185: fnstsw  ax
0x6A1187: test    ah, 5
0x6A118A: jp      short loc_6A1194
0x6A118C: fstp    st(1)
0x6A118E: fstp    [esp+10h+var_8]
0x6A1192: jmp     short loc_6A119E
0x6A1194: fstp    st
0x6A1196: fstp    [esp+10h+var_8]
0x6A119A: jmp     short loc_6A119E
0x6A119C: fstp    st
0x6A119E: mov     eax, [esi+3Ch]
0x6A11A1: test    eax, eax
0x6A11A3: jz      short loc_6A1217
0x6A11A5: cmp     dword ptr [esi+40h], 0
0x6A11A9: jz      short loc_6A1217
0x6A11AB: fld     dword ptr [eax+80h]
0x6A11B1: movzx   eax, byte ptr [esi+24h]
0x6A11B5: mov     ecx, [esi+34h]
0x6A11B8: fstp    [esp+10h+var_4]
0x6A11BC: fld     dword ptr [esi+38h]
0x6A11BF: push    eax; float
0x6A11C0: sub     esp, 0Ch
0x6A11C3: fstp    [esp+20h+var_18]; float
0x6A11C7: fld     [esp+20h+arg_0]
0x6A11CB: fstp    [esp+20h+var_1C]; float
0x6A11CF: fld     [esp+20h+var_4]
0x6A11D3: fstp    [esp+20h+var_20]; float
0x6A11D6: call    sub_4ADBA0
0x6A11DB: mov     ecx, [esi+3Ch]
0x6A11DE: fstp    [esp+10h+var_4]
0x6A11E2: fld     [esp+10h+var_4]
0x6A11E6: push    1; char
0x6A11E8: fstp    dword ptr [ecx+80h]
0x6A11EE: mov     edx, [esi+3Ch]
0x6A11F1: fld     [esp+14h+var_8]
0x6A11F5: push    0; char
0x6A11F7: fstp    dword ptr [edx+124h]
0x6A11FD: push    ecx
0x6A11FE: fld     dword ptr [esi+38h]
0x6A1201: mov     ecx, [esi+3Ch]
0x6A1204: fstp    [esp+1Ch+var_1C]; float
0x6A1207: call    sub_7E51F0
0x6A120C: mov     eax, [esi+3Ch]
0x6A120F: cmp     dword ptr [eax+7Ch], 0
0x6A1213: jle     short loc_6A1217
0x6A1215: xor     bl, bl
0x6A1217: mov     eax, [esi+48h]
0x6A121A: test    eax, eax
0x6A121C: jz      short loc_6A127F
0x6A121E: movzx   ecx, byte ptr [esi+24h]
0x6A1222: fld     dword ptr [esi+20h]
0x6A1225: push    ecx; float
0x6A1226: mov     ecx, [esi+34h]
0x6A1229: sub     esp, 0Ch
0x6A122C: fstp    [esp+20h+var_18]; float
0x6A1230: fld     dword ptr [esi+38h]
0x6A1233: fstp    [esp+20h+var_1C]; float
0x6A1237: fld     [esp+20h+arg_0]
0x6A123B: fstp    [esp+20h+var_20]; float
0x6A123E: push    eax; int
0x6A123F: call    sub_4ADC90
0x6A1244: mov     eax, [esi+48h]
0x6A1247: fld     dword ptr [eax+18h]
0x6A124A: fld     [esp+10h+var_8]
0x6A124E: fld     st
0x6A1250: fmulp   st(2), st
0x6A1252: fxch    st(1)
0x6A1254: fstp    dword ptr [eax+18h]
0x6A1257: mov     eax, [esi+48h]
0x6A125A: fmul    dword ptr [eax+28h]
0x6A125D: fstp    dword ptr [eax+28h]
0x6A1260: mov     ecx, [esi+48h]
0x6A1263: fldz
0x6A1265: fcom    dword ptr [ecx+48h]
0x6A1268: fnstsw  ax
0x6A126A: test    ah, 5
0x6A126D: jnp     short loc_6A127B
0x6A126F: fcomp   dword ptr [ecx+38h]
0x6A1272: fnstsw  ax
0x6A1274: test    ah, 5
0x6A1277: jp      short loc_6A127F
0x6A1279: jmp     short loc_6A127D
0x6A127B: fstp    st
0x6A127D: xor     bl, bl
0x6A127F: cmp     byte ptr [esi+24h], 0
0x6A1283: jz      short loc_6A12BA
0x6A1285: test    bl, bl
0x6A1287: jz      short loc_6A12BA
0x6A1289: mov     ecx, [esi+1Ch]
0x6A128C: mov     edx, [ecx]
0x6A128E: mov     eax, [edx+190h]
0x6A1294: call    eax
0x6A1296: test    al, al
0x6A1298: jz      short loc_6A12B0
0x6A129A: mov     ecx, [esi+1Ch]
0x6A129D: mov     ecx, [ecx+58h]
0x6A12A0: test    ecx, ecx
0x6A12A2: jz      short loc_6A12B0
0x6A12A4: mov     edx, [ecx]
0x6A12A6: mov     eax, [edx+428h]
0x6A12AC: push    1
0x6A12AE: call    eax
0x6A12B0: pop     ebx
0x6A12B1: xor     al, al
0x6A12B3: pop     esi
0x6A12B4: add     esp, 8
0x6A12B7: retn    4
0x6A12BA: pop     ebx
0x6A12BB: mov     al, 1
0x6A12BD: pop     esi
0x6A12BE: add     esp, 8
0x6A12C1: retn    4
0x6A12C4: xor     al, al
0x6A12C6: pop     esi
0x6A12C7: add     esp, 8
0x6A12CA: retn    4
