0x753400: sub     esp, 118h
0x753406: push    ebx
0x753407: mov     ebx, ecx
0x753409: push    ebp
0x75340A: push    esi
0x75340B: mov     esi, [ebx+18h]
0x75340E: push    edi
0x75340F: add     esi, 64h ; 'd'
0x753412: mov     ecx, 0Dh
0x753417: lea     edi, [esp+128h+var_68]
0x75341E: rep movsd
0x753420: mov     esi, [ebx+10h]
0x753423: add     esi, 64h ; 'd'
0x753426: mov     ecx, 0Dh
0x75342B: lea     edi, [esp+128h+var_9C]
0x753432: lea     eax, [esp+128h+var_34]
0x753439: rep movsd
0x75343B: push    eax
0x75343C: lea     ecx, [esp+12Ch+var_9C]
0x753443: call    sub_718A80
0x753448: lea     ecx, [esp+128h+var_68]
0x75344F: push    ecx
0x753450: lea     edx, [esp+12Ch+var_D0]
0x753454: push    edx
0x753455: lea     ecx, [esp+130h+var_34]
0x75345C: call    sub_53D7A0
0x753461: mov     eax, [esp+128h+var_AC]
0x753465: mov     ecx, [esp+128h+var_A8]
0x75346C: mov     edx, [esp+128h+var_A4]
0x753473: mov     [esp+128h+var_104], eax
0x753477: mov     [esp+128h+var_100], ecx
0x75347B: lea     eax, [ebx+30h]
0x75347E: push    eax
0x75347F: lea     ecx, [esp+12Ch+var_DC]
0x753483: push    ecx
0x753484: lea     ecx, [esp+130h+var_D0]
0x753488: mov     [esp+130h+var_FC], edx
0x75348C: call    sub_7101F0
0x753491: lea     ecx, [esp+128h+var_DC]
0x753495: call    sub_43F350
0x75349A: fstp    st
0x75349C: fld     dword ptr [ebx+28h]
0x75349F: mov     edi, [esp+128h+arg_4]
0x7534A6: fmul    st, st
0x7534A8: xor     ebp, ebp
0x7534AA: cmp     [edi+48h], bp
0x7534AE: fstp    [esp+128h+var_EC]
0x7534B2: jbe     loc_7535FD
0x7534B8: jmp     short loc_7534C0
0x7534BA: align 10h
0x7534C0: mov     eax, [edi+5Ch]
0x7534C3: fld     [esp+128h+arg_0]
0x7534CA: movzx   ecx, bp
0x7534CD: lea     edx, ds:0[ecx*8]
0x7534D4: sub     edx, ecx
0x7534D6: lea     esi, [eax+edx*4]
0x7534D9: fsub    dword ptr [esi+14h]
0x7534DC: fstp    [esp+128h+var_108]
0x7534E0: fldz
0x7534E2: fcomp   [esp+128h+var_108]
0x7534E6: fnstsw  ax
0x7534E8: test    ah, 44h
0x7534EB: jnp     loc_7535F0
0x7534F1: mov     eax, [edi+1Ch]
0x7534F4: lea     ecx, [ecx+ecx*2]
0x7534F7: mov     edx, [eax+ecx*4]
0x7534FA: lea     eax, [eax+ecx*4]
0x7534FD: mov     ecx, [eax+4]
0x753500: mov     [esp+128h+var_F8], edx
0x753504: fld     [esp+128h+var_F8]
0x753508: fsub    [esp+128h+var_104]
0x75350C: mov     edx, [eax+8]
0x75350F: mov     [esp+128h+var_F4], ecx
0x753513: mov     [esp+128h+var_F0], edx
0x753517: fstp    [esp+128h+var_E8]
0x75351B: fld     [esp+128h+var_F4]
0x75351F: fsub    [esp+128h+var_100]
0x753523: fstp    [esp+128h+var_E4]
0x753527: fld     [esp+128h+var_F0]
0x75352B: fsub    [esp+128h+var_FC]
0x75352F: fstp    [esp+128h+var_E0]
0x753533: fld     [esp+128h+var_E4]
0x753537: fld     [esp+128h+var_E8]
0x75353B: fld     [esp+128h+var_E0]
0x75353F: fld     st(1)
0x753541: fmulp   st(2), st
0x753543: fld     st(2)
0x753545: fmulp   st(3), st
0x753547: fxch    st(1)
0x753549: faddp   st(2), st
0x75354B: fmul    st, st
0x75354D: faddp   st(1), st
0x75354F: fstp    [esp+128h+var_118]
0x753553: fld     [esp+128h+var_118]
0x753557: call    __CIsqrt
0x75355C: fstp    [esp+128h+var_118]
0x753560: fld     [esp+128h+var_118]
0x753564: fstp    [esp+128h+var_118]
0x753568: fldz
0x75356A: fld     [esp+128h+var_118]
0x75356E: fucom   st(1)
0x753570: fnstsw  ax
0x753572: fstp    st(1)
0x753574: test    ah, 44h
0x753577: jnp     short loc_7535EE
0x753579: fld     [esp+128h+var_EC]
0x75357D: fcompp
0x75357F: fnstsw  ax
0x753581: test    ah, 1
0x753584: jnz     short loc_7535F0
0x753586: lea     eax, [esp+128h+var_F8]
0x75358A: push    eax
0x75358B: lea     ecx, [esp+12Ch+var_DC]
0x75358F: push    ecx
0x753590: lea     edx, [esp+130h+var_104]
0x753594: push    edx
0x753595: lea     eax, [esp+134h+var_114]
0x753599: push    eax
0x75359A: mov     ecx, ebx
0x75359C: call    sub_753280
0x7535A1: fld     dword ptr [ebx+1Ch]
0x7535A4: fmul    [esp+128h+var_108]
0x7535A8: fstp    [esp+128h+var_118]
0x7535AC: fld     [esp+128h+var_114]
0x7535B0: fld     [esp+128h+var_118]
0x7535B4: fld     st
0x7535B6: fmulp   st(2), st
0x7535B8: fxch    st(1)
0x7535BA: fstp    [esp+128h+var_114]
0x7535BE: fld     [esp+128h+var_110]
0x7535C2: fmul    st, st(1)
0x7535C4: fstp    [esp+128h+var_110]
0x7535C8: fmul    [esp+128h+var_10C]
0x7535CC: fstp    [esp+128h+var_10C]
0x7535D0: fld     dword ptr [esi]
0x7535D2: fadd    [esp+128h+var_114]
0x7535D6: fstp    dword ptr [esi]
0x7535D8: fld     dword ptr [esi+4]
0x7535DB: fadd    [esp+128h+var_110]
0x7535DF: fstp    dword ptr [esi+4]
0x7535E2: fld     dword ptr [esi+8]
0x7535E5: fadd    [esp+128h+var_10C]
0x7535E9: fstp    dword ptr [esi+8]
0x7535EC: jmp     short loc_7535F0
0x7535EE: fstp    st
0x7535F0: add     ebp, 1
0x7535F3: cmp     bp, [edi+48h]
0x7535F7: jb      loc_7534C0
0x7535FD: pop     edi
0x7535FE: pop     esi
0x7535FF: pop     ebp
0x753600: pop     ebx
0x753601: add     esp, 118h
0x753607: retn    8
