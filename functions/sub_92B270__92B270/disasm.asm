0x92B270: sub     esp, 8
0x92B273: push    ebx
0x92B274: push    esi
0x92B275: mov     esi, large fs:2Ch
0x92B27C: push    edi
0x92B27D: mov     edi, ds:0BA9DE4h
0x92B283: mov     eax, [esi+edi*4]
0x92B286: mov     edx, [eax+1A4h]
0x92B28C: cmp     edx, [eax+1A8h]
0x92B292: jnb     short loc_92B2BA
0x92B294: push    ebp
0x92B295: mov     ebp, eax
0x92B297: mov     ebx, [ebp+1A4h]
0x92B29D: mov     dword ptr [ebx], offset aTtrcbvshape; "TtrcBvShape"
0x92B2A3: rdtsc
0x92B2A5: mov     [esp+18h+var_4], eax
0x92B2A9: mov     eax, [esp+18h+var_4]
0x92B2AD: mov     [ebx+4], eax
0x92B2B0: add     ebx, 0Ch
0x92B2B3: mov     [ebp+1A4h], ebx
0x92B2B9: pop     ebp
0x92B2BA: mov     eax, [esp+14h+arg_8]
0x92B2BE: mov     ecx, [ecx+10h]
0x92B2C1: mov     edx, [ecx]
0x92B2C3: push    eax
0x92B2C4: mov     eax, [esp+18h+arg_4]
0x92B2C8: push    eax
0x92B2C9: lea     eax, [esp+1Ch+var_5]
0x92B2CD: push    eax
0x92B2CE: call    dword ptr [edx+14h]
0x92B2D1: mov     eax, [esi+edi*4]
0x92B2D4: mov     ecx, [eax+1A4h]
0x92B2DA: cmp     ecx, [eax+1A8h]
0x92B2E0: jnb     short loc_92B319
0x92B2E2: mov     esi, eax
0x92B2E4: mov     ecx, [esi+1A4h]
0x92B2EA: mov     dword ptr [ecx], offset aEt; "Et"
0x92B2F0: rdtsc
0x92B2F2: mov     [esp+14h+arg_8], eax
0x92B2F6: mov     edx, [esp+14h+arg_8]
0x92B2FA: mov     eax, [esp+14h+arg_0]
0x92B2FE: mov     [ecx+4], edx
0x92B301: add     ecx, 0Ch
0x92B304: mov     [esi+1A4h], ecx
0x92B30A: mov     cl, [esp+14h+var_5]
0x92B30E: pop     edi
0x92B30F: pop     esi
0x92B310: mov     [eax], cl
0x92B312: pop     ebx
0x92B313: add     esp, 8
0x92B316: retn    0Ch
0x92B319: mov     eax, [esp+14h+arg_0]
0x92B31D: mov     dl, [esp+14h+var_5]
0x92B321: pop     edi
0x92B322: pop     esi
0x92B323: mov     [eax], dl
0x92B325: pop     ebx
0x92B326: add     esp, 8
0x92B329: retn    0Ch
