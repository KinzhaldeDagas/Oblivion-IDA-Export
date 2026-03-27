0x4C1170: sub     esp, 30h
0x4C1173: push    esi
0x4C1174: mov     esi, ecx
0x4C1176: test    byte ptr [esi+1Ch], 8
0x4C117A: mov     [esp+34h+var_30], esi
0x4C117E: jz      loc_4C142F
0x4C1184: push    ebx
0x4C1185: push    ebp
0x4C1186: xor     ebx, ebx
0x4C1188: push    edi
0x4C1189: mov     [esp+40h+var_2C], ebx
0x4C118D: jmp     short loc_4C1198
0x4C118F: align 10h
0x4C1190: mov     esi, [esp+40h+var_30]
0x4C1194: mov     ebx, [esp+40h+var_2C]
0x4C1198: xor     ebp, ebp
0x4C119A: xor     edi, edi
0x4C119C: lea     esp, [esp+0]
0x4C11A0: mov     eax, [esp+40h+arg_0]
0x4C11A4: test    eax, eax
0x4C11A6: jz      short loc_4C11C0
0x4C11A8: mov     ecx, [esi+24h]
0x4C11AB: mov     edx, [ecx+4]
0x4C11AE: mov     ecx, [edx+ebx]
0x4C11B1: add     ecx, edi
0x4C11B3: push    ecx
0x4C11B4: push    eax
0x4C11B5: mov     ecx, esi
0x4C11B7: call    sub_4C1080
0x4C11BC: test    al, al
0x4C11BE: jz      short loc_4C11F3
0x4C11C0: mov     edx, [esi+24h]
0x4C11C3: mov     eax, [edx+8]
0x4C11C6: mov     eax, [eax+ebx]
0x4C11C9: mov     ecx, ds:0B3F9A8h
0x4C11CF: mov     [eax+edi], ecx
0x4C11D2: mov     edx, ds:0B3F9ACh
0x4C11D8: add     eax, edi
0x4C11DA: mov     [eax+4], edx
0x4C11DD: mov     ecx, ds:0B3F9B0h
0x4C11E3: mov     [eax+8], ecx
0x4C11E6: mov     edx, [esi+24h]
0x4C11E9: mov     eax, [edx+10h]
0x4C11EC: mov     ecx, [eax+ebx]
0x4C11EF: mov     byte ptr [ecx+ebp], 0
0x4C11F3: add     edi, 0Ch
0x4C11F6: add     ebp, 1
0x4C11F9: cmp     edi, 0D8Ch
0x4C11FF: jl      short loc_4C11A0
0x4C1201: mov     ebp, ds:0B35BC8h
0x4C1207: mov     [esp+40h+var_28], 200h
0x4C120F: jmp     short loc_4C1219
0x4C1211: mov     esi, [esp+40h+var_30]
0x4C1215: mov     ebx, [esp+40h+var_2C]
0x4C1219: movzx   eax, word ptr [ebp+0]
0x4C121D: movzx   ecx, word ptr [ebp+2]
0x4C1221: add     ebp, 2
0x4C1224: movzx   edx, word ptr [ebp+2]
0x4C1228: movzx   edi, ax
0x4C122B: mov     eax, [esi+24h]
0x4C122E: mov     eax, [eax+4]
0x4C1231: mov     eax, [ebx+eax]
0x4C1234: movzx   esi, cx
0x4C1237: lea     esi, [esi+esi*2]
0x4C123A: lea     edi, [edi+edi*2]
0x4C123D: add     esi, esi
0x4C123F: add     esi, esi
0x4C1241: add     edi, edi
0x4C1243: add     edi, edi
0x4C1245: fld     dword ptr [eax+esi]
0x4C1248: add     ebp, 2
0x4C124B: movzx   ebx, dx
0x4C124E: fsub    dword ptr [eax+edi]
0x4C1251: lea     ebx, [ebx+ebx*2]
0x4C1254: fstp    [esp+40h+var_C]
0x4C1258: add     ebx, ebx
0x4C125A: fld     dword ptr [eax+esi+4]
0x4C125E: add     ebx, ebx
0x4C1260: fsub    dword ptr [eax+edi+4]
0x4C1264: lea     ecx, [esp+40h+var_24]
0x4C1268: push    ecx
0x4C1269: add     ebp, 2
0x4C126C: fstp    [esp+44h+var_8]
0x4C1270: fld     dword ptr [eax+esi+8]
0x4C1274: fsub    dword ptr [eax+edi+8]
0x4C1278: fstp    [esp+44h+var_4]
0x4C127C: fld     dword ptr [eax+ebx]
0x4C127F: fsub    dword ptr [eax+esi]
0x4C1282: fstp    [esp+44h+var_18]
0x4C1286: fld     dword ptr [eax+ebx+4]
0x4C128A: fsub    dword ptr [eax+esi+4]
0x4C128E: fstp    [esp+44h+var_14]
0x4C1292: fld     dword ptr [eax+ebx+8]
0x4C1296: fsub    dword ptr [eax+esi+8]
0x4C129A: fstp    [esp+44h+var_10]
0x4C129E: fld     [esp+44h+var_10]
0x4C12A2: fld     st
0x4C12A4: fld     [esp+44h+var_8]
0x4C12A8: fld     st
0x4C12AA: fmulp   st(2), st
0x4C12AC: fld     [esp+44h+var_14]
0x4C12B0: fld     st
0x4C12B2: fld     [esp+44h+var_4]
0x4C12B6: fld     st
0x4C12B8: fmulp   st(2), st
0x4C12BA: fxch    st(4)
0x4C12BC: fsubrp  st(1), st
0x4C12BE: fstp    [esp+44h+var_24]
0x4C12C2: fld     [esp+44h+var_18]
0x4C12C6: fld     st
0x4C12C8: fmulp   st(4), st
0x4C12CA: fld     [esp+44h+var_C]
0x4C12CE: fld     st
0x4C12D0: fmulp   st(6), st
0x4C12D2: fxch    st(4)
0x4C12D4: fsubrp  st(5), st
0x4C12D6: fxch    st(4)
0x4C12D8: fstp    [esp+44h+var_20]
0x4C12DC: fmulp   st(2), st
0x4C12DE: fmulp   st(2), st
0x4C12E0: fsubrp  st(1), st
0x4C12E2: fstp    [esp+44h+var_1C]
0x4C12E6: call    sub_4BFAA0
0x4C12EB: mov     edx, [esp+44h+arg_0]
0x4C12EF: add     esp, 4
0x4C12F2: test    edx, edx
0x4C12F4: jz      short loc_4C131C
0x4C12F6: mov     eax, [esp+40h+var_30]
0x4C12FA: mov     ecx, [eax+24h]
0x4C12FD: mov     eax, [ecx+4]
0x4C1300: mov     ecx, [esp+40h+var_2C]
0x4C1304: mov     eax, [eax+ecx]
0x4C1307: mov     ecx, [esp+40h+var_30]
0x4C130B: add     eax, edi
0x4C130D: push    eax
0x4C130E: push    edx
0x4C130F: call    sub_4C1080
0x4C1314: test    al, al
0x4C1316: mov     edx, [esp+40h+arg_0]
0x4C131A: jz      short loc_4C134C
0x4C131C: mov     ecx, [esp+40h+var_30]
0x4C1320: mov     eax, [ecx+24h]
0x4C1323: mov     ecx, [eax+8]
0x4C1326: mov     eax, [esp+40h+var_2C]
0x4C132A: mov     eax, [ecx+eax]
0x4C132D: fld     dword ptr [eax+edi]
0x4C1330: add     eax, edi
0x4C1332: fadd    [esp+40h+var_24]
0x4C1336: fstp    dword ptr [eax]
0x4C1338: fld     [esp+40h+var_20]
0x4C133C: fadd    dword ptr [eax+4]
0x4C133F: fstp    dword ptr [eax+4]
0x4C1342: fld     dword ptr [eax+8]
0x4C1345: fadd    [esp+40h+var_1C]
0x4C1349: fstp    dword ptr [eax+8]
0x4C134C: test    edx, edx
0x4C134E: mov     ecx, [esp+40h+var_30]
0x4C1352: jz      short loc_4C1376
0x4C1354: mov     eax, [ecx+24h]
0x4C1357: mov     eax, [eax+4]
0x4C135A: mov     edi, [esp+40h+var_2C]
0x4C135E: mov     eax, [eax+edi]
0x4C1361: add     eax, esi
0x4C1363: push    eax
0x4C1364: push    edx
0x4C1365: call    sub_4C1080
0x4C136A: test    al, al
0x4C136C: mov     ecx, [esp+40h+var_30]
0x4C1370: mov     edx, [esp+40h+arg_0]
0x4C1374: jz      short loc_4C13A2
0x4C1376: mov     eax, [ecx+24h]
0x4C1379: mov     eax, [eax+8]
0x4C137C: mov     edi, [esp+40h+var_2C]
0x4C1380: mov     eax, [eax+edi]
0x4C1383: fld     dword ptr [eax+esi]
0x4C1386: add     eax, esi
0x4C1388: fadd    [esp+40h+var_24]
0x4C138C: fstp    dword ptr [eax]
0x4C138E: fld     dword ptr [eax+4]
0x4C1391: fadd    [esp+40h+var_20]
0x4C1395: fstp    dword ptr [eax+4]
0x4C1398: fld     [esp+40h+var_1C]
0x4C139C: fadd    dword ptr [eax+8]
0x4C139F: fstp    dword ptr [eax+8]
0x4C13A2: test    edx, edx
0x4C13A4: jz      short loc_4C13C4
0x4C13A6: mov     eax, [ecx+24h]
0x4C13A9: mov     eax, [eax+4]
0x4C13AC: mov     esi, [esp+40h+var_2C]
0x4C13B0: mov     eax, [eax+esi]
0x4C13B3: add     eax, ebx
0x4C13B5: push    eax
0x4C13B6: push    edx
0x4C13B7: call    sub_4C1080
0x4C13BC: test    al, al
0x4C13BE: jz      short loc_4C13F0
0x4C13C0: mov     ecx, [esp+40h+var_30]
0x4C13C4: mov     ecx, [ecx+24h]
0x4C13C7: mov     edx, [ecx+8]
0x4C13CA: mov     eax, [esp+40h+var_2C]
0x4C13CE: mov     eax, [edx+eax]
0x4C13D1: fld     dword ptr [eax+ebx]
0x4C13D4: add     eax, ebx
0x4C13D6: fadd    [esp+40h+var_24]
0x4C13DA: fstp    dword ptr [eax]
0x4C13DC: fld     dword ptr [eax+4]
0x4C13DF: fadd    [esp+40h+var_20]
0x4C13E3: fstp    dword ptr [eax+4]
0x4C13E6: fld     [esp+40h+var_1C]
0x4C13EA: fadd    dword ptr [eax+8]
0x4C13ED: fstp    dword ptr [eax+8]
0x4C13F0: sub     [esp+40h+var_28], 1
0x4C13F5: jnz     loc_4C1211
0x4C13FB: mov     ecx, [esp+40h+var_30]
0x4C13FF: mov     edx, [ecx+24h]
0x4C1402: mov     eax, [edx+8]
0x4C1405: mov     esi, [esp+40h+var_2C]
0x4C1409: mov     ecx, [eax+esi]
0x4C140C: push    0Ch
0x4C140E: push    121h
0x4C1413: push    ecx
0x4C1414: call    sub_725890
0x4C1419: add     esi, 4
0x4C141C: add     esp, 0Ch
0x4C141F: cmp     esi, 10h
0x4C1422: mov     [esp+40h+var_2C], esi
0x4C1426: jl      loc_4C1190
0x4C142C: pop     edi
0x4C142D: pop     ebp
0x4C142E: pop     ebx
0x4C142F: pop     esi
0x4C1430: add     esp, 30h
0x4C1433: retn    4
