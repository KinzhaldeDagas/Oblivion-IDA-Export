0x925730: mov     eax, [esp+arg_0]
0x925734: xor     edx, edx
0x925736: mov     [eax], edx
0x925738: mov     [eax+4], edx
0x92573B: mov     [eax+0Ch], edx
0x92573E: mov     dword ptr [eax+8], 18h
0x925745: mov     ecx, [ecx+3Ch]
0x925748: lea     edx, [ecx+ecx*2]
0x92574B: shl     edx, 4
0x92574E: add     edx, 80h ; '€'
0x925754: push    esi
0x925755: mov     [eax], edx
0x925757: lea     edx, [ecx+2]
0x92575A: lea     esi, [edx+edx*2]
0x92575D: push    edi
0x92575E: shl     esi, 4
0x925761: cmp     ecx, 2
0x925764: lea     edi, ds:2Ch[ecx*4]
0x92576B: mov     [eax+4], esi
0x92576E: mov     [eax+8], edi
0x925771: mov     [eax+0Ch], edx
0x925774: jl      short loc_925786
0x925776: add     esi, 20h ; ' '
0x925779: add     edi, 4
0x92577C: inc     edx
0x92577D: mov     [eax+4], esi
0x925780: mov     [eax+8], edi
0x925783: mov     [eax+0Ch], edx
0x925786: pop     edi
0x925787: pop     esi
0x925788: retn    4
