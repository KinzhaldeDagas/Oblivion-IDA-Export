0x6BD2D0: fldz
0x6BD2D2: sub     esp, 10h
0x6BD2D5: sub     esp, 10h
0x6BD2D8: fst     [esp+20h+var_14]; float
0x6BD2DC: fst     [esp+20h+var_18]; float
0x6BD2E0: lea     ecx, [esp+20h+var_10]
0x6BD2E4: fstp    [esp+20h+var_1C]; float
0x6BD2E8: fld1
0x6BD2EA: fstp    [esp+20h+var_20]; float
0x6BD2ED: call    sub_714C40
0x6BD2F2: mov     edx, [eax]
0x6BD2F4: mov     ecx, [esp+10h+arg_C]
0x6BD2F8: mov     [ecx], edx
0x6BD2FA: mov     edx, [eax+4]
0x6BD2FD: mov     [ecx+4], edx
0x6BD300: mov     edx, [eax+8]
0x6BD303: mov     [ecx+8], edx
0x6BD306: mov     eax, [eax+0Ch]
0x6BD309: mov     [ecx+0Ch], eax
0x6BD30C: add     esp, 10h
0x6BD30F: retn
