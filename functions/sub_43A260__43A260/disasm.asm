0x43A260: sub     esp, 8
0x43A263: mov     edx, [esp+8+Comperand]
0x43A267: push    ebx
0x43A268: mov     ebx, [esp+0Ch+arg_4]
0x43A26C: push    ebp
0x43A26D: mov     ebp, ds:InterlockedCompareExchange
0x43A273: push    esi
0x43A274: mov     esi, ecx
0x43A276: mov     eax, [esi]
0x43A278: mov     ecx, [eax+0Ch]
0x43A27B: lea     eax, [ecx+edx*4]
0x43A27E: push    edi
0x43A27F: mov     [esp+18h+var_4], eax
0x43A283: mov     ecx, [esp+18h+var_4]
0x43A287: mov     [esi+10h], ecx
0x43A28A: mov     edx, ecx
0x43A28C: mov     eax, [edx]
0x43A28E: mov     [esi+14h], eax
0x43A291: mov     ecx, [esi+14h]
0x43A294: mov     edx, [esi+8]
0x43A297: and     ecx, 0FFFFFFFEh
0x43A29A: mov     [edx], ecx
0x43A29C: mov     eax, [esi+14h]
0x43A29F: and     eax, 0FFFFFFFEh
0x43A2A2: mov     [esp+18h+arg_4], eax
0x43A2A6: mov     eax, [esp+18h+arg_4]
0x43A2AA: and     eax, 0FFFFFFFEh
0x43A2AD: mov     [esp+18h+arg_4], eax
0x43A2B1: mov     eax, [esi+10h]
0x43A2B4: mov     eax, [eax]
0x43A2B6: mov     ecx, [esp+18h+arg_4]
0x43A2BA: cmp     eax, ecx
0x43A2BC: jnz     short loc_43A283
0x43A2BE: mov     edi, edi
0x43A2C0: mov     edx, [esi+14h]
0x43A2C3: test    edx, 0FFFFFFFEh
0x43A2C9: jz      loc_43A3C5
0x43A2CF: mov     eax, [esi+14h]
0x43A2D2: and     eax, 0FFFFFFFEh
0x43A2D5: mov     ecx, [eax+8]
0x43A2D8: mov     [esi+18h], ecx
0x43A2DB: mov     edx, [esi+18h]
0x43A2DE: mov     eax, [esi+4]
0x43A2E1: and     edx, 0FFFFFFFEh
0x43A2E4: mov     [eax], edx
0x43A2E6: mov     ecx, [esi+18h]
0x43A2E9: mov     eax, [esi+14h]
0x43A2EC: and     eax, 0FFFFFFFEh
0x43A2EF: mov     edx, [eax+8]
0x43A2F2: cmp     ecx, edx
0x43A2F4: jnz     short loc_43A283
0x43A2F6: mov     eax, [esi+14h]
0x43A2F9: and     eax, 0FFFFFFFEh
0x43A2FC: mov     edi, [eax]
0x43A2FE: mov     eax, [esi+14h]
0x43A301: and     eax, 0FFFFFFFEh
0x43A304: mov     [esp+18h+Comperand], eax
0x43A308: mov     ecx, [esp+18h+Comperand]
0x43A30C: mov     eax, [esi+10h]
0x43A30F: mov     eax, [eax]
0x43A311: and     ecx, 0FFFFFFFEh
0x43A314: mov     [esp+18h+Comperand], ecx
0x43A318: mov     edx, [esp+18h+Comperand]
0x43A31C: cmp     eax, edx
0x43A31E: jnz     loc_43A283
0x43A324: mov     eax, [esi+18h]
0x43A327: test    al, 1
0x43A329: jnz     short loc_43A357
0x43A32B: mov     ecx, [esi]
0x43A32D: mov     edx, [ecx]
0x43A32F: mov     eax, [edx+28h]
0x43A332: push    ebx
0x43A333: push    edi
0x43A334: call    eax
0x43A336: test    al, al
0x43A338: jnz     loc_43A3D1
0x43A33E: mov     ecx, [esi+14h]
0x43A341: and     ecx, 0FFFFFFFEh
0x43A344: add     ecx, 8
0x43A347: mov     [esi+10h], ecx
0x43A34A: mov     edx, [esi+14h]
0x43A34D: mov     eax, [esi+0Ch]
0x43A350: and     edx, 0FFFFFFFEh
0x43A353: mov     [eax], edx
0x43A355: jmp     short loc_43A3AF
0x43A357: mov     eax, [esi+18h]
0x43A35A: and     eax, 0FFFFFFFEh
0x43A35D: mov     [esp+18h+Exchange], eax
0x43A361: mov     ecx, [esp+18h+Exchange]
0x43A365: mov     edi, [esp+18h+Comperand]
0x43A369: and     ecx, 0FFFFFFFEh
0x43A36C: mov     [esp+18h+Exchange], ecx
0x43A370: mov     eax, [esp+18h+Exchange]
0x43A374: mov     ecx, [esi+10h]
0x43A377: push    edi; Comperand
0x43A378: push    eax; Exchange
0x43A379: push    ecx; Destination
0x43A37A: call    ebp ; InterlockedCompareExchange
0x43A37C: cmp     eax, edi
0x43A37E: jnz     loc_43A283
0x43A384: mov     eax, [esi+14h]
0x43A387: and     eax, 0FFFFFFFEh
0x43A38A: mov     dword ptr [eax+4], 0
0x43A391: mov     edx, [esi+1Ch]
0x43A394: mov     [eax+4], edx
0x43A397: add     dword ptr [esi+20h], 1
0x43A39B: mov     ecx, [esi]
0x43A39D: mov     [esi+1Ch], eax
0x43A3A0: mov     eax, [esi+20h]
0x43A3A3: cmp     eax, [ecx+10h]
0x43A3A6: jnz     short loc_43A3AF
0x43A3A8: mov     ecx, esi
0x43A3AA: call    sub_435FE0
0x43A3AF: mov     edx, [esi+18h]
0x43A3B2: mov     [esi+14h], edx
0x43A3B5: mov     eax, [esi+18h]
0x43A3B8: mov     ecx, [esi+8]
0x43A3BB: and     eax, 0FFFFFFFEh
0x43A3BE: mov     [ecx], eax
0x43A3C0: jmp     loc_43A2C0
0x43A3C5: pop     edi
0x43A3C6: pop     esi
0x43A3C7: pop     ebp
0x43A3C8: xor     al, al
0x43A3CA: pop     ebx
0x43A3CB: add     esp, 8
0x43A3CE: retn    8
0x43A3D1: mov     ecx, [esi]
0x43A3D3: mov     edx, [ecx]
0x43A3D5: mov     eax, [edx+2Ch]
0x43A3D8: push    ebx
0x43A3D9: push    edi
0x43A3DA: call    eax
0x43A3DC: pop     edi
0x43A3DD: pop     esi
0x43A3DE: pop     ebp
0x43A3DF: pop     ebx
0x43A3E0: add     esp, 8
0x43A3E3: retn    8
