0x5E1800: push    ecx
0x5E1801: mov     eax, [ecx]
0x5E1803: mov     edx, [eax+284h]
0x5E1809: push    1Ah
0x5E180B: call    edx
0x5E180D: mov     [esp+4+var_4], eax
0x5E1810: fild    [esp+4+var_4]
0x5E1813: fdiv    qword ptr ds:0A309F0h
0x5E1819: fstp    [esp+4+var_4]
0x5E181C: fld     [esp+4+var_4]
0x5E181F: pop     ecx
0x5E1820: retn
