0x42FAD0: mov     eax, [esp+arg_0]
0x42FAD4: push    ebx
0x42FAD5: mov     ebx, ds:ReleaseSemaphore
0x42FADB: push    ebp
0x42FADC: mov     ebp, ds:InterlockedIncrement
0x42FAE2: push    esi
0x42FAE3: push    edi
0x42FAE4: lea     esi, [eax+38h]
0x42FAE7: lea     edi, [eax+2Ch]
0x42FAEA: lea     ebx, [ebx+0]
0x42FAF0: add     eax, 20h ; ' '
0x42FAF3: mov     eax, [eax+8]
0x42FAF6: push    0FFFFFFFFh; dwMilliseconds
0x42FAF8: push    eax; hHandle
0x42FAF9: call    ds:WaitForSingleObject
0x42FAFF: cmp     eax, 102h
0x42FB04: jz      short loc_42FB14
0x42FB06: mov     eax, [esp+10h+arg_0]
0x42FB0A: add     eax, 20h ; ' '
0x42FB0D: push    eax; lpAddend
0x42FB0E: call    ds:InterlockedDecrement
0x42FB14: mov     ecx, [esi+8]
0x42FB17: push    0FFFFFFFFh; dwMilliseconds
0x42FB19: push    ecx; hHandle
0x42FB1A: call    ds:WaitForSingleObject
0x42FB20: cmp     eax, 102h
0x42FB25: jz      short loc_42FB2E
0x42FB27: push    esi; lpAddend
0x42FB28: call    ds:InterlockedDecrement
0x42FB2E: mov     edx, [esp+10h+arg_0]
0x42FB32: mov     ecx, [edx+1Ch]
0x42FB35: mov     eax, [ecx]
0x42FB37: mov     edx, [eax+4]
0x42FB3A: call    edx
0x42FB3C: push    esi; lpAddend
0x42FB3D: call    ebp ; InterlockedIncrement
0x42FB3F: mov     eax, [esi+8]
0x42FB42: push    0; lpPreviousCount
0x42FB44: push    1; lReleaseCount
0x42FB46: push    eax; hSemaphore
0x42FB47: call    ebx ; ReleaseSemaphore
0x42FB49: mov     ecx, [esi]
0x42FB4B: push    edi; lpAddend
0x42FB4C: call    ebp ; InterlockedIncrement
0x42FB4E: mov     edx, [edi+8]
0x42FB51: push    0; lpPreviousCount
0x42FB53: push    1; lReleaseCount
0x42FB55: push    edx; hSemaphore
0x42FB56: call    ebx ; ReleaseSemaphore
0x42FB58: mov     eax, [edi]
0x42FB5A: mov     eax, [esp+10h+arg_0]
0x42FB5E: jmp     short loc_42FAF0
