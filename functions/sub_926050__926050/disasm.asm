0x926050: push    esi
0x926051: mov     esi, ecx
0x926053: call    sub_8A7720
0x926058: mov     eax, [esi+6Ch]
0x92605B: test    eax, eax
0x92605D: mov     dword ptr [esi+6Ch], 0
0x926064: jle     short loc_92607E
0x926066: push    ebx
0x926067: push    edi
0x926068: lea     ebx, [esi+70h]
0x92606B: mov     edi, eax
0x92606D: lea     ecx, [ecx+0]
0x926070: push    1; lReleaseCount
0x926072: mov     ecx, ebx
0x926074: call    ReleaseSemaphore_0
0x926079: dec     edi
0x92607A: jnz     short loc_926070
0x92607C: pop     edi
0x92607D: pop     ebx
0x92607E: push    esi; lpCriticalSection
0x92607F: call    dword ptr ds:0A28074h
0x926085: pop     esi
0x926086: retn
