0x6C9CB0: xor     edx, edx
0x6C9CB2: cmp     [ecx+44h], edx
0x6C9CB5: jnz     short loc_6C9CBC
0x6C9CB7: xor     al, al
0x6C9CB9: retn    8
0x6C9CBC: fldz
0x6C9CBE: fld     [esp+arg_0]
0x6C9CC2: fcom    st(1)
0x6C9CC4: fnstsw  ax
0x6C9CC6: fstp    st(1)
0x6C9CC8: test    ah, 41h
0x6C9CCB: jnz     short loc_6C9CEF
0x6C9CCD: xor     eax, eax
0x6C9CCF: cmp     [esp+arg_4], dl
0x6C9CD3: setnz   al
0x6C9CD6: add     eax, 3
0x6C9CD9: mov     [ecx+44h], eax
0x6C9CDC: fld     dword ptr ds:0A7DEB4h
0x6C9CE2: fchs
0x6C9CE4: mov     al, 1
0x6C9CE6: fstp    dword ptr [ecx+4Ch]
0x6C9CE9: fstp    dword ptr [ecx+50h]
0x6C9CEC: retn    8
0x6C9CEF: fstp    st
0x6C9CF1: fld     dword ptr [ecx+34h]
0x6C9CF4: fld     dword ptr ds:0A7DEB4h
0x6C9CFA: fchs
0x6C9CFC: fucompp
0x6C9CFE: fnstsw  ax
0x6C9D00: test    ah, 44h
0x6C9D03: jnp     short loc_6C9D14
0x6C9D05: fld     dword ptr [ecx+38h]
0x6C9D08: fdiv    dword ptr [ecx+28h]
0x6C9D0B: fsub    dword ptr [ecx+34h]
0x6C9D0E: fadd    dword ptr [ecx+48h]
0x6C9D11: fstp    dword ptr [ecx+48h]
0x6C9D14: mov     [ecx+44h], edx
0x6C9D17: mov     [ecx+58h], edx
0x6C9D1A: fld     dword ptr ds:0A7DEB4h
0x6C9D20: fchs
0x6C9D22: fstp    dword ptr [ecx+54h]
0x6C9D25: call    sub_6C6AC0
0x6C9D2A: mov     al, 1
0x6C9D2C: retn    8
