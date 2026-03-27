0x65DA60: push    ecx
0x65DA61: push    esi
0x65DA62: mov     esi, ecx
0x65DA64: call    MobileObject_GetZRotation
0x65DA69: fstp    [esp+8+var_4]
0x65DA6D: fld     dword ptr [esi+61Ch]
0x65DA73: pop     esi
0x65DA74: fadd    [esp+4+var_4]
0x65DA77: fstp    [esp+4+var_4]
0x65DA7A: fldz
0x65DA7C: fld     [esp+4+var_4]
0x65DA7F: fcom    st(1)
0x65DA81: fnstsw  ax
0x65DA83: fstp    st(1)
0x65DA85: test    ah, 5
0x65DA88: jp      short loc_65DA98
0x65DA8A: fadd    qword ptr ds:0A3D5B0h
0x65DA90: fstp    [esp+4+var_4]
0x65DA93: fld     [esp+4+var_4]
0x65DA96: pop     ecx
0x65DA97: retn
0x65DA98: fld     qword ptr ds:0A3D5B0h
0x65DA9E: fcom    st(1)
0x65DAA0: fnstsw  ax
0x65DAA2: test    ah, 5
0x65DAA5: jp      short loc_65DAB1
0x65DAA7: fsubp   st(1), st
0x65DAA9: fstp    [esp+4+var_4]
0x65DAAC: fld     [esp+4+var_4]
0x65DAAF: pop     ecx
0x65DAB0: retn
0x65DAB1: fstp    st
0x65DAB3: pop     ecx
0x65DAB4: retn
