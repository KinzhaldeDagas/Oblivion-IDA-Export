0x469CA0: cmp     dword ptr [ecx+8], 0
0x469CA4: lea     eax, [ecx+8]
0x469CA7: jz      short loc_469CBE
0x469CA9: mov     ecx, [esp+arg_0]
0x469CAD: lea     ecx, [ecx+0]
0x469CB0: mov     edx, [eax]
0x469CB2: cmp     [edx+4], ecx
0x469CB5: jz      short loc_469CC3
0x469CB7: mov     eax, [eax+4]
0x469CBA: test    eax, eax
0x469CBC: jnz     short loc_469CB0
0x469CBE: xor     eax, eax
0x469CC0: retn    4
0x469CC3: mov     eax, edx
0x469CC5: mov     eax, [eax]
0x469CC7: retn    4
