0x564080: push    ebp
0x564081: mov     ebp, esp
0x564083: and     esp, 0FFFFFFF0h
0x564086: sub     esp, 2Ch
0x564089: fld     dword ptr ds:0B2EFC4h
0x56408F: mov     eax, [ebp+arg_0]
0x564092: fstp    [esp+2Ch+var_1C]
0x564096: push    esi
0x564097: fldz
0x564099: mov     esi, ecx
0x56409B: fstp    [esp+30h+var_4]
0x56409F: push    eax
0x5640A0: fld1
0x5640A2: lea     ecx, [esp+34h+var_10]
0x5640A6: fst     [esp+34h+var_10]
0x5640AA: mov     [esp+34h+var_20], 0
0x5640B2: fst     [esp+34h+var_C]
0x5640B6: fstp    [esp+34h+var_8]
0x5640BA: call    sub_47DCD0
0x5640BF: mov     edx, [esi]
0x5640C1: mov     edx, [edx+70h]
0x5640C4: lea     eax, [esp+30h+var_20]
0x5640C8: push    eax
0x5640C9: mov     ecx, esi
0x5640CB: call    edx
0x5640CD: pop     esi
0x5640CE: mov     esp, ebp
0x5640D0: pop     ebp
0x5640D1: retn    4
