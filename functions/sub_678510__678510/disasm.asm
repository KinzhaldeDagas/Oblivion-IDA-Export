0x678510: sub     esp, 8
0x678513: push    esi
0x678514: mov     esi, ecx
0x678516: mov     ecx, ds:0B3BF80h
0x67851C: test    ecx, ecx
0x67851E: mov     dword ptr ds:0B3BCF4h, 6Eh ; 'n'
0x678528: jz      short loc_67852F
0x67852A: call    sub_683420
0x67852F: call    sub_60DEA0
0x678534: fld     dword ptr ds:0B33E9Ch
0x67853A: fstp    [esp+0Ch+var_8]
0x67853E: push    ecx
0x67853F: fld     dword ptr ds:0B3BCF0h
0x678545: mov     ecx, esi
0x678547: fadd    [esp+10h+var_8]
0x67854B: fstp    [esp+10h+var_4]
0x67854F: fld     [esp+10h+var_4]
0x678553: fstp    [esp+10h+var_10]; float
0x678556: call    sub_673B10
0x67855B: fld     [esp+0Ch+var_8]
0x67855F: fld     st
0x678561: fld1
0x678563: fld     st
0x678565: fdivrp  st(2), st
0x678567: fxch    st(1)
0x678569: call    Double_To_SInt32
0x67856E: fld     dword ptr [esi+24h]
0x678571: cmp     eax, 32h ; '2'
0x678574: fadd    st, st(2)
0x678576: mov     cl, 1
0x678578: fstp    [esp+0Ch+var_4]
0x67857C: fld     [esp+0Ch+var_4]
0x678580: fst     dword ptr [esi+24h]
0x678583: fldz
0x678585: jge     short loc_6785DA
0x678587: cmp     eax, 0Ah
0x67858A: jge     short loc_6785AD
0x67858C: fstp    st(2)
0x67858E: fld1
0x678590: fcomp   st(1)
0x678592: fnstsw  ax
0x678594: test    ah, 41h
0x678597: jnz     short loc_6785A4
0x678599: faddp   st(2), st
0x67859B: xor     cl, cl
0x67859D: fxch    st(1)
0x67859F: fstp    dword ptr [esi+24h]
0x6785A2: jmp     short loc_6785E0
0x6785A4: fstp    st
0x6785A6: fstp    st(1)
0x6785A8: fst     dword ptr [esi+24h]
0x6785AB: jmp     short loc_6785E0
0x6785AD: fld1
0x6785AF: fcomp   st(2)
0x6785B1: fnstsw  ax
0x6785B3: test    ah, 41h
0x6785B6: jnz     short loc_6785CF
0x6785B8: fxch    st(2)
0x6785BA: xor     cl, cl
0x6785BC: fsubrp  st(3), st
0x6785BE: fxch    st(2)
0x6785C0: fmul    qword ptr ds:0A2FAA0h
0x6785C6: faddp   st(2), st
0x6785C8: fxch    st(1)
0x6785CA: fstp    dword ptr [esi+24h]
0x6785CD: jmp     short loc_6785E0
0x6785CF: fstp    st(1)
0x6785D1: fstp    st(2)
0x6785D3: fstp    st
0x6785D5: fst     dword ptr [esi+24h]
0x6785D8: jmp     short loc_6785E0
0x6785DA: fstp    st(1)
0x6785DC: fstp    st(2)
0x6785DE: fstp    st
0x6785E0: test    cl, cl
0x6785E2: mov     dword ptr ds:0B3BCF4h, 78h ; 'x'
0x6785EC: jz      short loc_67865C
0x6785EE: cmp     byte ptr [esi+0A1h], 0
0x6785F5: jz      short loc_67860F
0x6785F7: cmp     byte ptr ds:0B333B8h, 0
0x6785FE: jnz     short loc_67860F
0x678600: push    0; int
0x678602: push    ecx
0x678603: mov     ecx, esi
0x678605: fstp    [esp+14h+var_14]; float
0x678608: call    sub_673C10
0x67860D: fldz
0x67860F: mov     dword ptr ds:0B3BCF4h, 82h ; '‚'
0x678619: cmp     byte ptr [esi+0A3h], 0
0x678620: jz      short loc_67863A
0x678622: cmp     byte ptr ds:0B333B8h, 0
0x678629: jnz     short loc_67863A
0x67862B: push    0; float
0x67862D: push    ecx
0x67862E: mov     ecx, esi
0x678630: fstp    [esp+14h+var_14]; float
0x678633: call    sub_673E90
0x678638: fldz
0x67863A: mov     dword ptr ds:0B3BCF4h, 8Ch ; 'Œ'
0x678644: cmp     byte ptr [esi+0A2h], 0
0x67864B: jz      short loc_67865C
0x67864D: push    0; float
0x67864F: push    ecx
0x678650: mov     ecx, esi
0x678652: fstp    [esp+14h+var_14]; float
0x678655: call    sub_674200
0x67865A: fldz
0x67865C: mov     dword ptr ds:0B3BCF4h, 0B4h ; '´'
0x678666: cmp     byte ptr [esi+0A0h], 0
0x67866D: jz      short loc_67868B
0x67866F: push    0; float
0x678671: push    ecx
0x678672: mov     ecx, esi
0x678674: fstp    [esp+14h+var_14]; float
0x678677: call    sub_677EC0
0x67867C: mov     dword ptr ds:0B3BCF4h, 0BEh ; '¾'
0x678686: pop     esi
0x678687: add     esp, 8
0x67868A: retn
0x67868B: fstp    st
0x67868D: mov     dword ptr ds:0B3BCF4h, 0BEh ; '¾'
0x678697: pop     esi
0x678698: add     esp, 8
0x67869B: retn
