0x4C9DA0: sub     esp, 8
0x4C9DA3: push    ebx
0x4C9DA4: mov     bl, [ecx+24h]
0x4C9DA7: and     bl, 1
0x4C9DAA: jnz     short loc_4C9DB7
0x4C9DAC: mov     eax, [ecx+3Ch]
0x4C9DAF: test    eax, eax
0x4C9DB1: jz      short loc_4C9DB7
0x4C9DB3: mov     edx, [eax]
0x4C9DB5: jmp     short loc_4C9DB9
0x4C9DB7: xor     edx, edx
0x4C9DB9: test    bl, bl
0x4C9DBB: pop     ebx
0x4C9DBC: jnz     short loc_4C9DCA
0x4C9DBE: mov     ecx, [ecx+3Ch]
0x4C9DC1: test    ecx, ecx
0x4C9DC3: jz      short loc_4C9DCA
0x4C9DC5: mov     eax, [ecx+4]
0x4C9DC8: jmp     short loc_4C9DCC
0x4C9DCA: xor     eax, eax
0x4C9DCC: shl     edx, 0Ch
0x4C9DCF: mov     [esp+8+var_8], edx
0x4C9DD2: fild    [esp+8+var_8]
0x4C9DD5: mov     ecx, [esp+8+arg_0]
0x4C9DD9: shl     eax, 0Ch
0x4C9DDC: fstp    [esp+8+var_8]
0x4C9DDF: fld     [esp+8+var_8]
0x4C9DE2: mov     [esp+8+var_8], eax
0x4C9DE5: fld     st
0x4C9DE7: fld     qword ptr ds:0A37650h
0x4C9DED: fadd    st(1), st
0x4C9DEF: fxch    st(1)
0x4C9DF1: fstp    [esp+8+var_4]
0x4C9DF5: fild    [esp+8+var_8]
0x4C9DF8: fstp    [esp+8+var_8]
0x4C9DFB: fld     [esp+8+var_8]
0x4C9DFE: fld     st
0x4C9E00: faddp   st(2), st
0x4C9E02: fxch    st(1)
0x4C9E04: fstp    [esp+8+var_8]
0x4C9E07: fld     dword ptr [ecx]
0x4C9E09: fcomp   st(2)
0x4C9E0B: fnstsw  ax
0x4C9E0D: test    ah, 5
0x4C9E10: jp      short loc_4C9E6A
0x4C9E12: fld     dword ptr [ecx+4]
0x4C9E15: fld     [esp+8+var_8]
0x4C9E18: fcom    st(1)
0x4C9E1A: fnstsw  ax
0x4C9E1C: fstp    st(1)
0x4C9E1E: test    ah, 5
0x4C9E21: jp      short loc_4C9E4A
0x4C9E23: fstp    st(1)
0x4C9E25: sub     esp, 10h
0x4C9E28: fstp    [esp+18h+var_C]; float
0x4C9E2C: fstp    [esp+18h+var_10]; float
0x4C9E30: fld     dword ptr [ecx+4]
0x4C9E33: fstp    [esp+18h+var_14]; float
0x4C9E37: fld     dword ptr [ecx]
0x4C9E39: fstp    [esp+18h+var_18]; float
0x4C9E3C: call    sub_4C9D50
0x4C9E41: add     esp, 10h
0x4C9E44: add     esp, 8
0x4C9E47: retn    4
0x4C9E4A: fstp    st
0x4C9E4C: fld     dword ptr [ecx+4]
0x4C9E4F: fcomp   st(1)
0x4C9E51: fnstsw  ax
0x4C9E53: test    ah, 5
0x4C9E56: jnp     short loc_4C9E25
0x4C9E58: fstp    st
0x4C9E5A: fsub    dword ptr [ecx]
0x4C9E5C: fstp    [esp+8+arg_0]
0x4C9E60: fld     [esp+8+arg_0]
0x4C9E64: add     esp, 8
0x4C9E67: retn    4
0x4C9E6A: fld     dword ptr [ecx]
0x4C9E6C: fld     [esp+8+var_4]
0x4C9E70: fcom    st(1)
0x4C9E72: fnstsw  ax
0x4C9E74: fstp    st(1)
0x4C9E76: test    ah, 5
0x4C9E79: jp      loc_4C9F04
0x4C9E7F: fld     dword ptr [ecx+4]
0x4C9E82: fld     [esp+8+var_8]
0x4C9E85: fcom    st(1)
0x4C9E87: fnstsw  ax
0x4C9E89: fstp    st(1)
0x4C9E8B: test    ah, 5
0x4C9E8E: jp      short loc_4C9EBB
0x4C9E90: fstp    st(3)
0x4C9E92: sub     esp, 10h
0x4C9E95: fstp    st(1)
0x4C9E97: fxch    st(1)
0x4C9E99: fstp    [esp+18h+var_C]; float
0x4C9E9D: fstp    [esp+18h+var_10]; float
0x4C9EA1: fld     dword ptr [ecx+4]
0x4C9EA4: fstp    [esp+18h+var_14]; float
0x4C9EA8: fld     dword ptr [ecx]
0x4C9EAA: fstp    [esp+18h+var_18]; float
0x4C9EAD: call    sub_4C9D50
0x4C9EB2: add     esp, 10h
0x4C9EB5: add     esp, 8
0x4C9EB8: retn    4
0x4C9EBB: fstp    st
0x4C9EBD: fld     dword ptr [ecx+4]
0x4C9EC0: fcomp   st(2)
0x4C9EC2: fnstsw  ax
0x4C9EC4: test    ah, 5
0x4C9EC7: jp      short loc_4C9EF0
0x4C9EC9: fstp    st(2)
0x4C9ECB: sub     esp, 10h
0x4C9ECE: fstp    [esp+18h+var_C]; float
0x4C9ED2: fstp    [esp+18h+var_10]; float
0x4C9ED6: fld     dword ptr [ecx+4]
0x4C9ED9: fstp    [esp+18h+var_14]; float
0x4C9EDD: fld     dword ptr [ecx]
0x4C9EDF: fstp    [esp+18h+var_18]; float
0x4C9EE2: call    sub_4C9D50
0x4C9EE7: add     esp, 10h
0x4C9EEA: add     esp, 8
0x4C9EED: retn    4
0x4C9EF0: fstp    st(1)
0x4C9EF2: fstp    st
0x4C9EF4: fsub    dword ptr [ecx]
0x4C9EF6: fstp    [esp+8+arg_0]
0x4C9EFA: fld     [esp+8+arg_0]
0x4C9EFE: add     esp, 8
0x4C9F01: retn    4
0x4C9F04: fstp    st(2)
0x4C9F06: fstp    st(1)
0x4C9F08: fld     dword ptr [ecx+4]
0x4C9F0B: fld     [esp+8+var_8]
0x4C9F0E: fcom    st(1)
0x4C9F10: fnstsw  ax
0x4C9F12: fstp    st(1)
0x4C9F14: test    ah, 5
0x4C9F17: jp      short loc_4C9F2C
0x4C9F19: fstp    st(1)
0x4C9F1B: fsubr   dword ptr [ecx+4]
0x4C9F1E: fstp    [esp+8+arg_0]
0x4C9F22: fld     [esp+8+arg_0]
0x4C9F26: add     esp, 8
0x4C9F29: retn    4
0x4C9F2C: fstp    st
0x4C9F2E: fld     dword ptr [ecx+4]
0x4C9F31: fcomp   st(1)
0x4C9F33: fnstsw  ax
0x4C9F35: test    ah, 5
0x4C9F38: jp      short loc_4C9F4B
0x4C9F3A: fsub    dword ptr [ecx+4]
0x4C9F3D: fstp    [esp+8+arg_0]
0x4C9F41: fld     [esp+8+arg_0]
0x4C9F45: add     esp, 8
0x4C9F48: retn    4
0x4C9F4B: fstp    st
0x4C9F4D: fldz
0x4C9F4F: add     esp, 8
0x4C9F52: retn    4
