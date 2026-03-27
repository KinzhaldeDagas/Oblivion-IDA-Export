0x9142F0: mov     eax, [esp+arg_0]
0x9142F4: add     ecx, 10h
0x9142F7: push    esi
0x9142F8: mov     esi, [ecx]
0x9142FA: mov     edx, eax
0x9142FC: mov     [edx], esi
0x9142FE: mov     esi, [ecx+4]
0x914301: mov     [edx+4], esi
0x914304: mov     esi, [ecx+8]
0x914307: mov     [edx+8], esi
0x91430A: mov     ecx, [ecx+0Ch]
0x91430D: mov     [edx+0Ch], ecx
0x914310: pop     esi
0x914311: retn    4
