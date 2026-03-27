0x7C58F0: mov     eax, [esp+arg_0]
0x7C58F4: mov     edx, [esp+arg_4]
0x7C58F8: cmp     eax, edx
0x7C58FA: jz      short locret_7C5943
0x7C58FC: cmp     [ecx+4], eax
0x7C58FF: push    esi
0x7C5900: jnz     short loc_7C5907
0x7C5902: mov     esi, [eax]
0x7C5904: mov     [ecx+4], esi
0x7C5907: cmp     [ecx+4], edx
0x7C590A: jnz     short loc_7C590F
0x7C590C: mov     [ecx+4], eax
0x7C590F: cmp     [ecx+8], eax
0x7C5912: jnz     short loc_7C591A
0x7C5914: mov     esi, [eax+4]
0x7C5917: mov     [ecx+8], esi
0x7C591A: mov     ecx, [eax]
0x7C591C: test    ecx, ecx
0x7C591E: jz      short loc_7C5926
0x7C5920: mov     esi, [eax+4]
0x7C5923: mov     [ecx+4], esi
0x7C5926: mov     ecx, [eax+4]
0x7C5929: test    ecx, ecx
0x7C592B: jz      short loc_7C5931
0x7C592D: mov     esi, [eax]
0x7C592F: mov     [ecx], esi
0x7C5931: mov     ecx, [edx+4]
0x7C5934: test    ecx, ecx
0x7C5936: mov     [eax+4], ecx
0x7C5939: mov     [eax], edx
0x7C593B: pop     esi
0x7C593C: jz      short loc_7C5940
0x7C593E: mov     [ecx], eax
0x7C5940: mov     [edx+4], eax
0x7C5943: retn    8
