0x793B40: fldz
0x793B42: mov     eax, ecx
0x793B44: fst     dword ptr [eax]
0x793B46: mov     ecx, 2
0x793B4B: fld     dword ptr ds:0A41304h
0x793B51: mov     [eax+8], ecx
0x793B54: fstp    dword ptr [eax+4]
0x793B57: mov     [eax+0Ch], ecx
0x793B5A: mov     [eax+10h], ecx
0x793B5D: xor     ecx, ecx
0x793B5F: fst     dword ptr [eax+20h]
0x793B62: mov     byte ptr [eax+14h], 1
0x793B66: fstp    dword ptr [eax+24h]
0x793B69: mov     [eax+28h], ecx
0x793B6C: fld1
0x793B6E: mov     dword ptr [eax+2Ch], 4
0x793B75: fst     dword ptr [eax+3Ch]
0x793B78: mov     [eax+30h], ecx
0x793B7B: fst     dword ptr [eax+40h]
0x793B7E: mov     [eax+34h], ecx
0x793B81: fst     dword ptr [eax+1Ch]
0x793B84: mov     [eax+38h], ecx
0x793B87: fstp    dword ptr [eax+18h]
0x793B8A: retn
