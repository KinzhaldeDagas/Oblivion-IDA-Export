0x5F11F0: sub     esp, 6Ch
0x5F11F3: push    esi
0x5F11F4: mov     esi, ecx
0x5F11F6: cmp     esi, ds:0B333C4h
0x5F11FC: push    edi
0x5F11FD: jnz     short loc_5F1227
0x5F11FF: mov     eax, ds:0B3BB0Ch
0x5F1204: test    eax, eax
0x5F1206: jz      short loc_5F1227
0x5F1208: mov     edx, [eax+88h]
0x5F120E: mov     ecx, [esp+74h+arg_0]
0x5F1212: add     eax, 88h ; 'ˆ'
0x5F1217: mov     [ecx], edx
0x5F1219: mov     edx, [eax+4]
0x5F121C: mov     [ecx+4], edx
0x5F121F: mov     eax, [eax+8]
0x5F1222: mov     [ecx+8], eax
0x5F1225: jmp     short loc_5F1249
0x5F1227: mov     ecx, [esi+2Ch]
0x5F122A: mov     edi, [esp+74h+arg_0]
0x5F122E: mov     [edi], ecx
0x5F1230: mov     edx, [esi+30h]
0x5F1233: mov     [edi+4], edx
0x5F1236: mov     eax, [esi+34h]
0x5F1239: mov     ecx, esi
0x5F123B: mov     [edi+8], eax
0x5F123E: call    sub_5E40C0
0x5F1243: fadd    dword ptr [edi+8]
0x5F1246: fstp    dword ptr [edi+8]
0x5F1249: mov     edx, [esi]
0x5F124B: mov     eax, [edx+1E0h]
0x5F1251: mov     ecx, esi
0x5F1253: call    eax
0x5F1255: push    ecx
0x5F1256: lea     ecx, [esp+78h+var_6C]
0x5F125A: fstp    [esp+78h+var_78]; float
0x5F125D: call    NiMatrix33_InitRotationTransform
0x5F1262: cmp     esi, ds:0B333C4h
0x5F1268: jnz     short loc_5F129E
0x5F126A: mov     ecx, esi
0x5F126C: call    sub_4A9720
0x5F1271: push    ecx
0x5F1272: lea     ecx, [esp+78h+var_48]
0x5F1276: fstp    [esp+78h+var_78]; float
0x5F1279: call    NiMatrix33_InitRotationTransposedTransform???
0x5F127E: lea     ecx, [esp+74h+var_48]
0x5F1282: push    ecx
0x5F1283: lea     edx, [esp+78h+var_24]
0x5F1287: push    edx
0x5F1288: lea     ecx, [esp+7Ch+var_6C]
0x5F128C: call    NiMAtrix33_Multiply
0x5F1291: mov     ecx, 9
0x5F1296: mov     esi, eax
0x5F1298: lea     edi, [esp+74h+var_6C]
0x5F129C: rep movsd
0x5F129E: mov     ecx, [esp+74h+arg_4]
0x5F12A2: fld     [esp+74h+var_68]
0x5F12A6: fstp    dword ptr [ecx]
0x5F12A8: fld     [esp+74h+var_5C]
0x5F12AC: fstp    dword ptr [ecx+4]
0x5F12AF: fld     [esp+74h+var_50]
0x5F12B3: fstp    dword ptr [ecx+8]
0x5F12B6: call    sub_43F350
0x5F12BB: pop     edi
0x5F12BC: fstp    st
0x5F12BE: pop     esi
0x5F12BF: add     esp, 6Ch
0x5F12C2: retn    8
