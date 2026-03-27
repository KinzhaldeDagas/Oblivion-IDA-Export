0x6A5C00: mov     eax, [esp+arg_0]
0x6A5C04: mov     ecx, ds:0B3C0E4h
0x6A5C0A: push    eax
0x6A5C0B: push    ecx
0x6A5C0C: call    sub_6A5A10
0x6A5C11: fstp    [esp+8+arg_0]
0x6A5C15: mov     edx, [esp+8+arg_4]
0x6A5C19: mov     eax, ds:0B3C0E4h
0x6A5C1E: push    edx
0x6A5C1F: push    eax
0x6A5C20: call    sub_6A5A10
0x6A5C25: fstp    [esp+10h+arg_4]
0x6A5C29: fld     [esp+10h+arg_0]
0x6A5C2D: add     esp, 10h
0x6A5C30: fld     st
0x6A5C32: fld     [esp+arg_4]
0x6A5C36: fld     st
0x6A5C38: fucomp  st(2)
0x6A5C3A: fnstsw  ax
0x6A5C3C: fstp    st(1)
0x6A5C3E: test    ah, 44h
0x6A5C41: jp      short loc_6A5C4A
0x6A5C43: fstp    st(1)
0x6A5C45: xor     eax, eax
0x6A5C47: fstp    st
0x6A5C49: retn
0x6A5C4A: fcompp
0x6A5C4C: fnstsw  ax
0x6A5C4E: test    ah, 41h
0x6A5C51: jnz     short loc_6A5C59
0x6A5C53: mov     eax, 1
0x6A5C58: retn
0x6A5C59: or      eax, 0FFFFFFFFh
0x6A5C5C: retn
