0x784790: mov     edx, [esp+arg_0]
0x784794: mov     eax, [edx]
0x784796: push    esi
0x784797: mov     esi, [eax+8]
0x78479A: mov     [edx], esi
0x78479C: mov     esi, [eax+8]
0x78479F: cmp     byte ptr [esi+2Dh], 0
0x7847A3: jnz     short loc_7847A8
0x7847A5: mov     [esi+4], edx
0x7847A8: mov     esi, [edx+4]
0x7847AB: mov     [eax+4], esi
0x7847AE: mov     ecx, [ecx+4]
0x7847B1: cmp     edx, [ecx+4]
0x7847B4: pop     esi
0x7847B5: jnz     short loc_7847C3
0x7847B7: mov     [ecx+4], eax
0x7847BA: mov     [eax+8], edx
0x7847BD: mov     [edx+4], eax
0x7847C0: retn    4
0x7847C3: mov     ecx, [edx+4]
0x7847C6: cmp     edx, [ecx+8]
0x7847C9: jnz     short loc_7847D7
0x7847CB: mov     [ecx+8], eax
0x7847CE: mov     [eax+8], edx
0x7847D1: mov     [edx+4], eax
0x7847D4: retn    4
0x7847D7: mov     [ecx], eax
0x7847D9: mov     [eax+8], edx
0x7847DC: mov     [edx+4], eax
0x7847DF: retn    4
