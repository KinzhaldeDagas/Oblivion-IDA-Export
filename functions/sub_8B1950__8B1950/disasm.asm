0x8B1950: push    esi
0x8B1951: push    edi
0x8B1952: mov     edi, [esp+8+arg_0]
0x8B1956: cmp     edi, 33h ; '3'
0x8B1959: mov     esi, edi
0x8B195B: jge     short loc_8B1962
0x8B195D: mov     esi, 33h ; '3'
0x8B1962: mov     ecx, ds:0BA7D98h
0x8B1968: mov     eax, [ecx]
0x8B196A: push    13h
0x8B196C: lea     edx, [esi+0Dh]
0x8B196F: push    edx
0x8B1970: call    dword ptr [eax+10h]
0x8B1973: mov     [eax], edi
0x8B1975: pop     edi
0x8B1976: mov     [eax+4], esi
0x8B1979: mov     dword ptr [eax+8], 0
0x8B1980: pop     esi
0x8B1981: retn
