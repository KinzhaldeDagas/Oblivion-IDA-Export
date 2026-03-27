0x54D910: mov     ecx, [esp+arg_0]
0x54D914: mov     edx, [esp+arg_4]
0x54D918: cmp     ecx, edx
0x54D91A: mov     eax, [esp+arg_8]
0x54D91E: jz      short locret_54D946
0x54D920: push    esi
0x54D921: test    eax, eax
0x54D923: jz      short loc_54D93B
0x54D925: mov     esi, [ecx]
0x54D927: mov     [eax], esi
0x54D929: mov     esi, [ecx+4]
0x54D92C: mov     [eax+4], esi
0x54D92F: mov     esi, [ecx+8]
0x54D932: mov     [eax+8], esi
0x54D935: mov     esi, [ecx+0Ch]
0x54D938: mov     [eax+0Ch], esi
0x54D93B: add     ecx, 10h
0x54D93E: add     eax, 10h
0x54D941: cmp     ecx, edx
0x54D943: jnz     short loc_54D921
0x54D945: pop     esi
0x54D946: retn
