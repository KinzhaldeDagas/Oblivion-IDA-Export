0x56B190: mov     ecx, [esp+arg_0]
0x56B194: xor     al, al
0x56B196: cmp     ecx, 171h
0x56B19C: jnb     short locret_56B1CC
0x56B19E: mov     edx, [esp+arg_4]
0x56B1A2: lea     ecx, [ecx+ecx*4]
0x56B1A5: add     ecx, ecx
0x56B1A7: add     ecx, ecx
0x56B1A9: add     ecx, ecx
0x56B1AB: push    esi
0x56B1AC: movzx   esi, ds:Script_CommandList?.numParams[ecx]
0x56B1B3: cmp     edx, esi
0x56B1B5: pop     esi
0x56B1B6: jnb     short locret_56B1CC
0x56B1B8: mov     ecx, ds:Script_CommandList?.params[ecx]
0x56B1BE: lea     eax, [edx+edx*2]
0x56B1C1: mov     edx, [ecx+eax*4+4]
0x56B1C5: mov     al, ds:0B0A54Dh[edx*8]
0x56B1CC: retn
