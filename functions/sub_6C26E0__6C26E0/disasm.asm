0x6C26E0: mov     eax, [esp+arg_4]
0x6C26E4: fld     dword ptr [eax]
0x6C26E6: mov     ecx, [esp+arg_0]
0x6C26EA: fstp    dword ptr [ecx]
0x6C26EC: mov     edx, [eax+4]
0x6C26EF: add     eax, 4
0x6C26F2: add     ecx, 4
0x6C26F5: mov     [ecx], edx
0x6C26F7: mov     edx, [eax+4]
0x6C26FA: mov     [ecx+4], edx
0x6C26FD: mov     eax, [eax+8]
0x6C2700: mov     [ecx+8], eax
0x6C2703: retn
