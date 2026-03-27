0x701480: mov     ecx, ds:0B3F928h
0x701486: test    ecx, ecx
0x701488: jz      short locret_701499
0x70148A: mov     eax, [ecx]
0x70148C: mov     edx, [esp+arg_0]
0x701490: mov     eax, [eax+0BCh]
0x701496: push    edx
0x701497: call    eax
0x701499: retn
