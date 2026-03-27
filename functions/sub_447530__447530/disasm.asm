0x447530: mov     eax, [esp+arg_0]
0x447534: test    eax, eax
0x447536: jz      short locret_447544
0x447538: mov     [esp+arg_0], eax
0x44753C: add     ecx, 7Ch ; '|'
0x44753F: jmp     BSSimpleList_PushFront
0x447544: retn    4
