0x530930: push    0FFFFFFFFh; Deep-clone every shared TESResponse into a caller-owned response list. TESResponse::CopyFrom copies all 16 TRDT bytes and duplicates responseText; callers clear their temporary list after constructing their own DialogueResponse objects.
0x530932: push    offset SEH_690310
0x530937: mov     eax, large fs:0
0x53093D: push    eax
0x53093E: push    ecx
0x53093F: push    ebx
0x530940: push    ebp
0x530941: push    esi
0x530942: push    edi
0x530943: mov     eax, ds:0B30AACh
0x530948: xor     eax, esp
0x53094A: push    eax
0x53094B: lea     eax, [esp+24h+var_C]
0x53094F: mov     large fs:0, eax
0x530955: mov     [esp+24h+var_10], ecx
0x530959: call    TESResponseList__Clear; Destroy every TESResponse and responseText owned by this list. CollectResponses creates a clone first, so this cleanup releases the caller's temporary snapshot without clearing the shared global cache.
0x53095E: mov     ebp, [esp+24h+source]
0x530962: xor     ebx, ebx
0x530964: cmp     ebp, ebx
0x530966: jz      loc_5309F9
0x53096C: lea     esp, [esp+0]
0x530970: mov     esi, [ebp+0]
0x530973: cmp     esi, ebx
0x530975: jz      loc_5309F9
0x53097B: mov     ebp, [ebp+4]
0x53097E: push    18h; Size
0x530980: call    FormHeapAlloc; Allocate one 0x18 TESResponse clone. If allocation fails, the next unconditional TESResponse::CopyFrom receives null and dereferences it; native low-memory behavior is a crash.
0x530985: add     esp, 4
0x530988: mov     [esp+24h+source], eax
0x53098C: cmp     eax, ebx
0x53098E: mov     [esp+24h+var_4], ebx
0x530992: jz      short loc_53099F
0x530994: mov     ecx, eax; this
0x530996: call    TESResponse__TESResponse; TESResponse defaults before TRDT overlay: DWORD0=0, DWORD4=50, DWORD8=0, byte12=0; bytes13..15 are not explicitly initialized. Response text starts empty.
0x53099B: mov     edi, eax
0x53099D: jmp     short loc_5309A1
0x53099F: xor     edi, edi
0x5309A1: push    esi; source
0x5309A2: mov     ecx, edi; this
0x5309A4: mov     [esp+28h+var_4], 0FFFFFFFFh
0x5309AC: call    TESResponse__CopyFrom; Copy the complete 16-byte TRDT payload and deep-copy responseText into the destination TESResponse. This is the ownership boundary between the global shared INFO response cache and each caller's temporary list.
0x5309B1: cmp     edi, ebx
0x5309B3: jz      short loc_5309F1
0x5309B5: mov     eax, [esp+24h+var_10]
0x5309B9: mov     esi, eax
0x5309BB: add     eax, 4
0x5309BE: cmp     [eax], ebx
0x5309C0: jz      short loc_5309CC
0x5309C2: mov     esi, [eax]
0x5309C4: cmp     [esi+4], ebx
0x5309C7: lea     eax, [esi+4]
0x5309CA: jnz     short loc_5309C2
0x5309CC: cmp     [esi], ebx
0x5309CE: jz      short loc_5309EF
0x5309D0: push    8; Size
0x5309D2: call    FormHeapAlloc; Append a cloned response by allocating a list node. If node allocation fails, the just-created TESResponse is not linked or freed; cloning continues, so this individual authored response is omitted and leaked.
0x5309D7: add     esp, 4
0x5309DA: cmp     eax, ebx
0x5309DC: jz      short loc_5309E8
0x5309DE: mov     [eax], edi
0x5309E0: mov     [eax+4], ebx
0x5309E3: mov     [esi+4], eax
0x5309E6: jmp     short loc_5309F1
0x5309E8: xor     eax, eax
0x5309EA: mov     [esi+4], eax
0x5309ED: jmp     short loc_5309F1
0x5309EF: mov     [esi], edi
0x5309F1: cmp     ebp, ebx
0x5309F3: jnz     loc_530970
0x5309F9: mov     ecx, [esp+24h+var_C]
0x5309FD: mov     large fs:0, ecx
0x530A04: pop     ecx
0x530A05: pop     edi
0x530A06: pop     esi
0x530A07: pop     ebp
0x530A08: pop     ebx
0x530A09: add     esp, 10h
0x530A0C: retn    4
0x9BD8A0: mov     eax, [ebp+4]
0x9BD8A3: push    eax
0x9BD8A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD8A9: pop     ecx
0x9BD8AA: retn
0x9BD8AB: mov     edx, [esp+arg_4]
0x9BD8AF: lea     eax, [edx-14h]
0x9BD8B2: mov     ecx, [edx-18h]
0x9BD8B5: xor     ecx, eax
0x9BD8B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD8BC: mov     eax, offset stru_AE71E0
0x9BD8C1: jmp     ___CxxFrameHandler3
