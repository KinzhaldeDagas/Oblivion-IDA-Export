0x4BE820: push    0FFFFFFFFh
0x4BE822: push    offset SEH_4BE820
0x4BE827: mov     eax, large fs:0
0x4BE82D: push    eax
0x4BE82E: push    ecx
0x4BE82F: push    esi
0x4BE830: mov     eax, ds:0B30AACh
0x4BE835: xor     eax, esp
0x4BE837: push    eax
0x4BE838: lea     eax, [esp+18h+var_C]
0x4BE83C: mov     large fs:0, eax
0x4BE842: mov     esi, ecx
0x4BE844: mov     [esp+18h+var_10], esi
0x4BE848: mov     [esp+18h+var_4], 0
0x4BE850: call    sub_4BE420
0x4BE855: push    1
0x4BE857: mov     ecx, esi
0x4BE859: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4BE861: mov     dword ptr [esi], offset ??_7?$LockFreeMap@IV?$NiPointer@VExteriorCellLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<ExteriorCellLoaderTask>>::`vftable'
0x4BE867: call    sub_642E50
0x4BE86C: mov     eax, [esi+0Ch]
0x4BE86F: push    eax
0x4BE870: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BE875: mov     ecx, [esi+4]
0x4BE878: mov     [esp+1Ch+var_10], ecx
0x4BE87C: mov     edx, [esp+1Ch+var_10]
0x4BE880: push    edx
0x4BE881: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BE886: add     esp, 8
0x4BE889: mov     ecx, [esp+18h+var_C]
0x4BE88D: mov     large fs:0, ecx
0x4BE894: pop     ecx
0x4BE895: pop     esi
0x4BE896: add     esp, 10h
0x4BE899: retn
0x4BE7E0: push    ecx
0x4BE7E1: push    esi
0x4BE7E2: mov     esi, ecx
0x4BE7E4: push    1
0x4BE7E6: mov     dword ptr [esi], offset ??_7?$LockFreeMap@IV?$NiPointer@VExteriorCellLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<ExteriorCellLoaderTask>>::`vftable'
0x4BE7EC: call    sub_642E50
0x4BE7F1: mov     eax, [esi+0Ch]
0x4BE7F4: push    eax
0x4BE7F5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BE7FA: mov     ecx, [esi+4]
0x4BE7FD: mov     [esp+0Ch+var_4], ecx
0x4BE801: mov     edx, [esp+0Ch+var_4]
0x4BE805: push    edx
0x4BE806: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BE80B: add     esp, 8
0x4BE80E: pop     esi
0x4BE80F: pop     ecx
0x4BE810: retn
0x9B4560: mov     ecx, [ebp-10h]
0x9B4563: jmp     loc_4BE7E0
0x9B4568: mov     edx, [esp+arg_4]
0x9B456C: lea     eax, [edx-8]
0x9B456F: mov     ecx, [edx-0Ch]
0x9B4572: xor     ecx, eax
0x9B4574: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B4579: mov     eax, offset stru_ADFC00
0x9B457E: jmp     ___CxxFrameHandler3
