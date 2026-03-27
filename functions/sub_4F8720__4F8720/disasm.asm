0x4F8720: fldz
0x4F8722: mov     eax, [esp+arg_C]
0x4F8726: mov     ecx, [esp+arg_0]
0x4F872A: fstp    qword ptr [eax]
0x4F872C: mov     edx, [ecx+8]
0x4F872F: shr     edx, 14h
0x4F8732: test    dl, 1
0x4F8735: jz      short loc_4F873B
0x4F8737: fld1
0x4F8739: fstp    qword ptr [eax]
0x4F873B: mov     al, 1
0x4F873D: retn
