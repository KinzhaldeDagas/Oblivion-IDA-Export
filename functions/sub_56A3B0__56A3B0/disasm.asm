0x56A3B0: mov     eax, [esp+arg_0]
0x56A3B4: cmp     eax, 5; switch 6 cases
0x56A3B7: ja      short def_56A3B9
0x56A3B9: jmp     ds:jpt_56A3B9[eax*4]; switch jump
0x56A3C0: fld     [esp+arg_4]; jumptable 0056A3B9 case 0
0x56A3C4: fld     [esp+arg_8]
0x56A3C8: fucompp
0x56A3CA: fnstsw  ax
0x56A3CC: test    ah, 44h
0x56A3CF: jnp     short def_56A3B9
0x56A3D1: xor     al, al
0x56A3D3: retn
0x56A3D4: fld     [esp+arg_4]; jumptable 0056A3B9 case 1
0x56A3D8: fld     [esp+arg_8]
0x56A3DC: fucompp
0x56A3DE: fnstsw  ax
0x56A3E0: test    ah, 44h
0x56A3E3: jp      short def_56A3B9
0x56A3E5: xor     al, al
0x56A3E7: retn
0x56A3E8: fld     [esp+arg_4]; jumptable 0056A3B9 case 2
0x56A3EC: fld     [esp+arg_8]
0x56A3F0: fcompp
0x56A3F2: fnstsw  ax
0x56A3F4: test    ah, 1
0x56A3F7: jnz     short def_56A3B9
0x56A3F9: xor     al, al
0x56A3FB: retn
0x56A3FC: fld     [esp+arg_4]; jumptable 0056A3B9 case 3
0x56A400: fld     [esp+arg_8]
0x56A404: fcompp
0x56A406: fnstsw  ax
0x56A408: test    ah, 41h
0x56A40B: jnz     short def_56A3B9
0x56A40D: xor     al, al
0x56A40F: retn
0x56A410: fld     [esp+arg_4]; jumptable 0056A3B9 case 4
0x56A414: fld     [esp+arg_8]
0x56A418: fcompp
0x56A41A: fnstsw  ax
0x56A41C: test    ah, 41h
0x56A41F: jp      short def_56A3B9
0x56A421: xor     al, al
0x56A423: retn
0x56A424: fld     [esp+arg_4]; jumptable 0056A3B9 case 5
0x56A428: fld     [esp+arg_8]
0x56A42C: fcompp
0x56A42E: fnstsw  ax
0x56A430: test    ah, 5
0x56A433: jnp     short loc_56A3D1
