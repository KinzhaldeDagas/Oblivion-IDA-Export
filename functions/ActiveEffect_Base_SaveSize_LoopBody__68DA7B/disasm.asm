0x68DA7B: mov     ecx, [esi]; Verified (Oblivion): size traversal calls each hit-effect vtable +0x74 with ECX=this, first explicit argument the owning ActiveEffect* (EDI), and second explicit argument the target reference passed to ActiveEffect_Base_SaveSize (EBX). This establishes the shared GetExtraSaveSize virtual signature.
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
