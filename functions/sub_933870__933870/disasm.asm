0x933870: sub     esp, 10h
0x933873: mov     dx, [esp+10h+arg_0]
0x933878: xor     eax, eax
0x93387A: push    esi
0x93387B: lea     esi, [ecx+4]
0x93387E: mov     [ecx+8], eax
0x933881: mov     ecx, [esi+4]
0x933884: mov     word ptr [esp+14h+var_10], dx
0x933889: mov     edx, 1
0x93388E: mov     word ptr [esp+14h+var_8+2], ax
0x933893: mov     word ptr [esp+14h+var_4], ax
0x933898: mov     eax, [esi+8]
0x93389B: mov     word ptr [esp+14h+var_10+2], dx
0x9338A0: mov     word ptr [esp+14h+var_C], dx
0x9338A5: mov     dx, [esp+14h+arg_4]
0x9338AA: and     eax, 3FFFFFFFh
0x9338AF: cmp     ecx, eax
0x9338B1: mov     word ptr [esp+14h+var_8], dx
0x9338B6: jnz     short loc_9338C3
0x9338B8: push    8
0x9338BA: push    esi
0x9338BB: call    sub_8A6EE0
0x9338C0: add     esp, 8
0x9338C3: mov     ecx, [esi+4]
0x9338C6: mov     edx, [esi]
0x9338C8: mov     eax, [esp+14h+var_10]
0x9338CC: mov     [edx+ecx*8], eax
0x9338CF: mov     eax, [esp+14h+var_C]
0x9338D3: mov     [edx+ecx*8+4], eax
0x9338D7: mov     eax, [esi+4]
0x9338DA: inc     eax
0x9338DB: mov     [esi+4], eax
0x9338DE: mov     ecx, [esi+8]
0x9338E1: and     ecx, 3FFFFFFFh
0x9338E7: cmp     eax, ecx
0x9338E9: jnz     short loc_9338F6
0x9338EB: push    8
0x9338ED: push    esi
0x9338EE: call    sub_8A6EE0
0x9338F3: add     esp, 8
0x9338F6: mov     edx, [esi+4]
0x9338F9: mov     eax, [esi]
0x9338FB: mov     ecx, [esp+14h+var_8]
0x9338FF: mov     [eax+edx*8], ecx
0x933902: mov     ecx, [esp+14h+var_4]
0x933906: mov     [eax+edx*8+4], ecx
0x93390A: inc     dword ptr [esi+4]
0x93390D: pop     esi
0x93390E: add     esp, 10h
0x933911: retn    8
