0x411330: push    0FFFFFFFFh
0x411332: push    offset SEH_411330
0x411337: mov     eax, large fs:0
0x41133D: push    eax
0x41133E: sub     esp, 28h
0x411341: push    esi
0x411342: push    edi
0x411343: mov     eax, ___security_cookie
0x411348: xor     eax, esp
0x41134A: push    eax
0x41134B: lea     eax, [esp+40h+var_C]
0x41134F: mov     large fs:0, eax
0x411355: mov     esi, ecx
0x411357: cmp     byte_B03144, 0
0x41135E: jz      loc_4114CE
0x411364: mov     eax, 1
0x411369: test    byte ptr dword_B33450, al
0x41136F: jnz     short loc_411392
0x411371: or      dword_B33450, eax
0x411377: mov     [esp+40h+var_4], 0
0x41137F: call    GetFarPlane
0x411384: fstp    flt_B3344C
0x41138A: mov     [esp+40h+var_4], 0FFFFFFFFh
0x411392: fld     flt_B33E9C
0x411398: fstp    [esp+40h+var_34]
0x41139C: fld     [esp+40h+var_34]
0x4113A0: fild    dword_B0314C
0x4113A6: fld1
0x4113A8: fld     st
0x4113AA: fdivrp  st(2), st
0x4113AC: fxch    st(1)
0x4113AE: fcomp   st(2)
0x4113B0: fnstsw  ax
0x4113B2: test    ah, 5
0x4113B5: jnp     short loc_4113CC
0x4113B7: fidiv   dword_B03154
0x4113BD: fcompp
0x4113BF: fnstsw  ax
0x4113C1: test    ah, 41h
0x4113C4: jnz     loc_4114CE
0x4113CA: jmp     short loc_4113D0
0x4113CC: fstp    st(1)
0x4113CE: fstp    st
0x4113D0: mov     ecx, esi; this
0x4113D2: call    GetFarPlane
0x4113D7: fstp    [esp+40h+var_2C]
0x4113DB: fild    dword_B0315C
0x4113E1: fstp    [esp+40h+var_30]
0x4113E5: fld     [esp+40h+var_30]
0x4113E9: fst     [esp+40h+var_30]
0x4113ED: fld     flt_B33E9C
0x4113F3: fld     st
0x4113F5: fld1
0x4113F7: fdivrp  st(1), st
0x4113F9: fisub   dword_B0314C
0x4113FF: fidiv   dword_B03154
0x411405: fstp    [esp+40h+var_34]
0x411409: fld1
0x41140B: fld     [esp+40h+var_34]
0x41140F: fcom    st(1)
0x411411: fnstsw  ax
0x411413: fstp    st(1)
0x411415: test    ah, 41h
0x411418: jnz     short loc_411428
0x41141A: fstp    st(2)
0x41141C: fstp    st(1)
0x41141E: fld     [esp+40h+var_2C]
0x411422: fstp    [esp+40h+var_30]
0x411426: jmp     short loc_411449
0x411428: fldz
0x41142A: fcomp   st(1)
0x41142C: fnstsw  ax
0x41142E: test    ah, 5
0x411431: jp      short loc_411445
0x411433: fld     [esp+40h+var_2C]
0x411437: fsub    st, st(3)
0x411439: fmulp   st(1), st
0x41143B: faddp   st(2), st
0x41143D: fxch    st(1)
0x41143F: fstp    [esp+40h+var_30]
0x411443: jmp     short loc_411449
0x411445: fstp    st(2)
0x411447: fstp    st(1)
0x411449: fld     [esp+40h+var_30]
0x41144D: fld     flt_B3344C
0x411453: fld     st
0x411455: fsubp   st(2), st
0x411457: fxch    st(1)
0x411459: fstp    [esp+40h+var_2C]
0x41145D: fld     [esp+40h+var_2C]
0x411461: fld     st
0x411463: fabs
0x411465: fstp    [esp+40h+var_2C]
0x411469: fld     [esp+40h+var_2C]
0x41146D: fcomp   ds:flt_A31C80
0x411473: fnstsw  ax
0x411475: test    ah, 41h
0x411478: jnz     short loc_4114C8
0x41147A: mov     eax, g_worldScenegraph
0x41147F: fmulp   st(2), st
0x411481: mov     eax, [eax+0DCh]
0x411487: lea     esi, [eax+0ECh]
0x41148D: faddp   st(1), st
0x41148F: mov     ecx, 7
0x411494: lea     edi, [esp+40h+a2]
0x411498: rep movsd
0x41149A: fstp    flt_B3344C
0x4114A0: fld     flt_B3344C
0x4114A6: fstp    [esp+40h+var_14]
0x4114AA: lea     ecx, [esp+40h+a2]
0x4114AE: push    ecx; a2
0x4114AF: mov     ecx, eax; this
0x4114B1: call    Camera_SetFrustum
0x4114B6: mov     ecx, [esp+40h+var_C]
0x4114BA: mov     large fs:0, ecx
0x4114C1: pop     ecx
0x4114C2: pop     edi
0x4114C3: pop     esi
0x4114C4: add     esp, 34h
0x4114C7: retn
0x4114C8: fstp    st(1)
0x4114CA: fstp    st
0x4114CC: fstp    st
0x4114CE: mov     ecx, [esp+40h+var_C]
0x4114D2: mov     large fs:0, ecx
0x4114D9: pop     ecx
0x4114DA: pop     edi
0x4114DB: pop     esi
0x4114DC: add     esp, 34h
0x4114DF: retn
