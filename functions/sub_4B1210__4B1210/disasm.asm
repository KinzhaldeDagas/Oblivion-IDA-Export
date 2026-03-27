0x4B1210: push    ecx
0x4B1211: fldz
0x4B1213: push    ebx
0x4B1214: mov     ebx, 1
0x4B1219: test    ds:0B35AC0h, bl
0x4B121F: push    esi
0x4B1220: mov     esi, eax
0x4B1222: jz      short loc_4B1230
0x4B1224: fld     dword ptr ds:0B08178h
0x4B122A: fstp    [esp+0Ch+var_4]
0x4B122E: jmp     short loc_4B1234
0x4B1230: fst     [esp+0Ch+var_4]
0x4B1234: fld     [esp+0Ch+var_4]
0x4B1238: add     dword ptr [ecx+0B8h], 3
0x4B123F: mov     edx, [ecx+0B8h]
0x4B1245: fstp    dword ptr [ecx+108h]
0x4B124B: fst     dword ptr [ecx+10Ch]
0x4B1251: fst     dword ptr [ecx+110h]
0x4B1257: test    byte ptr ds:0B35AC0h, 2
0x4B125E: fld1
0x4B1260: fld     qword ptr ds:0A3B150h
0x4B1266: jnz     short loc_4B1283
0x4B1268: mov     eax, ds:0B333A0h
0x4B126D: cmp     dword ptr [eax+34h], 0
0x4B1271: jz      loc_4B1308
0x4B1277: cmp     ds:0B08180h, bl
0x4B127D: jnz     loc_4B1308
0x4B1283: mov     eax, esi
0x4B1285: test    eax, eax
0x4B1287: mov     [esp+0Ch+var_4], eax
0x4B128B: fild    [esp+0Ch+var_4]
0x4B128F: jge     short loc_4B1297
0x4B1291: fadd    dword ptr ds:0A2FC78h
0x4B1297: fmul    dword ptr ds:0B08188h
0x4B129D: mov     eax, ds:0B08158h
0x4B12A2: sub     eax, 0
0x4B12A5: fstp    [esp+0Ch+var_4]
0x4B12A9: jz      short loc_4B12F4
0x4B12AB: fld     st(2)
0x4B12AD: sub     eax, 2
0x4B12B0: fld     [esp+0Ch+var_4]
0x4B12B4: fucom   st(1)
0x4B12B6: fnstsw  ax
0x4B12B8: fstp    st(1)
0x4B12BA: jz      short loc_4B12DD
0x4B12BC: test    ah, 44h
0x4B12BF: jnp     short loc_4B12D1
0x4B12C1: fdivr   st, st(2)
0x4B12C3: fmul    dword ptr ds:0B08168h
0x4B12C9: fstp    dword ptr [ecx+10Ch]
0x4B12CF: jmp     short loc_4B1300
0x4B12D1: fstp    st
0x4B12D3: fld     st
0x4B12D5: fstp    dword ptr [ecx+10Ch]
0x4B12DB: jmp     short loc_4B1300
0x4B12DD: test    ah, 44h
0x4B12E0: jnp     short loc_4B12D1
0x4B12E2: fld     st
0x4B12E4: fmulp   st(1), st
0x4B12E6: fdivr   dword ptr ds:0B08168h
0x4B12EC: fstp    dword ptr [ecx+10Ch]
0x4B12F2: jmp     short loc_4B1300
0x4B12F4: fld     dword ptr ds:0B08168h
0x4B12FA: fstp    dword ptr [ecx+10Ch]
0x4B1300: add     edx, ebx
0x4B1302: mov     [ecx+0B8h], edx
0x4B1308: test    byte ptr ds:0B35AC0h, 4
0x4B130F: jnz     short loc_4B132D
0x4B1311: mov     edx, ds:0B333A0h
0x4B1317: cmp     dword ptr [edx+34h], 0
0x4B131B: jnz     loc_4B13FF
0x4B1321: cmp     ds:0B08180h, bl
0x4B1327: jnz     loc_4B13FF
0x4B132D: test    esi, esi
0x4B132F: mov     [esp+0Ch+var_4], esi
0x4B1333: fild    [esp+0Ch+var_4]
0x4B1337: jge     short loc_4B133F
0x4B1339: fadd    dword ptr ds:0A2FC78h
0x4B133F: mov     eax, ds:0B08160h
0x4B1344: fstp    [esp+0Ch+var_4]
0x4B1348: sub     eax, 0
0x4B134B: fld     [esp+0Ch+var_4]
0x4B134F: fld     st
0x4B1351: fmul    dword ptr ds:0B08190h
0x4B1357: fstp    [esp+0Ch+var_4]
0x4B135B: jz      loc_4B13E1
0x4B1361: sub     eax, ebx
0x4B1363: jz      short loc_4B13A6
0x4B1365: fstp    st
0x4B1367: fstp    st(1)
0x4B1369: fld     [esp+0Ch+var_4]
0x4B136D: fucom   st(2)
0x4B136F: fnstsw  ax
0x4B1371: fstp    st(2)
0x4B1373: test    ah, 44h
0x4B1376: jnp     short loc_4B1394
0x4B1378: fstp    st
0x4B137A: pop     esi
0x4B137B: fld     st
0x4B137D: fmulp   st(1), st
0x4B137F: fdivr   dword ptr ds:0B08170h
0x4B1385: add     [ecx+0B8h], ebx
0x4B138B: pop     ebx
0x4B138C: fstp    dword ptr [ecx+110h]
0x4B1392: pop     ecx
0x4B1393: retn
0x4B1394: add     [ecx+0B8h], ebx
0x4B139A: fstp    st(1)
0x4B139C: pop     esi
0x4B139D: fstp    dword ptr [ecx+110h]
0x4B13A3: pop     ebx
0x4B13A4: pop     ecx
0x4B13A5: retn
0x4B13A6: fxch    st(3)
0x4B13A8: fcomp   [esp+0Ch+var_4]
0x4B13AC: fnstsw  ax
0x4B13AE: test    ah, 44h
0x4B13B1: jnp     short loc_4B13CD
0x4B13B3: fstp    st
0x4B13B5: pop     esi
0x4B13B6: fdivrp  st(1), st
0x4B13B8: fmul    dword ptr ds:0B08170h
0x4B13BE: add     [ecx+0B8h], ebx
0x4B13C4: pop     ebx
0x4B13C5: fstp    dword ptr [ecx+110h]
0x4B13CB: pop     ecx
0x4B13CC: retn
0x4B13CD: add     [ecx+0B8h], ebx
0x4B13D3: fstp    st(2)
0x4B13D5: fstp    st
0x4B13D7: pop     esi
0x4B13D8: fstp    dword ptr [ecx+110h]
0x4B13DE: pop     ebx
0x4B13DF: pop     ecx
0x4B13E0: retn
0x4B13E1: fstp    st
0x4B13E3: pop     esi
0x4B13E4: fstp    st(2)
0x4B13E6: fstp    st(1)
0x4B13E8: fstp    st
0x4B13EA: fld     dword ptr ds:0B08170h
0x4B13F0: add     [ecx+0B8h], ebx
0x4B13F6: fstp    dword ptr [ecx+110h]
0x4B13FC: pop     ebx
0x4B13FD: pop     ecx
0x4B13FE: retn
0x4B13FF: fstp    st(2)
0x4B1401: pop     esi
0x4B1402: fstp    st(1)
0x4B1404: pop     ebx
0x4B1405: fstp    st
0x4B1407: pop     ecx
0x4B1408: retn
