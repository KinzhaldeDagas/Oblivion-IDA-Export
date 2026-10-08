0x501CF0: push    esi; SkipAnim command: writes ActorAnimData +0x90 skip/action byte to 5.
0x501CF1: mov     esi, [esp+4+arg_8]
0x501CF5: test    esi, esi
0x501CF7: jz      short loc_501D1E
0x501CF9: mov     eax, [esi]
0x501CFB: mov     edx, [eax+164h]
0x501D01: mov     ecx, esi
0x501D03: call    edx
0x501D05: test    eax, eax
0x501D07: jz      short loc_501D1E
0x501D09: mov     eax, [esi]
0x501D0B: mov     edx, [eax+164h]
0x501D11: push    5; state
0x501D13: mov     ecx, esi
0x501D15: call    edx
0x501D17: mov     ecx, eax; this
0x501D19: call    ActorAnimData_SetUpdateState; Oblivion ActorAnimData update-control setter: stores one byte at +0x90. Observed callers write state 3 for attack/action synchronization and state 5 from Cmd_SkipAnim. Do not infer KF unloading or map mutation from this setter.
0x501D1E: mov     al, 1
0x501D20: pop     esi
0x501D21: retn
