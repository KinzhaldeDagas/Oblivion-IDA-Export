0x927920: mov     edx, [esp+arg_14]
0x927924: push    esi
0x927925: push    edi
0x927926: mov     edi, ecx
0x927928: mov     ecx, [esp+8+arg_10]
0x92792C: mov     eax, [ecx]
0x92792E: push    edx
0x92792F: call    dword ptr [eax+2Ch]
0x927932: mov     ecx, [esp+8+arg_8]
0x927936: mov     edx, [ecx+0Ch]
0x927939: test    edx, edx
0x92793B: jz      short loc_927949
0x92793D: lea     ecx, [ecx+0]
0x927940: mov     ecx, edx
0x927942: mov     edx, [ecx+0Ch]
0x927945: test    edx, edx
0x927947: jnz     short loc_927940
0x927949: mov     esi, [esp+8+arg_0]
0x92794D: push    eax
0x92794E: mov     eax, [ecx+1Ch]
0x927951: push    eax
0x927952: push    esi
0x927953: lea     ecx, [edi-0Ch]
0x927956: call    sub_927680
0x92795B: pop     edi
0x92795C: mov     eax, esi
0x92795E: pop     esi
0x92795F: retn    18h
