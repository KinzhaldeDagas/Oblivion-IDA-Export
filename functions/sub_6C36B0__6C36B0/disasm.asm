0x6C36B0: push    esi
0x6C36B1: mov     esi, ecx
0x6C36B3: mov     al, [esi+8]
0x6C36B6: shr     al, 3
0x6C36B9: test    al, 1
0x6C36BB: jz      short loc_6C3721
0x6C36BD: fld     dword ptr [esi+20h]
0x6C36C0: fld     [esp+4+arg_0]
0x6C36C4: fld     st
0x6C36C6: fucomp  st(2)
0x6C36C8: fnstsw  ax
0x6C36CA: fstp    st(1)
0x6C36CC: test    ah, 44h
0x6C36CF: jp      short loc_6C36D7
0x6C36D1: cmp     byte ptr [esi+38h], 0
0x6C36D5: jz      short loc_6C371F
0x6C36D7: cmp     byte ptr [esi+2Ch], 0
0x6C36DB: jz      short loc_6C3713
0x6C36DD: mov     edx, [esi]
0x6C36DF: mov     eax, [edx+64h]
0x6C36E2: push    ecx
0x6C36E3: fstp    [esp+8+var_8]
0x6C36E6: call    eax
0x6C36E8: fstp    [esp+4+arg_0]
0x6C36EC: fld     dword ptr [esi+28h]
0x6C36EF: fld     [esp+4+arg_0]
0x6C36F3: fld     st
0x6C36F5: fucomp  st(2)
0x6C36F7: fnstsw  ax
0x6C36F9: fstp    st(1)
0x6C36FB: test    ah, 44h
0x6C36FE: jp      short loc_6C3706
0x6C3700: cmp     byte ptr [esi+38h], 0
0x6C3704: jz      short loc_6C371F
0x6C3706: fstp    dword ptr [esi+28h]
0x6C3709: mov     byte ptr [esi+38h], 0
0x6C370D: xor     al, al
0x6C370F: pop     esi
0x6C3710: retn    4
0x6C3713: mov     byte ptr [esi+38h], 0
0x6C3717: fstp    st
0x6C3719: xor     al, al
0x6C371B: pop     esi
0x6C371C: retn    4
0x6C371F: fstp    st
0x6C3721: mov     al, 1
0x6C3723: pop     esi
0x6C3724: retn    4
