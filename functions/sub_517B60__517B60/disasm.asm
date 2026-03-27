0x517B60: mov     edx, [esp+arg_0]
0x517B64: test    edx, edx
0x517B66: jnz     short loc_517B6D
0x517B68: mov     al, 1
0x517B6A: retn    4
0x517B6D: mov     al, [ecx+10h]
0x517B70: cmp     al, [edx+10h]
0x517B73: jnz     short loc_517B68
0x517B75: mov     eax, [ecx]
0x517B77: cmp     eax, [edx]
0x517B79: jnz     short loc_517B68
0x517B7B: fld     qword ptr [edx+8]
0x517B7E: fcomp   qword ptr [ecx+8]
0x517B81: fnstsw  ax
0x517B83: test    ah, 44h
0x517B86: jp      short loc_517B68
0x517B88: add     edx, 18h
0x517B8B: push    edx
0x517B8C: add     ecx, 18h
0x517B8F: call    sub_517B20
0x517B94: test    al, al
0x517B96: setnz   al
0x517B99: retn    4
