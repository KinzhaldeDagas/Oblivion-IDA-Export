0x780940: cmp     byte ptr [ecx+4], 0
0x780944: jz      short locret_78095C
0x780946: mov     eax, [esp+arg_0]
0x78094A: mov     byte ptr [ecx+4], 0
0x78094E: mov     ecx, [ecx]
0x780950: mov     edx, [eax]
0x780952: mov     edx, [edx+0C4h]
0x780958: push    ecx
0x780959: push    eax
0x78095A: call    edx
0x78095C: retn    4
