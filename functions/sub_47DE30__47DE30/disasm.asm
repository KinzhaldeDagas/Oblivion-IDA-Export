0x47DE30: push    ecx
0x47DE31: test    ecx, ecx
0x47DE33: jz      short loc_47DE4C
0x47DE35: mov     eax, [ecx+8]
0x47DE38: test    eax, eax
0x47DE3A: jz      short loc_47DE4C
0x47DE3C: mov     ecx, [eax+50h]
0x47DE3F: call    sub_89DA90
0x47DE44: fstp    [esp+4+var_4]
0x47DE47: fld     [esp+4+var_4]
0x47DE4A: pop     ecx
0x47DE4B: retn
0x47DE4C: fldz
0x47DE4E: fstp    [esp+4+var_4]
0x47DE51: fld     [esp+4+var_4]
0x47DE54: pop     ecx
0x47DE55: retn
