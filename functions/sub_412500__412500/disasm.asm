0x412500: sub     esp, 2Ch
0x412503: push    ebp
0x412504: mov     ebp, [esp+30h+arg_0]
0x412508: test    ebp, ebp
0x41250A: mov     [esp+30h+var_2C], ecx
0x41250E: jz      loc_412615
0x412514: fld1
0x412516: push    edi
0x412517: fstp    [esp+34h+var_10]
0x41251B: xor     edi, edi
0x41251D: cmp     dword_B03178, edi
0x412523: fldz
0x412525: fst     [esp+34h+var_C]
0x412529: fst     [esp+34h+var_8]
0x41252D: fstp    [esp+34h+var_4]
0x412531: fld     flt_B03174
0x412537: fmul    ds:dbl_A2FAA0
0x41253D: fstp    [esp+34h+arg_0]
0x412541: jbe     loc_412614
0x412547: push    ebx
0x412548: mov     ebx, [esp+38h+arg_4]
0x41254C: push    esi
0x41254D: lea     ecx, [ecx+0]
0x412550: mov     eax, edi
0x412552: shr     eax, 5
0x412555: mov     ecx, eax
0x412557: shl     ecx, 5
0x41255A: mov     edx, ecx
0x41255C: mov     ecx, edi
0x41255E: sub     ecx, edx
0x412560: mov     edx, 1
0x412565: shl     edx, cl
0x412567: mov     ecx, [esp+3Ch+var_2C]
0x41256B: test    [ecx+eax*4+4], edx
0x41256F: jz      loc_412603
0x412575: lea     edx, [esp+3Ch+var_28]
0x412579: push    edx
0x41257A: push    edi
0x41257B: call    sub_412250
0x412580: fld     dword ptr [ebx]
0x412582: fadd    [esp+44h+var_28]
0x412586: add     esp, 8
0x412589: lea     eax, [esp+3Ch+var_10]
0x41258D: push    eax; int
0x41258E: fstp    [esp+40h+var_28]
0x412592: push    ecx
0x412593: fld     dword ptr [ebx+4]
0x412596: fadd    [esp+44h+var_24]
0x41259A: fstp    [esp+44h+var_24]
0x41259E: fld     dword ptr [ebx+8]
0x4125A1: fadd    [esp+44h+var_20]
0x4125A5: fstp    [esp+44h+var_20]
0x4125A9: fld     flt_B03174
0x4125AF: fstp    [esp+44h+var_44]; float
0x4125B2: call    sub_47F1A0
0x4125B7: mov     edx, [ebp+0]
0x4125BA: add     esp, 8
0x4125BD: mov     esi, eax
0x4125BF: mov     eax, [edx+84h]
0x4125C5: push    0
0x4125C7: push    esi
0x4125C8: mov     ecx, ebp
0x4125CA: call    eax
0x4125CC: fld     [esp+3Ch+var_28]
0x4125D0: fld     [esp+3Ch+arg_0]
0x4125D4: fld     st
0x4125D6: faddp   st(2), st
0x4125D8: fxch    st(1)
0x4125DA: fstp    [esp+3Ch+var_1C]
0x4125DE: mov     ecx, [esp+3Ch+var_1C]
0x4125E2: mov     [esi+54h], ecx
0x4125E5: fadd    [esp+3Ch+var_24]
0x4125E9: fstp    [esp+3Ch+var_18]
0x4125ED: mov     edx, [esp+3Ch+var_18]
0x4125F1: fld     [esp+3Ch+var_20]
0x4125F5: mov     [esi+58h], edx
0x4125F8: fstp    [esp+3Ch+var_14]
0x4125FC: mov     eax, [esp+3Ch+var_14]
0x412600: mov     [esi+5Ch], eax
0x412603: add     edi, 1
0x412606: cmp     edi, dword_B03178
0x41260C: jb      loc_412550
0x412612: pop     esi
0x412613: pop     ebx
0x412614: pop     edi
0x412615: pop     ebp
0x412616: add     esp, 2Ch
0x412619: retn    0Ch
