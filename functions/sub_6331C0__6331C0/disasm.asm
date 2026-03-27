0x6331C0: fldz
0x6331C2: mov     dword ptr [ecx+2BCh], 5
0x6331CC: fcomp   dword ptr [ecx+2C0h]
0x6331D2: mov     dword ptr [ecx+2C4h], 0
0x6331DC: fnstsw  ax
0x6331DE: test    ah, 1
0x6331E1: jnz     short loc_6331EB
0x6331E3: fld1
0x6331E5: fstp    dword ptr [ecx+2C0h]
0x6331EB: mov     ecx, ds:0B333C4h; this
0x6331F1: push    ebx
0x6331F2: push    esi
0x6331F3: mov     esi, dword ptr [esp+8+arg_0]
0x6331F7: cmp     esi, ecx
0x6331F9: mov     bl, 1
0x6331FB: jnz     short loc_63320E
0x6331FD: mov     bl, [ecx+588h]
0x633203: test    bl, bl
0x633205: jnz     short loc_63320E
0x633207: push    0; a1
0x633209: call    TogglePOV
0x63320E: push    3Fh ; '?'
0x633210: mov     ecx, esi
0x633212: call    sub_5E05F0
0x633217: fld1
0x633219: sub     esp, 8
0x63321C: fst     [esp+10h+var_C]; int
0x633220: mov     ecx, esi
0x633222: fstp    [esp+10h+var_10]; float
0x633225: call    Actor_ProcessAction
0x63322A: pop     esi
0x63322B: test    bl, bl
0x63322D: pop     ebx
0x63322E: jnz     short locret_633243
0x633230: mov     ecx, ds:0B333C4h; this
0x633236: mov     dword ptr [esp+arg_0], 1; a1
0x63323E: jmp     TogglePOV
0x633243: retn    4
