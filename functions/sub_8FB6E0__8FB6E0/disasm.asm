0x8FB6E0: mov     ecx, ds:0BA7D98h
0x8FB6E6: mov     eax, [ecx]
0x8FB6E8: push    esi
0x8FB6E9: push    1Ch
0x8FB6EB: push    20h ; ' '
0x8FB6ED: call    dword ptr [eax+10h]
0x8FB6F0: mov     ecx, [esp+4+arg_C]
0x8FB6F4: mov     esi, eax
0x8FB6F6: mov     eax, [esp+4+arg_4]
0x8FB6FA: mov     [esi+8], ecx
0x8FB6FD: mov     word ptr [esi+4], 20h ; ' '
0x8FB703: mov     word ptr [esi+6], 1
0x8FB709: mov     dword ptr [esi], offset off_A9B840
0x8FB70F: mov     word ptr [esi+0Ch], 0FFFFh
0x8FB715: mov     ecx, [eax]
0x8FB717: lea     edx, [esi+10h]
0x8FB71A: push    edx
0x8FB71B: add     ecx, 10h
0x8FB71E: push    ecx
0x8FB71F: call    sub_8D1DB0
0x8FB724: add     esp, 8
0x8FB727: mov     eax, esi
0x8FB729: pop     esi
0x8FB72A: retn
