0x43B420: push    0FFFFFFFFh
0x43B422: push    offset SEH_43B420
0x43B427: mov     eax, large fs:0
0x43B42D: push    eax
0x43B42E: sub     esp, 8
0x43B431: push    ebx
0x43B432: push    ebp
0x43B433: push    esi
0x43B434: push    edi
0x43B435: mov     eax, ___security_cookie
0x43B43A: xor     eax, esp
0x43B43C: push    eax
0x43B43D: lea     eax, [esp+28h+var_C]
0x43B441: mov     large fs:0, eax
0x43B447: xor     ebx, ebx
0x43B449: mov     [esp+28h+var_10], ebx
0x43B44D: mov     ecx, [ecx]
0x43B44F: mov     esi, [esp+28h+arg_4]
0x43B453: lea     edx, [esp+28h+var_14]
0x43B457: mov     [esp+28h+var_14], ebx
0x43B45B: mov     eax, [ecx]
0x43B45D: mov     eax, [eax+4]
0x43B460: push    edx
0x43B461: push    esi
0x43B462: call    eax
0x43B464: test    al, al
0x43B466: jz      loc_43B51E
0x43B46C: cmp     byte ptr [esp+28h+arg_1C], bl
0x43B470: jz      short loc_43B480
0x43B472: mov     ecx, [esp+28h+var_14]
0x43B476: add     ecx, 4
0x43B479: push    ecx; lpAddend
0x43B47A: call    ds:InterlockedIncrement
0x43B480: mov     edi, [esp+28h+arg_C]
0x43B484: cmp     edi, ebx
0x43B486: jz      loc_43B513
0x43B48C: push    38h ; '8'; Size
0x43B48E: call    FormHeapAlloc
0x43B493: add     esp, 4
0x43B496: cmp     eax, ebx
0x43B498: jz      short loc_43B4AF
0x43B49A: mov     edx, [esp+28h+arg_8]
0x43B49E: mov     ecx, [esp+28h+var_14]
0x43B4A2: push    edx
0x43B4A3: push    ecx
0x43B4A4: mov     ecx, eax
0x43B4A6: call    sub_437430
0x43B4AB: mov     esi, eax
0x43B4AD: jmp     short loc_43B4B1
0x43B4AF: xor     esi, esi
0x43B4B1: cmp     esi, ebx
0x43B4B3: mov     [esp+28h+arg_1C], esi
0x43B4B7: jz      short loc_43B4C3
0x43B4B9: lea     edx, [esi+8]
0x43B4BC: push    edx; lpAddend
0x43B4BD: call    ds:InterlockedIncrement
0x43B4C3: mov     ebp, 1
0x43B4C8: push    edi
0x43B4C9: mov     ecx, esi
0x43B4CB: mov     [esp+2Ch+var_4], ebp
0x43B4CF: call    sub_43AC40
0x43B4D4: mov     eax, [esi]
0x43B4D6: mov     edx, [eax+28h]
0x43B4D9: mov     ecx, esi
0x43B4DB: call    edx
0x43B4DD: mov     ebx, [esp+28h+arg_0]
0x43B4E1: lea     edi, [esi+8]
0x43B4E4: push    edi; lpAddend
0x43B4E5: mov     [ebx], esi
0x43B4E7: call    ds:InterlockedIncrement
0x43B4ED: push    edi; lpAddend
0x43B4EE: mov     [esp+2Ch+var_10], ebp
0x43B4F2: mov     byte ptr [esp+2Ch+var_4], 0
0x43B4F7: call    ds:InterlockedDecrement
0x43B4FD: test    eax, eax
0x43B4FF: jnz     loc_43B5BE
0x43B505: mov     eax, [esi]
0x43B507: mov     edx, [eax]
0x43B509: push    ebp
0x43B50A: mov     ecx, esi
0x43B50C: call    edx
0x43B50E: jmp     loc_43B5BE
0x43B513: mov     eax, [esp+28h+arg_0]
0x43B517: mov     [eax], ebx
0x43B519: jmp     loc_43B5C0
0x43B51E: push    38h ; '8'; Size
0x43B520: call    FormHeapAlloc
0x43B525: add     esp, 4
0x43B528: mov     [esp+28h+arg_4], eax
0x43B52C: cmp     eax, ebx
0x43B52E: mov     [esp+28h+var_4], 2
0x43B536: jz      short loc_43B55D
0x43B538: mov     ecx, [esp+28h+arg_1C]
0x43B53C: mov     edx, [esp+28h+arg_18]
0x43B540: push    ecx
0x43B541: mov     ecx, [esp+2Ch+arg_14]
0x43B545: push    edx
0x43B546: mov     edx, [esp+30h+arg_10]
0x43B54A: push    ecx
0x43B54B: mov     ecx, [esp+34h+arg_8]
0x43B54F: push    edx
0x43B550: push    ecx
0x43B551: push    esi
0x43B552: mov     ecx, eax
0x43B554: call    sub_437250
0x43B559: mov     esi, eax
0x43B55B: jmp     short loc_43B55F
0x43B55D: xor     esi, esi
0x43B55F: cmp     esi, ebx
0x43B561: mov     ebp, ds:InterlockedIncrement
0x43B567: mov     [esp+28h+arg_1C], esi
0x43B56B: jz      short loc_43B573
0x43B56D: lea     edx, [esi+8]
0x43B570: push    edx; lpAddend
0x43B571: call    ebp ; InterlockedIncrement
0x43B573: mov     eax, [esp+28h+arg_C]
0x43B577: push    eax
0x43B578: mov     ecx, esi
0x43B57A: mov     [esp+2Ch+var_4], 3
0x43B582: call    sub_43AC40
0x43B587: mov     edx, [esi]
0x43B589: mov     eax, [edx+20h]
0x43B58C: mov     ecx, esi
0x43B58E: call    eax
0x43B590: mov     ebx, [esp+28h+arg_0]
0x43B594: lea     edi, [esi+8]
0x43B597: push    edi; lpAddend
0x43B598: mov     [ebx], esi
0x43B59A: call    ebp ; InterlockedIncrement
0x43B59C: mov     ebp, 1
0x43B5A1: push    edi; lpAddend
0x43B5A2: mov     [esp+2Ch+var_10], ebp
0x43B5A6: mov     byte ptr [esp+2Ch+var_4], 0
0x43B5AB: call    ds:InterlockedDecrement
0x43B5B1: test    eax, eax
0x43B5B3: jnz     short loc_43B5BE
0x43B5B5: mov     edx, [esi]
0x43B5B7: mov     eax, [edx]
0x43B5B9: push    ebp
0x43B5BA: mov     ecx, esi
0x43B5BC: call    eax
0x43B5BE: mov     eax, ebx
0x43B5C0: mov     ecx, [esp+28h+var_C]
0x43B5C4: mov     large fs:0, ecx
0x43B5CB: pop     ecx
0x43B5CC: pop     edi
0x43B5CD: pop     esi
0x43B5CE: pop     ebp
0x43B5CF: pop     ebx
0x43B5D0: add     esp, 14h
0x43B5D3: retn    20h ; ' '
