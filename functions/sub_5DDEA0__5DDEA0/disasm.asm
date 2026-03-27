0x5DDEA0: sub     esp, 8
0x5DDEA3: push    esi; a3
0x5DDEA4: mov     esi, ecx
0x5DDEA6: mov     ecx, [esi+38h]
0x5DDEA9: push    0FB5h
0x5DDEAE: call    Tile_GetFloat
0x5DDEB3: fdiv    qword ptr ds:0A309F0h
0x5DDEB9: fld     dword ptr ds:0B14864h
0x5DDEBF: fld     dword ptr ds:0B1485Ch
0x5DDEC5: fld     st
0x5DDEC7: fsubp   st(2), st
0x5DDEC9: fxch    st(2)
0x5DDECB: fmulp   st(1), st
0x5DDECD: faddp   st(1), st
0x5DDECF: fstp    [esp+0Ch+var_4]
0x5DDED3: fld     dword ptr ds:0B06C2Ch
0x5DDED9: fld     [esp+0Ch+var_4]
0x5DDEDD: fld     st
0x5DDEDF: fucomp  st(2)
0x5DDEE1: fnstsw  ax
0x5DDEE3: fstp    st(1)
0x5DDEE5: test    ah, 44h
0x5DDEE8: jnp     short loc_5DDF04
0x5DDEEA: fldz
0x5DDEEC: fcomp   st(1)
0x5DDEEE: fnstsw  ax
0x5DDEF0: test    ah, 5
0x5DDEF3: jp      short loc_5DDF04
0x5DDEF5: fstp    dword ptr ds:0B06C2Ch
0x5DDEFB: mov     byte ptr ds:0B34FA4h, 1
0x5DDF02: jmp     short loc_5DDF06
0x5DDF04: fstp    st
0x5DDF06: cmp     dword ptr [esi+0E8h], 0
0x5DDF0D: jz      loc_5DE040
0x5DDF13: mov     ecx, [esi+64h]
0x5DDF16: push    0FB5h
0x5DDF1B: call    Tile_GetFloat
0x5DDF20: fstp    [esp+0Ch+a3]
0x5DDF24: mov     ecx, [esi+6Ch]
0x5DDF27: push    0FB5h
0x5DDF2C: call    Tile_GetFloat
0x5DDF31: fstp    [esp+0Ch+var_4]
0x5DDF35: fld     dword ptr ds:0B1483Ch
0x5DDF3B: fld     dword ptr ds:0B14834h
0x5DDF41: fld     st
0x5DDF43: fsubp   st(2), st
0x5DDF45: fld     [esp+0Ch+a3]
0x5DDF49: fld     qword ptr ds:0A309F0h
0x5DDF4F: fdiv    st(1), st
0x5DDF51: fxch    st(3)
0x5DDF53: fmulp   st(1), st
0x5DDF55: faddp   st(1), st
0x5DDF57: fstp    [esp+0Ch+a3]; a3
0x5DDF5B: fld     dword ptr ds:0B14854h
0x5DDF61: fld     dword ptr ds:0B1484Ch
0x5DDF67: fld     st
0x5DDF69: fsubp   st(2), st
0x5DDF6B: fld     [esp+0Ch+var_4]
0x5DDF6F: fdivrp  st(3), st
0x5DDF71: fxch    st(1)
0x5DDF73: fmulp   st(2), st
0x5DDF75: faddp   st(1), st
0x5DDF77: fstp    [esp+0Ch+var_4]; a3
0x5DDF7B: fld     [esp+0Ch+a3]
0x5DDF7F: fld     [esp+0Ch+var_4]
0x5DDF83: fcompp
0x5DDF85: fnstsw  ax
0x5DDF87: test    ah, 5
0x5DDF8A: jp      loc_5DE040
0x5DDF90: mov     eax, [esi+0E8h]
0x5DDF96: fld     dword ptr ds:0A6B328h
0x5DDF9C: cmp     eax, [esi+84h]
0x5DDFA2: push    ecx
0x5DDFA3: fstp    [esp+10h+a2]; a3
0x5DDFA6: push    0FB3h; a2
0x5DDFAB: jnz     short loc_5DDFF0
0x5DDFAD: mov     ecx, [esi+6Ch]; this
0x5DDFB0: call    Tile_SetFloat
0x5DDFB5: fld     [esp+0Ch+a3]
0x5DDFB9: fld     dword ptr ds:0B1484Ch
0x5DDFBF: push    ecx
0x5DDFC0: fld     st
0x5DDFC2: mov     ecx, [esi+6Ch]; this
0x5DDFC5: fsubp   st(2), st
0x5DDFC7: fsubr   dword ptr ds:0B14854h
0x5DDFCD: fdivp   st(1), st
0x5DDFCF: fmul    qword ptr ds:0A309F0h
0x5DDFD5: fstp    [esp+10h+var_4]
0x5DDFD9: fld     [esp+10h+var_4]
0x5DDFDD: fstp    [esp+10h+a2]; a3
0x5DDFE0: push    0FB3h; a2
0x5DDFE5: call    Tile_SetFloat
0x5DDFEA: push    ecx
0x5DDFEB: mov     ecx, [esi+6Ch]
0x5DDFEE: jmp     short loc_5DE031
0x5DDFF0: mov     ecx, [esi+64h]; this
0x5DDFF3: call    Tile_SetFloat
0x5DDFF8: fld     [esp+0Ch+var_4]
0x5DDFFC: fld     dword ptr ds:0B14834h
0x5DE002: push    ecx
0x5DE003: fld     st
0x5DE005: mov     ecx, [esi+64h]; this
0x5DE008: fsubp   st(2), st
0x5DE00A: fsubr   dword ptr ds:0B1483Ch
0x5DE010: fdivp   st(1), st
0x5DE012: fmul    qword ptr ds:0A309F0h
0x5DE018: fstp    [esp+10h+var_4]; a3
0x5DE01C: fld     [esp+10h+var_4]
0x5DE020: fstp    [esp+10h+a2]; a3
0x5DE023: push    0FB3h; a2
0x5DE028: call    Tile_SetFloat
0x5DE02D: push    ecx
0x5DE02E: mov     ecx, [esi+64h]; this
0x5DE031: fldz
0x5DE033: fstp    [esp+10h+a2]; a3
0x5DE036: push    0FB3h; a2
0x5DE03B: call    Tile_SetFloat
0x5DE040: mov     eax, [esi+110h]
0x5DE046: mov     ecx, [eax+0Ch]
0x5DE049: add     eax, 8
0x5DE04C: mov     eax, [eax]
0x5DE04E: add     ecx, ecx
0x5DE050: add     ecx, ecx
0x5DE052: lea     edx, [eax+eax*2]
0x5DE055: cmp     edx, ecx
0x5DE057: jbe     short loc_5DE0B5
0x5DE059: mov     ecx, [esi+44h]
0x5DE05C: push    0FDDh
0x5DE061: call    Tile_GetFloat
0x5DE066: fcomp   dword ptr ds:0A2F948h
0x5DE06C: fnstsw  ax
0x5DE06E: test    ah, 44h
0x5DE071: jnp     short loc_5DE0AD
0x5DE073: mov     ecx, [esi+8Ch]
0x5DE079: push    0FDDh
0x5DE07E: call    Tile_GetFloat
0x5DE083: fcomp   dword ptr ds:0A2F948h
0x5DE089: fnstsw  ax
0x5DE08B: test    ah, 44h
0x5DE08E: jnp     short loc_5DE0AD
0x5DE090: mov     ecx, [esi+90h]
0x5DE096: push    0FDDh
0x5DE09B: call    Tile_GetFloat
0x5DE0A0: fcomp   dword ptr ds:0A2F948h
0x5DE0A6: fnstsw  ax
0x5DE0A8: test    ah, 44h
0x5DE0AB: jp      short loc_5DE0B5
0x5DE0AD: fld     dword ptr ds:0A379B4h
0x5DE0B3: jmp     short loc_5DE0B7
0x5DE0B5: fld1
0x5DE0B7: push    ecx
0x5DE0B8: mov     ecx, [esi+4]; this
0x5DE0BB: fstp    [esp+10h+a2]; a3
0x5DE0BE: push    0FB1h; a2
0x5DE0C3: call    Tile_SetFloat
0x5DE0C8: mov     ecx, [esi+94h]
0x5DE0CE: push    0FB5h
0x5DE0D3: call    Tile_GetFloat
0x5DE0D8: fcomp   qword ptr ds:0A309F0h
0x5DE0DE: fnstsw  ax
0x5DE0E0: test    ah, 5
0x5DE0E3: jp      short loc_5DE0FD
0x5DE0E5: cmp     byte ptr ds:0B43077h, 0
0x5DE0EC: jz      short loc_5DE0FD
0x5DE0EE: mov     ecx, [esi+48h]
0x5DE0F1: mov     eax, [esi]
0x5DE0F3: mov     edx, [eax+0Ch]
0x5DE0F6: push    ecx
0x5DE0F7: push    9
0x5DE0F9: mov     ecx, esi
0x5DE0FB: call    edx
0x5DE0FD: pop     esi
0x5DE0FE: add     esp, 8
0x5DE101: retn
