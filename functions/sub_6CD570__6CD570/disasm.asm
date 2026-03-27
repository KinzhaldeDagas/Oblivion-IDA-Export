0x6CD570: push    ecx
0x6CD571: push    ebx
0x6CD572: push    ebp
0x6CD573: push    esi
0x6CD574: push    edi
0x6CD575: mov     edi, [esp+14h+arg_0]
0x6CD579: mov     esi, ecx
0x6CD57B: mov     ecx, edi
0x6CD57D: call    sub_712A90
0x6CD582: mov     ebx, [esi]
0x6CD584: mov     ebp, eax
0x6CD586: cmp     ebx, ebp
0x6CD588: jz      short loc_6CD5BA
0x6CD58A: test    ebx, ebx
0x6CD58C: jz      short loc_6CD5AA
0x6CD58E: lea     eax, [ebx+4]
0x6CD591: push    eax; lpAddend
0x6CD592: call    dword ptr ds:0A2807Ch
0x6CD598: test    eax, eax
0x6CD59A: jnz     short loc_6CD5AA
0x6CD59C: test    ebx, ebx
0x6CD59E: jz      short loc_6CD5AA
0x6CD5A0: mov     edx, [ebx]
0x6CD5A2: mov     eax, [edx]
0x6CD5A4: push    1
0x6CD5A6: mov     ecx, ebx
0x6CD5A8: call    eax
0x6CD5AA: test    ebp, ebp
0x6CD5AC: mov     [esi], ebp
0x6CD5AE: jz      short loc_6CD5BA
0x6CD5B0: add     ebp, 4
0x6CD5B3: push    ebp; lpAddend
0x6CD5B4: call    dword ptr ds:0A28078h
0x6CD5BA: mov     eax, [edi+21Ch]
0x6CD5C0: push    1
0x6CD5C2: lea     ecx, [esp+18h+arg_0]
0x6CD5C6: push    ecx
0x6CD5C7: mov     ebx, 4
0x6CD5CC: push    ebx
0x6CD5CD: lea     edx, [esi+4]
0x6CD5D0: push    edx
0x6CD5D1: push    eax
0x6CD5D2: mov     eax, [eax+4]
0x6CD5D5: mov     [esp+28h+arg_0], ebx
0x6CD5D9: call    eax
0x6CD5DB: mov     eax, [edi+21Ch]
0x6CD5E1: push    1
0x6CD5E3: lea     ecx, [esp+2Ch+arg_0]
0x6CD5E7: push    ecx
0x6CD5E8: push    ebx
0x6CD5E9: lea     edx, [esi+8]
0x6CD5EC: push    edx
0x6CD5ED: push    eax
0x6CD5EE: mov     eax, [eax+4]
0x6CD5F1: mov     [esp+3Ch+arg_0], ebx
0x6CD5F5: call    eax
0x6CD5F7: mov     eax, [edi+21Ch]
0x6CD5FD: add     esp, 28h
0x6CD600: cmp     dword ptr [edi+0D8h], 0A01006Eh
0x6CD60A: push    1
0x6CD60C: lea     ecx, [esp+18h+arg_0]
0x6CD610: push    ecx
0x6CD611: jnb     short loc_6CD63C
0x6CD613: push    ebx
0x6CD614: lea     edx, [esp+20h+var_4]
0x6CD618: push    edx
0x6CD619: push    eax
0x6CD61A: mov     eax, [eax+4]
0x6CD61D: mov     [esp+28h+arg_0], ebx
0x6CD621: call    eax
0x6CD623: mov     eax, [esp+28h+var_4]
0x6CD627: add     esp, 14h
0x6CD62A: cmp     eax, 80000000h
0x6CD62F: jnz     short loc_6CD637
0x6CD631: mov     byte ptr [esi+0Ch], 80h ; '€'
0x6CD635: jmp     short loc_6CD653
0x6CD637: mov     [esi+0Ch], al
0x6CD63A: jmp     short loc_6CD653
0x6CD63C: push    1
0x6CD63E: lea     edx, [esi+0Ch]
0x6CD641: push    edx
0x6CD642: push    eax
0x6CD643: mov     eax, [eax+4]
0x6CD646: mov     [esp+28h+arg_0], 1
0x6CD64E: call    eax
0x6CD650: add     esp, 14h
0x6CD653: mov     edi, [edi+21Ch]
0x6CD659: mov     edx, [edi+4]
0x6CD65C: push    1
0x6CD65E: lea     ecx, [esp+18h+arg_0]
0x6CD662: push    ecx
0x6CD663: push    ebx
0x6CD664: add     esi, 10h
0x6CD667: push    esi
0x6CD668: push    edi
0x6CD669: mov     [esp+28h+arg_0], ebx
0x6CD66D: call    edx
0x6CD66F: add     esp, 14h
0x6CD672: pop     edi
0x6CD673: pop     esi
0x6CD674: pop     ebp
0x6CD675: pop     ebx
0x6CD676: pop     ecx
0x6CD677: retn    4
