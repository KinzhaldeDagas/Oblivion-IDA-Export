0x68DA7B: mov     ecx, [esi]
0x68DA7D: mov     edx, [ecx]
0x68DA7F: mov     eax, [edx+74h]
0x68DA82: push    ebx
0x68DA83: push    edi
0x68DA84: call    eax
0x68DA86: mov     esi, [esi+4]
0x68DA89: add     ax, 1
0x68DA8D: add     [esp+8+arg_0], ax
0x68DA92: test    esi, esi
0x68DA94: jnz     short ActiveEffect_Base_SaveSize___LoopTest
