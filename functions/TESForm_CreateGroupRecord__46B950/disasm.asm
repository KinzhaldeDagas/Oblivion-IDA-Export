0x46B950: mov     eax, [esp+arg_0]
0x46B954: xor     edx, edx
0x46B956: cmp     eax, edx
0x46B958: jz      short locret_46B984
0x46B95A: cmp     [esp+arg_4], edx
0x46B95E: jnz     short locret_46B984
0x46B960: push    esi
0x46B961: mov     esi, ds:0B05E20h
0x46B967: mov     [eax], esi
0x46B969: mov     [eax+0Ch], edx
0x46B96C: movzx   ecx, byte ptr [ecx+4]
0x46B970: lea     ecx, [ecx+ecx*2]
0x46B973: mov     ecx, ds:0B05E08h[ecx*4]
0x46B97A: mov     [eax+8], ecx
0x46B97D: mov     [eax+4], edx
0x46B980: mov     [eax+10h], edx
0x46B983: pop     esi
0x46B984: retn    8
