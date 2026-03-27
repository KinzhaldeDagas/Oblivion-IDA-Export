0x52E800: mov     eax, [esp+arg_0]
0x52E804: lea     ecx, [eax-0Ch]
0x52E807: cmp     ecx, 14h
0x52E80A: ja      short loc_52E815
0x52E80C: mov     [esp+arg_0], eax
0x52E810: jmp     ActorValue_GetName
0x52E815: xor     eax, eax
0x52E817: retn
