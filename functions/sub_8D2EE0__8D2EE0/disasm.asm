0x8D2EE0: mov     eax, [esp+arg_0]
0x8D2EE4: mov     ecx, [eax+8]
0x8D2EE7: mov     eax, [ecx+18h]
0x8D2EEA: xor     edx, edx
0x8D2EEC: test    eax, eax
0x8D2EEE: jle     short locret_8D2F0D
0x8D2EF0: push    esi
0x8D2EF1: xor     esi, esi
0x8D2EF3: mov     eax, [ecx+14h]
0x8D2EF6: fld     [esp+4+arg_4]
0x8D2EFA: fadd    dword ptr [eax+esi]
0x8D2EFD: add     eax, esi
0x8D2EFF: inc     edx
0x8D2F00: add     esi, 40h ; '@'
0x8D2F03: fstp    dword ptr [eax]
0x8D2F05: mov     eax, [ecx+18h]
0x8D2F08: cmp     edx, eax
0x8D2F0A: jl      short loc_8D2EF3
0x8D2F0C: pop     esi
0x8D2F0D: retn    8
