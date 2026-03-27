0x74CE30: sub     esp, 24h
0x74CE33: push    esi
0x74CE34: push    edi
0x74CE35: mov     esi, ecx
0x74CE37: call    _rand
0x74CE3C: mov     [esp+2Ch+var_18], eax
0x74CE40: fild    [esp+2Ch+var_18]
0x74CE44: fdiv    qword ptr ds:0A3D5A8h
0x74CE4A: fstp    [esp+2Ch+var_18]
0x74CE4E: fld     dword ptr [esi+54h]
0x74CE51: fmul    [esp+2Ch+var_18]
0x74CE55: fstp    [esp+2Ch+var_10]
0x74CE59: call    _rand
0x74CE5E: mov     [esp+2Ch+var_18], eax
0x74CE62: fild    [esp+2Ch+var_18]
0x74CE66: fdiv    qword ptr ds:0A3D5A8h
0x74CE6C: fstp    [esp+2Ch+var_18]
0x74CE70: fld     dword ptr ds:0B3F9A0h
0x74CE76: fmul    [esp+2Ch+var_18]
0x74CE7A: fstp    [esp+2Ch+var_24]
0x74CE7E: call    _rand
0x74CE83: mov     [esp+2Ch+var_18], eax
0x74CE87: fild    [esp+2Ch+var_18]
0x74CE8B: fdiv    qword ptr ds:0A3D5A8h
0x74CE91: fstp    [esp+2Ch+var_18]
0x74CE95: fld     dword ptr ds:0B3F9A0h
0x74CE9B: fmul    [esp+2Ch+var_18]
0x74CE9F: fstp    [esp+2Ch+var_14]
0x74CEA3: fld     [esp+2Ch+var_24]
0x74CEA7: fsincos
0x74CEA9: fstp    [esp+2Ch+var_20]
0x74CEAD: fstp    [esp+2Ch+var_1C]
0x74CEB1: fld     [esp+2Ch+var_14]
0x74CEB5: fsincos
0x74CEB7: fstp    [esp+2Ch+var_18]
0x74CEBB: fstp    [esp+2Ch+var_24]
0x74CEBF: fld     [esp+2Ch+var_24]
0x74CEC3: fld     [esp+2Ch+var_10]
0x74CEC7: mov     esi, [esp+2Ch+arg_4]
0x74CECB: mov     edi, [esp+2Ch+arg_0]
0x74CECF: fld     st
0x74CED1: fmulp   st(2), st
0x74CED3: push    esi
0x74CED4: fld     [esp+30h+var_20]
0x74CED8: lea     eax, [esp+30h+var_C]
0x74CEDC: push    eax
0x74CEDD: fmul    st, st(2)
0x74CEDF: mov     ecx, edi
0x74CEE1: fstp    dword ptr [esi]
0x74CEE3: fld     [esp+34h+var_1C]
0x74CEE7: fmulp   st(2), st
0x74CEE9: fxch    st(1)
0x74CEEB: fstp    dword ptr [esi+4]
0x74CEEE: fmul    [esp+34h+var_18]
0x74CEF2: fstp    dword ptr [esi+8]
0x74CEF5: call    sub_53D4B0
0x74CEFA: mov     ecx, [eax]
0x74CEFC: mov     [esi], ecx
0x74CEFE: mov     edx, [eax+4]
0x74CF01: mov     [esi+4], edx
0x74CF04: mov     eax, [eax+8]
0x74CF07: mov     [esi+8], eax
0x74CF0A: mov     esi, [esp+2Ch+arg_8]
0x74CF0E: push    esi
0x74CF0F: lea     ecx, [esp+30h+var_C]
0x74CF13: push    ecx
0x74CF14: mov     ecx, edi
0x74CF16: call    sub_7101F0
0x74CF1B: mov     edx, [eax]
0x74CF1D: mov     [esi], edx
0x74CF1F: mov     ecx, [eax+4]
0x74CF22: mov     [esi+4], ecx
0x74CF25: mov     edx, [eax+8]
0x74CF28: pop     edi
0x74CF29: mov     [esi+8], edx
0x74CF2C: pop     esi
0x74CF2D: add     esp, 24h
0x74CF30: retn    0Ch
