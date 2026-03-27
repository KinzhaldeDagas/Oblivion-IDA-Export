0x72ABC0: mov     ax, [ecx+5Ah]
0x72ABC4: mov     edx, [esp+arg_0]
0x72ABC8: mov     [edx], ax
0x72ABCB: mov     eax, [esp+arg_4]
0x72ABCF: mov     dword ptr [eax], 0
0x72ABD5: mov     edx, [ecx+48h]
0x72ABD8: mov     eax, [esp+arg_8]
0x72ABDC: mov     [eax], edx
0x72ABDE: movzx   eax, word ptr [ecx+5Ah]
0x72ABE2: mov     edx, [esp+arg_C]
0x72ABE6: lea     ecx, [eax+eax*2]
0x72ABE9: mov     [edx], ecx
0x72ABEB: retn    10h
