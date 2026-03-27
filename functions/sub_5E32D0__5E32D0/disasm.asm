0x5E32D0: mov     eax, [ecx]
0x5E32D2: mov     edx, [eax+170h]
0x5E32D8: call    edx
0x5E32DA: cmp     byte ptr [eax+4], 23h ; '#'
0x5E32DE: setz    al
0x5E32E1: retn
