0x5E3270: mov     eax, [ecx]
0x5E3272: mov     edx, [eax+170h]
0x5E3278: call    edx
0x5E327A: cmp     byte ptr [eax+4], 24h ; '$'
0x5E327E: setz    al
0x5E3281: retn
