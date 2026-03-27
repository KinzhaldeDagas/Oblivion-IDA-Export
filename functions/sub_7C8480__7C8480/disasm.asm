0x7C8480: push    ecx
0x7C8481: fld     dword ptr [ecx+0E8h]
0x7C8487: fldz
0x7C8489: fcom    st(1)
0x7C848B: fnstsw  ax
0x7C848D: fstp    st(1)
0x7C848F: test    ah, 41h
0x7C8492: jz      short loc_7C84AF
0x7C8494: fld     dword ptr [ecx+0E8h]
0x7C849A: fstp    [esp+4+var_4]
0x7C849D: fld     dword ptr ds:0A31C80h
0x7C84A3: fcom    [esp+4+var_4]
0x7C84A6: fnstsw  ax
0x7C84A8: test    ah, 41h
0x7C84AB: jnz     short loc_7C84EE
0x7C84AD: fstp    st
0x7C84AF: fld     dword ptr [ecx+0E8h]
0x7C84B5: fcompp
0x7C84B7: fnstsw  ax
0x7C84B9: test    ah, 5
0x7C84BC: jp      short loc_7C84D4
0x7C84BE: fldz
0x7C84C0: fstp    [esp+4+var_4]
0x7C84C3: fld     [esp+4+var_4]
0x7C84C6: fdiv    qword ptr ds:0A3F3E8h
0x7C84CC: fstp    [esp+4+var_4]
0x7C84CF: fld     [esp+4+var_4]
0x7C84D2: pop     ecx
0x7C84D3: retn
0x7C84D4: fld     dword ptr [ecx+0E8h]
0x7C84DA: fstp    [esp+4+var_4]
0x7C84DD: fld     [esp+4+var_4]
0x7C84E0: fdiv    qword ptr ds:0A3F3E8h
0x7C84E6: fstp    [esp+4+var_4]
0x7C84E9: fld     [esp+4+var_4]
0x7C84EC: pop     ecx
0x7C84ED: retn
0x7C84EE: fstp    st(1)
0x7C84F0: fstp    [esp+4+var_4]
0x7C84F3: fld     [esp+4+var_4]
0x7C84F6: fdiv    qword ptr ds:0A3F3E8h
0x7C84FC: fstp    [esp+4+var_4]
0x7C84FF: fld     [esp+4+var_4]
0x7C8502: pop     ecx
0x7C8503: retn
