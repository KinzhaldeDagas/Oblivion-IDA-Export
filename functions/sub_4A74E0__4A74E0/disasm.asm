0x4A74E0: push    0FFFFFFFFh
0x4A74E2: push    offset SEH_6B9010
0x4A74E7: mov     eax, large fs:0
0x4A74ED: push    eax
0x4A74EE: sub     esp, 14h
0x4A74F1: push    ebx
0x4A74F2: push    ebp
0x4A74F3: push    esi
0x4A74F4: push    edi
0x4A74F5: mov     eax, ds:0B30AACh
0x4A74FA: xor     eax, esp
0x4A74FC: push    eax
0x4A74FD: lea     eax, [esp+34h+var_C]
0x4A7501: mov     large fs:0, eax
0x4A7507: mov     ebx, ecx
0x4A7509: mov     ecx, [ebx+8]
0x4A750C: test    ecx, ecx
0x4A750E: mov     ebp, [esp+34h+arg_0]
0x4A7512: mov     [esp+34h+var_1D], 0
0x4A7517: jz      short loc_4A7536
0x4A7519: fld     [esp+34h+arg_4]
0x4A751D: push    ecx
0x4A751E: fstp    [esp+38h+var_38]; float
0x4A7521: push    ebp; int
0x4A7522: call    sub_4A6D80
0x4A7527: test    al, al
0x4A7529: jz      short loc_4A7536
0x4A752B: mov     eax, [ebx+8]
0x4A752E: fld     dword ptr [eax+0Ch]
0x4A7531: jmp     loc_4A76D0
0x4A7536: push    ebp
0x4A7537: mov     ecx, ebx
0x4A7539: call    sub_4A7330
0x4A753E: test    ebp, ebp
0x4A7540: jz      loc_4A76CE
0x4A7546: test    al, al
0x4A7548: jz      loc_4A76CE
0x4A754E: fld1
0x4A7550: fcom    [esp+34h+arg_4]
0x4A7554: fnstsw  ax
0x4A7556: test    ah, 41h
0x4A7559: jz      loc_4A76D0
0x4A755F: fstp    st
0x4A7561: mov     edi, ebx
0x4A7563: fld     dword ptr ds:0A32048h
0x4A7569: fstp    [esp+34h+arg_0]
0x4A756D: lea     ecx, [ecx+0]
0x4A7570: mov     esi, [edi+4]
0x4A7573: test    esi, esi
0x4A7575: jnz     short loc_4A757E
0x4A7577: mov     esi, ebx
0x4A7579: mov     [esp+34h+var_1D], 1
0x4A757E: mov     eax, [edi]
0x4A7580: push    eax
0x4A7581: mov     ecx, ebp
0x4A7583: call    sub_4A6A60
0x4A7588: fstp    [esp+34h+var_14]
0x4A758C: mov     eax, [esi]
0x4A758E: push    eax
0x4A758F: mov     ecx, ebp
0x4A7591: call    sub_4A6A60
0x4A7596: fstp    [esp+34h+var_18]
0x4A759A: mov     eax, [esi]
0x4A759C: mov     ecx, [edi]
0x4A759E: push    eax
0x4A759F: call    sub_4A6D20
0x4A75A4: fstp    [esp+34h+var_10]
0x4A75A8: mov     eax, [esi]
0x4A75AA: mov     ecx, [edi]
0x4A75AC: push    eax
0x4A75AD: call    sub_4A6A60
0x4A75B2: fstp    [esp+34h+var_1C]
0x4A75B6: fld     [esp+34h+var_1C]
0x4A75BA: fld     [esp+34h+var_18]
0x4A75BE: fld     st
0x4A75C0: fsubp   st(2), st
0x4A75C2: fld     [esp+34h+var_14]
0x4A75C6: fld     st
0x4A75C8: faddp   st(3), st
0x4A75CA: fxch    st(2)
0x4A75CC: fstp    [esp+34h+var_14]
0x4A75D0: fld     [esp+34h+var_14]
0x4A75D4: fld     [esp+34h+var_10]
0x4A75D8: fld     st
0x4A75DA: fadd    st, st(1)
0x4A75DC: fdivp   st(2), st
0x4A75DE: fxch    st(1)
0x4A75E0: fstp    [esp+34h+var_10]
0x4A75E4: fld     [esp+34h+var_10]
0x4A75E8: fcom    st(1)
0x4A75EA: fnstsw  ax
0x4A75EC: fstp    st(1)
0x4A75EE: test    ah, 1
0x4A75F1: jnz     short loc_4A75F9
0x4A75F3: fstp    st
0x4A75F5: fstp    st(1)
0x4A75F7: jmp     short loc_4A760E
0x4A75F9: fstp    st(1)
0x4A75FB: fldz
0x4A75FD: fcomp   st(1)
0x4A75FF: fnstsw  ax
0x4A7601: test    ah, 1
0x4A7604: jnz     short loc_4A760A
0x4A7606: fstp    st
0x4A7608: jmp     short loc_4A760E
0x4A760A: fmul    st, st
0x4A760C: fsubp   st(1), st
0x4A760E: fstp    [esp+34h+var_1C]
0x4A7612: fld     [esp+34h+var_1C]
0x4A7616: fld     [esp+34h+arg_0]
0x4A761A: fcomp   st(1)
0x4A761C: fnstsw  ax
0x4A761E: test    ah, 41h
0x4A7621: jnz     short loc_4A7629
0x4A7623: fstp    [esp+34h+arg_0]
0x4A7627: jmp     short loc_4A762B
0x4A7629: fstp    st
0x4A762B: cmp     [esp+34h+var_1D], 0
0x4A7630: mov     edi, esi
0x4A7632: jz      loc_4A7570
0x4A7638: fld     [esp+34h+arg_0]
0x4A763C: call    __CIsqrt
0x4A7641: fstp    [esp+34h+arg_0]
0x4A7645: fld     [esp+34h+arg_0]
0x4A7649: fstp    [esp+34h+arg_0]
0x4A764D: fld     [esp+34h+arg_0]
0x4A7651: fld     [esp+34h+arg_4]
0x4A7655: fcom    st(1)
0x4A7657: fnstsw  ax
0x4A7659: test    ah, 41h
0x4A765C: jp      short loc_4A7666
0x4A765E: fstp    st(1)
0x4A7660: fstp    st
0x4A7662: fld1
0x4A7664: jmp     short loc_4A7668
0x4A7666: fdivp   st(1), st
0x4A7668: mov     eax, [ebx+8]
0x4A766B: fstp    [esp+34h+arg_0]
0x4A766F: test    eax, eax
0x4A7671: jz      short loc_4A767C
0x4A7673: push    eax
0x4A7674: call    FormHeapFree
0x4A7679: add     esp, 4
0x4A767C: push    10h; Size
0x4A767E: call    FormHeapAlloc
0x4A7683: mov     esi, eax
0x4A7685: add     esp, 4
0x4A7688: mov     [esp+34h+var_10], esi
0x4A768C: test    esi, esi
0x4A768E: mov     [esp+34h+var_4], 0
0x4A7696: jz      short loc_4A76A3
0x4A7698: mov     ecx, esi
0x4A769A: call    sub_4A6920
0x4A769F: mov     eax, esi
0x4A76A1: jmp     short loc_4A76A5
0x4A76A3: xor     eax, eax
0x4A76A5: push    eax
0x4A76A6: mov     ecx, ebp
0x4A76A8: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4A76B0: mov     [ebx+8], eax
0x4A76B3: call    sub_4A6A20
0x4A76B8: fld     [esp+34h+arg_4]
0x4A76BC: mov     ecx, [ebx+8]
0x4A76BF: fstp    dword ptr [ecx+8]
0x4A76C2: mov     edx, [ebx+8]
0x4A76C5: fld     [esp+34h+arg_0]
0x4A76C9: fst     dword ptr [edx+0Ch]
0x4A76CC: jmp     short loc_4A76D0
0x4A76CE: fldz
0x4A76D0: mov     ecx, [esp+34h+var_C]
0x4A76D4: mov     large fs:0, ecx
0x4A76DB: pop     ecx
0x4A76DC: pop     edi
0x4A76DD: pop     esi
0x4A76DE: pop     ebp
0x4A76DF: pop     ebx
0x4A76E0: add     esp, 20h
0x4A76E3: retn    8
