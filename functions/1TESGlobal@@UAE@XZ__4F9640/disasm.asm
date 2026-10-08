0x4F9640: push    0FFFFFFFFh
0x4F9642: push    offset ??1TESGlobal@@UAE@XZ_SEH
0x4F9647: mov     eax, large fs:0
0x4F964D: push    eax
0x4F964E: push    ecx
0x4F964F: push    esi
0x4F9650: mov     eax, ds:0B30AACh
0x4F9655: xor     eax, esp
0x4F9657: push    eax
0x4F9658: lea     eax, [esp+18h+var_C]
0x4F965C: mov     large fs:0, eax
0x4F9662: mov     esi, ecx
0x4F9664: mov     [esp+18h+var_10], esi
0x4F9668: mov     dword ptr [esi], offset ??_7TESGlobal@@6B@; Verified 78-slot TESGlobal vtable (312 bytes); key form-record slots are LoadFormRecord at +0x1C and SaveFormRecord at +0x24.
0x4F966E: mov     [esp+18h+var_4], 1
0x4F9676: call    j_TESForm_ClearComponentReferences
0x4F967B: mov     eax, [esi+18h]
0x4F967E: push    eax
0x4F967F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F9684: xor     eax, eax
0x4F9686: add     esp, 4
0x4F9689: mov     ecx, esi; this
0x4F968B: mov     [esi+18h], eax
0x4F968E: mov     [esi+1Eh], ax
0x4F9692: mov     [esi+1Ch], ax
0x4F9696: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4F969E: call    TESForm_destr
0x4F96A3: mov     ecx, [esp+18h+var_C]
0x4F96A7: mov     large fs:0, ecx
0x4F96AE: pop     ecx
0x4F96AF: pop     esi
0x4F96B0: add     esp, 10h
0x4F96B3: retn
0x9B6AD0: mov     ecx, [ebp-10h]; this
0x9B6AD3: jmp     TESForm_destr
0x9B6AD8: mov     ecx, [ebp-10h]
0x9B6ADB: add     ecx, 18h; void *
0x9B6ADE: jmp     BSStringT_Clear
0x9B6AE3: mov     edx, [esp+arg_4]
0x9B6AE7: lea     eax, [edx-8]
0x9B6AEA: mov     ecx, [edx-0Ch]
0x9B6AED: xor     ecx, eax
0x9B6AEF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6AF4: mov     eax, offset stru_AE1880
0x9B6AF9: jmp     ___CxxFrameHandler3
