0x567C00: push    esi
0x567C01: mov     esi, ecx
0x567C03: mov     ecx, offset TimeGlobals
0x567C08: call    TimeGlobals_GetGameDayOfWeek
0x567C0D: cmp     [esp+4+arg_0], 0
0x567C12: jz      short loc_567C1A
0x567C14: add     al, 0FFh
0x567C16: jns     short loc_567C1A
0x567C18: mov     al, 6
0x567C1A: movsx   edx, byte ptr [esi+2Dh]
0x567C1E: xor     cl, cl
0x567C20: cmp     edx, 0Ah; switch 11 cases
0x567C23: pop     esi
0x567C24: ja      short def_567C26
0x567C26: jmp     ds:jpt_567C26[edx*4]; switch jump
0x567C2D: test    al, al; jumptable 00567C26 case 0
0x567C2F: jmp     short loc_567C68
0x567C31: cmp     al, 1; jumptable 00567C26 case 1
0x567C33: jmp     short loc_567C68
0x567C35: cmp     al, 2; jumptable 00567C26 case 2
0x567C37: jmp     short loc_567C68
0x567C39: cmp     al, 3; jumptable 00567C26 case 3
0x567C3B: jmp     short loc_567C68
0x567C3D: test    al, al; jumptable 00567C26 case 7
0x567C3F: mov     cl, 1
0x567C41: jz      short loc_567C47
0x567C43: cmp     al, 6
0x567C45: jnz     short def_567C26
0x567C47: xor     cl, cl
0x567C49: mov     al, cl
0x567C4B: retn    4
0x567C4E: test    al, al; jumptable 00567C26 case 8
0x567C50: jz      short loc_567C6A
0x567C52: cmp     al, 6; jumptable 00567C26 case 6
0x567C54: jmp     short loc_567C68
0x567C56: cmp     al, 1; jumptable 00567C26 case 9
0x567C58: jz      short loc_567C6A
0x567C5A: cmp     al, 3
0x567C5C: jz      short loc_567C6A
0x567C5E: cmp     al, 5; jumptable 00567C26 case 5
0x567C60: jmp     short loc_567C68
0x567C62: cmp     al, 2; jumptable 00567C26 case 10
0x567C64: jz      short loc_567C6A
0x567C66: cmp     al, 4; jumptable 00567C26 case 4
0x567C68: jnz     short def_567C26
0x567C6A: mov     cl, 1
