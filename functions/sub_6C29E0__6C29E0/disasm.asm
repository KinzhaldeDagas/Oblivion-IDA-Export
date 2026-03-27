0x6C29E0: mov     eax, [esp+arg_4]
0x6C29E4: fld     dword ptr [eax]
0x6C29E6: mov     ecx, [esp+arg_0]
0x6C29EA: fstp    dword ptr [ecx]
0x6C29EC: mov     edx, [eax+4]
0x6C29EF: add     eax, 4
0x6C29F2: add     ecx, 4
0x6C29F5: mov     [ecx], edx
0x6C29F7: mov     edx, [eax+4]
0x6C29FA: mov     [ecx+4], edx
0x6C29FD: mov     edx, [eax+8]
0x6C2A00: mov     [ecx+8], edx
0x6C2A03: mov     eax, [eax+0Ch]
0x6C2A06: mov     [ecx+0Ch], eax
0x6C2A09: retn
