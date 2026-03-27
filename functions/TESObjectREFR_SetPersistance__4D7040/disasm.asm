0x4D7040: push    esi
0x4D7041: mov     esi, ecx
0x4D7043: mov     eax, [esi+18h]
0x4D7046: mov     edx, [eax]
0x4D7048: lea     ecx, [esi+18h]
0x4D704B: push    edi
0x4D704C: call    edx
0x4D704E: mov     cl, [esp+8+arg_0]
0x4D7052: test    cl, cl
0x4D7054: mov     edi, eax
0x4D7056: mov     eax, [esi+8]
0x4D7059: jz      short loc_4D7062
0x4D705B: or      eax, 400h
0x4D7060: jmp     short loc_4D7067
0x4D7062: and     eax, 0FFFFFBFFh
0x4D7067: test    cl, cl
0x4D7069: mov     [esi+8], eax
0x4D706C: jz      short loc_4D70A7
0x4D706E: mov     eax, [esi]
0x4D7070: mov     edx, [eax+40h]
0x4D7073: push    1
0x4D7075: mov     ecx, esi
0x4D7077: call    edx
0x4D7079: test    edi, edi
0x4D707B: jz      short TESObjectREFR_SetPersistance___Done
0x4D707D: mov     ecx, edi; this
0x4D707F: call    TESObjectCELL_IsInterior
0x4D7084: test    al, al
0x4D7086: jnz     short TESObjectREFR_SetPersistance___Done
0x4D7088: mov     ecx, edi; this
0x4D708A: call    TESForm_GetQuestItem
0x4D708F: test    al, al
0x4D7091: jnz     short TESObjectREFR_SetPersistance___Done
0x4D7093: mov     ecx, edi; this
0x4D7095: call    TESObjectCELL_GetWorldSpace
0x4D709A: push    esi; Concurrency::details::SchedulerBase *
0x4D709B: mov     ecx, eax
0x4D709D: call    TESWorldspace_Boh?
0x4D70A2: pop     edi
0x4D70A3: pop     esi
0x4D70A4: retn    4
0x4D70A7: test    edi, edi
0x4D70A9: jz      short TESObjectREFR_SetPersistance___Done
0x4D70AB: mov     ecx, edi; this
0x4D70AD: call    TESForm_GetQuestItem
0x4D70B2: test    al, al
0x4D70B4: jz      short TESObjectREFR_SetPersistance___Done
0x4D70B6: mov     ecx, edi; this
0x4D70B8: call    TESObjectCELL_GetWorldSpace
0x4D70BD: push    esi
0x4D70BE: mov     ecx, eax
0x4D70C0: call    sub_4F03D0
0x4D70C5: mov     eax, [esi]
0x4D70C7: mov     edx, [eax+90h]
0x4D70CD: push    1
0x4D70CF: mov     ecx, esi
0x4D70D1: call    edx
0x4D70D3: pop     edi
0x4D70D4: pop     esi
0x4D70D5: retn    4
