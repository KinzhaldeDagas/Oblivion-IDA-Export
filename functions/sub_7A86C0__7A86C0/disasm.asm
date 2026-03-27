0x7A86C0: mov     ecx, [esp+arg_0]
0x7A86C4: mov     edx, [esp+arg_4]
0x7A86C8: cmp     ecx, edx
0x7A86CA: mov     eax, [esp+arg_8]
0x7A86CE: jz      short locret_7A86EA
0x7A86D0: push    esi
0x7A86D1: test    eax, eax
0x7A86D3: jz      short loc_7A86DF
0x7A86D5: mov     esi, [ecx]
0x7A86D7: mov     [eax], esi
0x7A86D9: mov     esi, [ecx+4]
0x7A86DC: mov     [eax+4], esi
0x7A86DF: add     ecx, 8
0x7A86E2: add     eax, 8
0x7A86E5: cmp     ecx, edx
0x7A86E7: jnz     short loc_7A86D1
0x7A86E9: pop     esi
0x7A86EA: retn
