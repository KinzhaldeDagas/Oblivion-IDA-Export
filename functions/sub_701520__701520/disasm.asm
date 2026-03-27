0x701520: mov     ecx, ds:0B3F928h
0x701526: test    ecx, ecx
0x701528: jz      short locret_701539
0x70152A: mov     eax, [ecx]
0x70152C: mov     edx, [esp+arg_0]
0x701530: mov     eax, [eax+0C8h]
0x701536: push    edx
0x701537: call    eax
0x701539: retn
