0x43E8C0: push    0FFFFFFFFh
0x43E8C2: push    offset ??1BackgroundCloneThread@@UAE@XZ_SEH
0x43E8C7: mov     eax, large fs:0
0x43E8CD: push    eax
0x43E8CE: push    ecx
0x43E8CF: push    esi
0x43E8D0: push    edi
0x43E8D1: mov     eax, ___security_cookie
0x43E8D6: xor     eax, esp
0x43E8D8: push    eax
0x43E8D9: lea     eax, [esp+1Ch+var_C]
0x43E8DD: mov     large fs:0, eax
0x43E8E3: mov     edi, ecx
0x43E8E5: mov     [esp+1Ch+var_10], edi
0x43E8E9: mov     dword ptr [edi], offset ??_7BackgroundCloneThread@@6B@; const BackgroundCloneThread::`vftable'
0x43E8EF: mov     esi, [edi+28h]
0x43E8F2: test    esi, esi
0x43E8F4: mov     [esp+1Ch+var_4], 0
0x43E8FC: jz      short loc_43E927
0x43E8FE: push    1; a2
0x43E900: mov     ecx, esi; this
0x43E902: mov     dword ptr [esi], offset ??_7?$LockFreeQueue@V?$NiPointer@VQueuedReference@@@@@@6B@; const LockFreeQueue<NiPointer<QueuedReference>>::`vftable'
0x43E908: call    sub_43D510
0x43E90D: mov     eax, [esi+10h]
0x43E910: mov     [esp+1Ch+var_10], eax
0x43E914: mov     ecx, [esp+1Ch+var_10]
0x43E918: push    ecx
0x43E919: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43E91E: push    esi
0x43E91F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43E924: add     esp, 8
0x43E927: mov     ecx, edi
0x43E929: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x43E931: call    ??1?$BSTaskManagerThread@_J@@UAE@XZ; BSTaskManagerThread<__int64>::~BSTaskManagerThread<__int64>(void)
0x43E936: mov     ecx, [esp+1Ch+var_C]
0x43E93A: mov     large fs:0, ecx
0x43E941: pop     ecx
0x43E942: pop     edi
0x43E943: pop     esi
0x43E944: add     esp, 10h
0x43E947: retn
0x9ACEB0: mov     ecx, [ebp-10h]
0x9ACEB3: jmp     ??1?$BSTaskManagerThread@_J@@UAE@XZ; BSTaskManagerThread<__int64>::~BSTaskManagerThread<__int64>(void)
0x9ACEB8: mov     edx, [esp+arg_4]
0x9ACEBC: lea     eax, [edx-0Ch]
0x9ACEBF: mov     ecx, [edx-10h]
0x9ACEC2: xor     ecx, eax
0x9ACEC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ACEC9: mov     eax, offset stru_AD9B1C
0x9ACECE: jmp     ___CxxFrameHandler3
