0x65E900: push    ebx
0x65E901: push    esi
0x65E902: push    edi
0x65E903: mov     esi, ecx
0x65E905: call    TESObjectREFR_GetAnimData; Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
0x65E90A: mov     ebx, [esi+5CCh]
0x65E910: mov     edi, eax
0x65E912: test    edi, edi
0x65E914: jz      short loc_65E95C
0x65E916: test    ebx, ebx
0x65E918: jz      short loc_65E95C
0x65E91A: mov     ecx, [esi+58h]
0x65E91D: mov     eax, [ecx]
0x65E91F: mov     edx, [eax+138h]
0x65E925: call    edx
0x65E927: test    al, al
0x65E929: jz      short loc_65E95C
0x65E92B: mov     ecx, [esi+58h]
0x65E92E: mov     eax, [ecx]
0x65E930: mov     edx, [eax+304h]
0x65E936: call    edx
0x65E938: test    al, al
0x65E93A: jz      short loc_65E95C
0x65E93C: push    3; slot
0x65E93E: mov     ecx, edi; this
0x65E940: call    ActorAnimData_GetSlotActionState; Reads the per-slot action/state dword at ActorAnimData +0x48 + 4*normalizedSlot. Native aliases slot 5 to slot 0 and slot 6 to slot 3.
0x65E945: cmp     eax, 2
0x65E948: jnz     short loc_65E95C
0x65E94A: push    3; state
0x65E94C: mov     ecx, edi; this
0x65E94E: call    ActorAnimData_SetUpdateState; Oblivion ActorAnimData update-control setter: stores one byte at +0x90. Observed callers write state 3 for attack/action synchronization and state 5 from Cmd_SkipAnim. Do not infer KF unloading or map mutation from this setter.
0x65E953: push    3; state
0x65E955: mov     ecx, ebx; this
0x65E957: call    ActorAnimData_SetUpdateState; Oblivion ActorAnimData update-control setter: stores one byte at +0x90. Observed callers write state 3 for attack/action synchronization and state 5 from Cmd_SkipAnim. Do not infer KF unloading or map mutation from this setter.
0x65E95C: pop     edi
0x65E95D: pop     esi
0x65E95E: pop     ebx
0x65E95F: retn
