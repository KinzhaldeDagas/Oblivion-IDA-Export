0x52EB70: push    esi
0x52EB71: mov     esi, ecx
0x52EB73: call    TESSkill_ClearDataAndComponents; Reset TESSkill native data: actorValue=0xFFFFFFFF, governingAttribute=0, specialization=0, and both useValues=1.0; then clear descriptions/components.
0x52EB78: mov     ecx, esi
0x52EB7A: pop     esi
0x52EB7B: jmp     j_TESForm_InitializeComponents
