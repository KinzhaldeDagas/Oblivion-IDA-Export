0x50A120: fldz
0x50A122: mov     eax, [esp+arg_10]
0x50A126: test    eax, eax
0x50A128: mov     ecx, [esp+arg_18]
0x50A12C: fstp    qword ptr [ecx]
0x50A12E: jz      short loc_50A144
0x50A130: lea     edx, [eax+18h]
0x50A133: test    edx, edx
0x50A135: jz      short loc_50A144
0x50A137: cmp     byte ptr [eax+29h], 0
0x50A13B: mov     al, 1
0x50A13D: jz      short locret_50A146
0x50A13F: fld1
0x50A141: fstp    qword ptr [ecx]
0x50A143: retn
0x50A144: mov     al, 1
0x50A146: retn
