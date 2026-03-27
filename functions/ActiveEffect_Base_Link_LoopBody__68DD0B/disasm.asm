0x68DD0B: mov     ecx, [esi]
0x68DD0D: mov     edx, [ecx]
0x68DD0F: mov     eax, [edx+80h]
0x68DD15: push    ebx
0x68DD16: push    edi
0x68DD17: call    eax
0x68DD19: mov     esi, [esi+4]
0x68DD1C: test    esi, esi
0x68DD1E: jnz     short ActiveEffect_Base_Link___LoopTest
