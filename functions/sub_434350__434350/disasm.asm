0x434350: mov     ecx, [esp+arg_0]
0x434354: mov     eax, [ecx]
0x434356: mov     edx, [eax+4]
0x434359: call    edx
0x43435B: retn    4; IOManager stage 1 invokes IOTask vtable slot +4. QueuedTreeModel maps that slot to 0x4346A0.
