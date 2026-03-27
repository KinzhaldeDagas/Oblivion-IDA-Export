0x534020: mov     eax, ds:0BA7FB0h
0x534025: test    eax, eax
0x534027: jz      short loc_534048
0x534029: cmp     word ptr [eax+4], 0
0x53402E: mov     ecx, eax
0x534030: jz      short loc_53405D
0x534032: add     word ptr [eax+6], 0FFFFh
0x534037: add     eax, 6
0x53403A: cmp     word ptr [eax], 0
0x53403E: jnz     short loc_534052
0x534040: mov     eax, [ecx]
0x534042: mov     edx, [eax]
0x534044: push    1
0x534046: call    edx
0x534048: mov     eax, [esp+arg_0]
0x53404C: mov     ds:0BA7FB0h, eax
0x534051: retn
0x534052: mov     ecx, [esp+arg_0]
0x534056: mov     ds:0BA7FB0h, ecx
0x53405C: retn
0x53405D: mov     edx, [esp+arg_0]
0x534061: mov     ds:0BA7FB0h, edx
0x534067: retn
