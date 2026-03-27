0x8D8350: mov     ecx, [ecx+100h]
0x8D8356: test    ecx, ecx
0x8D8358: jz      short locret_8D8360
0x8D835A: mov     eax, [ecx]
0x8D835C: push    1
0x8D835E: call    dword ptr [eax]
0x8D8360: retn
