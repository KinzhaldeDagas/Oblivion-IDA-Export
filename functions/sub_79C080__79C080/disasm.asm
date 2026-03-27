0x79C080: mov     ecx, [esp+arg_4]
0x79C084: mov     eax, [esp+arg_8]
0x79C088: push    esi
0x79C089: mov     esi, [esp+4+arg_0]
0x79C08D: cmp     esi, ecx
0x79C08F: jz      short loc_79C0C1
0x79C091: push    edi
0x79C092: mov     edi, [ecx-0Ch]
0x79C095: mov     edx, [eax-0Ch]
0x79C098: sub     ecx, 10h
0x79C09B: sub     eax, 10h
0x79C09E: cmp     ecx, esi
0x79C0A0: mov     [eax+4], edi
0x79C0A3: mov     [ecx+4], edx
0x79C0A6: mov     edi, [ecx+8]
0x79C0A9: mov     edx, [eax+8]
0x79C0AC: mov     [eax+8], edi
0x79C0AF: mov     [ecx+8], edx
0x79C0B2: mov     edi, [ecx+0Ch]
0x79C0B5: mov     edx, [eax+0Ch]
0x79C0B8: mov     [eax+0Ch], edi
0x79C0BB: mov     [ecx+0Ch], edx
0x79C0BE: jnz     short loc_79C092
0x79C0C0: pop     edi
0x79C0C1: pop     esi
0x79C0C2: retn
