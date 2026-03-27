0x74F7F0: cmp     byte ptr [ecx+0Eh], 1
0x74F7F4: mov     al, [esp+arg_0]
0x74F7F8: jnz     short loc_74F805
0x74F7FA: cmp     al, [ecx+0Fh]
0x74F7FD: jnz     short loc_74F805
0x74F7FF: fld     dword ptr [ecx+20h]
0x74F802: retn    4
0x74F805: mov     ecx, [ecx+14h]
0x74F808: movzx   eax, al
0x74F80B: lea     eax, [eax+eax*2]
0x74F80E: fld     dword ptr [ecx+eax*8+14h]
0x74F812: retn    4
