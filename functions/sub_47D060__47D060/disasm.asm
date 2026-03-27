0x47D060: push    ebx
0x47D061: push    esi
0x47D062: mov     esi, ecx
0x47D064: xor     ebx, ebx
0x47D066: cmp     [esi+8], ebx
0x47D069: push    edi
0x47D06A: jz      short loc_47D091
0x47D06C: mov     ecx, [esi+4]
0x47D06F: push    offset aExitingThread; lpCriticalSection
0x47D074: mov     [esi+18h], bl
0x47D077: call    NiEnterCriticalSection
0x47D07C: mov     eax, [esi+8]
0x47D07F: push    eax; hObject
0x47D080: call    dword ptr ds:0A28094h
0x47D086: mov     ecx, [esi+4]; lpCriticalSection
0x47D089: mov     [esi+8], ebx
0x47D08C: call    NiLeaveCriticalSection_0
0x47D091: mov     edi, [esi+4]
0x47D094: cmp     edi, ebx
0x47D096: jz      short loc_47D0A8
0x47D098: mov     ecx, edi; lpCriticalSection
0x47D09A: call    NiDeleteCriticalSection
0x47D09F: push    edi
0x47D0A0: call    FormHeapFree
0x47D0A5: add     esp, 4
0x47D0A8: pop     edi
0x47D0A9: mov     [esi+4], ebx
0x47D0AC: pop     esi
0x47D0AD: pop     ebx
0x47D0AE: retn
