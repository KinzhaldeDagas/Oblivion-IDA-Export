0x707530: push    ebx
0x707531: mov     ebx, [esp+4+arg_0]
0x707535: cmp     ebx, 0Ah
0x707538: jl      short loc_707540
0x70753A: xor     eax, eax
0x70753C: pop     ebx
0x70753D: retn    4
0x707540: push    esi
0x707541: mov     esi, [ecx+9Ch]
0x707547: test    esi, esi
0x707549: push    edi
0x70754A: jz      short loc_70756D
0x70754C: lea     esp, [esp+0]
0x707550: mov     edi, [esi+8]
0x707553: test    edi, edi
0x707555: lea     eax, [esi+8]
0x707558: mov     esi, [esi]
0x70755A: jz      short loc_707569
0x70755C: mov     eax, [edi]
0x70755E: mov     edx, [eax+4Ch]
0x707561: mov     ecx, edi
0x707563: call    edx
0x707565: cmp     eax, ebx
0x707567: jz      short loc_707575
0x707569: test    esi, esi
0x70756B: jnz     short loc_707550
0x70756D: pop     edi
0x70756E: pop     esi
0x70756F: xor     eax, eax
0x707571: pop     ebx
0x707572: retn    4
0x707575: mov     eax, edi
0x707577: pop     edi
0x707578: pop     esi
0x707579: pop     ebx
0x70757A: retn    4
