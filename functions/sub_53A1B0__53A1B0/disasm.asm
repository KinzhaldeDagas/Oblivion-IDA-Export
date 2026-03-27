0x53A1B0: sub     esp, 8
0x53A1B3: fld1
0x53A1B5: mov     edx, ds:0B11ABCh
0x53A1BB: lea     eax, [esp+8+var_4]
0x53A1BF: fst     [esp+8+var_8]
0x53A1C2: push    eax
0x53A1C3: fstp    [esp+0Ch+var_4]
0x53A1C7: lea     ecx, [esp+0Ch+var_8]
0x53A1CB: push    ecx
0x53A1CC: push    offset aFF; "%f, %f"
0x53A1D1: push    edx; Src
0x53A1D2: call    _sscanf
0x53A1D7: fld     [esp+18h+var_8]
0x53A1DB: mov     edx, ds:0B11AB4h
0x53A1E1: fstp    dword ptr ds:0B2EC70h
0x53A1E7: fld     [esp+18h+var_4]
0x53A1EB: lea     eax, [esp+18h+var_8]
0x53A1EF: push    eax
0x53A1F0: fstp    dword ptr ds:0B2EC74h
0x53A1F6: fld1
0x53A1F8: lea     ecx, [esp+1Ch+var_4]
0x53A1FC: push    ecx
0x53A1FD: fst     [esp+20h+var_4]
0x53A201: push    offset aFF; "%f, %f"
0x53A206: fstp    [esp+24h+var_8]
0x53A20A: push    edx; Src
0x53A20B: call    _sscanf
0x53A210: fld     [esp+28h+var_4]
0x53A214: mov     edx, ds:0B11AACh
0x53A21A: fstp    dword ptr ds:0B2EC78h
0x53A220: fld     [esp+28h+var_8]
0x53A224: lea     eax, [esp+28h+var_8]
0x53A228: push    eax
0x53A229: fstp    dword ptr ds:0B2EC7Ch
0x53A22F: fld1
0x53A231: lea     ecx, [esp+2Ch+var_4]
0x53A235: push    ecx
0x53A236: fst     [esp+30h+var_4]
0x53A23A: push    offset aFF; "%f, %f"
0x53A23F: fstp    [esp+34h+var_8]
0x53A243: push    edx; Src
0x53A244: call    _sscanf
0x53A249: fld     [esp+38h+var_4]
0x53A24D: mov     edx, ds:0B11AA4h
0x53A253: fstp    dword ptr ds:0B2EC80h
0x53A259: fld     [esp+38h+var_8]
0x53A25D: lea     eax, [esp+38h+var_8]
0x53A261: push    eax
0x53A262: fstp    dword ptr ds:0B2EC84h
0x53A268: fld1
0x53A26A: lea     ecx, [esp+3Ch+var_4]
0x53A26E: push    ecx
0x53A26F: fst     [esp+40h+var_4]
0x53A273: push    offset aFF; "%f, %f"
0x53A278: fstp    [esp+44h+var_8]
0x53A27C: push    edx; Src
0x53A27D: call    _sscanf
0x53A282: fld     [esp+48h+var_4]
0x53A286: mov     edx, ds:0B11A9Ch
0x53A28C: fstp    dword ptr ds:0B2EC88h
0x53A292: fld     [esp+48h+var_8]
0x53A296: add     esp, 40h
0x53A299: lea     eax, [esp+8+var_8]
0x53A29C: fstp    dword ptr ds:0B2EC8Ch
0x53A2A2: fld1
0x53A2A4: push    eax
0x53A2A5: lea     ecx, [esp+0Ch+var_4]
0x53A2A9: fst     [esp+0Ch+var_4]
0x53A2AD: push    ecx
0x53A2AE: fstp    [esp+10h+var_8]
0x53A2B2: push    offset aFF; "%f, %f"
0x53A2B7: push    edx; Src
0x53A2B8: call    _sscanf
0x53A2BD: fld     [esp+18h+var_4]
0x53A2C1: fstp    dword ptr ds:0B2EC90h
0x53A2C7: lea     eax, [esp+18h+var_8]
0x53A2CB: fld     [esp+18h+var_8]
0x53A2CF: push    eax
0x53A2D0: fstp    dword ptr ds:0B2EC94h
0x53A2D6: fld1
0x53A2D8: fst     [esp+1Ch+var_4]
0x53A2DC: fstp    [esp+1Ch+var_8]
0x53A2E0: mov     edx, ds:0B11A94h
0x53A2E6: lea     ecx, [esp+1Ch+var_4]
0x53A2EA: push    ecx
0x53A2EB: push    offset aFF; "%f, %f"
0x53A2F0: push    edx; Src
0x53A2F1: call    _sscanf
0x53A2F6: fld     [esp+28h+var_4]
0x53A2FA: mov     edx, ds:0B11A8Ch
0x53A300: fstp    dword ptr ds:0B2EC98h
0x53A306: fld     [esp+28h+var_8]
0x53A30A: lea     eax, [esp+28h+var_8]
0x53A30E: push    eax
0x53A30F: fstp    dword ptr ds:0B2EC9Ch
0x53A315: fld1
0x53A317: lea     ecx, [esp+2Ch+var_4]
0x53A31B: push    ecx
0x53A31C: fst     [esp+30h+var_4]
0x53A320: push    offset aFF; "%f, %f"
0x53A325: fstp    [esp+34h+var_8]
0x53A329: push    edx; Src
0x53A32A: call    _sscanf
0x53A32F: fld     [esp+38h+var_4]
0x53A333: mov     edx, ds:0B11A84h
0x53A339: fstp    dword ptr ds:0B2ECA0h
0x53A33F: fld     [esp+38h+var_8]
0x53A343: lea     eax, [esp+38h+var_8]
0x53A347: push    eax
0x53A348: fstp    dword ptr ds:0B2ECA4h
0x53A34E: fld1
0x53A350: lea     ecx, [esp+3Ch+var_4]
0x53A354: push    ecx
0x53A355: fst     [esp+40h+var_4]
0x53A359: push    offset aFF; "%f, %f"
0x53A35E: fstp    [esp+44h+var_8]
0x53A362: push    edx; Src
0x53A363: call    _sscanf
0x53A368: fld     [esp+48h+var_4]
0x53A36C: mov     edx, ds:0B11A7Ch
0x53A372: fstp    dword ptr ds:0B2ECC0h
0x53A378: fld     [esp+48h+var_8]
0x53A37C: add     esp, 40h
0x53A37F: lea     eax, [esp+8+var_8]
0x53A382: fstp    dword ptr ds:0B2ECC4h
0x53A388: fld1
0x53A38A: push    eax
0x53A38B: lea     ecx, [esp+0Ch+var_4]
0x53A38F: fst     [esp+0Ch+var_4]
0x53A393: push    ecx
0x53A394: fstp    [esp+10h+var_8]
0x53A398: push    offset aFF; "%f, %f"
0x53A39D: push    edx; Src
0x53A39E: call    _sscanf
0x53A3A3: fld     [esp+18h+var_4]
0x53A3A7: mov     edx, ds:0B11A74h
0x53A3AD: fstp    dword ptr ds:0B2ECC8h
0x53A3B3: fld     [esp+18h+var_8]
0x53A3B7: lea     eax, [esp+18h+var_8]
0x53A3BB: push    eax
0x53A3BC: fstp    dword ptr ds:0B2ECCCh
0x53A3C2: fld1
0x53A3C4: lea     ecx, [esp+1Ch+var_4]
0x53A3C8: push    ecx
0x53A3C9: fst     [esp+20h+var_4]
0x53A3CD: push    offset aFF; "%f, %f"
0x53A3D2: fstp    [esp+24h+var_8]
0x53A3D6: push    edx; Src
0x53A3D7: call    _sscanf
0x53A3DC: fld     [esp+28h+var_4]
0x53A3E0: fstp    dword ptr ds:0B2ECD0h
0x53A3E6: add     esp, 20h
0x53A3E9: fld     [esp+8+var_8]
0x53A3EC: xor     ecx, ecx
0x53A3EE: fstp    dword ptr ds:0B2ECD4h
0x53A3F4: fld     dword ptr ds:0B11A34h
0x53A3FA: fstp    dword ptr ds:0B2EC58h
0x53A400: fld     dword ptr ds:0B11A3Ch
0x53A406: fstp    dword ptr ds:0B2EC54h
0x53A40C: fld     dword ptr ds:0B11A24h
0x53A412: fld     dword ptr ds:0B11A2Ch
0x53A418: fldz
0x53A41A: fcom    dword ptr [ecx+0B2EE68h]
0x53A420: fnstsw  ax
0x53A422: test    ah, 41h
0x53A425: jp      short loc_53A431
0x53A427: fxch    st(2)
0x53A429: fst     dword ptr [ecx+0B2EE68h]
0x53A42F: fxch    st(2)
0x53A431: fcom    dword ptr [ecx+0B2EEE8h]
0x53A437: fnstsw  ax
0x53A439: test    ah, 41h
0x53A43C: jp      short loc_53A448
0x53A43E: fxch    st(1)
0x53A440: fst     dword ptr [ecx+0B2EEE8h]
0x53A446: fxch    st(1)
0x53A448: add     ecx, 4
0x53A44B: cmp     ecx, 80h ; '€'
0x53A451: jb      short loc_53A41A
0x53A453: fstp    st
0x53A455: fstp    st(1)
0x53A457: fstp    st
0x53A459: add     esp, 8
0x53A45C: retn
