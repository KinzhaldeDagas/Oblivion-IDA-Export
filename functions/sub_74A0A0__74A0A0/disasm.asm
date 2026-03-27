0x74A0A0: mov     eax, [esp+arg_0]
0x74A0A4: sub     esp, 0ECh
0x74A0AA: test    eax, eax
0x74A0AC: push    ebx
0x74A0AD: mov     ebx, ecx
0x74A0AF: jz      loc_74A2BE
0x74A0B5: push    esi
0x74A0B6: push    edi
0x74A0B7: lea     esi, [eax+64h]
0x74A0BA: mov     ecx, 0Dh
0x74A0BF: lea     edi, [esp+0F8h+var_9C]
0x74A0C3: rep movsd
0x74A0C5: mov     esi, [ebx+10h]
0x74A0C8: add     esi, 64h ; 'd'
0x74A0CB: mov     ecx, 0Dh
0x74A0D0: lea     edi, [esp+0F8h+var_68]
0x74A0D7: lea     eax, [esp+0F8h+var_34]
0x74A0DE: rep movsd
0x74A0E0: push    eax
0x74A0E1: lea     ecx, [esp+0FCh+var_68]
0x74A0E8: call    sub_718A80
0x74A0ED: lea     ecx, [esp+0F8h+var_9C]
0x74A0F1: push    ecx
0x74A0F2: lea     edx, [esp+0FCh+var_D0]
0x74A0F6: push    edx
0x74A0F7: lea     ecx, [esp+100h+var_34]
0x74A0FE: call    sub_53D7A0
0x74A103: mov     esi, [esp+0F8h+arg_4]
0x74A10A: push    esi
0x74A10B: lea     eax, [esp+0FCh+var_DC]
0x74A10F: push    eax
0x74A110: lea     ecx, [esp+100h+var_D0]
0x74A114: call    sub_53D4B0
0x74A119: mov     ecx, [eax]
0x74A11B: mov     [esi], ecx
0x74A11D: mov     edx, [eax+4]
0x74A120: mov     [esi+4], edx
0x74A123: mov     eax, [eax+8]
0x74A126: mov     [esi+8], eax
0x74A129: mov     eax, [ebx+70h]
0x74A12C: sub     eax, 0
0x74A12F: jz      loc_74A296
0x74A135: sub     eax, 1
0x74A138: jz      loc_74A1DA
0x74A13E: sub     eax, 1
0x74A141: jnz     loc_74A2BC
0x74A147: lea     ecx, [ebx+78h]
0x74A14A: push    ecx
0x74A14B: lea     edx, [esp+0FCh+var_DC]
0x74A14F: push    edx
0x74A150: lea     ecx, [esp+100h+var_D0]
0x74A154: call    sub_7101F0
0x74A159: call    _rand
0x74A15E: mov     [esp+0F8h+var_EC], eax
0x74A162: fild    [esp+0F8h+var_EC]
0x74A166: lea     ecx, [esp+0F8h+var_DC]
0x74A16A: fdiv    qword ptr ds:0A3D5A8h
0x74A170: fstp    [esp+0F8h+var_EC]
0x74A174: fld     [esp+0F8h+var_EC]
0x74A178: fsub    qword ptr ds:0A2FAA0h
0x74A17E: fmul    dword ptr [ebx+1Ch]
0x74A181: fadd    dword ptr [ebx+18h]
0x74A184: fstp    [esp+0F8h+var_EC]
0x74A188: call    sub_43F350
0x74A18D: mov     eax, [esp+0F8h+arg_8]
0x74A194: fstp    st
0x74A196: fld     [esp+0F8h+var_DC]
0x74A19A: pop     edi
0x74A19B: fld     [esp+0F4h+var_EC]
0x74A19F: pop     esi
0x74A1A0: fld     st
0x74A1A2: pop     ebx
0x74A1A3: fmulp   st(2), st
0x74A1A5: fxch    st(1)
0x74A1A7: fstp    [esp+0ECh+var_E8]
0x74A1AB: mov     ecx, [esp+0ECh+var_E8]
0x74A1AF: fld     [esp+0ECh+var_D8]
0x74A1B3: mov     [eax], ecx
0x74A1B5: fmul    st, st(1)
0x74A1B7: fstp    [esp+0ECh+var_E4]
0x74A1BB: mov     edx, [esp+0ECh+var_E4]
0x74A1BF: mov     [eax+4], edx
0x74A1C2: fmul    [esp+0ECh+var_D4]
0x74A1C6: fstp    [esp+0ECh+var_E0]
0x74A1CA: mov     ecx, [esp+0ECh+var_E0]
0x74A1CE: mov     [eax+8], ecx
0x74A1D1: add     esp, 0ECh
0x74A1D7: retn    0Ch
0x74A1DA: call    _rand
0x74A1DF: mov     [esp+0F8h+var_EC], eax
0x74A1E3: fild    [esp+0F8h+var_EC]
0x74A1E7: mov     esi, [esp+0F8h+arg_8]
0x74A1EE: fadd    st, st
0x74A1F0: fdiv    qword ptr ds:0A3D5A8h
0x74A1F6: fsub    qword ptr ds:0A2F928h
0x74A1FC: fstp    dword ptr [esi]
0x74A1FE: call    _rand
0x74A203: mov     [esp+0F8h+var_EC], eax
0x74A207: fild    [esp+0F8h+var_EC]
0x74A20B: fadd    st, st
0x74A20D: fdiv    qword ptr ds:0A3D5A8h
0x74A213: fsub    qword ptr ds:0A2F928h
0x74A219: fstp    dword ptr [esi+4]
0x74A21C: call    _rand
0x74A221: mov     [esp+0F8h+var_EC], eax
0x74A225: fild    [esp+0F8h+var_EC]
0x74A229: mov     ecx, esi
0x74A22B: fadd    st, st
0x74A22D: fdiv    qword ptr ds:0A3D5A8h
0x74A233: fsub    qword ptr ds:0A2F928h
0x74A239: fstp    dword ptr [esi+8]
0x74A23C: call    sub_43F350
0x74A241: fstp    st
0x74A243: call    _rand
0x74A248: mov     [esp+0F8h+var_EC], eax
0x74A24C: fild    [esp+0F8h+var_EC]
0x74A250: pop     edi
0x74A251: fdiv    qword ptr ds:0A3D5A8h
0x74A257: fstp    [esp+0F4h+var_EC]
0x74A25B: fld     [esp+0F4h+var_EC]
0x74A25F: fsub    qword ptr ds:0A2FAA0h
0x74A265: fmul    dword ptr [ebx+1Ch]
0x74A268: fadd    dword ptr [ebx+18h]
0x74A26B: fstp    [esp+0F4h+var_EC]
0x74A26F: fld     dword ptr [esi]
0x74A271: fld     [esp+0F4h+var_EC]
0x74A275: fld     st
0x74A277: fmulp   st(2), st
0x74A279: fxch    st(1)
0x74A27B: fstp    dword ptr [esi]
0x74A27D: fld     st
0x74A27F: fmul    dword ptr [esi+4]
0x74A282: fstp    dword ptr [esi+4]
0x74A285: fmul    dword ptr [esi+8]
0x74A288: fstp    dword ptr [esi+8]
0x74A28B: pop     esi
0x74A28C: pop     ebx
0x74A28D: add     esp, 0ECh
0x74A293: retn    0Ch
0x74A296: mov     esi, [esp+0F8h+arg_8]
0x74A29D: push    esi
0x74A29E: lea     edx, [esp+0FCh+var_E8]
0x74A2A2: push    edx
0x74A2A3: lea     ecx, [esp+100h+var_D0]
0x74A2A7: call    sub_7101F0
0x74A2AC: mov     ecx, [eax]
0x74A2AE: mov     [esi], ecx
0x74A2B0: mov     edx, [eax+4]
0x74A2B3: mov     [esi+4], edx
0x74A2B6: mov     eax, [eax+8]
0x74A2B9: mov     [esi+8], eax
0x74A2BC: pop     edi
0x74A2BD: pop     esi
0x74A2BE: pop     ebx
0x74A2BF: add     esp, 0ECh
0x74A2C5: retn    0Ch
