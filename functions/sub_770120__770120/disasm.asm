0x770120: push    esi
0x770121: mov     esi, ecx
0x770123: mov     eax, [esi]
0x770125: mov     edx, [eax+74h]
0x770128: call    edx
0x77012A: mov     ecx, [esp+4+arg_0]
0x77012E: mov     edx, [esp+4+arg_4]
0x770132: mov     [ecx], eax
0x770134: mov     eax, [esi+20h]
0x770137: mov     [edx], eax
0x770139: xor     eax, eax
0x77013B: cmp     [ecx], eax
0x77013D: pop     esi
0x77013E: setnz   al
0x770141: retn    8
