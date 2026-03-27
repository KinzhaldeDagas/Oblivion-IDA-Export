0x6F11A0: mov     ecx, [esp+arg_0]
0x6F11A4: mov     edx, [esp+arg_4]
0x6F11A8: cmp     ecx, edx
0x6F11AA: mov     eax, [esp+arg_8]
0x6F11AE: jz      short locret_6F11D0
0x6F11B0: push    esi
0x6F11B1: test    eax, eax
0x6F11B3: jz      short loc_6F11C5
0x6F11B5: mov     esi, [ecx]
0x6F11B7: mov     [eax], esi
0x6F11B9: mov     esi, [ecx+4]
0x6F11BC: mov     [eax+4], esi
0x6F11BF: mov     esi, [ecx+8]
0x6F11C2: mov     [eax+8], esi
0x6F11C5: add     ecx, 0Ch
0x6F11C8: add     eax, 0Ch
0x6F11CB: cmp     ecx, edx
0x6F11CD: jnz     short loc_6F11B1
0x6F11CF: pop     esi
0x6F11D0: retn
