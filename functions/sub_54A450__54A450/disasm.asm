0x54A450: push    ecx
0x54A451: fld     dword ptr ds:0B39AF8h
0x54A457: mov     ecx, [esp+4+arg_4]
0x54A45B: fmul    qword ptr ds:0A31C78h
0x54A461: fstp    [esp+4+var_4]
0x54A464: fld     [esp+4+var_4]
0x54A467: fst     dword ptr [ecx]
0x54A469: fldz
0x54A46B: fcom    st(1)
0x54A46D: fnstsw  ax
0x54A46F: fstp    st(1)
0x54A471: test    ah, 41h
0x54A474: jnz     short loc_54A47A
0x54A476: fstp    dword ptr [ecx]
0x54A478: jmp     short loc_54A47C
0x54A47A: fstp    st
0x54A47C: fld     dword ptr [ecx]
0x54A47E: fcomp   qword ptr ds:0A641E0h
0x54A484: fnstsw  ax
0x54A486: test    ah, 41h
0x54A489: jnz     short loc_54A493
0x54A48B: fld     dword ptr ds:0A3F3E0h
0x54A491: fstp    dword ptr [ecx]
0x54A493: fld     dword ptr [ecx]
0x54A495: mov     eax, [esp+4+arg_0]
0x54A499: fmul    qword ptr ds:0A3D360h
0x54A49F: fstp    dword ptr [eax]
0x54A4A1: pop     ecx
0x54A4A2: retn
