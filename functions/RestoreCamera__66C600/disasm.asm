0x66C600: mov     dl, 1
0x66C602: mov     [ecx+589h], dl
0x66C608: fld     dword ptr ds:0B3BB24h
0x66C60E: fld     dword ptr ds:0B36B78h
0x66C614: fcom    st(1)
0x66C616: fnstsw  ax
0x66C618: fstp    st(1)
0x66C61A: test    ah, 41h
0x66C61D: jnz     short loc_66C627
0x66C61F: fstp    dword ptr ds:0B3BB24h
0x66C625: jmp     short loc_66C629
0x66C627: fstp    st
0x66C629: cmp     byte ptr [ecx+588h], 0
0x66C630: jz      short loc_66C635
0x66C632: xor     al, al
0x66C634: retn
0x66C635: push    0; a1
0x66C637: mov     [ecx+58Ah], dl
0x66C63D: call    TogglePOV
0x66C642: retn
