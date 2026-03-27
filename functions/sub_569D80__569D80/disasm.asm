0x569D80: mov     eax, ecx
0x569D82: mov     ecx, [esp+arg_0]
0x569D86: movzx   edx, byte ptr [ecx]
0x569D89: mov     [eax], dl
0x569D8B: movzx   edx, byte ptr [ecx+1]
0x569D8F: mov     [eax+1], dl
0x569D92: movzx   edx, byte ptr [ecx+2]
0x569D96: mov     [eax+2], dl
0x569D99: movzx   edx, byte ptr [ecx+3]
0x569D9D: mov     [eax+3], dl
0x569DA0: mov     ecx, [ecx+4]
0x569DA3: mov     [eax+4], ecx
0x569DA6: retn    4
