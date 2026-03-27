0x4104C0: push    ebx
0x4104C1: mov     ebx, [esp+4+arg_4]
0x4104C5: push    esi
0x4104C6: mov     esi, ecx
0x4104C8: cmp     dword ptr [esi], 0
0x4104CB: push    edi
0x4104CC: mov     edi, dword ptr [esp+0Ch+ArgList]
0x4104D0: jnz     short loc_4104E8
0x4104D2: mov     eax, [esp+0Ch+arg_8]
0x4104D6: push    0
0x4104D8: push    eax
0x4104D9: push    ebx
0x4104DA: push    edi
0x4104DB: call    sub_410160
0x4104E0: test    al, al
0x4104E2: jz      loc_4105D6
0x4104E8: mov     ecx, dword_B350D8
0x4104EE: mov     edx, [ecx+280h]
0x4104F4: mov     cl, byte ptr [esp+0Ch+arg_C]
0x4104F8: test    cl, cl
0x4104FA: mov     eax, [esi]
0x4104FC: mov     [esi+4], edx
0x4104FF: jz      short loc_41050D
0x410501: fild    nWidth
0x410507: mov     edx, [eax]
0x410509: fild    dword ptr [eax]
0x41050B: jmp     short loc_410519
0x41050D: fild    nHeight
0x410513: mov     edx, [eax+4]
0x410516: fild    dword ptr [eax+4]
0x410519: test    edx, edx
0x41051B: jge     short loc_410523
0x41051D: fadd    ds:flt_A2FC78
0x410523: test    cl, cl
0x410525: fdivp   st(1), st
0x410527: fstp    [esp+0Ch+arg_C]
0x41052B: fld     [esp+0Ch+arg_C]
0x41052F: fst     dword ptr [esi+14h]
0x410532: fld     ds:dbl_A2FAA0
0x410538: fldz
0x41053A: jz      short loc_410542
0x41053C: fst     [esp+0Ch+arg_C]
0x410540: jmp     short loc_410560
0x410542: mov     edx, [eax]
0x410544: fild    nWidth
0x41054A: test    edx, edx
0x41054C: fild    dword ptr [eax]
0x41054E: jge     short loc_410556
0x410550: fadd    ds:flt_A2FC78
0x410556: fmul    st, st(4)
0x410558: fsubp   st(1), st
0x41055A: fmul    st, st(2)
0x41055C: fstp    [esp+0Ch+arg_C]
0x410560: test    cl, cl
0x410562: fld     [esp+0Ch+arg_C]
0x410566: fstp    dword ptr [esi+18h]
0x410569: jnz     short loc_410571
0x41056B: fstp    st(2)
0x41056D: fstp    st
0x41056F: jmp     short loc_41058F
0x410571: mov     ecx, [eax+4]
0x410574: fstp    st
0x410576: test    ecx, ecx
0x410578: fild    nHeight
0x41057E: fild    dword ptr [eax+4]
0x410581: jge     short loc_410589
0x410583: fadd    ds:flt_A2FC78
0x410589: fmulp   st(3), st
0x41058B: fsubrp  st(2), st
0x41058D: fmulp   st(1), st
0x41058F: mov     ecx, [esi+4]
0x410592: fstp    [esp+0Ch+arg_C]
0x410596: fld     [esp+0Ch+arg_C]
0x41059A: push    16h
0x41059C: push    100h
0x4105A1: fstp    dword ptr [esi+1Ch]
0x4105A4: mov     edx, [eax+4]
0x4105A7: mov     eax, [eax]
0x4105A9: push    4
0x4105AB: push    edx
0x4105AC: push    eax
0x4105AD: push    ecx
0x4105AE: call    sub_40FEE0
0x4105B3: add     esp, 18h
0x4105B6: test    eax, eax
0x4105B8: mov     [esi+8], eax
0x4105BB: jnz     short loc_4105DE
0x4105BD: test    bl, bl
0x4105BF: jnz     short loc_4105CF
0x4105C1: push    edi; ArgList
0x4105C2: push    offset aCouldNotAlloca; "Could not allocate textures for %s play"...
0x4105C7: call    PrintError
0x4105CC: add     esp, 8
0x4105CF: mov     dword ptr [esi+20h], 0
0x4105D6: pop     edi
0x4105D7: pop     esi
0x4105D8: xor     al, al
0x4105DA: pop     ebx
0x4105DB: retn    10h
0x4105DE: pop     edi
0x4105DF: pop     esi
0x4105E0: mov     al, 1
0x4105E2: pop     ebx
0x4105E3: retn    10h
