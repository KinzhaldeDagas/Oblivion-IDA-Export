0x703A30: fldz
0x703A32: mov     eax, ecx
0x703A34: mov     ecx, ds:0B3FC80h
0x703A3A: mov     [eax], ecx
0x703A3C: mov     edx, ds:0B3FC84h
0x703A42: fstp    dword ptr [eax+8]
0x703A45: fld1
0x703A47: mov     [eax+4], edx
0x703A4A: fst     dword ptr [eax+0Ch]
0x703A4D: fstp    dword ptr [eax+10h]
0x703A50: fld     dword ptr ds:0A3D65Ch
0x703A56: fst     dword ptr [eax+14h]
0x703A59: fstp    dword ptr [eax+18h]
0x703A5C: mov     byte ptr [eax+1Ch], 1
0x703A60: mov     dword ptr [eax+44h], 0
0x703A67: retn
