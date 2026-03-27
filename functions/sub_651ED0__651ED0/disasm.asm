0x651ED0: mov     eax, [esp+arg_0]
0x651ED4: test    eax, eax
0x651ED6: jz      short locret_651EEB
0x651ED8: mov     ecx, [ecx+170h]
0x651EDE: test    ecx, ecx
0x651EE0: jz      short locret_651EEB
0x651EE2: mov     [esp+arg_0], eax
0x651EE6: jmp     BSSimpleList_Remove
0x651EEB: retn    4
