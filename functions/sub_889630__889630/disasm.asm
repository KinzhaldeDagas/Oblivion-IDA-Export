0x889630: mov     eax, [esp+arg_0]
0x889634: test    eax, eax
0x889636: jz      short locret_88964C
0x889638: movzx   ecx, byte ptr [eax-1]
0x88963C: sub     eax, ecx
0x88963E: mov     [esp+arg_0], eax; void *
0x889642: mov     ecx, offset FormHeap
0x889647: jmp     MemoryHeap_Free_checked
0x88964C: retn    4
