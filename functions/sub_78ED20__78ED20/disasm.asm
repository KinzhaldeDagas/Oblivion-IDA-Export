0x78ED20: mov     eax, ecx
0x78ED22: mov     ecx, [esp+arg_0]
0x78ED26: cmp     ecx, eax
0x78ED28: jz      short locret_78ED3E
0x78ED2A: lea     edx, [ecx+4]
0x78ED2D: mov     ecx, [edx]
0x78ED2F: mov     [eax+4], ecx
0x78ED32: mov     ecx, [edx+4]
0x78ED35: mov     [eax+8], ecx
0x78ED38: mov     edx, [edx+8]
0x78ED3B: mov     [eax+0Ch], edx
0x78ED3E: retn    4
