0x8F6780: mov     ecx, ds:0BA7D98h
0x8F6786: mov     eax, [ecx]
0x8F6788: push    1Ch
0x8F678A: push    40h ; '@'
0x8F678C: call    dword ptr [eax+10h]
0x8F678F: mov     ecx, [esp+arg_C]
0x8F6793: mov     edx, [esp+arg_8]
0x8F6797: push    ecx
0x8F6798: mov     ecx, [esp+4+arg_4]
0x8F679C: push    edx
0x8F679D: mov     edx, [esp+8+arg_0]
0x8F67A1: push    ecx
0x8F67A2: push    edx
0x8F67A3: mov     ecx, eax
0x8F67A5: mov     word ptr [eax+4], 40h ; '@'
0x8F67AB: call    sub_8F6720
0x8F67B0: retn
