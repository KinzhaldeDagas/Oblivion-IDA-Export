0x7841C0: mov     edx, [esp+arg_0]
0x7841C4: mov     ecx, [esp+arg_4]
0x7841C8: cmp     edx, ecx
0x7841CA: mov     eax, [esp+arg_8]
0x7841CE: jz      short locret_784200
0x7841D0: push    esi
0x7841D1: mov     esi, [ecx-18h]
0x7841D4: sub     ecx, 18h
0x7841D7: mov     [eax-18h], esi
0x7841DA: mov     esi, [ecx+4]
0x7841DD: sub     eax, 18h
0x7841E0: cmp     ecx, edx
0x7841E2: mov     [eax+4], esi
0x7841E5: mov     esi, [ecx+8]
0x7841E8: mov     [eax+8], esi
0x7841EB: mov     esi, [ecx+0Ch]
0x7841EE: mov     [eax+0Ch], esi
0x7841F1: mov     esi, [ecx+10h]
0x7841F4: mov     [eax+10h], esi
0x7841F7: mov     esi, [ecx+14h]
0x7841FA: mov     [eax+14h], esi
0x7841FD: jnz     short loc_7841D1
0x7841FF: pop     esi
0x784200: retn
