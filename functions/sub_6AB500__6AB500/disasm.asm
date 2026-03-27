0x6AB500: push    ecx
0x6AB501: cmp     byte ptr ds:0B16178h, 0
0x6AB508: jz      short loc_6AB53A
0x6AB50A: mov     edx, [esp+4+arg_0]
0x6AB50E: mov     ecx, [ecx+300h]
0x6AB514: lea     eax, [esp+4+var_4]
0x6AB517: push    eax
0x6AB518: push    edx
0x6AB519: mov     [esp+0Ch+var_4], 0
0x6AB521: call    NiTMap_GetAt
0x6AB526: mov     ecx, [esp+4+var_4]
0x6AB529: test    ecx, ecx
0x6AB52B: jz      short loc_6AB53A
0x6AB52D: fld     [esp+4+arg_4]
0x6AB531: push    ecx
0x6AB532: fstp    [esp+8+var_8]; float
0x6AB535: call    sub_6B6B20
0x6AB53A: xor     eax, eax
0x6AB53C: pop     ecx
0x6AB53D: retn    8
