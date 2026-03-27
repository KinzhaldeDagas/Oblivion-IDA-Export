0x9759A0: push    ecx
0x9759A1: fld     dword ptr [ecx]
0x9759A3: fld     dword ptr [edx+30h]
0x9759A6: fchs
0x9759A8: fcompp
0x9759AA: fnstsw  ax
0x9759AC: test    ah, 41h
0x9759AF: jnz     short loc_9759C9
0x9759B1: fld     dword ptr [edx+30h]
0x9759B4: fadd    dword ptr [ecx]
0x9759B6: fstp    [esp+4+var_4]
0x9759B9: fld     [esp+4+var_4]
0x9759BC: fmul    st, st
0x9759BE: fadd    dword ptr [esi]
0x9759C0: fstp    dword ptr [esi]
0x9759C2: fld     dword ptr [edx+30h]
0x9759C5: fchs
0x9759C7: jmp     short loc_9759EB
0x9759C9: fld     dword ptr [ecx]
0x9759CB: fld     dword ptr [edx+30h]
0x9759CE: fcompp
0x9759D0: fnstsw  ax
0x9759D2: test    ah, 5
0x9759D5: jp      short loc_9759ED
0x9759D7: fld     dword ptr [ecx]
0x9759D9: fsub    dword ptr [edx+30h]
0x9759DC: fstp    [esp+4+var_4]
0x9759DF: fld     [esp+4+var_4]
0x9759E2: fmul    st, st
0x9759E4: fadd    dword ptr [esi]
0x9759E6: fstp    dword ptr [esi]
0x9759E8: fld     dword ptr [edx+30h]
0x9759EB: fstp    dword ptr [ecx]
0x9759ED: fld     dword ptr [ecx+4]
0x9759F0: fld     dword ptr [edx+34h]
0x9759F3: fchs
0x9759F5: fcompp
0x9759F7: fnstsw  ax
0x9759F9: test    ah, 41h
0x9759FC: jnz     short loc_975A17
0x9759FE: fld     dword ptr [edx+34h]
0x975A01: fadd    dword ptr [ecx+4]
0x975A04: fstp    [esp+4+var_4]
0x975A07: fld     [esp+4+var_4]
0x975A0A: fmul    st, st
0x975A0C: fadd    dword ptr [esi]
0x975A0E: fstp    dword ptr [esi]
0x975A10: fld     dword ptr [edx+34h]
0x975A13: fchs
0x975A15: jmp     short loc_975A3B
0x975A17: fld     dword ptr [ecx+4]
0x975A1A: fld     dword ptr [edx+34h]
0x975A1D: fcompp
0x975A1F: fnstsw  ax
0x975A21: test    ah, 5
0x975A24: jp      short loc_975A3E
0x975A26: fld     dword ptr [ecx+4]
0x975A29: fsub    dword ptr [edx+34h]
0x975A2C: fstp    [esp+4+var_4]
0x975A2F: fld     [esp+4+var_4]
0x975A32: fmul    st, st
0x975A34: fadd    dword ptr [esi]
0x975A36: fstp    dword ptr [esi]
0x975A38: fld     dword ptr [edx+34h]
0x975A3B: fstp    dword ptr [ecx+4]
0x975A3E: fld     dword ptr [ecx+8]
0x975A41: fld     dword ptr [edx+38h]
0x975A44: fchs
0x975A46: fcompp
0x975A48: fnstsw  ax
0x975A4A: test    ah, 41h
0x975A4D: jnz     short loc_975A6B
0x975A4F: fld     dword ptr [edx+38h]
0x975A52: fadd    dword ptr [ecx+8]
0x975A55: fstp    [esp+4+var_4]
0x975A58: fld     [esp+4+var_4]
0x975A5B: fmul    st, st
0x975A5D: fadd    dword ptr [esi]
0x975A5F: fstp    dword ptr [esi]
0x975A61: fld     dword ptr [edx+38h]
0x975A64: fchs
0x975A66: fstp    dword ptr [ecx+8]
0x975A69: pop     ecx
0x975A6A: retn
0x975A6B: fld     dword ptr [ecx+8]
0x975A6E: fld     dword ptr [edx+38h]
0x975A71: fcompp
0x975A73: fnstsw  ax
0x975A75: test    ah, 5
0x975A78: jp      short loc_975A92
0x975A7A: fld     dword ptr [ecx+8]
0x975A7D: fsub    dword ptr [edx+38h]
0x975A80: fstp    [esp+4+var_4]
0x975A83: fld     [esp+4+var_4]
0x975A86: fmul    st, st
0x975A88: fadd    dword ptr [esi]
0x975A8A: fstp    dword ptr [esi]
0x975A8C: fld     dword ptr [edx+38h]
0x975A8F: fstp    dword ptr [ecx+8]
0x975A92: pop     ecx
0x975A93: retn
