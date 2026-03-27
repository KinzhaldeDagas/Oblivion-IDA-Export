0x43F280: mov     eax, ecx
0x43F282: mov     ecx, [esp+arg_10]
0x43F286: test    ecx, ecx
0x43F288: push    esi
0x43F289: jnz     short loc_43F298
0x43F28B: mov     ecx, [eax+74h]
0x43F28E: test    ecx, ecx
0x43F290: jnz     short loc_43F298
0x43F292: xor     al, al
0x43F294: pop     esi
0x43F295: retn    14h
0x43F298: mov     esi, [esp+4+arg_4]
0x43F29C: mov     edx, [ecx]
0x43F29E: mov     edx, [edx+0DCh]
0x43F2A4: sub     esp, 0Ch
0x43F2A7: mov     eax, esp
0x43F2A9: mov     [eax], esi
0x43F2AB: mov     esi, [esp+10h+arg_8]
0x43F2AF: mov     [eax+4], esi
0x43F2B2: mov     esi, [esp+10h+arg_C]
0x43F2B6: mov     [eax+8], esi
0x43F2B9: mov     eax, [esp+10h+arg_0]
0x43F2BD: push    eax
0x43F2BE: call    edx
0x43F2C0: pop     esi
0x43F2C1: retn    14h
