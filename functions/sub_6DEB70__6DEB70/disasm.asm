0x6DEB70: sub     esp, 18h
0x6DEB73: push    ebx
0x6DEB74: push    esi
0x6DEB75: mov     esi, ecx
0x6DEB77: mov     al, [esi+8]
0x6DEB7A: shr     al, 5
0x6DEB7D: mov     ebx, 1
0x6DEB82: test    bl, al
0x6DEB84: jz      short loc_6DEB91
0x6DEB86: fld     dword ptr ds:0A7A164h
0x6DEB8C: fstp    dword ptr [esi+28h]
0x6DEB8F: jmp     short loc_6DEBBF
0x6DEB91: fld     [esp+20h+arg_0]
0x6DEB95: push    ecx
0x6DEB96: fstp    [esp+24h+var_24]; float
0x6DEB99: call    sub_6C36B0
0x6DEB9E: test    al, al
0x6DEBA0: jz      short loc_6DEBBF
0x6DEBA2: mov     ecx, [esi+3Ch]
0x6DEBA5: test    ecx, ecx
0x6DEBA7: jz      def_6DEC86
0x6DEBAD: mov     edx, [ecx]
0x6DEBAF: mov     eax, [edx+94h]
0x6DEBB5: call    eax
0x6DEBB7: test    al, al
0x6DEBB9: jz      def_6DEC86
0x6DEBBF: mov     ecx, [esi+3Ch]
0x6DEBC2: test    ecx, ecx
0x6DEBC4: jz      def_6DEC86
0x6DEBCA: mov     edx, [ecx]
0x6DEBCC: fld     dword ptr [esi+28h]
0x6DEBCF: mov     edx, [edx+54h]
0x6DEBD2: lea     eax, [esp+20h+var_C]
0x6DEBD6: push    eax
0x6DEBD7: mov     eax, [esi+30h]
0x6DEBDA: push    eax
0x6DEBDB: push    ecx
0x6DEBDC: fstp    [esp+2Ch+var_2C]
0x6DEBDF: call    edx
0x6DEBE1: test    al, al
0x6DEBE3: jz      def_6DEC86
0x6DEBE9: fld     [esp+2Ch+var_18]
0x6DEBED: mov     ecx, [esi+30h]
0x6DEBF0: fst     [esp+2Ch+var_24]
0x6DEBF4: fld     [esp+2Ch+var_14]
0x6DEBF8: fst     [esp+2Ch+var_20]
0x6DEBFC: fld     [esp+2Ch+var_10]
0x6DEC00: fst     [esp+2Ch+var_1C]
0x6DEC04: fldz
0x6DEC06: fcom    st(3)
0x6DEC08: fnstsw  ax
0x6DEC0A: fld1
0x6DEC0C: test    ah, 41h
0x6DEC0F: jnz     short loc_6DEC19
0x6DEC11: fstp    st(4)
0x6DEC13: fst     [esp+2Ch+var_24]
0x6DEC17: jmp     short loc_6DEC2C
0x6DEC19: fcom    st(4)
0x6DEC1B: fnstsw  ax
0x6DEC1D: fstp    st(4)
0x6DEC1F: test    ah, 5
0x6DEC22: jp      short loc_6DEC2C
0x6DEC24: fxch    st(3)
0x6DEC26: fst     [esp+2Ch+var_24]
0x6DEC2A: fxch    st(3)
0x6DEC2C: fcom    st(2)
0x6DEC2E: fnstsw  ax
0x6DEC30: test    ah, 41h
0x6DEC33: jnz     short loc_6DEC3F
0x6DEC35: fstp    st(2)
0x6DEC37: fxch    st(1)
0x6DEC39: fst     [esp+2Ch+var_20]
0x6DEC3D: jmp     short loc_6DEC54
0x6DEC3F: fxch    st(2)
0x6DEC41: fcomp   st(3)
0x6DEC43: fnstsw  ax
0x6DEC45: test    ah, 41h
0x6DEC48: jnz     short loc_6DEC52
0x6DEC4A: fxch    st(2)
0x6DEC4C: fst     [esp+2Ch+var_20]
0x6DEC50: fxch    st(2)
0x6DEC52: fxch    st(1)
0x6DEC54: fcom    st(1)
0x6DEC56: fnstsw  ax
0x6DEC58: test    ah, 41h
0x6DEC5B: jnz     short loc_6DEC67
0x6DEC5D: fstp    st(2)
0x6DEC5F: fstp    st
0x6DEC61: fstp    [esp+2Ch+var_1C]
0x6DEC65: jmp     short loc_6DEC7A
0x6DEC67: fstp    st
0x6DEC69: fcomp   st(1)
0x6DEC6B: fnstsw  ax
0x6DEC6D: test    ah, 41h
0x6DEC70: jnz     short loc_6DEC78
0x6DEC72: fstp    [esp+2Ch+var_1C]
0x6DEC76: jmp     short loc_6DEC7A
0x6DEC78: fstp    st
0x6DEC7A: movzx   eax, byte ptr [esi+40h]
0x6DEC7E: and     eax, 7
0x6DEC81: cmp     eax, 3; switch 4 cases
0x6DEC84: ja      short def_6DEC86
0x6DEC86: jmp     ds:jpt_6DEC86[eax*4]; switch jump
0x6DEC8D: mov     eax, [esp+2Ch+var_24]; jumptable 006DEC86 case 0
0x6DEC91: mov     edx, [esp+2Ch+var_20]
0x6DEC95: add     [ecx+54h], ebx
0x6DEC98: mov     [ecx+1Ch], eax
0x6DEC9B: mov     eax, [esp+2Ch+var_1C]
0x6DEC9F: pop     esi
0x6DECA0: mov     [ecx+20h], edx
0x6DECA3: mov     [ecx+24h], eax
0x6DECA6: pop     ebx
0x6DECA7: add     esp, 18h
0x6DECAA: retn    4
0x6DECAD: mov     edx, [esp+2Ch+var_24]; jumptable 006DEC86 case 1
0x6DECB1: mov     eax, [esp+2Ch+var_20]
0x6DECB5: add     [ecx+54h], ebx
0x6DECB8: mov     [ecx+28h], edx
0x6DECBB: mov     edx, [esp+2Ch+var_1C]
0x6DECBF: pop     esi
0x6DECC0: mov     [ecx+2Ch], eax
0x6DECC3: mov     [ecx+30h], edx
0x6DECC6: pop     ebx
0x6DECC7: add     esp, 18h
0x6DECCA: retn    4
0x6DECCD: mov     eax, [esp+2Ch+var_24]; jumptable 006DEC86 case 2
0x6DECD1: mov     edx, [esp+2Ch+var_20]
0x6DECD5: add     [ecx+54h], ebx
0x6DECD8: mov     [ecx+34h], eax
0x6DECDB: mov     eax, [esp+2Ch+var_1C]
0x6DECDF: pop     esi
0x6DECE0: mov     [ecx+38h], edx
0x6DECE3: mov     [ecx+3Ch], eax
0x6DECE6: pop     ebx
0x6DECE7: add     esp, 18h
0x6DECEA: retn    4
0x6DECED: mov     edx, [esp+2Ch+var_24]; jumptable 006DEC86 case 3
0x6DECF1: mov     eax, [esp+2Ch+var_20]
0x6DECF5: add     [ecx+54h], ebx
0x6DECF8: mov     [ecx+40h], edx
0x6DECFB: mov     edx, [esp+2Ch+var_1C]
0x6DECFF: mov     [ecx+44h], eax
0x6DED02: mov     [ecx+48h], edx
