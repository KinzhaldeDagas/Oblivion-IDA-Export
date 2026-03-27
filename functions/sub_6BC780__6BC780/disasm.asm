0x6BC780: push    ebp
0x6BC781: mov     ebp, esp
0x6BC783: and     esp, 0FFFFFFF8h
0x6BC786: sub     esp, 4Ch
0x6BC789: fldz
0x6BC78B: mov     eax, [ebp+arg_4]
0x6BC78E: add     eax, 0FFFFFFFFh
0x6BC791: fstp    [esp+4Ch+var_4C]
0x6BC794: push    ebx
0x6BC795: push    esi
0x6BC796: push    edi
0x6BC797: jz      loc_6BC8EB
0x6BC79D: mov     esi, [ebp+arg_0]
0x6BC7A0: mov     [esp+58h+var_44], eax
0x6BC7A4: mov     eax, ds:0B23D84h
0x6BC7A9: xor     edi, edi
0x6BC7AB: test    eax, eax
0x6BC7AD: lea     ebx, [esi+40h]
0x6BC7B0: mov     [esp+58h+var_48], edi
0x6BC7B4: jl      loc_6BC8DE
0x6BC7BA: lea     ebx, [ebx+0]
0x6BC7C0: fild    [esp+58h+var_48]
0x6BC7C4: lea     eax, [esp+58h+var_C]
0x6BC7C8: push    eax; int
0x6BC7C9: push    ebx; int
0x6BC7CA: fmul    dword ptr ds:0B3C2F4h
0x6BC7D0: push    esi; int
0x6BC7D1: push    ecx
0x6BC7D2: fstp    [esp+68h+var_48]
0x6BC7D6: fld     [esp+68h+var_48]
0x6BC7DA: fstp    [esp+68h+var_68]; float
0x6BC7DD: call    sub_6BC480
0x6BC7E2: fld     [esp+68h+var_48]
0x6BC7E6: add     esp, 10h
0x6BC7E9: lea     ecx, [esp+58h+var_18]
0x6BC7ED: push    ecx; int
0x6BC7EE: push    ebx; int
0x6BC7EF: push    esi; int
0x6BC7F0: push    ecx
0x6BC7F1: fstp    [esp+68h+var_68]; float
0x6BC7F4: call    sub_6BC560
0x6BC7F9: fld     [esp+68h+var_8]
0x6BC7FD: add     esp, 10h
0x6BC800: fld     st
0x6BC802: fld     [esp+58h+var_10]
0x6BC806: fld     st
0x6BC808: fmulp   st(2), st
0x6BC80A: fld     [esp+58h+var_4]
0x6BC80E: fld     st
0x6BC810: fld     [esp+58h+var_14]
0x6BC814: fld     st
0x6BC816: fmulp   st(2), st
0x6BC818: fxch    st(4)
0x6BC81A: fsubrp  st(1), st
0x6BC81C: fstp    [esp+58h+var_24]
0x6BC820: fld     st
0x6BC822: fld     [esp+58h+var_18]
0x6BC826: fld     st
0x6BC828: fmulp   st(2), st
0x6BC82A: fld     [esp+58h+var_C]
0x6BC82E: fld     st
0x6BC830: fmulp   st(5), st
0x6BC832: fxch    st(2)
0x6BC834: fsubrp  st(4), st
0x6BC836: fxch    st(3)
0x6BC838: fstp    [esp+58h+var_20]
0x6BC83C: fld     st
0x6BC83E: fmulp   st(4), st
0x6BC840: fld     st(4)
0x6BC842: fmulp   st(3), st
0x6BC844: fxch    st(3)
0x6BC846: fsubrp  st(2), st
0x6BC848: fxch    st(1)
0x6BC84A: fstp    [esp+58h+var_1C]
0x6BC84E: fld     [esp+58h+var_20]
0x6BC852: fld     [esp+58h+var_24]
0x6BC856: fld     [esp+58h+var_1C]
0x6BC85A: fxch    st(5)
0x6BC85C: fstp    [esp+58h+var_38]
0x6BC860: fxch    st(3)
0x6BC862: fstp    [esp+58h+var_40]
0x6BC866: fxch    st(1)
0x6BC868: fstp    [esp+58h+var_30]
0x6BC86C: fld     st(1)
0x6BC86E: fmulp   st(2), st
0x6BC870: fmul    st, st
0x6BC872: faddp   st(1), st
0x6BC874: fld     st(1)
0x6BC876: fmulp   st(2), st
0x6BC878: faddp   st(1), st
0x6BC87A: fstp    [esp+58h+var_48]
0x6BC87E: fld     [esp+58h+var_48]
0x6BC882: call    __CIsqrt
0x6BC887: fstp    [esp+58h+var_48]
0x6BC88B: fld     [esp+58h+var_48]
0x6BC88F: fld     [esp+58h+var_40]
0x6BC893: fmul    st, st
0x6BC895: fld     [esp+58h+var_38]
0x6BC899: fmul    st, st
0x6BC89B: faddp   st(1), st
0x6BC89D: fld     [esp+58h+var_30]
0x6BC8A1: fmul    st, st
0x6BC8A3: faddp   st(1), st
0x6BC8A5: fstp    [esp+58h+var_48]
0x6BC8A9: fdiv    [esp+58h+var_48]
0x6BC8AD: fstp    [esp+58h+var_48]
0x6BC8B1: fld     [esp+58h+var_48]
0x6BC8B5: fld     [esp+58h+var_4C]
0x6BC8B9: fcomp   st(1)
0x6BC8BB: fnstsw  ax
0x6BC8BD: test    ah, 5
0x6BC8C0: jp      short loc_6BC8C8
0x6BC8C2: fstp    [esp+58h+var_4C]
0x6BC8C6: jmp     short loc_6BC8CA
0x6BC8C8: fstp    st
0x6BC8CA: mov     eax, ds:0B23D84h
0x6BC8CF: add     edi, 1
0x6BC8D2: cmp     edi, eax
0x6BC8D4: mov     [esp+58h+var_48], edi
0x6BC8D8: jle     loc_6BC7C0
0x6BC8DE: sub     [esp+58h+var_44], 1
0x6BC8E3: mov     esi, ebx
0x6BC8E5: jnz     loc_6BC7A9
0x6BC8EB: fld     [esp+58h+var_4C]
0x6BC8EF: pop     edi
0x6BC8F0: pop     esi
0x6BC8F1: pop     ebx
0x6BC8F2: mov     esp, ebp
0x6BC8F4: pop     ebp
0x6BC8F5: retn
