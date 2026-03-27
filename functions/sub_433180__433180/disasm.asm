0x433180: mov     eax, [esp+arg_8]
0x433184: mov     edx, [esp+Comperand]
0x433188: push    ebx
0x433189: push    esi
0x43318A: mov     esi, ecx
0x43318C: mov     ecx, [esp+8+arg_4]
0x433190: push    eax; int
0x433191: push    ecx; int
0x433192: push    edx; Comperand
0x433193: mov     ecx, esi
0x433195: call    sub_432A60
0x43319A: mov     bl, al
0x43319C: test    bl, bl
0x43319E: jz      short loc_4331C3
0x4331A0: mov     eax, [esi+14h]
0x4331A3: mov     ecx, [esp+8+arg_C]
0x4331A7: and     eax, 0FFFFFFFEh
0x4331AA: add     eax, 8
0x4331AD: push    eax
0x4331AE: call    sub_4348B0
0x4331B3: mov     eax, [esi+14h]
0x4331B6: and     eax, 0FFFFFFFEh
0x4331B9: mov     ecx, [eax+0Ch]
0x4331BC: test    cl, 1
0x4331BF: jz      short loc_4331C3
0x4331C1: xor     bl, bl
0x4331C3: mov     edx, [esi+4]
0x4331C6: mov     dword ptr [edx], 0
0x4331CC: mov     eax, [esi+8]
0x4331CF: mov     dword ptr [eax], 0
0x4331D5: mov     ecx, [esi+0Ch]
0x4331D8: pop     esi
0x4331D9: mov     al, bl
0x4331DB: mov     dword ptr [ecx], 0
0x4331E1: pop     ebx
0x4331E2: retn    10h
