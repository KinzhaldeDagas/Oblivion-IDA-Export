0x4F5E60: fldz
0x4F5E62: mov     eax, [esp+arg_C]
0x4F5E66: fstp    qword ptr [eax]
0x4F5E68: mov     ecx, ds:0B333C4h
0x4F5E6E: cmp     byte ptr [ecx+12Ch], 0
0x4F5E75: jz      short loc_4F5E7B
0x4F5E77: fld1
0x4F5E79: fstp    qword ptr [eax]
0x4F5E7B: mov     al, 1
0x4F5E7D: retn
