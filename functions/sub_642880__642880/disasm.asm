0x642880: push    edi
0x642881: mov     edi, ecx
0x642883: mov     ecx, ds:0B3A6B0h
0x642889: push    2
0x64288B: call    sub_572EA0
0x642890: fcomp   dword ptr ds:0A2FAA8h
0x642896: fnstsw  ax
0x642898: test    ah, 41h
0x64289B: jz      short loc_6428EC
0x64289D: push    esi
0x64289E: mov     esi, [esp+8+arg_0]
0x6428A2: mov     eax, [esi]
0x6428A4: mov     edx, [eax+19Ch]
0x6428AA: mov     ecx, esi
0x6428AC: call    edx
0x6428AE: test    al, al
0x6428B0: jnz     short loc_6428EB
0x6428B2: mov     ecx, esi; this
0x6428B4: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x6428B9: cmp     eax, 4
0x6428BC: jnz     short loc_6428C9
0x6428BE: mov     ecx, esi; this
0x6428C0: call    Actor_IsGhost
0x6428C5: test    al, al
0x6428C7: jnz     short loc_6428EB
0x6428C9: push    esi
0x6428CA: mov     ecx, edi
0x6428CC: call    loc_6411E0
0x6428D1: mov     ecx, offset dword_B3B94C
0x6428D6: call    BSSimpleList_Clear
0x6428DB: fld     dword ptr ds:0B378A8h
0x6428E1: fadd    [esp+8+arg_4]
0x6428E5: fstp    dword ptr [edi+204h]
0x6428EB: pop     esi
0x6428EC: pop     edi
0x6428ED: retn    8
