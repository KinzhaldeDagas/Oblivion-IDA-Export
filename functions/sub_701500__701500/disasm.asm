0x701500: mov     ecx, ds:0B3F928h
0x701506: test    ecx, ecx
0x701508: jz      short locret_701519
0x70150A: mov     eax, [ecx]
0x70150C: mov     edx, [esp+arg_0]
0x701510: mov     eax, [eax+0C4h]
0x701516: push    edx
0x701517: call    eax
0x701519: retn
