0x5E949E: mov     eax, [esp+arg_10]; jumptable 005E9404 default case
0x5E94A2: mov     eax, [eax+4]
0x5E94A5: test    eax, eax
0x5E94A7: mov     [esp+arg_10], eax
0x5E94AB: jnz     loc_5E93D0
0x5E94B1: push    0; Seed
0x5E94B3: mov     [esp+4+arg_1C], ebx
0x5E94B7: call    GetRandomLargeInteger?
0x5E94BC: add     esp, 4
0x5E94BF: test    ebx, ebx
0x5E94C1: jz      short loc_5E953C
0x5E94C3: cmp     dword ptr [ebx], 0
0x5E94C6: jz      short loc_5E953C
0x5E94C8: xor     esi, esi
0x5E94CA: mov     ecx, ebx
0x5E94CC: lea     esp, [esp+0]
0x5E94D0: cmp     dword ptr [ecx], 0
0x5E94D3: jz      short loc_5E94D8
0x5E94D5: add     esi, 1
0x5E94D8: mov     ecx, [ecx+4]
0x5E94DB: test    ecx, ecx
0x5E94DD: jnz     short loc_5E94D0
0x5E94DF: xor     edx, edx
0x5E94E1: div     esi
0x5E94E3: mov     ebp, [esp+arg_14]
0x5E94E7: xor     edi, edi
0x5E94E9: mov     [esp+arg_20], edx
0x5E94ED: lea     ecx, [ecx+0]
0x5E94F0: mov     ecx, [esp+arg_1C]
0x5E94F4: mov     eax, [ecx]
0x5E94F6: test    eax, eax
0x5E94F8: jz      short loc_5E953C
0x5E94FA: mov     edx, [ebp+5Ch]
0x5E94FD: push    0
0x5E94FF: push    0
0x5E9501: lea     ecx, [ebp+5Ch]
0x5E9504: lea     esi, [eax+18h]
0x5E9507: mov     eax, [edx+1Ch]
0x5E950A: push    0
0x5E950C: push    esi
0x5E950D: call    eax
0x5E950F: test    al, al
0x5E9511: jnz     short loc_5E9519
0x5E9513: cmp     byte ptr [esp+10h+arg_14], al
0x5E9517: jnz     short loc_5E952D
0x5E9519: mov     ecx, [ebp+58h]
0x5E951C: mov     edx, [ecx]
0x5E951E: mov     eax, [edx+54h]
0x5E9521: push    esi
0x5E9522: call    eax
0x5E9524: cmp     [esp+14h+arg_C], edi
0x5E9528: jle     short loc_5E953C
0x5E952A: add     edi, 1
0x5E952D: mov     ecx, [esp+14h+arg_8]
0x5E9531: mov     eax, [ecx+4]
0x5E9534: test    eax, eax
0x5E9536: mov     [esp+14h+arg_8], eax
0x5E953A: jnz     short loc_5E94F0
0x5E953C: cmp     dword ptr [ebx+4], 0
0x5E9540: jz      short loc_5E9558
0x5E9542: mov     eax, [ebx+4]
0x5E9545: mov     esi, [eax+4]
0x5E9548: push    eax
0x5E9549: call    FormHeapFree
0x5E954E: add     esp, 4
0x5E9551: test    esi, esi
0x5E9553: mov     [ebx+4], esi
0x5E9556: jnz     short loc_5E9542
0x5E9558: mov     edi, [esp+14h+var_4]
0x5E955C: mov     dword ptr [ebx], 0
0x5E9562: cmp     dword ptr [edi+4], 0
0x5E9566: jz      short loc_5E957E
0x5E9568: mov     eax, [edi+4]
0x5E956B: mov     esi, [eax+4]
0x5E956E: push    eax
0x5E956F: call    FormHeapFree
0x5E9574: add     esp, 4
0x5E9577: test    esi, esi
0x5E9579: mov     [edi+4], esi
0x5E957C: jnz     short loc_5E9568
0x5E957E: push    edi
0x5E957F: mov     dword ptr [edi], 0
0x5E9585: call    FormHeapFree
0x5E958A: push    ebx
0x5E958B: call    FormHeapFree
0x5E9590: add     esp, 8
0x5E9593: pop     edi
0x5E9594: pop     esi
0x5E9595: pop     ebp
0x5E9596: pop     ebx
0x5E9597: add     esp, 0Ch
0x5E959A: retn    0Ch
