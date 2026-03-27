0x4692E0: push    esi
0x4692E1: mov     esi, [esp+4+arg_0]
0x4692E5: lea     eax, [esi+esi*2]
0x4692E8: movzx   edx, word ptr [ecx+eax*8+40h]
0x4692ED: cmp     dx, 0FFFFh
0x4692F2: lea     eax, [ecx+eax*8+3Ch]
0x4692F6: jnz     short loc_46930E
0x4692F8: mov     eax, [eax]
0x4692FA: push    edi
0x4692FB: lea     edi, [eax+1]
0x4692FE: mov     edi, edi
0x469300: mov     dl, [eax]
0x469302: add     eax, 1
0x469305: test    dl, dl
0x469307: jnz     short loc_469300
0x469309: sub     eax, edi
0x46930B: pop     edi
0x46930C: jmp     short loc_469311
0x46930E: movzx   eax, dx
0x469311: test    eax, eax
0x469313: jnz     short loc_46931C
0x469315: cmp     esi, 1
0x469318: jnz     short loc_46931C
0x46931A: xor     esi, esi
0x46931C: lea     edx, [esi+esi*2]
0x46931F: mov     eax, [ecx+edx*8+38h]
0x469323: lea     ecx, [ecx+edx*8+38h]
0x469327: mov     edx, [eax+14h]
0x46932A: call    edx
0x46932C: pop     esi
0x46932D: retn    4
