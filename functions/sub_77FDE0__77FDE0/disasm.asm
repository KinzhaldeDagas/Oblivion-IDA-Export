0x77FDE0: mov     edx, [esp+arg_0]
0x77FDE4: fld     dword ptr [edx+30h]
0x77FDE7: fcomp   qword ptr ds:0A88D40h
0x77FDED: fnstsw  ax
0x77FDEF: test    ah, 1
0x77FDF2: jnz     short loc_77FE29
0x77FDF4: fld     dword ptr ds:0A88D38h
0x77FDFA: fcomp   dword ptr [edx+30h]
0x77FDFD: fnstsw  ax
0x77FDFF: test    ah, 1
0x77FE02: jnz     short loc_77FE29
0x77FE04: cmp     byte ptr [ecx+0FF5h], 0
0x77FE0B: jnz     short loc_77FE29
0x77FE0D: cmp     byte ptr [ecx+0FF4h], 0
0x77FE14: jnz     short loc_77FE29
0x77FE16: mov     eax, [ecx]
0x77FE18: mov     edx, [eax+64h]
0x77FE1B: push    0
0x77FE1D: push    0
0x77FE1F: push    8Fh
0x77FE24: call    edx
0x77FE26: retn    4
0x77FE29: mov     eax, [ecx]
0x77FE2B: mov     edx, [eax+64h]
0x77FE2E: push    0
0x77FE30: push    1
0x77FE32: push    8Fh
0x77FE37: call    edx
0x77FE39: retn    4
