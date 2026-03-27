0x502350: fldz
0x502352: mov     eax, [esp+arg_14]
0x502356: test    eax, eax
0x502358: mov     ecx, [esp+arg_18]
0x50235C: fstp    qword ptr [ecx]
0x50235E: jz      short loc_50236C
0x502360: mov     eax, [eax+10h]
0x502363: test    eax, eax
0x502365: jz      short loc_50236C
0x502367: fld     dword ptr [eax+4]
0x50236A: fstp    qword ptr [ecx]
0x50236C: mov     al, 1
0x50236E: retn
