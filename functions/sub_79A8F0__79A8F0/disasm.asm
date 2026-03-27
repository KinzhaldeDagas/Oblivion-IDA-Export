0x79A8F0: mov     ecx, [esp+arg_4]
0x79A8F4: push    esi
0x79A8F5: mov     esi, [esp+4+arg_0]
0x79A8F9: mov     edx, ecx
0x79A8FB: sub     edx, esi
0x79A8FD: mov     eax, 2AAAAAABh
0x79A902: imul    edx
0x79A904: sar     edx, 1
0x79A906: mov     eax, edx
0x79A908: shr     eax, 1Fh
0x79A90B: add     eax, edx
0x79A90D: mov     edx, [esp+4+arg_8]
0x79A911: lea     eax, [eax+eax*2]
0x79A914: add     eax, eax
0x79A916: add     eax, eax
0x79A918: push    edi
0x79A919: mov     edi, eax
0x79A91B: mov     eax, edx
0x79A91D: sub     eax, edi
0x79A91F: cmp     esi, ecx
0x79A921: jz      short loc_79A940
0x79A923: sub     edx, ecx
0x79A925: mov     edi, [ecx-0Ch]
0x79A928: sub     ecx, 0Ch
0x79A92B: cmp     ecx, esi
0x79A92D: mov     [edx+ecx], edi
0x79A930: mov     edi, [ecx+4]
0x79A933: mov     [edx+ecx+4], edi
0x79A937: mov     edi, [ecx+8]
0x79A93A: mov     [edx+ecx+8], edi
0x79A93E: jnz     short loc_79A925
0x79A940: pop     edi
0x79A941: pop     esi
0x79A942: retn
