0x7FAAD0: mov     eax, [esp+arg_0]
0x7FAAD4: cmp     eax, 13h
0x7FAAD7: ja      short locret_7FAAFC
0x7FAAD9: mov     ecx, [esp+arg_4]
0x7FAADD: mov     edx, [esp+arg_8]
0x7FAAE1: shl     eax, 5
0x7FAAE4: add     eax, offset unk_B47018
0x7FAAE9: mov     [eax], ecx
0x7FAAEB: mov     ecx, [esp+arg_C]
0x7FAAEF: mov     [eax+4], edx
0x7FAAF2: mov     edx, [esp+arg_10]
0x7FAAF6: mov     [eax+8], ecx
0x7FAAF9: mov     [eax+0Ch], edx
0x7FAAFC: retn
