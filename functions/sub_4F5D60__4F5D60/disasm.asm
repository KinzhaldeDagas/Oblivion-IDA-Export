0x4F5D60: fldz
0x4F5D62: mov     eax, [esp+arg_C]
0x4F5D66: fstp    qword ptr [eax]
0x4F5D68: cmp     byte ptr ds:0B3BB18h, 0
0x4F5D6F: jz      short loc_4F5D7C
0x4F5D71: fld1
0x4F5D73: fstp    qword ptr [eax]
0x4F5D75: mov     byte ptr ds:0B3BB18h, 0
0x4F5D7C: mov     al, 1
0x4F5D7E: retn
