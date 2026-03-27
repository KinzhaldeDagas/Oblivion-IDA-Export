0x605F60: push    ecx
0x605F61: fldz
0x605F63: mov     eax, [ecx+4]
0x605F66: cmp     eax, 5; switch 6 cases
0x605F69: fstp    [esp+4+var_4]
0x605F6C: ja      def_605F72
0x605F72: jmp     ds:jpt_605F72[eax*4]; switch jump
0x605F79: mov     eax, [ecx+14h]; jumptable 00605F72 case 0
0x605F7C: test    eax, eax
0x605F7E: jnz     short loc_605F85
0x605F80: mov     eax, [ecx+18h]
0x605F83: jmp     short loc_605F8E
0x605F85: push    eax
0x605F86: call    sub_470520
0x605F8B: add     esp, 4
0x605F8E: test    eax, eax
0x605F90: mov     [esp+4+var_4], eax
0x605F93: jnz     short loc_605F9C
0x605F95: mov     [esp+4+var_4], 1
0x605F9C: cmp     [esp+4+arg_4], 0
0x605FA1: jz      short loc_605FBB
0x605FA3: fild    [esp+4+var_4]
0x605FA6: fmul    dword ptr ds:0B376D0h
0x605FAC: fstp    [esp+4+var_4]
0x605FAF: fld     [esp+4+var_4]
0x605FB2: call    Double_To_SInt32
0x605FB7: pop     ecx
0x605FB8: retn    8
0x605FBB: mov     ecx, [esp+4+arg_0]
0x605FBF: mov     eax, [ecx]
0x605FC1: mov     edx, [eax+288h]
0x605FC7: push    24h ; '$'
0x605FC9: call    edx
0x605FCB: fdiv    qword ptr ds:0A309F0h
0x605FD1: fild    [esp+8+var_8]
0x605FD4: fmul    dword ptr ds:0B376D0h
0x605FDA: fmulp   st(1), st
0x605FDC: fstp    [esp+8+var_8]
0x605FDF: fld     [esp+8+var_8]
0x605FE2: call    Double_To_SInt32
0x605FE7: pop     ecx
0x605FE8: retn    8
0x605FEB: cmp     [esp+4+arg_4], 0; jumptable 00605F72 case 5
0x605FF0: mov     eax, ds:0B376B0h
0x605FF5: mov     [esp+4+var_4], eax
0x605FF8: jnz     short loc_605FA3
0x605FFA: mov     ecx, [esp+4+arg_0]
0x605FFE: mov     edx, [ecx]
0x606000: mov     eax, [edx+288h]
0x606006: push    24h ; '$'
0x606008: call    eax
0x60600A: jmp     short loc_605FCB
0x60600C: cmp     [esp+4+arg_4], 0; jumptable 00605F72 case 3
0x606011: jz      short loc_606028
0x606013: fld     dword ptr ds:0B376C0h
0x606019: fstp    [esp+4+var_4]
0x60601C: fld     [esp+4+var_4]
0x60601F: call    Double_To_SInt32
0x606024: pop     ecx
0x606025: retn    8
0x606028: mov     ecx, [esp+4+arg_0]
0x60602C: mov     edx, [ecx]
0x60602E: mov     eax, [edx+288h]
0x606034: push    24h ; '$'
0x606036: call    eax
0x606038: fdiv    qword ptr ds:0A309F0h
0x60603E: fmul    dword ptr ds:0B376C0h
0x606044: fstp    [esp+8+var_8]
0x606047: fld     [esp+8+var_8]
0x60604A: call    Double_To_SInt32
0x60604F: pop     ecx
0x606050: retn    8
0x606053: cmp     [esp+4+arg_4], 0; jumptable 00605F72 case 4
0x606058: jz      short loc_60606F
0x60605A: fld     dword ptr ds:0B376C8h
0x606060: fstp    [esp+4+var_4]
0x606063: fld     [esp+4+var_4]
0x606066: call    Double_To_SInt32
0x60606B: pop     ecx
0x60606C: retn    8
0x60606F: mov     ecx, [esp+4+arg_0]
0x606073: mov     edx, [ecx]
0x606075: mov     eax, [edx+288h]
0x60607B: push    24h ; '$'
0x60607D: call    eax
0x60607F: fdiv    qword ptr ds:0A309F0h
0x606085: fmul    dword ptr ds:0B376C8h
0x60608B: fstp    [esp+8+var_8]
0x60608E: fld     [esp+8+var_8]
0x606091: call    Double_To_SInt32
0x606096: pop     ecx
0x606097: retn    8
0x60609A: cmp     [esp+4+arg_4], 0; jumptable 00605F72 case 1
0x60609F: jz      short loc_6060B6
0x6060A1: fld     dword ptr ds:0B376D8h
0x6060A7: fstp    [esp+4+var_4]
0x6060AA: fld     [esp+4+var_4]
0x6060AD: call    Double_To_SInt32
0x6060B2: pop     ecx
0x6060B3: retn    8
0x6060B6: mov     ecx, [esp+4+arg_0]
0x6060BA: mov     edx, [ecx]
0x6060BC: mov     eax, [edx+288h]
0x6060C2: push    24h ; '$'
0x6060C4: call    eax
0x6060C6: fdiv    qword ptr ds:0A309F0h
0x6060CC: fmul    dword ptr ds:0B376D8h
0x6060D2: fstp    [esp+8+var_8]
0x6060D5: fld     [esp+8+var_8]
0x6060D8: call    Double_To_SInt32
0x6060DD: pop     ecx
0x6060DE: retn    8
0x6060E1: cmp     [esp+4+arg_4], 0; jumptable 00605F72 case 2
0x6060E6: jz      short loc_6060FD
0x6060E8: fld     dword ptr ds:0B376E0h
0x6060EE: fstp    [esp+4+var_4]
0x6060F1: fld     [esp+4+var_4]
0x6060F4: call    Double_To_SInt32
0x6060F9: pop     ecx
0x6060FA: retn    8
0x6060FD: mov     ecx, [esp+4+arg_0]
0x606101: mov     edx, [ecx]
0x606103: mov     eax, [edx+288h]
0x606109: push    24h ; '$'
0x60610B: call    eax
0x60610D: fdiv    qword ptr ds:0A309F0h
0x606113: fmul    dword ptr ds:0B376E0h
0x606119: fstp    [esp+8+var_8]
