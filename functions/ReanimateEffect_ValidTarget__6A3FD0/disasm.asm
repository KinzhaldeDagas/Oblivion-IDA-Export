0x6A3FD0: mov     ecx, [esp+arg_0]
0x6A3FD4: mov     eax, [ecx]
0x6A3FD6: mov     edx, [eax+4]
0x6A3FD9: push    esi
0x6A3FDA: push    0; int
0x6A3FDC: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x6A3FE1: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6A3FE6: push    0; int
0x6A3FE8: call    edx
0x6A3FEA: push    eax; void *
0x6A3FEB: call    OblivionDynamicCast
0x6A3FF0: mov     esi, eax
0x6A3FF2: add     esp, 14h
0x6A3FF5: test    esi, esi
0x6A3FF7: jz      short loc_6A4029
0x6A3FF9: mov     eax, [esi]
0x6A3FFB: mov     edx, [eax+198h]
0x6A4001: push    0
0x6A4003: mov     ecx, esi
0x6A4005: call    edx
0x6A4007: test    al, al
0x6A4009: jz      short loc_6A4029
0x6A400B: mov     ecx, esi; this
0x6A400D: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x6A4012: cmp     eax, 4
0x6A4015: jz      short loc_6A4029
0x6A4017: mov     ecx, esi; this
0x6A4019: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x6A401E: cmp     eax, 6
0x6A4021: jz      short loc_6A4029
0x6A4023: mov     al, 1
0x6A4025: pop     esi
0x6A4026: retn    4
0x6A4029: xor     al, al
0x6A402B: pop     esi
0x6A402C: retn    4
