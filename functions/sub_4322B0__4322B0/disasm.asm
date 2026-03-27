0x4322B0: push    ebp
0x4322B1: mov     ebp, ecx
0x4322B3: lea     eax, [ebp+20h]
0x4322B6: push    eax; lpAddend
0x4322B7: call    ds:InterlockedIncrement
0x4322BD: cmp     eax, 1
0x4322C0: jnz     short loc_432341
0x4322C2: mov     ecx, [ebp+1Ch]
0x4322C5: test    ecx, ecx
0x4322C7: push    ebx
0x4322C8: push    esi
0x4322C9: jz      short loc_4322DC
0x4322CB: mov     esi, ds:Sleep
0x4322D1: push    1; dwMilliseconds
0x4322D3: call    esi ; Sleep
0x4322D5: mov     edx, [ebp+1Ch]
0x4322D8: test    edx, edx
0x4322DA: jnz     short loc_4322D1
0x4322DC: xor     ebx, ebx
0x4322DE: cmp     [ebp+24h], ebx
0x4322E1: jbe     short loc_43233B
0x4322E3: push    edi
0x4322E4: mov     eax, [ebp+28h]
0x4322E7: mov     edi, [eax+ebx*4]
0x4322EA: mov     ecx, [edi+0Ch]
0x4322ED: test    ecx, ecx
0x4322EF: lea     esi, [edi+0Ch]
0x4322F2: jnz     short loc_43230B
0x4322F4: push    esi; lpAddend
0x4322F5: call    ds:InterlockedIncrement
0x4322FB: mov     edx, [esi+8]
0x4322FE: push    0; lpPreviousCount
0x432300: push    1; lReleaseCount
0x432302: push    edx; hSemaphore
0x432303: call    ds:ReleaseSemaphore
0x432309: mov     eax, [esi]
0x43230B: mov     ecx, [edi+20h]
0x43230E: lea     esi, [edi+18h]
0x432311: push    0FFFFFFFFh; dwMilliseconds
0x432313: push    ecx; hHandle
0x432314: call    ds:WaitForSingleObject
0x43231A: cmp     eax, 102h
0x43231F: jz      short loc_432328
0x432321: push    esi; lpAddend
0x432322: call    ds:InterlockedDecrement
0x432328: lea     eax, [ebp+1Ch]
0x43232B: push    eax; lpAddend
0x43232C: call    ds:InterlockedIncrement
0x432332: add     ebx, 1
0x432335: cmp     ebx, [ebp+24h]
0x432338: jb      short loc_4322E4
0x43233A: pop     edi
0x43233B: pop     esi
0x43233C: pop     ebx
0x43233D: mov     al, 1
0x43233F: pop     ebp
0x432340: retn
0x432341: xor     al, al
0x432343: pop     ebp
0x432344: retn
