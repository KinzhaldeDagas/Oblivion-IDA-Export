0x680F60: sub     esp, 0Ch
0x680F63: push    esi
0x680F64: mov     esi, [esp+10h+arg_4]
0x680F68: push    30h ; '0'
0x680F6A: push    0
0x680F6C: push    esi
0x680F6D: call    __memset
0x680F72: mov     ecx, [esp+1Ch+arg_0]; this
0x680F76: add     esp, 0Ch
0x680F79: test    ecx, ecx
0x680F7B: jz      loc_681045
0x680F81: call    MobileObject_GetCharProxy
0x680F86: test    eax, eax
0x680F88: jz      loc_681045
0x680F8E: mov     eax, [eax+368h]
0x680F94: test    eax, eax
0x680F96: jz      loc_681045
0x680F9C: mov     eax, [eax+8]
0x680F9F: test    eax, eax
0x680FA1: jz      loc_681045
0x680FA7: push    ebx
0x680FA8: push    edi
0x680FA9: lea     ebx, [eax+70h]
0x680FAC: push    ebx
0x680FAD: push    esi
0x680FAE: call    sub_43F3E0
0x680FB3: add     ebx, 10h
0x680FB6: lea     edi, [esi+0Ch]
0x680FB9: push    ebx
0x680FBA: push    edi
0x680FBB: call    sub_43F3E0
0x680FC0: fld     dword ptr [edi]
0x680FC2: fsub    dword ptr [esi]
0x680FC4: add     esp, 10h
0x680FC7: fstp    [esp+18h+var_C]
0x680FCB: mov     eax, [esp+18h+var_C]
0x680FCF: fld     dword ptr [edi+4]
0x680FD2: fsub    dword ptr [esi+4]
0x680FD5: fstp    [esp+18h+var_8]
0x680FD9: mov     ecx, [esp+18h+var_8]
0x680FDD: fld     dword ptr [edi+8]
0x680FE0: mov     [esi+18h], eax
0x680FE3: fsub    dword ptr [esi+8]
0x680FE6: mov     [esi+1Ch], ecx
0x680FE9: fstp    [esp+18h+var_4]
0x680FED: mov     edx, [esp+18h+var_4]
0x680FF1: mov     [esi+20h], edx
0x680FF4: fld     dword ptr [edi]
0x680FF6: fadd    dword ptr [esi]
0x680FF8: fstp    [esp+18h+var_C]
0x680FFC: mov     eax, [esp+18h+var_C]
0x681000: fld     dword ptr [edi+4]
0x681003: fadd    dword ptr [esi+4]
0x681006: fstp    [esp+18h+var_8]
0x68100A: mov     ecx, [esp+18h+var_8]
0x68100E: fld     dword ptr [edi+8]
0x681011: mov     [esi+24h], eax
0x681014: fadd    dword ptr [esi+8]
0x681017: mov     [esi+28h], ecx
0x68101A: pop     edi
0x68101B: pop     ebx
0x68101C: fstp    [esp+10h+var_4]
0x681020: mov     edx, [esp+10h+var_4]
0x681024: mov     [esi+2Ch], edx
0x681027: fld     dword ptr [esi+24h]
0x68102A: fld     qword ptr ds:0A2FAA0h
0x681030: fmul    st(1), st
0x681032: fxch    st(1)
0x681034: fstp    dword ptr [esi+24h]
0x681037: fld     dword ptr [esi+28h]
0x68103A: fmul    st, st(1)
0x68103C: fstp    dword ptr [esi+28h]
0x68103F: fmul    dword ptr [esi+2Ch]
0x681042: fstp    dword ptr [esi+2Ch]
0x681045: pop     esi
0x681046: add     esp, 0Ch
0x681049: retn
