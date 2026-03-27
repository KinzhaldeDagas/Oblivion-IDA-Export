0x6A5E19: mov     ecx, ebp; this
0x6A5E1B: call    TESObjectREFR_GetName
0x6A5E20: push    eax; ArgList
0x6A5E21: push    offset aSSummonedANonA; "%s summoned a non-actor."
0x6A5E26: call    PrintError
0x6A5E2B: add     esp, 8
0x6A5E2E: push    1
0x6A5E30: mov     ecx, ebx
0x6A5E32: call    j_TESForm_SetDeleted
