0x7014A0: mov     ecx, ds:0B3F928h
0x7014A6: test    ecx, ecx
0x7014A8: jz      short locret_7014B9
0x7014AA: mov     eax, [ecx]
0x7014AC: mov     edx, [esp+arg_0]
0x7014B0: mov     eax, [eax+0B4h]
0x7014B6: push    edx
0x7014B7: call    eax
0x7014B9: retn
