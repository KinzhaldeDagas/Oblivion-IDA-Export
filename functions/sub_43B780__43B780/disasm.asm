0x43B780: push    0FFFFFFFFh; QueuedTreeModel allocation wrapper. Allocates 0x40-byte entry, calls 0x4376A0, attaches queued children, then schedules via vtable slot +0x20.
0x43B782: push    offset SEH_43B780
0x43B787: mov     eax, large fs:0
0x43B78D: push    eax
0x43B78E: sub     esp, 8
0x43B791: push    esi
0x43B792: mov     eax, ___security_cookie
0x43B797: xor     eax, esp
0x43B799: push    eax
0x43B79A: lea     eax, [esp+1Ch+var_C]
0x43B79E: mov     large fs:0, eax
0x43B7A4: push    40h ; '@'; Size
0x43B7A6: mov     [esp+20h+var_4], 0
0x43B7AE: mov     [esp+20h+var_14], 0
0x43B7B6: call    FormHeapAlloc; Verified: queued tree model task allocation is 0x40 bytes and uses the local QueuedTreeModel_OblivionLayout. Fallout's task implementation follows the same scheduling role but its layout is PPC-specific and must not share Oblivion offsets.
0x43B7BB: add     esp, 4
0x43B7BE: mov     [esp+1Ch+var_10], eax
0x43B7C2: test    eax, eax
0x43B7C4: mov     [esp+1Ch+var_4], 1
0x43B7CC: jz      short loc_43B7EB
0x43B7CE: mov     ecx, [esp+1Ch+unknownArg]
0x43B7D2: mov     edx, dword ptr [esp+1Ch+priority]
0x43B7D6: push    ecx; lodMultiplier
0x43B7D7: mov     ecx, [esp+20h+tree]
0x43B7DB: push    edx; priority
0x43B7DC: mov     edx, [esp+24h+reference]
0x43B7E0: push    ecx; tree
0x43B7E1: push    edx; reference
0x43B7E2: mov     ecx, eax; this
0x43B7E4: call    QueuedTreeModel_ctor; Verified 0x40-byte QueuedTreeModel constructor layout: +0x2C TESModel component, +0x30 lodMultiplier, +0x34 task flags, +0x38 TESObjectREFR, and +0x3C TESObjectTREE. Bytes +0x35..+0x37 remain Unknown.
0x43B7E9: jmp     short loc_43B7ED
0x43B7EB: xor     eax, eax
0x43B7ED: test    eax, eax
0x43B7EF: mov     esi, [esp+1Ch+outTask]
0x43B7F3: mov     [esi], eax
0x43B7F5: jz      short loc_43B801
0x43B7F7: add     eax, 8
0x43B7FA: push    eax; lpAddend
0x43B7FB: call    ds:InterlockedIncrement
0x43B801: mov     eax, [esp+1Ch+parent]
0x43B805: mov     ecx, [esi]
0x43B807: push    eax
0x43B808: mov     [esp+20h+var_4], 0
0x43B810: mov     [esp+20h+var_14], 1
0x43B818: call    sub_43AC40
0x43B81D: mov     ecx, [esi]
0x43B81F: mov     edx, [ecx]
0x43B821: mov     eax, [edx+20h]
0x43B824: call    eax
0x43B826: mov     eax, esi
0x43B828: mov     ecx, [esp+1Ch+var_C]
0x43B82C: mov     large fs:0, ecx
0x43B833: pop     ecx
0x43B834: pop     esi
0x43B835: add     esp, 14h
0x43B838: retn    18h
0x9ACAF0: mov     eax, [ebp-10h]
0x9ACAF3: push    eax
0x9ACAF4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9ACAF9: pop     ecx
0x9ACAFA: retn
0x9ACAFB: mov     eax, [ebp-14h]
0x9ACAFE: and     eax, 1
0x9ACB01: jz      locret_9ACB13
0x9ACB07: and     dword ptr [ebp-14h], 0FFFFFFFEh
0x9ACB0B: mov     ecx, [ebp+4]; void *
0x9ACB0E: jmp     sub_4BDDC0
0x9ACB13: retn
0x9ACB14: mov     edx, [esp+reference]
0x9ACB18: lea     eax, [edx-0Ch]
0x9ACB1B: mov     ecx, [edx-10h]
0x9ACB1E: xor     ecx, eax
0x9ACB20: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ACB25: mov     eax, offset stru_AD9758
0x9ACB2A: jmp     ___CxxFrameHandler3
