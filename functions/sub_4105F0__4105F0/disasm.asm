0x4105F0: push    esi
0x4105F1: mov     esi, ecx
0x4105F3: cmp     dword ptr [esi], 0
0x4105F6: mov     dword ptr [esi+20h], 2
0x4105FD: mov     byte ptr [esi+24h], 1
0x410601: jnz     short loc_410620
0x410603: mov     eax, [esp+4+arg_4]
0x410607: mov     ecx, [esp+4+arg_0]
0x41060B: push    0
0x41060D: push    eax
0x41060E: push    1
0x410610: push    ecx
0x410611: mov     ecx, esi
0x410613: call    sub_410160
0x410618: test    al, al
0x41061A: jz      loc_4106A0
0x410620: mov     edx, dword_B350D8
0x410626: mov     eax, [edx+280h]
0x41062C: mov     [esi+4], eax
0x41062F: fild    nHeight
0x410635: mov     eax, [esi]
0x410637: mov     ecx, [eax+4]
0x41063A: fild    dword ptr [eax+4]
0x41063D: test    ecx, ecx
0x41063F: jge     short loc_410647
0x410641: fadd    ds:flt_A2FC78
0x410647: fdivp   st(1), st
0x410649: fstp    [esp+4+arg_4]
0x41064D: fld     [esp+4+arg_4]
0x410651: fst     dword ptr [esi+14h]
0x410654: fild    nWidth
0x41065A: mov     edx, [eax]
0x41065C: fild    dword ptr [eax]
0x41065E: test    edx, edx
0x410660: jge     short loc_410668
0x410662: fadd    ds:flt_A2FC78
0x410668: fmulp   st(2), st
0x41066A: push    16h
0x41066C: push    100h
0x410671: push    4
0x410673: fsubrp  st(1), st
0x410675: fmul    ds:dbl_A2FAA0
0x41067B: fstp    dword ptr [esi+18h]
0x41067E: fldz
0x410680: fstp    dword ptr [esi+1Ch]
0x410683: mov     ecx, [eax+4]
0x410686: mov     edx, [eax]
0x410688: mov     eax, [esi+4]
0x41068B: push    ecx
0x41068C: push    edx
0x41068D: push    eax
0x41068E: call    sub_40FEE0
0x410693: add     esp, 18h
0x410696: test    eax, eax
0x410698: mov     [esi+8], eax
0x41069B: jnz     short loc_4106A9
0x41069D: mov     [esi+20h], eax
0x4106A0: xor     al, al
0x4106A2: mov     [esi+24h], al
0x4106A5: pop     esi
0x4106A6: retn    8
0x4106A9: mov     byte ptr [esi+24h], 0
0x4106AD: mov     al, 1
0x4106AF: pop     esi
0x4106B0: retn    8
