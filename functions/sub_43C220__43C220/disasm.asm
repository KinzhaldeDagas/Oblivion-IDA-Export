0x43C220: push    0FFFFFFFFh
0x43C222: push    offset SEH_43C220
0x43C227: mov     eax, large fs:0
0x43C22D: push    eax
0x43C22E: sub     esp, 10h
0x43C231: push    ebx
0x43C232: push    ebp
0x43C233: push    esi
0x43C234: push    edi
0x43C235: mov     eax, ___security_cookie
0x43C23A: xor     eax, esp
0x43C23C: push    eax
0x43C23D: lea     eax, [esp+30h+var_C]
0x43C241: mov     large fs:0, eax
0x43C247: mov     esi, ecx
0x43C249: mov     eax, [esi]
0x43C24B: mov     ecx, [eax+0Ch]
0x43C24E: mov     edx, [esp+30h+Comperand]
0x43C252: lea     eax, [ecx+edx*4]
0x43C255: mov     [esp+30h+var_10], eax
0x43C259: xor     ebx, ebx
0x43C25B: mov     ecx, [esp+30h+var_10]
0x43C25F: mov     [esi+10h], ecx
0x43C262: mov     edx, ecx
0x43C264: mov     eax, [edx]
0x43C266: mov     [esi+14h], eax
0x43C269: mov     ecx, [esi+14h]
0x43C26C: mov     edx, [esi+8]
0x43C26F: and     ecx, 0FFFFFFFEh
0x43C272: mov     [edx], ecx
0x43C274: mov     eax, [esi+14h]
0x43C277: and     eax, 0FFFFFFFEh
0x43C27A: mov     [esp+30h+var_18], eax
0x43C27E: mov     eax, [esp+30h+var_18]
0x43C282: and     eax, 0FFFFFFFEh
0x43C285: mov     [esp+30h+var_18], eax
0x43C289: mov     eax, [esi+10h]
0x43C28C: mov     eax, [eax]
0x43C28E: mov     ecx, [esp+30h+var_18]
0x43C292: cmp     eax, ecx
0x43C294: jnz     short loc_43C25B
0x43C296: mov     edx, [esi+14h]
0x43C299: test    edx, 0FFFFFFFEh
0x43C29F: jz      loc_43C476
0x43C2A5: mov     eax, [esi+14h]
0x43C2A8: and     eax, 0FFFFFFFEh
0x43C2AB: mov     ecx, [eax+8]
0x43C2AE: mov     [esi+18h], ecx
0x43C2B1: mov     edx, [esi+18h]
0x43C2B4: mov     eax, [esi+4]
0x43C2B7: and     edx, 0FFFFFFFEh
0x43C2BA: mov     [eax], edx
0x43C2BC: mov     ecx, [esi+18h]
0x43C2BF: mov     eax, [esi+14h]
0x43C2C2: and     eax, 0FFFFFFFEh
0x43C2C5: mov     edx, [eax+8]
0x43C2C8: cmp     ecx, edx
0x43C2CA: jnz     short loc_43C25B
0x43C2CC: mov     eax, [esi+14h]
0x43C2CF: and     eax, 0FFFFFFFEh
0x43C2D2: mov     eax, [eax+4]
0x43C2D5: cmp     eax, ebx
0x43C2D7: mov     [esp+30h+var_1C], eax
0x43C2DB: jz      short loc_43C2E7
0x43C2DD: add     eax, 8
0x43C2E0: push    eax; lpAddend
0x43C2E1: call    ds:InterlockedIncrement
0x43C2E7: mov     eax, [esi+14h]
0x43C2EA: and     eax, 0FFFFFFFEh
0x43C2ED: mov     [esp+30h+Comperand], eax
0x43C2F1: mov     eax, [esp+30h+Comperand]
0x43C2F5: and     eax, 0FFFFFFFEh
0x43C2F8: mov     [esp+30h+Comperand], eax
0x43C2FC: mov     eax, [esi+10h]
0x43C2FF: mov     eax, [eax]
0x43C301: mov     ecx, [esp+30h+Comperand]
0x43C305: cmp     eax, ecx
0x43C307: mov     [esp+30h+var_4], ebx
0x43C30B: jnz     loc_43C40C
0x43C311: mov     edx, [esi+18h]
0x43C314: test    dl, 1
0x43C317: jnz     short loc_43C345
0x43C319: mov     edi, [esp+30h+var_1C]
0x43C31D: mov     eax, [esp+30h+arg_4]
0x43C321: cmp     edi, [eax]
0x43C323: jz      loc_43C47A
0x43C329: mov     ecx, [esi+14h]
0x43C32C: and     ecx, 0FFFFFFFEh
0x43C32F: add     ecx, 8
0x43C332: mov     [esi+10h], ecx
0x43C335: mov     edx, [esi+14h]
0x43C338: mov     eax, [esi+0Ch]
0x43C33B: and     edx, 0FFFFFFFEh
0x43C33E: mov     [eax], edx
0x43C340: jmp     loc_43C3C6
0x43C345: mov     eax, [esi+18h]
0x43C348: and     eax, 0FFFFFFFEh
0x43C34B: mov     [esp+30h+Exchange], eax
0x43C34F: mov     ecx, [esp+30h+Exchange]
0x43C353: mov     edi, [esp+30h+Comperand]
0x43C357: and     ecx, 0FFFFFFFEh
0x43C35A: mov     [esp+30h+Exchange], ecx
0x43C35E: mov     eax, [esp+30h+Exchange]
0x43C362: mov     ecx, [esi+10h]
0x43C365: push    edi; Comperand
0x43C366: push    eax; Exchange
0x43C367: push    ecx; Destination
0x43C368: call    ds:InterlockedCompareExchange
0x43C36E: cmp     eax, edi
0x43C370: setz    al
0x43C373: cmp     al, bl
0x43C375: jz      loc_43C441
0x43C37B: mov     edi, [esi+14h]
0x43C37E: and     edi, 0FFFFFFFEh
0x43C381: mov     ebp, [edi+4]
0x43C384: cmp     ebp, ebx
0x43C386: jz      short loc_43C3A8
0x43C388: lea     edx, [ebp+8]
0x43C38B: push    edx; lpAddend
0x43C38C: call    ds:InterlockedDecrement
0x43C392: test    eax, eax
0x43C394: jnz     short loc_43C3A5
0x43C396: cmp     ebp, ebx
0x43C398: jz      short loc_43C3A5
0x43C39A: mov     eax, [ebp+0]
0x43C39D: mov     edx, [eax]
0x43C39F: push    1
0x43C3A1: mov     ecx, ebp
0x43C3A3: call    edx
0x43C3A5: mov     [edi+4], ebx
0x43C3A8: mov     eax, [esi+1Ch]
0x43C3AB: mov     [edi+4], eax
0x43C3AE: add     dword ptr [esi+20h], 1
0x43C3B2: mov     eax, [esi+20h]
0x43C3B5: mov     ecx, [esi]
0x43C3B7: mov     [esi+1Ch], edi
0x43C3BA: cmp     eax, [ecx+10h]
0x43C3BD: jnz     short loc_43C3C6
0x43C3BF: mov     ecx, esi
0x43C3C1: call    sub_43A3F0
0x43C3C6: mov     edx, [esi+18h]
0x43C3C9: mov     [esi+14h], edx
0x43C3CC: mov     eax, [esi+18h]
0x43C3CF: mov     edi, [esp+30h+var_1C]
0x43C3D3: mov     ecx, [esi+8]
0x43C3D6: and     eax, 0FFFFFFFEh
0x43C3D9: cmp     edi, ebx
0x43C3DB: mov     [ecx], eax
0x43C3DD: mov     [esp+30h+var_4], 0FFFFFFFFh
0x43C3E5: jz      loc_43C296
0x43C3EB: lea     edx, [edi+8]
0x43C3EE: push    edx; lpAddend
0x43C3EF: call    ds:InterlockedDecrement
0x43C3F5: test    eax, eax
0x43C3F7: jnz     loc_43C296
0x43C3FD: mov     eax, [edi]
0x43C3FF: mov     edx, [eax]
0x43C401: push    1
0x43C403: mov     ecx, edi
0x43C405: call    edx
0x43C407: jmp     loc_43C296
0x43C40C: mov     edi, [esp+30h+var_1C]
0x43C410: cmp     edi, ebx
0x43C412: mov     [esp+30h+var_4], 0FFFFFFFFh
0x43C41A: jz      loc_43C25B
0x43C420: lea     eax, [edi+8]
0x43C423: push    eax; lpAddend
0x43C424: call    ds:InterlockedDecrement
0x43C42A: test    eax, eax
0x43C42C: jnz     loc_43C25B
0x43C432: mov     edx, [edi]
0x43C434: mov     eax, [edx]
0x43C436: push    1
0x43C438: mov     ecx, edi
0x43C43A: call    eax
0x43C43C: jmp     loc_43C25B
0x43C441: mov     edi, [esp+30h+var_1C]
0x43C445: cmp     edi, ebx
0x43C447: mov     [esp+30h+var_4], 0FFFFFFFFh
0x43C44F: jz      loc_43C25B
0x43C455: lea     ecx, [edi+8]
0x43C458: push    ecx; lpAddend
0x43C459: call    ds:InterlockedDecrement
0x43C45F: test    eax, eax
0x43C461: jnz     loc_43C25B
0x43C467: mov     edx, [edi]
0x43C469: mov     eax, [edx]
0x43C46B: push    1
0x43C46D: mov     ecx, edi
0x43C46F: call    eax
0x43C471: jmp     loc_43C25B
0x43C476: xor     al, al
0x43C478: jmp     short loc_43C4A0
0x43C47A: cmp     edi, ebx
0x43C47C: mov     [esp+30h+var_4], 0FFFFFFFFh
0x43C484: jz      short loc_43C49E
0x43C486: lea     ecx, [edi+8]
0x43C489: push    ecx; lpAddend
0x43C48A: call    ds:InterlockedDecrement
0x43C490: test    eax, eax
0x43C492: jnz     short loc_43C49E
0x43C494: mov     edx, [edi]
0x43C496: mov     eax, [edx]
0x43C498: push    1
0x43C49A: mov     ecx, edi
0x43C49C: call    eax
0x43C49E: mov     al, 1
0x43C4A0: mov     ecx, dword ptr [esp+30h+var_C]
0x43C4A4: mov     large fs:0, ecx
0x43C4AB: pop     ecx
0x43C4AC: pop     edi
0x43C4AD: pop     esi
0x43C4AE: pop     ebp
0x43C4AF: pop     ebx
0x43C4B0: add     esp, 1Ch
0x43C4B3: retn    8
