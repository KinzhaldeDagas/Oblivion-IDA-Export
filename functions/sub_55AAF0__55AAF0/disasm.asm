0x55AAF0: mov     eax, [esp+arg_10]
0x55AAF4: cmp     eax, 3; switch 4 cases
0x55AAF7: ja      short def_55AAF9
0x55AAF9: jmp     ds:jpt_55AAF9[eax*4]; switch jump
0x55AB00: mov     edx, [esp+arg_14]; jumptable 0055AAF9 case 1
0x55AB04: fld     [esp+arg_C]
0x55AB08: mov     eax, [ecx]
0x55AB0A: mov     eax, [eax+30h]
0x55AB0D: push    edx
0x55AB0E: mov     edx, [esp+4+arg_8]
0x55AB12: push    ecx
0x55AB13: fstp    [esp+8+var_8]
0x55AB16: push    edx
0x55AB17: mov     edx, [esp+0Ch+arg_4]
0x55AB1B: push    edx
0x55AB1C: mov     edx, [esp+10h+arg_0]
0x55AB20: push    edx
0x55AB21: call    eax
0x55AB23: retn    18h
0x55AB26: mov     edx, [ecx]; jumptable 0055AAF9 case 2
0x55AB28: mov     edx, [edx+38h]
0x55AB2B: jmp     short loc_55AB58
0x55AB2D: mov     edx, [esp+arg_14]; jumptable 0055AAF9 case 0
0x55AB31: fld     [esp+arg_C]
0x55AB35: mov     eax, [ecx]
0x55AB37: mov     eax, [eax+40h]
0x55AB3A: push    edx
0x55AB3B: mov     edx, [esp+4+arg_8]
0x55AB3F: push    ecx
0x55AB40: fstp    [esp+8+var_8]
0x55AB43: push    edx
0x55AB44: mov     edx, [esp+0Ch+arg_4]
0x55AB48: push    edx
0x55AB49: mov     edx, [esp+10h+arg_0]
0x55AB4D: push    edx
0x55AB4E: call    eax
0x55AB50: retn    18h
0x55AB53: mov     edx, [ecx]; jumptable 0055AAF9 case 3
0x55AB55: mov     edx, [edx+48h]
0x55AB58: mov     eax, [esp+arg_14]
0x55AB5C: fld     [esp+arg_C]
0x55AB60: push    eax
0x55AB61: mov     eax, [esp+4+arg_8]
0x55AB65: push    ecx
0x55AB66: fstp    [esp+8+var_8]
0x55AB69: push    eax
0x55AB6A: mov     eax, [esp+0Ch+arg_4]
0x55AB6E: push    eax
0x55AB6F: mov     eax, [esp+10h+arg_0]
0x55AB73: push    eax
0x55AB74: call    edx
