0x929DD0: mov     eax, ecx
0x929DD2: mov     ecx, [esp+arg_0]
0x929DD6: test    ecx, ecx
0x929DD8: mov     word ptr [eax+6], 1
0x929DDE: mov     dword ptr [eax], offset off_AA1A84
0x929DE4: jz      short locret_929E12
0x929DE6: mov     ecx, [eax+28h]
0x929DE9: push    esi
0x929DEA: xor     esi, esi
0x929DEC: test    ecx, ecx
0x929DEE: jle     short loc_929E11
0x929DF0: xor     edx, edx
0x929DF2: push    ebx
0x929DF3: mov     ecx, [eax+24h]
0x929DF6: mov     bl, [edx+ecx+11h]
0x929DFA: test    bl, bl
0x929DFC: lea     ecx, [edx+ecx+11h]
0x929E00: jnz     short loc_929E05
0x929E02: mov     byte ptr [ecx], 1
0x929E05: mov     ecx, [eax+28h]
0x929E08: inc     esi
0x929E09: add     edx, 30h ; '0'
0x929E0C: cmp     esi, ecx
0x929E0E: jl      short loc_929DF3
0x929E10: pop     ebx
0x929E11: pop     esi
0x929E12: retn    4
