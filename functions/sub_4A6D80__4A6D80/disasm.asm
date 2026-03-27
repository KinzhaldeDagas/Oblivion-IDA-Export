0x4A6D80: mov     edx, [esp+arg_0]
0x4A6D84: test    edx, edx
0x4A6D86: jz      short loc_4A6DAF
0x4A6D88: fld     dword ptr [ecx+8]
0x4A6D8B: fstp    [esp+arg_0]
0x4A6D8F: fld     [esp+arg_4]
0x4A6D93: fld     [esp+arg_0]
0x4A6D97: fcom    st(1)
0x4A6D99: fnstsw  ax
0x4A6D9B: test    ah, 5
0x4A6D9E: jp      short loc_4A6DB4
0x4A6DA0: fsubp   st(1), st
0x4A6DA2: fcomp   qword ptr ds:0A30E40h
0x4A6DA8: fnstsw  ax
0x4A6DAA: test    ah, 5
0x4A6DAD: jnp     short loc_4A6DC3
0x4A6DAF: xor     al, al
0x4A6DB1: retn    8
0x4A6DB4: fsubrp  st(1), st
0x4A6DB6: fcomp   qword ptr ds:0A30E40h
0x4A6DBC: fnstsw  ax
0x4A6DBE: test    ah, 5
0x4A6DC1: jp      short loc_4A6DAF
0x4A6DC3: push    ecx
0x4A6DC4: mov     ecx, edx
0x4A6DC6: call    sub_4A6990
0x4A6DCB: test    al, al
0x4A6DCD: jz      short loc_4A6DAF
0x4A6DCF: mov     al, 1
0x4A6DD1: retn    8
