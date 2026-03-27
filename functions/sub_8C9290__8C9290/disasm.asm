0x8C9290: mov     eax, [esp+arg_0]
0x8C9294: mov     ecx, ds:0BA7D98h
0x8C929A: mov     edx, [ecx]
0x8C929C: push    esi
0x8C929D: movzx   esi, word ptr [eax+4]
0x8C92A1: push    24h ; '$'
0x8C92A3: push    esi
0x8C92A4: push    eax
0x8C92A5: mov     eax, [edx+14h]
0x8C92A8: call    eax
0x8C92AA: pop     esi
0x8C92AB: retn
