0x8A2C00: push    ecx
0x8A2C01: fld     dword ptr [ecx+0Ch]
0x8A2C04: fabs
0x8A2C06: fstp    [esp+4+var_4]
0x8A2C09: fld     [esp+4+var_4]
0x8A2C0C: fstp    [esp+4+var_4]
0x8A2C0F: fld     [esp+4+var_4]
0x8A2C12: fld     st
0x8A2C14: fabs
0x8A2C16: fstp    [esp+4+var_4]
0x8A2C19: fld     [esp+4+var_4]
0x8A2C1C: fcomp   dword ptr ds:0A2F948h
0x8A2C22: fnstsw  ax
0x8A2C24: test    ah, 1
0x8A2C27: jnz     short loc_8A2C54
0x8A2C29: fldz
0x8A2C2B: fcom    st(1)
0x8A2C2D: fnstsw  ax
0x8A2C2F: fstp    st(1)
0x8A2C31: test    ah, 5
0x8A2C34: jnp     short loc_8A2C3E
0x8A2C36: fstp    st
0x8A2C38: fld     dword ptr ds:0A9740Ch
0x8A2C3E: fstp    [esp+4+var_4]
0x8A2C41: fld     [esp+4+var_4]
0x8A2C44: fstp    [esp+4+var_4]
0x8A2C47: fld     [esp+4+var_4]
0x8A2C4A: fadd    st, st
0x8A2C4C: fstp    [esp+4+var_4]
0x8A2C4F: fld     [esp+4+var_4]
0x8A2C52: pop     ecx
0x8A2C53: retn
0x8A2C54: call    __CIacos
0x8A2C59: fstp    [esp+4+var_4]
0x8A2C5C: fld     [esp+4+var_4]
0x8A2C5F: fstp    [esp+4+var_4]
0x8A2C62: fld     [esp+4+var_4]
0x8A2C65: fadd    st, st
0x8A2C67: fstp    [esp+4+var_4]
0x8A2C6A: fld     [esp+4+var_4]
0x8A2C6D: pop     ecx
0x8A2C6E: retn
