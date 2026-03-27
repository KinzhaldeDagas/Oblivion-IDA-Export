0x9895D8: mov     eax, [esp+Memory]
0x9895DC: test    eax, eax
0x9895DE: jz      short locret_9895F2
0x9895E0: sub     eax, 8
0x9895E3: cmp     dword ptr [eax], 0DDDDh
0x9895E9: jnz     short locret_9895F2
0x9895EB: push    eax; Memory
0x9895EC: call    _free
0x9895F1: pop     ecx
0x9895F2: retn
