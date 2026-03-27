0x75F780: fldz
0x75F782: mov     eax, ecx
0x75F784: mov     ecx, ds:0B3F9A8h
0x75F78A: mov     [eax], ecx
0x75F78C: mov     edx, ds:0B3F9ACh
0x75F792: mov     [eax+4], edx
0x75F795: mov     ecx, ds:0B3F9B0h
0x75F79B: fst     dword ptr [eax+0Ch]
0x75F79E: mov     [eax+8], ecx
0x75F7A1: fst     dword ptr [eax+10h]
0x75F7A4: xor     ecx, ecx
0x75F7A6: fstp    dword ptr [eax+14h]
0x75F7A9: mov     [eax+18h], cx
0x75F7AD: mov     [eax+1Ah], cx
0x75F7B1: retn
