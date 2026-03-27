0x569DD0: mov     eax, [esp+arg_0]
0x569DD4: test    eax, eax
0x569DD6: jz      short locret_569DF8
0x569DD8: movzx   edx, byte ptr [eax+1]
0x569DDC: mov     [ecx+1], dl
0x569DDF: movzx   edx, byte ptr [eax]
0x569DE2: mov     [ecx], dl
0x569DE4: movzx   edx, byte ptr [eax+2]
0x569DE8: mov     [ecx+2], dl
0x569DEB: movzx   edx, byte ptr [eax+3]
0x569DEF: mov     [ecx+3], dl
0x569DF2: mov     eax, [eax+4]
0x569DF5: mov     [ecx+4], eax
0x569DF8: retn    4
