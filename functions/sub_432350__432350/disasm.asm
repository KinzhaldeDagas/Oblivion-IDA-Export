0x432350: push    ebx
0x432351: mov     ebx, ecx
0x432353: mov     ecx, [ebx+20h]
0x432356: test    ecx, ecx
0x432358: lea     eax, [ebx+20h]
0x43235B: jz      loc_4323EE
0x432361: push    eax; lpAddend
0x432362: call    ds:InterlockedDecrement
0x432368: test    eax, eax
0x43236A: jnz     loc_4323EE
0x432370: mov     edx, [ebx+1Ch]
0x432373: cmp     edx, [ebx+24h]
0x432376: push    esi
0x432377: push    edi
0x432378: jz      short loc_43238C
0x43237A: mov     esi, ds:Sleep
0x432380: push    1; dwMilliseconds
0x432382: call    esi ; Sleep
0x432384: mov     eax, [ebx+1Ch]
0x432387: cmp     eax, [ebx+24h]
0x43238A: jnz     short loc_432380
0x43238C: xor     edi, edi
0x43238E: cmp     [ebx+24h], edi
0x432391: jbe     short loc_4323E8
0x432393: push    ebp
0x432394: mov     ecx, [ebx+28h]
0x432397: mov     ebp, [ecx+edi*4]
0x43239A: mov     edx, [ebp+0Ch]
0x43239D: test    edx, edx
0x43239F: lea     esi, [ebp+0Ch]
0x4323A2: jnz     short loc_4323BB
0x4323A4: push    esi; lpAddend
0x4323A5: call    ds:InterlockedIncrement
0x4323AB: mov     eax, [esi+8]
0x4323AE: push    0; lpPreviousCount
0x4323B0: push    1; lReleaseCount
0x4323B2: push    eax; hSemaphore
0x4323B3: call    ds:ReleaseSemaphore
0x4323B9: mov     ecx, [esi]
0x4323BB: lea     esi, [ebp+18h]
0x4323BE: push    esi; lpAddend
0x4323BF: call    ds:InterlockedIncrement
0x4323C5: mov     edx, [esi+8]
0x4323C8: push    0; lpPreviousCount
0x4323CA: push    1; lReleaseCount
0x4323CC: push    edx; hSemaphore
0x4323CD: call    ds:ReleaseSemaphore
0x4323D3: mov     eax, [esi]
0x4323D5: lea     eax, [ebx+1Ch]
0x4323D8: push    eax; lpAddend
0x4323D9: call    ds:InterlockedDecrement
0x4323DF: add     edi, 1
0x4323E2: cmp     edi, [ebx+24h]
0x4323E5: jb      short loc_432394
0x4323E7: pop     ebp
0x4323E8: pop     edi
0x4323E9: pop     esi
0x4323EA: mov     al, 1
0x4323EC: pop     ebx
0x4323ED: retn
0x4323EE: xor     al, al
0x4323F0: pop     ebx
0x4323F1: retn
