0x43E4E0: push    0FFFFFFFFh
0x43E4E2: push    offset ??1?$LockFreeCaseInsensitiveStringMap@PAVModel@@@@UAE@XZ_SEH
0x43E4E7: mov     eax, large fs:0
0x43E4ED: push    eax
0x43E4EE: push    ecx
0x43E4EF: push    esi
0x43E4F0: mov     eax, ___security_cookie
0x43E4F5: xor     eax, esp
0x43E4F7: push    eax
0x43E4F8: lea     eax, [esp+18h+var_C]
0x43E4FC: mov     large fs:0, eax
0x43E502: mov     esi, ecx
0x43E504: mov     [esp+18h+var_10], esi
0x43E508: mov     dword ptr [esi], offset ??_7?$LockFreeStringMap@PAVModel@@@@6B@; const LockFreeStringMap<Model *>::`vftable'
0x43E50E: push    1; a2
0x43E510: mov     [esp+1Ch+var_4], 0
0x43E518: call    sub_55F3C0; LockFreeMap teardown/clear: drains thread-local manager and all buckets; callback vtable slot +0x20 releases keys before freeing nodes.
0x43E51D: push    1; a2
0x43E51F: mov     ecx, esi; this
0x43E521: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x43E529: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PBDPAVModel@@@@6B@; const LockFreeMap<char const *,Model *>::`vftable'
0x43E52F: call    sub_55F3C0; LockFreeMap teardown/clear: drains thread-local manager and all buckets; callback vtable slot +0x20 releases keys before freeing nodes.
0x43E534: mov     eax, [esi+0Ch]
0x43E537: push    eax
0x43E538: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43E53D: mov     ecx, [esi+4]
0x43E540: mov     [esp+1Ch+var_10], ecx
0x43E544: mov     edx, [esp+1Ch+var_10]
0x43E548: push    edx
0x43E549: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43E54E: add     esp, 8
0x43E551: mov     ecx, [esp+18h+var_C]
0x43E555: mov     large fs:0, ecx
0x43E55C: pop     ecx
0x43E55D: pop     esi
0x43E55E: add     esp, 10h
0x43E561: retn
0x43D6F0: push    ecx
0x43D6F1: push    esi
0x43D6F2: mov     esi, ecx
0x43D6F4: push    1; a2
0x43D6F6: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PBDPAVModel@@@@6B@; const LockFreeMap<char const *,Model *>::`vftable'
0x43D6FC: call    sub_55F3C0; LockFreeMap teardown/clear: drains thread-local manager and all buckets; callback vtable slot +0x20 releases keys before freeing nodes.
0x43D701: mov     eax, [esi+0Ch]
0x43D704: push    eax
0x43D705: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43D70A: mov     ecx, [esi+4]
0x43D70D: mov     [esp+0Ch+var_4], ecx
0x43D711: mov     edx, [esp+0Ch+var_4]
0x43D715: push    edx
0x43D716: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43D71B: add     esp, 8
0x43D71E: pop     esi
0x43D71F: pop     ecx
0x43D720: retn
0x9ACE50: mov     ecx, [ebp-10h]; this
0x9ACE53: jmp     loc_43D6F0
0x9ACE58: mov     edx, [esp+arg_4]
0x9ACE5C: lea     eax, [edx-8]
0x9ACE5F: mov     ecx, [edx-0Ch]
0x9ACE62: xor     ecx, eax
0x9ACE64: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ACE69: mov     eax, offset stru_AD9AC4
0x9ACE6E: jmp     ___CxxFrameHandler3
