0x889570: mov     eax, [esp+arg_0]
0x889574: mov     ecx, ds:0BA7D98h
0x88957A: mov     edx, [ecx]
0x88957C: push    esi
0x88957D: movzx   esi, word ptr [eax+4]
0x889581: push    2Ch ; ','
0x889583: push    esi
0x889584: push    eax
0x889585: mov     eax, [edx+14h]
0x889588: call    eax
0x88958A: pop     esi
0x88958B: retn
