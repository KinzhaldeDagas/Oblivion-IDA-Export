0x89E2E0: mov     eax, [esp+arg_0]
0x89E2E4: mov     ecx, ds:0BA7D98h
0x89E2EA: mov     edx, [ecx]
0x89E2EC: push    esi
0x89E2ED: movzx   esi, word ptr [eax+4]
0x89E2F1: push    26h ; '&'
0x89E2F3: push    esi
0x89E2F4: push    eax
0x89E2F5: mov     eax, [edx+14h]
0x89E2F8: call    eax
0x89E2FA: pop     esi
0x89E2FB: retn
