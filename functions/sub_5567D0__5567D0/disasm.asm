0x5567D0: mov     ecx, [esp+arg_0]
0x5567D4: mov     edx, [esp+arg_4]
0x5567D8: cmp     ecx, edx
0x5567DA: mov     eax, [esp+arg_8]
0x5567DE: jz      short locret_5567FC
0x5567E0: push    esi
0x5567E1: test    eax, eax
0x5567E3: jz      short loc_5567F1
0x5567E5: mov     esi, [ecx]
0x5567E7: mov     [eax], esi
0x5567E9: mov     si, [ecx+4]
0x5567ED: mov     [eax+4], si
0x5567F1: add     ecx, 6
0x5567F4: add     eax, 6
0x5567F7: cmp     ecx, edx
0x5567F9: jnz     short loc_5567E1
0x5567FB: pop     esi
0x5567FC: retn
