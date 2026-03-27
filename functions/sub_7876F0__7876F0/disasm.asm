0x7876F0: push    esi
0x7876F1: mov     esi, ecx
0x7876F3: mov     eax, [esi+4]
0x7876F6: test    eax, eax
0x7876F8: push    edi
0x7876F9: mov     edi, [esp+8+arg_0]
0x7876FD: jz      short loc_78771B
0x7876FF: mov     ecx, [esi+8]
0x787702: sub     ecx, eax
0x787704: mov     eax, 92492493h
0x787709: imul    ecx
0x78770B: add     edx, ecx
0x78770D: sar     edx, 4
0x787710: mov     eax, edx
0x787712: shr     eax, 1Fh
0x787715: add     eax, edx
0x787717: cmp     edi, eax
0x787719: jb      short loc_787720
0x78771B: call    __invalid_parameter_noinfo
0x787720: mov     ecx, [esi+4]
0x787723: lea     eax, ds:0[edi*8]
0x78772A: sub     eax, edi
0x78772C: pop     edi
0x78772D: lea     eax, [ecx+eax*4]
0x787730: pop     esi
0x787731: retn    4
