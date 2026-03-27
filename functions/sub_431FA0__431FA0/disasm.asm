0x431FA0: push    esi
0x431FA1: push    edi
0x431FA2: mov     edi, ecx
0x431FA4: mov     esi, [edi+8]
0x431FA7: call    ds:GetCurrentThreadId
0x431FAD: cmp     esi, eax
0x431FAF: jz      short loc_431FEC
0x431FB1: mov     eax, [edi+0Ch]
0x431FB4: test    eax, eax
0x431FB6: lea     esi, [edi+0Ch]
0x431FB9: push    ebx
0x431FBA: mov     ebx, ds:ReleaseSemaphore
0x431FC0: push    ebp
0x431FC1: mov     ebp, ds:InterlockedIncrement
0x431FC7: jnz     short loc_431FD8
0x431FC9: push    esi; lpAddend
0x431FCA: call    ebp ; InterlockedIncrement
0x431FCC: mov     ecx, [esi+8]
0x431FCF: push    0; lpPreviousCount
0x431FD1: push    1; lReleaseCount
0x431FD3: push    ecx; hSemaphore
0x431FD4: call    ebx ; ReleaseSemaphore
0x431FD6: mov     edx, [esi]
0x431FD8: lea     esi, [edi+18h]
0x431FDB: push    esi; lpAddend
0x431FDC: call    ebp ; InterlockedIncrement
0x431FDE: mov     eax, [esi+8]
0x431FE1: push    0; lpPreviousCount
0x431FE3: push    1; lReleaseCount
0x431FE5: push    eax; hSemaphore
0x431FE6: call    ebx ; ReleaseSemaphore
0x431FE8: mov     ecx, [esi]
0x431FEA: pop     ebp
0x431FEB: pop     ebx
0x431FEC: pop     edi
0x431FED: pop     esi
0x431FEE: retn
