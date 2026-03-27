0x42C910: push    esi
0x42C911: push    edi
0x42C912: mov     esi, ecx
0x42C914: lea     edi, [esi+1A8h]
0x42C91A: push    edi; lpAddend
0x42C91B: call    ds:InterlockedDecrement
0x42C921: test    byte ptr [esi+194h], 2
0x42C928: jz      short loc_42C95A
0x42C92A: push    ebx
0x42C92B: lea     ebx, [esi+200h]
0x42C931: push    offset aArchiveCheckde; lpCriticalSection
0x42C936: mov     ecx, ebx
0x42C938: call    NiEnterCriticalSection
0x42C93D: cmp     dword ptr [edi], 0
0x42C940: jnz     short loc_42C952
0x42C942: push    esi
0x42C943: call    ArchiveManager_RemoveArchive
0x42C948: add     esp, 4
0x42C94B: mov     byte ptr [esi+1ACh], 1
0x42C952: mov     ecx, ebx; lpCriticalSection
0x42C954: call    NiLeaveCriticalSection_0
0x42C959: pop     ebx
0x42C95A: cmp     byte ptr [esi+1ACh], 0
0x42C961: jz      short loc_42C96D
0x42C963: mov     eax, [esi]
0x42C965: mov     edx, [eax]
0x42C967: push    1
0x42C969: mov     ecx, esi
0x42C96B: call    edx
0x42C96D: pop     edi
0x42C96E: pop     esi
0x42C96F: retn
