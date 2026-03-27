0x8BDE80: fldz
0x8BDE82: mov     eax, ecx
0x8BDE84: xor     ecx, ecx
0x8BDE86: mov     [eax], ecx
0x8BDE88: mov     [eax+4], ecx
0x8BDE8B: mov     [eax+8], ecx
0x8BDE8E: fst     dword ptr [eax+10h]
0x8BDE91: fst     dword ptr [eax+14h]
0x8BDE94: fst     dword ptr [eax+18h]
0x8BDE97: fstp    dword ptr [eax+1Ch]
0x8BDE9A: fld     dword ptr ds:0B2F080h
0x8BDEA0: fstp    dword ptr [eax+10h]
0x8BDEA3: fld     dword ptr ds:0B2F084h
0x8BDEA9: fstp    dword ptr [eax+14h]
0x8BDEAC: fld     dword ptr ds:0B2F088h
0x8BDEB2: fstp    dword ptr [eax+18h]
0x8BDEB5: fld     dword ptr ds:0B2F08Ch
0x8BDEBB: fstp    dword ptr [eax+1Ch]
0x8BDEBE: fld     dword ptr ds:0A2FAACh
0x8BDEC4: fstp    dword ptr [eax+20h]
0x8BDEC7: fld     dword ptr ds:0A34BA0h
0x8BDECD: fstp    dword ptr [eax+24h]
0x8BDED0: retn
