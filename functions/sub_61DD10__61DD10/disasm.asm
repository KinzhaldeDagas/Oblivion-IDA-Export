0x61DD10: push    ecx
0x61DD11: fld     dword ptr [ecx+44h]
0x61DD14: xor     edx, edx
0x61DD16: mov     [ecx+48h], dl
0x61DD19: fstp    dword ptr [ecx+0D4h]
0x61DD1F: fld     dword ptr ds:0A3D65Ch
0x61DD25: push    esi
0x61DD26: fstp    dword ptr [ecx+0D8h]
0x61DD2C: mov     esi, 0Dh
0x61DD31: fld     dword ptr ds:0A30634h
0x61DD37: fst     dword ptr [ecx+0DCh]
0x61DD3D: mov     eax, [ecx+6Ch]
0x61DD40: cmp     eax, esi
0x61DD42: jz      short loc_61DDB1
0x61DD44: cmp     eax, 4
0x61DD47: jnz     short loc_61DD4F
0x61DD49: fst     dword ptr [ecx+0CCh]
0x61DD4F: cmp     eax, 6
0x61DD52: jnz     short loc_61DD5A
0x61DD54: mov     [ecx+12Ch], edx
0x61DD5A: cmp     eax, 4
0x61DD5D: jnz     short loc_61DD84
0x61DD5F: fld     dword ptr ds:0B36F70h
0x61DD65: fstp    [esp+8+var_4]
0x61DD69: fld     dword ptr [ecx+44h]
0x61DD6C: fstp    dword ptr [ecx+0ECh]
0x61DD72: fld     [esp+8+var_4]
0x61DD76: fstp    dword ptr [ecx+0F0h]
0x61DD7C: fstp    dword ptr [ecx+0F4h]
0x61DD82: jmp     short loc_61DD86
0x61DD84: fstp    st
0x61DD86: mov     eax, [ecx+6Ch]
0x61DD89: cmp     eax, 4
0x61DD8C: jz      short loc_61DDB3
0x61DD8E: cmp     eax, 7
0x61DD91: jz      short loc_61DDB3
0x61DD93: cmp     eax, 9
0x61DD96: jz      short loc_61DDB3
0x61DD98: cmp     eax, 8
0x61DD9B: jz      short loc_61DDB3
0x61DD9D: cmp     eax, 0Ch
0x61DDA0: mov     [ecx+6Ch], esi
0x61DDA3: jz      short loc_61DDB6
0x61DDA5: mov     byte ptr [ecx+191h], 1
0x61DDAC: pop     esi
0x61DDAD: pop     ecx
0x61DDAE: retn    4
0x61DDB1: fstp    st
0x61DDB3: mov     [ecx+6Ch], esi
0x61DDB6: pop     esi
0x61DDB7: pop     ecx
0x61DDB8: retn    4
