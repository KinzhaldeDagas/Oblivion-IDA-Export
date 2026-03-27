0x953530: mov     eax, ecx
0x953532: mov     ecx, [esp+arg_0]
0x953536: mov     word ptr [eax+6], 1
0x95353C: mov     dword ptr [eax], offset off_AA33BC
0x953542: mov     edx, [ecx]
0x953544: mov     ecx, [esp+arg_4]
0x953548: mov     [eax+8], edx
0x95354B: mov     edx, [ecx]
0x95354D: mov     cl, [eax+9]
0x953550: mov     [eax+0Ch], edx
0x953553: cmp     cl, [eax+0Dh]
0x953556: setnz   dl
0x953559: mov     [eax+10h], dl
0x95355C: retn    8
