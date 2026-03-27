0x7014E0: mov     ecx, ds:0B3F928h
0x7014E6: test    ecx, ecx
0x7014E8: jz      short locret_7014F9
0x7014EA: mov     eax, [ecx]
0x7014EC: mov     edx, [esp+arg_0]
0x7014F0: mov     eax, [eax+0C0h]
0x7014F6: push    edx
0x7014F7: call    eax
0x7014F9: retn
