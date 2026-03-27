0x8A01D0: mov     eax, [esp+arg_0]
0x8A01D4: mov     ecx, ds:0BA7D98h
0x8A01DA: mov     edx, [ecx]
0x8A01DC: push    esi
0x8A01DD: movzx   esi, word ptr [eax+4]
0x8A01E1: push    29h ; ')'
0x8A01E3: push    esi
0x8A01E4: push    eax
0x8A01E5: mov     eax, [edx+14h]
0x8A01E8: call    eax
0x8A01EA: pop     esi
0x8A01EB: retn
