0x8A26F0: push    esi
0x8A26F1: xor     esi, esi
0x8A26F3: test    ecx, ecx
0x8A26F5: jz      short loc_8A2719
0x8A26F7: mov     eax, [ecx+8]
0x8A26FA: test    eax, eax
0x8A26FC: jz      short loc_8A2719
0x8A26FE: mov     ecx, [esp+4+arg_0]
0x8A2702: fld     dword ptr [ecx+4]
0x8A2705: push    ecx; int
0x8A2706: push    ecx
0x8A2707: fstp    [esp+0Ch+var_C]; float
0x8A270A: push    eax; int
0x8A270B: call    sub_8B6550
0x8A2710: add     esp, 0Ch
0x8A2713: mov     eax, esi
0x8A2715: pop     esi
0x8A2716: retn    4
0x8A2719: mov     eax, 1
0x8A271E: pop     esi
0x8A271F: retn    4
