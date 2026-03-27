0x4F7370: fldz
0x4F7372: push    esi
0x4F7373: mov     esi, [esp+4+arg_0]
0x4F7377: test    esi, esi
0x4F7379: push    edi
0x4F737A: mov     edi, [esp+8+arg_C]
0x4F737E: fstp    qword ptr [edi]
0x4F7380: jz      short loc_4F73E3
0x4F7382: mov     eax, [esi]
0x4F7384: mov     edx, [eax+190h]
0x4F738A: mov     ecx, esi
0x4F738C: call    edx
0x4F738E: test    al, al
0x4F7390: jz      short loc_4F73E3
0x4F7392: mov     ecx, esi; this
0x4F7394: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x4F7399: cmp     eax, 3
0x4F739C: jnz     short loc_4F73A2
0x4F739E: fld1
0x4F73A0: fstp    qword ptr [edi]
0x4F73A2: cmp     byte ptr ds:0B361ACh, 0
0x4F73A9: jz      short loc_4F73E3
0x4F73AB: fldz
0x4F73AD: mov     ecx, esi; this
0x4F73AF: fcomp   qword ptr [edi]
0x4F73B1: fnstsw  ax
0x4F73B3: test    ah, 44h
0x4F73B6: jnp     short loc_4F73D0
0x4F73B8: call    TESObjectREFR_GetName
0x4F73BD: push    eax
0x4F73BE: push    offset aSIsUnconscious; "%s is unconscious"
0x4F73C3: call    Interface_ConsolePrint
0x4F73C8: add     esp, 8
0x4F73CB: pop     edi
0x4F73CC: mov     al, 1
0x4F73CE: pop     esi
0x4F73CF: retn
0x4F73D0: call    TESObjectREFR_GetName
0x4F73D5: push    eax
0x4F73D6: push    offset aSIsNotUnconsci; "%s is not unconscious"
0x4F73DB: call    Interface_ConsolePrint
0x4F73E0: add     esp, 8
0x4F73E3: pop     edi
0x4F73E4: mov     al, 1
0x4F73E6: pop     esi
0x4F73E7: retn
