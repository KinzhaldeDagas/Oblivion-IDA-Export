0x6B9C70: push    0FFFFFFFFh
0x6B9C72: push    offset ??1AverageEntry@@UAE@XZ_SEH
0x6B9C77: mov     eax, large fs:0
0x6B9C7D: push    eax
0x6B9C7E: push    ecx
0x6B9C7F: push    esi
0x6B9C80: mov     eax, ds:0B30AACh
0x6B9C85: xor     eax, esp
0x6B9C87: push    eax
0x6B9C88: lea     eax, [esp+18h+var_C]
0x6B9C8C: mov     large fs:0, eax
0x6B9C92: mov     esi, ecx
0x6B9C94: mov     [esp+18h+var_10], esi
0x6B9C98: lea     ecx, [esi+10h]
0x6B9C9B: mov     [esp+18h+var_4], 1
0x6B9CA3: call    ??1?$NiTPointerList@V?$NiPointer@VAverageEntry@@@@@@UAE@XZ; NiTPointerList<NiPointer<AverageEntry>>::~NiTPointerList<NiPointer<AverageEntry>>(void)
0x6B9CA8: mov     eax, [esi+8]
0x6B9CAB: push    eax
0x6B9CAC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6B9CB1: xor     eax, eax
0x6B9CB3: add     esp, 4
0x6B9CB6: mov     [esi+8], eax
0x6B9CB9: mov     [esi+0Eh], ax
0x6B9CBD: mov     [esi+0Ch], ax
0x6B9CC1: push    0B3FD64h; lpAddend
0x6B9CC6: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x6B9CCC: call    dword ptr ds:0A2807Ch
0x6B9CD2: mov     ecx, [esp+18h+var_C]
0x6B9CD6: mov     large fs:0, ecx
0x6B9CDD: pop     ecx
0x6B9CDE: pop     esi
0x6B9CDF: add     esp, 10h
0x6B9CE2: retn
0x9C7110: mov     ecx, [ebp-10h]
0x9C7113: jmp     NiRefObject_destr
0x9C7118: mov     ecx, [ebp-10h]
0x9C711B: add     ecx, 8; void *
0x9C711E: jmp     BSStringT_Clear
0x9C7123: mov     edx, [esp+arg_4]
0x9C7127: lea     eax, [edx-8]
0x9C712A: mov     ecx, [edx-0Ch]
0x9C712D: xor     ecx, eax
0x9C712F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C7134: mov     eax, offset stru_AEF584
0x9C7139: jmp     ___CxxFrameHandler3
