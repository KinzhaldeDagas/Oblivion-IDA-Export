0x77EEB0: mov     ecx, ds:0B428ACh
0x77EEB6: call    NiTMap_Clear
0x77EEBB: mov     ecx, ds:0B428ACh
0x77EEC1: test    ecx, ecx
0x77EEC3: jz      short loc_77EECD
0x77EEC5: mov     eax, [ecx]
0x77EEC7: mov     edx, [eax]
0x77EEC9: push    1
0x77EECB: call    edx
0x77EECD: mov     dword ptr ds:0B428ACh, 0
0x77EED7: retn
