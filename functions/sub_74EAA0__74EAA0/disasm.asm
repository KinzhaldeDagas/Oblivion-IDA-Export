0x74EAA0: push    esi
0x74EAA1: mov     esi, ecx
0x74EAA3: call    sub_749550
0x74EAA8: mov     eax, [esi+0B4h]
0x74EAAE: mov     eax, [eax+68h]
0x74EAB1: mov     edx, [eax+20h]
0x74EAB4: add     eax, 20h ; ' '
0x74EAB7: lea     ecx, [esi+20h]
0x74EABA: mov     [ecx], edx
0x74EABC: mov     edx, [eax+4]
0x74EABF: mov     [ecx+4], edx
0x74EAC2: mov     edx, [eax+8]
0x74EAC5: mov     [ecx+8], edx
0x74EAC8: mov     eax, [eax+0Ch]
0x74EACB: mov     [ecx+0Ch], eax
0x74EACE: pop     esi
0x74EACF: retn
