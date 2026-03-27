0x8CB610: mov     ecx, [esp+arg_4]
0x8CB614: mov     ax, [ecx+22h]
0x8CB618: cmp     ax, 0FFFFh
0x8CB61C: jz      short locret_8CB635
0x8CB61E: mov     edx, [esp+arg_0]
0x8CB622: mov     edx, [edx+50h]
0x8CB625: movzx   eax, ax
0x8CB628: mov     dword ptr [edx+eax*4], 0
0x8CB62F: mov     word ptr [ecx+22h], 0FFFFh
0x8CB635: retn
