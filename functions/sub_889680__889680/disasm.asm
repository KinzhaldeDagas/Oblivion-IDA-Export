0x889680: mov     eax, [esp+arg_0]
0x889684: test    eax, eax
0x889686: jz      short locret_889699
0x889688: movzx   ecx, byte ptr [eax-1]
0x88968C: sub     eax, ecx
0x88968E: push    eax; void *
0x88968F: mov     ecx, offset FormHeap
0x889694: call    MemoryHeap_Free_checked
0x889699: retn    0Ch
