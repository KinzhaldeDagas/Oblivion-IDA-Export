0x54D9A0: mov     eax, [esp+arg_0]
0x54D9A4: mov     edx, [esp+arg_4]
0x54D9A8: cmp     eax, edx
0x54D9AA: jz      short locret_54D9CF
0x54D9AC: mov     ecx, [esp+arg_8]
0x54D9B0: push    esi
0x54D9B1: mov     esi, [ecx]
0x54D9B3: mov     [eax], esi
0x54D9B5: mov     esi, [ecx+4]
0x54D9B8: mov     [eax+4], esi
0x54D9BB: mov     esi, [ecx+8]
0x54D9BE: mov     [eax+8], esi
0x54D9C1: mov     esi, [ecx+0Ch]
0x54D9C4: mov     [eax+0Ch], esi
0x54D9C7: add     eax, 10h
0x54D9CA: cmp     eax, edx
0x54D9CC: jnz     short loc_54D9B1
0x54D9CE: pop     esi
0x54D9CF: retn
