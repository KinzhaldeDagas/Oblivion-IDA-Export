0x5B1E20: push    esi
0x5B1E21: mov     esi, ecx
0x5B1E23: mov     eax, [esi]
0x5B1E25: mov     edx, [eax+4]
0x5B1E28: call    edx
0x5B1E2A: mov     ecx, [esp+4+arg_0]
0x5B1E2E: mov     edx, [ecx]
0x5B1E30: mov     [eax+8], edx
0x5B1E33: mov     dword ptr [eax], 0
0x5B1E39: mov     ecx, [esi+8]
0x5B1E3C: mov     [eax+4], ecx
0x5B1E3F: mov     ecx, [esi+8]
0x5B1E42: test    ecx, ecx
0x5B1E44: jz      short loc_5B1E53
0x5B1E46: mov     [ecx], eax
0x5B1E48: add     dword ptr [esi+0Ch], 1
0x5B1E4C: mov     [esi+8], eax
0x5B1E4F: pop     esi
0x5B1E50: retn    4
0x5B1E53: add     dword ptr [esi+0Ch], 1
0x5B1E57: mov     [esi+4], eax
0x5B1E5A: mov     [esi+8], eax
0x5B1E5D: pop     esi
0x5B1E5E: retn    4
