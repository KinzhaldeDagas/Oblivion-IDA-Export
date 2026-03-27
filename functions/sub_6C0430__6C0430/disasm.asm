0x6C0430: push    ebp
0x6C0431: mov     ebp, esp
0x6C0433: and     esp, 0FFFFFFF8h
0x6C0436: sub     esp, 4Ch
0x6C0439: fldz
0x6C043B: mov     eax, [ebp+arg_4]
0x6C043E: add     eax, 0FFFFFFFFh
0x6C0441: fstp    [esp+4Ch+var_4C]
0x6C0444: push    ebx
0x6C0445: push    esi
0x6C0446: push    edi
0x6C0447: jz      loc_6C059B
0x6C044D: mov     esi, [ebp+arg_0]
0x6C0450: mov     [esp+58h+var_44], eax
0x6C0454: mov     eax, ds:0B23D84h
0x6C0459: xor     edi, edi
0x6C045B: test    eax, eax
0x6C045D: lea     ebx, [esi+4Ch]
0x6C0460: mov     [esp+58h+var_48], edi
0x6C0464: jl      loc_6C058E
0x6C046A: lea     ebx, [ebx+0]
0x6C0470: fild    [esp+58h+var_48]
0x6C0474: lea     eax, [esp+58h+var_C]
0x6C0478: push    eax; int
0x6C0479: push    ebx; int
0x6C047A: fmul    dword ptr ds:0B3C2F4h
0x6C0480: push    esi; int
0x6C0481: push    ecx
0x6C0482: fstp    [esp+68h+var_48]
0x6C0486: fld     [esp+68h+var_48]
0x6C048A: fstp    [esp+68h+var_68]; float
0x6C048D: call    sub_6BFDB0
0x6C0492: fld     [esp+68h+var_48]
0x6C0496: add     esp, 10h
0x6C0499: lea     ecx, [esp+58h+var_18]
0x6C049D: push    ecx; int
0x6C049E: push    ebx; int
0x6C049F: push    esi; int
0x6C04A0: push    ecx
0x6C04A1: fstp    [esp+68h+var_68]; float
0x6C04A4: call    sub_6BFE90
0x6C04A9: fld     [esp+68h+var_8]
0x6C04AD: add     esp, 10h
0x6C04B0: fld     st
0x6C04B2: fld     [esp+58h+var_10]
0x6C04B6: fld     st
0x6C04B8: fmulp   st(2), st
0x6C04BA: fld     [esp+58h+var_4]
0x6C04BE: fld     st
0x6C04C0: fld     [esp+58h+var_14]
0x6C04C4: fld     st
0x6C04C6: fmulp   st(2), st
0x6C04C8: fxch    st(4)
0x6C04CA: fsubrp  st(1), st
0x6C04CC: fstp    [esp+58h+var_24]
0x6C04D0: fld     st
0x6C04D2: fld     [esp+58h+var_18]
0x6C04D6: fld     st
0x6C04D8: fmulp   st(2), st
0x6C04DA: fld     [esp+58h+var_C]
0x6C04DE: fld     st
0x6C04E0: fmulp   st(5), st
0x6C04E2: fxch    st(2)
0x6C04E4: fsubrp  st(4), st
0x6C04E6: fxch    st(3)
0x6C04E8: fstp    [esp+58h+var_20]
0x6C04EC: fld     st
0x6C04EE: fmulp   st(4), st
0x6C04F0: fld     st(4)
0x6C04F2: fmulp   st(3), st
0x6C04F4: fxch    st(3)
0x6C04F6: fsubrp  st(2), st
0x6C04F8: fxch    st(1)
0x6C04FA: fstp    [esp+58h+var_1C]
0x6C04FE: fld     [esp+58h+var_20]
0x6C0502: fld     [esp+58h+var_24]
0x6C0506: fld     [esp+58h+var_1C]
0x6C050A: fxch    st(5)
0x6C050C: fstp    [esp+58h+var_38]
0x6C0510: fxch    st(3)
0x6C0512: fstp    [esp+58h+var_40]
0x6C0516: fxch    st(1)
0x6C0518: fstp    [esp+58h+var_30]
0x6C051C: fld     st(1)
0x6C051E: fmulp   st(2), st
0x6C0520: fmul    st, st
0x6C0522: faddp   st(1), st
0x6C0524: fld     st(1)
0x6C0526: fmulp   st(2), st
0x6C0528: faddp   st(1), st
0x6C052A: fstp    [esp+58h+var_48]
0x6C052E: fld     [esp+58h+var_48]
0x6C0532: call    __CIsqrt
0x6C0537: fstp    [esp+58h+var_48]
0x6C053B: fld     [esp+58h+var_48]
0x6C053F: fld     [esp+58h+var_40]
0x6C0543: fmul    st, st
0x6C0545: fld     [esp+58h+var_38]
0x6C0549: fmul    st, st
0x6C054B: faddp   st(1), st
0x6C054D: fld     [esp+58h+var_30]
0x6C0551: fmul    st, st
0x6C0553: faddp   st(1), st
0x6C0555: fstp    [esp+58h+var_48]
0x6C0559: fdiv    [esp+58h+var_48]
0x6C055D: fstp    [esp+58h+var_48]
0x6C0561: fld     [esp+58h+var_48]
0x6C0565: fld     [esp+58h+var_4C]
0x6C0569: fcomp   st(1)
0x6C056B: fnstsw  ax
0x6C056D: test    ah, 5
0x6C0570: jp      short loc_6C0578
0x6C0572: fstp    [esp+58h+var_4C]
0x6C0576: jmp     short loc_6C057A
0x6C0578: fstp    st
0x6C057A: mov     eax, ds:0B23D84h
0x6C057F: add     edi, 1
0x6C0582: cmp     edi, eax
0x6C0584: mov     [esp+58h+var_48], edi
0x6C0588: jle     loc_6C0470
0x6C058E: sub     [esp+58h+var_44], 1
0x6C0593: mov     esi, ebx
0x6C0595: jnz     loc_6C0459
0x6C059B: fld     [esp+58h+var_4C]
0x6C059F: pop     edi
0x6C05A0: pop     esi
0x6C05A1: pop     ebx
0x6C05A2: mov     esp, ebp
0x6C05A4: pop     ebp
0x6C05A5: retn
