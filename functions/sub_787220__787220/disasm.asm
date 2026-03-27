0x787220: sub     esp, 10h
0x787223: push    esi
0x787224: push    edi
0x787225: mov     edi, [esp+18h+arg_4]
0x787229: movzx   eax, di
0x78722C: mov     [esp+18h+arg_4], eax
0x787230: fild    [esp+18h+arg_4]
0x787234: fld1
0x787236: fld     st
0x787238: fdiv    st, st(2)
0x78723A: fstp    [esp+18h+arg_4]
0x78723E: fld     [esp+18h+arg_0]
0x787242: fsubr   st, st(1)
0x787244: fld     [esp+18h+arg_4]
0x787248: fld     st
0x78724A: fdivr   st, st(2)
0x78724C: fstp    [esp+18h+arg_4]
0x787250: fld     [esp+18h+arg_4]
0x787254: fld     st
0x787256: call    Double_To_SInt32
0x78725B: mov     esi, eax
0x78725D: mov     [esp+18h+arg_4], esi
0x787261: fisub   [esp+18h+arg_4]
0x787265: fstp    [esp+18h+arg_4]
0x787269: fld     [esp+18h+arg_4]
0x78726D: fcomp   dword ptr ds:0A3D65Ch
0x787273: fnstsw  ax
0x787275: test    ah, 1
0x787278: jnz     short loc_78727D
0x78727A: add     esi, 1
0x78727D: test    si, si
0x787280: movzx   ecx, si
0x787283: mov     [esp+18h+arg_4], ecx
0x787287: fild    [esp+18h+arg_4]
0x78728B: fmulp   st(1), st
0x78728D: fsubr   st, st(1)
0x78728F: fstp    [esp+18h+arg_4]
0x787293: jz      loc_7873AE
0x787299: cmp     si, di
0x78729C: jz      loc_7873AE
0x7872A2: fld     [esp+18h+arg_4]
0x7872A6: fld     st
0x7872A8: fabs
0x7872AA: fstp    [esp+18h+arg_4]
0x7872AE: fld     [esp+18h+arg_4]
0x7872B2: fld     [esp+18h+arg_8]
0x7872B6: fcom    st(1)
0x7872B8: fnstsw  ax
0x7872BA: fstp    st(1)
0x7872BC: test    ah, 5
0x7872BF: jnp     loc_7873AA
0x7872C5: fstp    st(2)
0x7872C7: fstp    st(3)
0x7872C9: fld     st
0x7872CB: fsubrp  st(3), st
0x7872CD: fadd    st, st
0x7872CF: fdivp   st(2), st
0x7872D1: fld     st
0x7872D3: fsubrp  st(2), st
0x7872D5: fxch    st(1)
0x7872D7: fstp    [esp+18h+arg_0]
0x7872DB: fld     [esp+18h+arg_C]
0x7872DF: fld     st
0x7872E1: fsubr   st, st(2)
0x7872E3: fst     [esp+18h+var_8]
0x7872E7: fld     [esp+18h+arg_0]
0x7872EB: fsubrp  st(2), st
0x7872ED: fdivp   st(1), st
0x7872EF: fsubr   st, st(1)
0x7872F1: fstp    [esp+18h+arg_4]
0x7872F5: fld1
0x7872F7: fcom    [esp+18h+arg_4]
0x7872FB: fnstsw  ax
0x7872FD: test    ah, 41h
0x787300: jz      short loc_787308
0x787302: fstp    [esp+18h+arg_4]
0x787306: jmp     short loc_78730A
0x787308: fstp    st
0x78730A: fld     [esp+18h+arg_14]
0x78730E: mov     eax, [esp+18h+arg_20]
0x787312: fsubr   qword ptr ds:0A3DDD8h
0x787318: lea     edx, [esi-1]
0x78731B: mov     [eax], dx
0x78731E: fstp    [esp+18h+var_10]
0x787322: fsub    [esp+18h+arg_4]
0x787326: fstp    [esp+18h+arg_4]
0x78732A: fld     [esp+18h+arg_4]
0x78732E: fld     [esp+18h+arg_10]
0x787332: call    __CIpow
0x787337: fstp    [esp+18h+arg_4]
0x78733B: fld     [esp+18h+arg_4]
0x78733F: mov     ecx, [esp+18h+arg_18]
0x787343: fmul    [esp+18h+var_10]
0x787347: fadd    [esp+18h+arg_14]
0x78734B: fstp    dword ptr [ecx]
0x78734D: fld     [esp+18h+arg_0]
0x787351: fdiv    [esp+18h+var_8]
0x787355: fstp    [esp+18h+arg_4]
0x787359: fld1
0x78735B: fcom    [esp+18h+arg_4]
0x78735F: fnstsw  ax
0x787361: test    ah, 41h
0x787364: jz      short loc_78736C
0x787366: fstp    [esp+18h+arg_4]
0x78736A: jmp     short loc_78736E
0x78736C: fstp    st
0x78736E: fld     [esp+18h+arg_4]
0x787372: mov     edx, [esp+18h+arg_24]
0x787376: fld1
0x787378: mov     [edx], si
0x78737B: fsubrp  st(1), st
0x78737D: fstp    [esp+18h+arg_4]
0x787381: fld     [esp+18h+arg_4]
0x787385: fld     [esp+18h+arg_10]
0x787389: call    __CIpow
0x78738E: fstp    [esp+18h+arg_4]
0x787392: fld     [esp+18h+arg_4]
0x787396: mov     eax, [esp+18h+arg_1C]
0x78739A: fmul    [esp+18h+var_10]
0x78739E: pop     edi
0x78739F: pop     esi
0x7873A0: fadd    [esp+10h+arg_14]
0x7873A4: fstp    dword ptr [eax]
0x7873A6: add     esp, 10h
0x7873A9: retn
0x7873AA: fstp    st
0x7873AC: fstp    st
0x7873AE: mov     ecx, [esp+18h+arg_18]
0x7873B2: fstp    st(1)
0x7873B4: fld     [esp+18h+arg_14]
0x7873B8: fstp    dword ptr [ecx]
0x7873BA: fmulp   st(1), st
0x7873BC: call    Double_To_SInt32
0x7873C1: mov     edx, [esp+18h+arg_20]
0x7873C5: lea     ecx, [edi-1]
0x7873C8: mov     [edx], ax
0x7873CB: cmp     ax, cx
0x7873CE: movzx   eax, ax
0x7873D1: jl      short loc_7873D6
0x7873D3: movzx   eax, cx
0x7873D6: fld     dword ptr ds:0A40098h
0x7873DC: mov     [edx], ax
0x7873DF: mov     edx, [esp+18h+arg_1C]
0x7873E3: mov     eax, [esp+18h+arg_24]
0x7873E7: fstp    dword ptr [edx]
0x7873E9: pop     edi
0x7873EA: mov     word ptr [eax], 0FFFFh
0x7873EF: pop     esi
0x7873F0: add     esp, 10h
0x7873F3: retn
