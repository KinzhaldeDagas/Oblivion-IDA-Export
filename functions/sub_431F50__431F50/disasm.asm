0x431F50: push    esi
0x431F51: push    edi
0x431F52: mov     edi, ecx
0x431F54: mov     eax, [edi+0Ch]
0x431F57: test    eax, eax
0x431F59: lea     esi, [edi+0Ch]
0x431F5C: jnz     short loc_431F75
0x431F5E: push    esi; lpAddend
0x431F5F: call    ds:InterlockedIncrement
0x431F65: mov     ecx, [esi+8]
0x431F68: push    0; lpPreviousCount
0x431F6A: push    1; lReleaseCount
0x431F6C: push    ecx; hSemaphore
0x431F6D: call    ds:ReleaseSemaphore
0x431F73: mov     edx, [esi]
0x431F75: mov     eax, [edi+20h]
0x431F78: lea     esi, [edi+18h]
0x431F7B: push    0FFFFFFFFh; dwMilliseconds
0x431F7D: push    eax; hHandle
0x431F7E: call    ds:WaitForSingleObject
0x431F84: cmp     eax, 102h
0x431F89: jz      short loc_431F92
0x431F8B: push    esi; lpAddend
0x431F8C: call    ds:InterlockedDecrement
0x431F92: pop     edi
0x431F93: pop     esi
0x431F94: retn
