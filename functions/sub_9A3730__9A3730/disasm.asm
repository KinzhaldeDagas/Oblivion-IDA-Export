0x9A3730: push    ebx
0x9A3731: push    esi
0x9A3732: mov     esi, [esp+8+arg_4]
0x9A3736: xor     ebx, ebx
0x9A3738: cmp     byte_B4295B, bl
0x9A373E: push    edi
0x9A373F: mov     edi, [esi+14h]
0x9A3742: jnz     short loc_9A3749
0x9A3744: call    sub_783C70
0x9A3749: and     edi, 0FFh
0x9A374F: cmp     dword_B428D8[edi*4], 1
0x9A3757: jnz     short loc_9A3771
0x9A3759: mov     eax, [esi+30h]
0x9A375C: movzx   ecx, byte ptr [eax]
0x9A375F: push    0
0x9A3761: mov     dword_BAA930, ecx
0x9A3767: push    offset dword_BAA930
0x9A376C: jmp     loc_9A394B
0x9A3771: cmp     byte_B4295B, bl
0x9A3777: mov     edi, [esi+14h]
0x9A377A: jnz     short loc_9A3781
0x9A377C: call    sub_783C70
0x9A3781: and     edi, 0FFh
0x9A3787: cmp     dword_B428D8[edi*4], 3
0x9A378F: jnz     short loc_9A37B6
0x9A3791: mov     ecx, [esi+30h]
0x9A3794: mov     eax, [ecx]
0x9A3796: push    0
0x9A3798: mov     dword_BAA934, eax
0x9A379D: mov     dword_BAA938, eax
0x9A37A2: mov     dword_BAA93C, eax
0x9A37A7: mov     dword_BAA940, eax
0x9A37AC: push    offset dword_BAA934
0x9A37B1: jmp     loc_9A394B
0x9A37B6: cmp     byte_B4295B, bl
0x9A37BC: mov     edi, [esi+14h]
0x9A37BF: jnz     short loc_9A37C6
0x9A37C1: call    sub_783C70
0x9A37C6: and     edi, 0FFh
0x9A37CC: cmp     dword_B428D8[edi*4], 4
0x9A37D4: jnz     short loc_9A37F8
0x9A37D6: mov     ecx, [esi+30h]
0x9A37D9: fld     dword ptr [ecx]
0x9A37DB: fstp    flt_BAA990
0x9A37E1: fld     flt_BAA990
0x9A37E7: fst     flt_BAA994
0x9A37ED: fst     flt_BAA998
0x9A37F3: jmp     loc_9A393E
0x9A37F8: cmp     byte_B4295B, bl
0x9A37FE: mov     edi, [esi+14h]
0x9A3801: jnz     short loc_9A3808
0x9A3803: call    sub_783C70
0x9A3808: and     edi, 0FFh
0x9A380E: cmp     dword_B428D8[edi*4], 5
0x9A3816: jnz     short loc_9A3843
0x9A3818: mov     eax, [esi+30h]
0x9A381B: fld     dword ptr [eax]
0x9A381D: fstp    flt_BAA990
0x9A3823: fld     dword ptr [eax+4]
0x9A3826: fstp    flt_BAA994
0x9A382C: fld     flt_BAA990
0x9A3832: fstp    flt_BAA998
0x9A3838: fld     flt_BAA994
0x9A383E: jmp     loc_9A393E
0x9A3843: mov     ecx, esi
0x9A3845: call    sub_783370
0x9A384A: test    al, al
0x9A384C: jz      short loc_9A3872
0x9A384E: mov     eax, [esi+30h]
0x9A3851: fld     dword ptr [eax]
0x9A3853: fstp    flt_BAA990
0x9A3859: fld     dword ptr [eax+4]
0x9A385C: fstp    flt_BAA994
0x9A3862: fld     dword ptr [eax+8]
0x9A3865: fstp    flt_BAA998
0x9A386B: fld1
0x9A386D: jmp     loc_9A393E
0x9A3872: mov     ecx, esi
0x9A3874: call    sub_7833A0
0x9A3879: test    al, al
0x9A387B: jnz     loc_9A391E
0x9A3881: mov     ecx, esi
0x9A3883: call    sub_7833D0
0x9A3888: test    al, al
0x9A388A: jnz     loc_9A391E
0x9A3890: mov     ecx, esi
0x9A3892: call    sub_782DE0
0x9A3897: test    al, al
0x9A3899: jz      short loc_9A390B
0x9A389B: mov     eax, [esi+30h]
0x9A389E: fld     dword ptr [eax]
0x9A38A0: push    0
0x9A38A2: fstp    flt_BAA9A0
0x9A38A8: push    offset flt_BAA9A0
0x9A38AD: fld     dword ptr [eax+4]
0x9A38B0: fstp    flt_BAA9A4
0x9A38B6: fld     dword ptr [eax+8]
0x9A38B9: fstp    flt_BAA9A8
0x9A38BF: fldz
0x9A38C1: fst     flt_BAA9AC
0x9A38C7: fld     dword ptr [eax+0Ch]
0x9A38CA: fstp    flt_BAA9B0
0x9A38D0: fld     dword ptr [eax+10h]
0x9A38D3: fstp    flt_BAA9B4
0x9A38D9: fld     dword ptr [eax+14h]
0x9A38DC: fstp    flt_BAA9B8
0x9A38E2: fst     flt_BAA9BC
0x9A38E8: fld     dword ptr [eax+18h]
0x9A38EB: fstp    flt_BAA9C0
0x9A38F1: fld     dword ptr [eax+1Ch]
0x9A38F4: fstp    flt_BAA9C4
0x9A38FA: fld     dword ptr [eax+20h]
0x9A38FD: fstp    flt_BAA9C8
0x9A3903: fstp    flt_BAA9CC
0x9A3909: jmp     short loc_9A394B
0x9A390B: mov     ecx, esi
0x9A390D: call    sub_782E10
0x9A3912: test    al, al
0x9A3914: jz      short loc_9A3960
0x9A3916: mov     eax, [esi+30h]
0x9A3919: push    0
0x9A391B: push    eax
0x9A391C: jmp     short loc_9A394B
0x9A391E: mov     eax, [esi+30h]
0x9A3921: fld     dword ptr [eax]
0x9A3923: fstp    flt_BAA990
0x9A3929: fld     dword ptr [eax+4]
0x9A392C: fstp    flt_BAA994
0x9A3932: fld     dword ptr [eax+8]
0x9A3935: fstp    flt_BAA998
0x9A393B: fld     dword ptr [eax+0Ch]
0x9A393E: push    0
0x9A3940: fstp    flt_BAA99C
0x9A3946: push    offset flt_BAA990
0x9A394B: mov     ecx, [esp+14h+arg_0]
0x9A394F: mov     edx, [ecx]
0x9A3951: mov     eax, [edx+30h]
0x9A3954: push    esi
0x9A3955: call    eax
0x9A3957: test    al, al
0x9A3959: jnz     short loc_9A3960
0x9A395B: mov     ebx, 80000050h
0x9A3960: pop     edi
0x9A3961: pop     esi
0x9A3962: mov     eax, ebx
0x9A3964: pop     ebx
0x9A3965: retn    0Ch
