0x7847F0: mov     ecx, [esp+arg_0]
0x7847F4: mov     edx, [esp+arg_4]
0x7847F8: cmp     ecx, edx
0x7847FA: mov     eax, [esp+arg_8]
0x7847FE: jz      short locret_784832
0x784800: push    esi
0x784801: test    eax, eax
0x784803: jz      short loc_784827
0x784805: mov     esi, [ecx]
0x784807: mov     [eax], esi
0x784809: mov     esi, [ecx+4]
0x78480C: mov     [eax+4], esi
0x78480F: mov     esi, [ecx+8]
0x784812: mov     [eax+8], esi
0x784815: mov     esi, [ecx+0Ch]
0x784818: mov     [eax+0Ch], esi
0x78481B: mov     esi, [ecx+10h]
0x78481E: mov     [eax+10h], esi
0x784821: mov     esi, [ecx+14h]
0x784824: mov     [eax+14h], esi
0x784827: add     ecx, 18h
0x78482A: add     eax, 18h
0x78482D: cmp     ecx, edx
0x78482F: jnz     short loc_784801
0x784831: pop     esi
0x784832: retn
