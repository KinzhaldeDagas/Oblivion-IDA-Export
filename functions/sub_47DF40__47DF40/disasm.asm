0x47DF40: fldz
0x47DF42: fld     [esp+arg_8]
0x47DF46: fcom    st(1)
0x47DF48: fnstsw  ax
0x47DF4A: fstp    st(1)
0x47DF4C: test    ah, 5
0x47DF4F: jp      short loc_47DF56
0x47DF51: fstp    st
0x47DF53: xor     al, al
0x47DF55: retn
0x47DF56: fld     [esp+arg_0]
0x47DF5A: fld     [esp+arg_4]
0x47DF5E: fcom    st(1)
0x47DF60: fnstsw  ax
0x47DF62: test    ah, 5
0x47DF65: jp      short loc_47DF6B
0x47DF67: fsubp   st(1), st
0x47DF69: jmp     short loc_47DF6D
0x47DF6B: fsubrp  st(1), st
0x47DF6D: fcompp
0x47DF6F: fnstsw  ax
0x47DF71: test    ah, 5
0x47DF74: jp      short loc_47DF7C
0x47DF76: mov     eax, 1
0x47DF7B: retn
0x47DF7C: xor     eax, eax
0x47DF7E: retn
