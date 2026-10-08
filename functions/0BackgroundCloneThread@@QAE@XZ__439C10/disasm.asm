0x439C10: push    0FFFFFFFFh
0x439C12: push    offset ??0BackgroundCloneThread@@QAE@XZ_SEH
0x439C17: mov     eax, large fs:0
0x439C1D: push    eax
0x439C1E: sub     esp, 8
0x439C21: push    esi
0x439C22: mov     eax, ___security_cookie
0x439C27: xor     eax, esp
0x439C29: push    eax
0x439C2A: lea     eax, [esp+1Ch+var_C]
0x439C2E: mov     large fs:0, eax
0x439C34: mov     esi, ecx
0x439C36: mov     [esp+1Ch+var_14], esi
0x439C3A: push    offset aBackgroundclon; "BackgroundCloneThread"
0x439C3F: push    3; int
0x439C41: call    BSTaskThread__BSTaskThread
0x439C46: mov     dword ptr [esi], offset ??_7BackgroundCloneThread@@6B@; const BackgroundCloneThread::`vftable'
0x439C4C: push    1Ch; Size
0x439C4E: mov     [esp+20h+var_4], 0
0x439C56: mov     dword ptr [esi+24h], 0
0x439C5D: call    FormHeapAlloc
0x439C62: add     esp, 4
0x439C65: mov     [esp+1Ch+var_10], eax
0x439C69: test    eax, eax
0x439C6B: mov     byte ptr [esp+1Ch+var_4], 1
0x439C70: jz      short loc_439C82
0x439C72: mov     ecx, [esp+1Ch+arg_0]
0x439C76: push    8
0x439C78: push    ecx
0x439C79: mov     ecx, eax
0x439C7B: call    ??0?$LockFreeQueue@V?$NiPointer@VQueuedReference@@@@@@QAE@XZ; LockFreeQueue<NiPointer<QueuedReference>>::LockFreeQueue<NiPointer<QueuedReference>>(void)
0x439C80: jmp     short loc_439C84
0x439C82: xor     eax, eax
0x439C84: mov     [esi+28h], eax
0x439C87: mov     eax, esi
0x439C89: mov     ecx, [esp+1Ch+var_C]
0x439C8D: mov     large fs:0, ecx
0x439C94: pop     ecx
0x439C95: pop     esi
0x439C96: add     esp, 14h
0x439C99: retn    4
0x9AC870: mov     ecx, [ebp-14h]
0x9AC873: jmp     ??1?$BSTaskManagerThread@_J@@UAE@XZ; BSTaskManagerThread<__int64>::~BSTaskManagerThread<__int64>(void)
0x9AC878: mov     eax, [ebp-10h]
0x9AC87B: push    eax
0x9AC87C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AC881: pop     ecx
0x9AC882: retn
0x9AC883: mov     edx, [esp+arg_4]
0x9AC887: lea     eax, [edx-0Ch]
0x9AC88A: mov     ecx, [edx-10h]
0x9AC88D: xor     ecx, eax
0x9AC88F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC894: mov     eax, offset stru_AD9504
0x9AC899: jmp     ___CxxFrameHandler3
