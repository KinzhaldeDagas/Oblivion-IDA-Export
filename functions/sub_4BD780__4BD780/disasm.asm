0x4BD780: sub     esp, 0Ch
0x4BD783: push    ebp
0x4BD784: mov     ebp, ds:0A2813Ch
0x4BD78A: push    esi
0x4BD78B: push    edi
0x4BD78C: mov     esi, ecx
0x4BD78E: mov     edi, edi
0x4BD790: mov     eax, [esp+18h+arg_4]
0x4BD794: mov     ecx, [esp+18h+arg_0]
0x4BD798: push    eax; int
0x4BD799: push    ecx; Comperand
0x4BD79A: mov     ecx, esi
0x4BD79C: call    sub_43C070
0x4BD7A1: test    al, al
0x4BD7A3: jz      loc_4BD859
0x4BD7A9: mov     eax, [esi+18h]
0x4BD7AC: and     eax, 0FFFFFFFEh
0x4BD7AF: mov     [esp+18h+Comperand], eax
0x4BD7B3: mov     edx, [esp+18h+Comperand]
0x4BD7B7: mov     eax, [esi+18h]
0x4BD7BA: and     eax, 0FFFFFFFEh
0x4BD7BD: and     edx, 0FFFFFFFEh
0x4BD7C0: mov     [esp+18h+Comperand], edx
0x4BD7C4: mov     [esp+18h+Exchange], eax
0x4BD7C8: mov     eax, [esp+18h+Exchange]
0x4BD7CC: mov     edi, [esp+18h+Comperand]
0x4BD7D0: or      eax, 1
0x4BD7D3: mov     [esp+18h+Exchange], eax
0x4BD7D7: mov     ecx, [esp+18h+Exchange]
0x4BD7DB: mov     eax, [esi+14h]
0x4BD7DE: push    edi; Comperand
0x4BD7DF: and     eax, 0FFFFFFFEh
0x4BD7E2: push    ecx; Exchange
0x4BD7E3: add     eax, 8
0x4BD7E6: push    eax; Destination
0x4BD7E7: call    ebp ; InterlockedCompareExchange
0x4BD7E9: cmp     eax, edi
0x4BD7EB: jnz     short loc_4BD790
0x4BD7ED: mov     edi, [esi+14h]
0x4BD7F0: and     edi, 0FFFFFFFEh
0x4BD7F3: add     edi, 4
0x4BD7F6: push    ebx
0x4BD7F7: mov     ebx, [edi]
0x4BD7F9: test    ebx, ebx
0x4BD7FB: jz      short loc_4BD81F
0x4BD7FD: lea     ecx, [ebx+8]
0x4BD800: push    ecx; lpAddend
0x4BD801: call    dword ptr ds:0A2807Ch
0x4BD807: test    eax, eax
0x4BD809: jnz     short loc_4BD819
0x4BD80B: test    ebx, ebx
0x4BD80D: jz      short loc_4BD819
0x4BD80F: mov     edx, [ebx]
0x4BD811: mov     eax, [edx]
0x4BD813: push    1
0x4BD815: mov     ecx, ebx
0x4BD817: call    eax
0x4BD819: mov     dword ptr [edi], 0
0x4BD81F: mov     eax, [esi+14h]
0x4BD822: and     eax, 0FFFFFFFEh
0x4BD825: mov     [esp+1Ch+var_4], eax
0x4BD829: mov     ecx, [esp+1Ch+var_4]
0x4BD82D: and     ecx, 0FFFFFFFEh
0x4BD830: mov     [esp+1Ch+var_4], ecx
0x4BD834: mov     edi, [esp+1Ch+var_4]
0x4BD838: mov     eax, [esp+1Ch+Comperand]
0x4BD83C: mov     ecx, [esi+10h]
0x4BD83F: push    edi; Comperand
0x4BD840: push    eax; Exchange
0x4BD841: push    ecx; Destination
0x4BD842: call    ebp ; InterlockedCompareExchange
0x4BD844: cmp     eax, edi
0x4BD846: pop     ebx
0x4BD847: jnz     short loc_4BD85D
0x4BD849: mov     edx, [esi+14h]
0x4BD84C: and     edx, 0FFFFFFFEh
0x4BD84F: push    edx
0x4BD850: mov     ecx, esi
0x4BD852: call    sub_43AB20
0x4BD857: jmp     short loc_4BD86E
0x4BD859: xor     al, al
0x4BD85B: jmp     short loc_4BD879
0x4BD85D: mov     eax, [esp+18h+arg_4]
0x4BD861: mov     ecx, [esp+18h+arg_0]
0x4BD865: push    eax; int
0x4BD866: push    ecx; Comperand
0x4BD867: mov     ecx, esi
0x4BD869: call    sub_43C070
0x4BD86E: mov     ecx, [esi]
0x4BD870: mov     edx, [ecx]
0x4BD872: mov     eax, [edx+34h]
0x4BD875: call    eax
0x4BD877: mov     al, 1
0x4BD879: mov     ecx, [esi+4]
0x4BD87C: mov     dword ptr [ecx], 0
0x4BD882: mov     edx, [esi+8]
0x4BD885: mov     dword ptr [edx], 0
0x4BD88B: mov     ecx, [esi+0Ch]
0x4BD88E: pop     edi
0x4BD88F: pop     esi
0x4BD890: mov     dword ptr [ecx], 0
0x4BD896: pop     ebp
0x4BD897: add     esp, 0Ch
0x4BD89A: retn    8
