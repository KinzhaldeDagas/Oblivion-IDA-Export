0x43E570: push    0FFFFFFFFh
0x43E572: push    offset ??1?$LockFreeCaseInsensitiveStringMap@PAVKFModel@@@@UAE@XZ_SEH
0x43E577: mov     eax, large fs:0
0x43E57D: push    eax
0x43E57E: push    ecx
0x43E57F: push    esi
0x43E580: mov     eax, ___security_cookie
0x43E585: xor     eax, esp
0x43E587: push    eax
0x43E588: lea     eax, [esp+18h+var_C]
0x43E58C: mov     large fs:0, eax
0x43E592: mov     esi, ecx
0x43E594: mov     [esp+18h+var_10], esi
0x43E598: mov     dword ptr [esi], offset ??_7?$LockFreeStringMap@PAVKFModel@@@@6B@; const LockFreeStringMap<KFModel *>::`vftable'
0x43E59E: push    1; a2
0x43E5A0: mov     [esp+1Ch+var_4], 0
0x43E5A8: call    sub_55F3C0; LockFreeMap teardown/clear: drains thread-local manager and all buckets; callback vtable slot +0x20 releases keys before freeing nodes.
0x43E5AD: push    1; a2
0x43E5AF: mov     ecx, esi; this
0x43E5B1: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x43E5B9: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PBDPAVKFModel@@@@6B@; const LockFreeMap<char const *,KFModel *>::`vftable'
0x43E5BF: call    sub_55F3C0; LockFreeMap teardown/clear: drains thread-local manager and all buckets; callback vtable slot +0x20 releases keys before freeing nodes.
0x43E5C4: mov     eax, [esi+0Ch]
0x43E5C7: push    eax
0x43E5C8: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43E5CD: mov     ecx, [esi+4]
0x43E5D0: mov     [esp+1Ch+var_10], ecx
0x43E5D4: mov     edx, [esp+1Ch+var_10]
0x43E5D8: push    edx
0x43E5D9: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43E5DE: add     esp, 8
0x43E5E1: mov     ecx, [esp+18h+var_C]
0x43E5E5: mov     large fs:0, ecx
0x43E5EC: pop     ecx
0x43E5ED: pop     esi
0x43E5EE: add     esp, 10h
0x43E5F1: retn
0x43D730: push    ecx
0x43D731: push    esi
0x43D732: mov     esi, ecx
0x43D734: push    1; a2
0x43D736: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PBDPAVKFModel@@@@6B@; const LockFreeMap<char const *,KFModel *>::`vftable'
0x43D73C: call    sub_55F3C0; LockFreeMap teardown/clear: drains thread-local manager and all buckets; callback vtable slot +0x20 releases keys before freeing nodes.
0x43D741: mov     eax, [esi+0Ch]
0x43D744: push    eax
0x43D745: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43D74A: mov     ecx, [esi+4]
0x43D74D: mov     [esp+0Ch+var_4], ecx
0x43D751: mov     edx, [esp+0Ch+var_4]
0x43D755: push    edx
0x43D756: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43D75B: add     esp, 8
0x43D75E: pop     esi
0x43D75F: pop     ecx
0x43D760: retn
0x9ACE80: mov     ecx, [ebp-10h]; this
0x9ACE83: jmp     loc_43D730
0x9ACE88: mov     edx, [esp+arg_4]
0x9ACE8C: lea     eax, [edx-8]
0x9ACE8F: mov     ecx, [edx-0Ch]
0x9ACE92: xor     ecx, eax
0x9ACE94: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ACE99: mov     eax, offset stru_AD9AF0
0x9ACE9E: jmp     ___CxxFrameHandler3
