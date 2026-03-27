0x7014C0: mov     ecx, ds:0B3F928h
0x7014C6: test    ecx, ecx
0x7014C8: jz      short locret_7014D9
0x7014CA: mov     eax, [ecx]
0x7014CC: mov     edx, [esp+arg_0]
0x7014D0: mov     eax, [eax+0B8h]
0x7014D6: push    edx
0x7014D7: call    eax
0x7014D9: retn
