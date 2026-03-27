0x8896D0: mov     eax, [esp+arg_0]
0x8896D4: mov     ecx, ds:0BA7D98h
0x8896DA: mov     edx, [ecx]
0x8896DC: push    esi
0x8896DD: movzx   esi, word ptr [eax+4]
0x8896E1: push    32h ; '2'
0x8896E3: push    esi
0x8896E4: push    eax
0x8896E5: mov     eax, [edx+14h]
0x8896E8: call    eax
0x8896EA: pop     esi
0x8896EB: retn
