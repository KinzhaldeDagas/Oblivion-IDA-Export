0x925E00: push    esi
0x925E01: mov     esi, ecx
0x925E03: call    sub_8DBCE0
0x925E08: test    [esp+4+arg_0], 1
0x925E0D: jz      short loc_925E22
0x925E0F: movzx   edx, word ptr [esi+4]
0x925E13: mov     ecx, ds:0BA7D98h
0x925E19: mov     eax, [ecx]
0x925E1B: push    29h ; ')'
0x925E1D: push    edx
0x925E1E: push    esi
0x925E1F: call    dword ptr [eax+14h]
0x925E22: mov     eax, esi
0x925E24: pop     esi
0x925E25: retn    4
