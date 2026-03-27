0x65DDC0: mov     edx, [esp+arg_4]
0x65DDC4: push    esi
0x65DDC5: push    edi
0x65DDC6: mov     edi, [esp+8+arg_0]
0x65DDCA: mov     eax, [edi]
0x65DDCC: mov     esi, ecx
0x65DDCE: mov     ecx, [eax+4]
0x65DDD1: mov     [edx], ecx
0x65DDD3: mov     cl, [eax+8]
0x65DDD6: mov     edx, [esp+8+arg_8]
0x65DDDA: mov     [edx], cl
0x65DDDC: mov     ecx, [eax]
0x65DDDE: test    ecx, ecx
0x65DDE0: jz      short loc_65DDE9
0x65DDE2: mov     [edi], ecx
0x65DDE4: pop     edi
0x65DDE5: pop     esi
0x65DDE6: retn    0Ch
0x65DDE9: mov     edx, [esi]
0x65DDEB: mov     eax, [eax+4]
0x65DDEE: mov     edx, [edx+4]
0x65DDF1: push    eax
0x65DDF2: mov     ecx, esi
0x65DDF4: call    edx
0x65DDF6: mov     edx, [esi+4]
0x65DDF9: add     eax, 1
0x65DDFC: cmp     eax, edx
0x65DDFE: jnb     short loc_65DE16
0x65DE00: mov     ecx, [esi+8]
0x65DE03: lea     ecx, [ecx+eax*4]
0x65DE06: mov     esi, [ecx]
0x65DE08: test    esi, esi
0x65DE0A: jnz     short loc_65DE21
0x65DE0C: add     eax, 1
0x65DE0F: add     ecx, 4
0x65DE12: cmp     eax, edx
0x65DE14: jb      short loc_65DE06
0x65DE16: mov     dword ptr [edi], 0
0x65DE1C: pop     edi
0x65DE1D: pop     esi
0x65DE1E: retn    0Ch
0x65DE21: mov     [edi], esi
0x65DE23: pop     edi
0x65DE24: pop     esi
0x65DE25: retn    0Ch
