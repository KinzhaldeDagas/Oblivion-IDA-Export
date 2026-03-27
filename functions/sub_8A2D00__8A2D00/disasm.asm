0x8A2D00: mov     eax, [esp+arg_0]
0x8A2D04: mov     ecx, ds:0BA7D98h
0x8A2D0A: mov     edx, [ecx]
0x8A2D0C: push    esi
0x8A2D0D: movzx   esi, word ptr [eax+4]
0x8A2D11: push    2Ah ; '*'
0x8A2D13: push    esi
0x8A2D14: push    eax
0x8A2D15: mov     eax, [edx+14h]
0x8A2D18: call    eax
0x8A2D1A: pop     esi
0x8A2D1B: retn
