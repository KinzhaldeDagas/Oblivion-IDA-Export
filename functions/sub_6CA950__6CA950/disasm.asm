0x6CA950: sub     esp, 8
0x6CA953: push    esi
0x6CA954: mov     esi, ecx
0x6CA956: mov     ecx, [esi+44h]
0x6CA959: test    ecx, ecx
0x6CA95B: jz      loc_6CAC36
0x6CA961: fld     dword ptr [esi+48h]
0x6CA964: fld     dword ptr ds:0A7DEB4h
0x6CA96A: fchs
0x6CA96C: fucompp
0x6CA96E: fnstsw  ax
0x6CA970: fld     [esp+0Ch+arg_0]
0x6CA974: test    ah, 44h
0x6CA977: jp      short loc_6CA980
0x6CA979: fld     st
0x6CA97B: fchs
0x6CA97D: fstp    dword ptr [esi+48h]
0x6CA980: fld     dword ptr [esi+4Ch]
0x6CA983: fld     dword ptr ds:0A7DEB4h
0x6CA989: fchs
0x6CA98B: fucompp
0x6CA98D: fnstsw  ax
0x6CA98F: test    ah, 44h
0x6CA992: jp      short loc_6CA99F
0x6CA994: fst     dword ptr [esi+4Ch]
0x6CA997: fld     dword ptr [esi+50h]
0x6CA99A: fadd    st, st(1)
0x6CA99C: fstp    dword ptr [esi+50h]
0x6CA99F: fld1
0x6CA9A1: lea     eax, [ecx-1]; switch 6 cases
0x6CA9A4: cmp     eax, 5
0x6CA9A7: fst     [esp+0Ch+var_8]; float
0x6CA9AB: fstp    [esp+0Ch+a2]; float
0x6CA9AF: ja      def_6CA9B5
0x6CA9B5: jmp     ds:jpt_6CA9B5[eax*4]; switch jump
0x6CA9BC: fld     dword ptr [esi+50h]; jumptable 006CA9B5 case 2
0x6CA9BF: fcomp   st(1)
0x6CA9C1: fnstsw  ax
0x6CA9C3: test    ah, 41h
0x6CA9C6: jnz     loc_6CAA5D
0x6CA9CC: fld     dword ptr [esi+4Ch]
0x6CA9CF: fcomp   st(1)
0x6CA9D1: fnstsw  ax
0x6CA9D3: test    ah, 41h
0x6CA9D6: jnz     short loc_6CA9E5
0x6CA9D8: fstp    st
0x6CA9DA: fld     dword ptr [esi+4Ch]
0x6CA9DD: fstp    [esp+0Ch+arg_0]
0x6CA9E1: fld     [esp+0Ch+arg_0]
0x6CA9E5: fld     st
0x6CA9E7: fsub    dword ptr [esi+4Ch]
0x6CA9EA: fld     dword ptr [esi+50h]
0x6CA9ED: fsub    dword ptr [esi+4Ch]
0x6CA9F0: fdivp   st(1), st
0x6CA9F2: fstp    [esp+0Ch+var_8]; float
0x6CA9F6: jmp     def_6CA9B5
0x6CA9FB: fld     dword ptr [esi+50h]; jumptable 006CA9B5 case 5
0x6CA9FE: fcomp   st(1)
0x6CAA00: fnstsw  ax
0x6CAA02: test    ah, 41h
0x6CAA05: jnz     short loc_6CAA36
0x6CAA07: fld     dword ptr [esi+4Ch]
0x6CAA0A: fcomp   st(1)
0x6CAA0C: fnstsw  ax
0x6CAA0E: test    ah, 41h
0x6CAA11: jnz     short loc_6CAA20
0x6CAA13: fstp    st
0x6CAA15: fld     dword ptr [esi+4Ch]
0x6CAA18: fstp    [esp+0Ch+arg_0]
0x6CAA1C: fld     [esp+0Ch+arg_0]
0x6CAA20: fld     st
0x6CAA22: fsub    dword ptr [esi+4Ch]
0x6CAA25: fld     dword ptr [esi+50h]
0x6CAA28: fsub    dword ptr [esi+4Ch]
0x6CAA2B: fdivp   st(1), st
0x6CAA2D: fstp    [esp+0Ch+a2]; float
0x6CAA31: jmp     def_6CA9B5
0x6CAA36: fld     dword ptr [esi+54h]
0x6CAA39: fld     dword ptr ds:0A7DEB4h
0x6CAA3F: fchs
0x6CAA41: fucompp
0x6CAA43: fnstsw  ax
0x6CAA45: test    ah, 44h
0x6CAA48: jnp     short loc_6CAA5D
0x6CAA4A: fld     dword ptr [esi+54h]
0x6CAA4D: fsub    st, st(1)
0x6CAA4F: fstp    dword ptr [esi+48h]
0x6CAA52: fld     dword ptr ds:0A7DEB4h
0x6CAA58: fchs
0x6CAA5A: fstp    dword ptr [esi+54h]
0x6CAA5D: mov     dword ptr [esi+44h], 1
0x6CAA64: jmp     def_6CA9B5
0x6CAA69: fld     dword ptr [esi+50h]; jumptable 006CA9B5 case 3
0x6CAA6C: fcomp   st(1)
0x6CAA6E: fnstsw  ax
0x6CAA70: test    ah, 41h
0x6CAA73: jnz     short loc_6CAAA4
0x6CAA75: fld     dword ptr [esi+4Ch]
0x6CAA78: fcomp   st(1)
0x6CAA7A: fnstsw  ax
0x6CAA7C: test    ah, 41h
0x6CAA7F: jnz     short loc_6CAA8E
0x6CAA81: fstp    st
0x6CAA83: fld     dword ptr [esi+4Ch]
0x6CAA86: fstp    [esp+0Ch+arg_0]
0x6CAA8A: fld     [esp+0Ch+arg_0]
0x6CAA8E: fld     dword ptr [esi+50h]
0x6CAA91: fsub    st, st(1)
0x6CAA93: fld     dword ptr [esi+50h]
0x6CAA96: fsub    dword ptr [esi+4Ch]
0x6CAA99: fdivp   st(1), st
0x6CAA9B: fstp    [esp+0Ch+var_8]; float
0x6CAA9F: jmp     def_6CA9B5
0x6CAAA4: fstp    st
0x6CAAA6: push    0; char
0x6CAAA8: fldz
0x6CAAAA: push    ecx
0x6CAAAB: mov     ecx, esi
0x6CAAAD: fstp    [esp+14h+var_14]; float
0x6CAAB0: call    sub_6C9CB0
0x6CAAB5: pop     esi
0x6CAAB6: add     esp, 8
0x6CAAB9: retn    8
0x6CAABC: fadd    dword ptr [esi+48h]; jumptable 006CA9B5 case 6
0x6CAABF: push    ecx
0x6CAAC0: mov     ecx, [esi+58h]
0x6CAAC3: fstp    [esp+10h+a2]
0x6CAAC7: fld     [esp+10h+a2]
0x6CAACB: fstp    [esp+10h+var_10]; float
0x6CAACE: push    esi; int
0x6CAACF: call    sub_6C6B30
0x6CAAD4: fstp    [esp+0Ch+a2]
0x6CAAD8: mov     eax, [esi+58h]
0x6CAADB: fld     [esp+0Ch+a2]
0x6CAADF: fdiv    dword ptr [eax+28h]
0x6CAAE2: fstp    [esp+0Ch+a2]
0x6CAAE6: fld     [esp+0Ch+a2]
0x6CAAEA: fld     [esp+0Ch+arg_0]
0x6CAAEE: fld     st
0x6CAAF0: fsubp   st(2), st
0x6CAAF2: fxch    st(1)
0x6CAAF4: fstp    dword ptr [eax+48h]
0x6CAAF7: cmp     dword ptr [esi+44h], 0
0x6CAAFB: mov     dword ptr [esi+44h], 4
0x6CAB02: setz    al
0x6CAB05: test    al, al
0x6CAB07: jz      short loc_6CAB23; jumptable 006CA9B5 case 4
0x6CAB09: mov     ecx, [esi+40h]
0x6CAB0C: fstp    st
0x6CAB0E: lea     eax, [esp+0Ch+a2]
0x6CAB12: push    eax; a2
0x6CAB13: add     ecx, 4Ch ; 'L'; this
0x6CAB16: mov     [esp+10h+a2], esi
0x6CAB1A: call    sub_73A5E0
0x6CAB1F: fld     [esp+0Ch+arg_0]
0x6CAB23: fld     dword ptr [esi+50h]; jumptable 006CA9B5 case 4
0x6CAB26: fcomp   st(1)
0x6CAB28: fnstsw  ax
0x6CAB2A: test    ah, 41h
0x6CAB2D: jnz     short loc_6CAB5B
0x6CAB2F: fld     dword ptr [esi+4Ch]
0x6CAB32: fcomp   st(1)
0x6CAB34: fnstsw  ax
0x6CAB36: test    ah, 41h
0x6CAB39: jnz     short loc_6CAB48
0x6CAB3B: fstp    st
0x6CAB3D: fld     dword ptr [esi+4Ch]
0x6CAB40: fstp    [esp+0Ch+arg_0]
0x6CAB44: fld     [esp+0Ch+arg_0]
0x6CAB48: fld     dword ptr [esi+50h]
0x6CAB4B: fsub    st, st(1)
0x6CAB4D: fld     dword ptr [esi+50h]
0x6CAB50: fsub    dword ptr [esi+4Ch]
0x6CAB53: fdivp   st(1), st
0x6CAB55: fstp    [esp+0Ch+a2]; float
0x6CAB59: jmp     short def_6CA9B5
0x6CAB5B: fstp    st
0x6CAB5D: push    1; char
0x6CAB5F: fldz
0x6CAB61: push    ecx
0x6CAB62: mov     ecx, esi
0x6CAB64: fstp    [esp+14h+var_14]; float
0x6CAB67: call    sub_6C9CB0
0x6CAB6C: pop     esi
0x6CAB6D: add     esp, 8
0x6CAB70: retn    8
0x6CAB73: fld     dword ptr [esi+3Ch]; jumptable 006CA9B5 case 1
0x6CAB76: fstp    dword ptr [esi+4Ch]
