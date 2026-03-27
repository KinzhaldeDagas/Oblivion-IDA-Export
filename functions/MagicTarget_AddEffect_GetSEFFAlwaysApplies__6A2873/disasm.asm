0x6A2873: mov     eax, [ebp+0Ch]
0x6A2876: mov     edx, [eax+1Ch]
0x6A2879: cmp     dword ptr [edx+98h], 46464553h
0x6A2883: jnz     short loc_6A2894
0x6A2885: mov     eax, [esi]
0x6A2887: mov     edx, [eax+1Ch]
0x6A288A: mov     ecx, esi
0x6A288C: call    edx
0x6A288E: mov     [esp+arg_13], al
0x6A2892: jmp     short MagicTarget_AddEffect___GetAlwaysApplies_PlayerOverride
0x6A2894: mov     [esp+arg_13], 0
