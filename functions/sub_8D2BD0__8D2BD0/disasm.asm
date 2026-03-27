0x8D2BD0: mov     eax, [esp+arg_0]
0x8D2BD4: fld     dword ptr [eax+4]
0x8D2BD7: xor     edx, edx
0x8D2BD9: fchs
0x8D2BDB: fld     dword ptr [eax+8]
0x8D2BDE: mov     [ecx], edx
0x8D2BE0: fstp    dword ptr [ecx+4]
0x8D2BE3: fstp    dword ptr [ecx+8]
0x8D2BE6: mov     [ecx+0Ch], edx
0x8D2BE9: fld     dword ptr [eax]
0x8D2BEB: fld     dword ptr [eax+8]
0x8D2BEE: fchs
0x8D2BF0: fstp    dword ptr [ecx+10h]
0x8D2BF3: mov     [ecx+14h], edx
0x8D2BF6: fstp    dword ptr [ecx+18h]
0x8D2BF9: mov     [ecx+1Ch], edx
0x8D2BFC: fld     dword ptr [eax]
0x8D2BFE: mov     eax, [eax+4]
0x8D2C01: mov     [ecx+20h], eax
0x8D2C04: fchs
0x8D2C06: fstp    dword ptr [ecx+24h]
0x8D2C09: mov     [ecx+28h], edx
0x8D2C0C: mov     [ecx+2Ch], edx
0x8D2C0F: retn    4
