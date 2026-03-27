0x6A8010: push    ebx
0x6A8011: push    esi
0x6A8012: push    edi
0x6A8013: mov     edi, [esp+0Ch+arg_0]
0x6A8017: test    edi, edi
0x6A8019: mov     ebx, ecx
0x6A801B: jz      loc_6A80C3
0x6A8021: mov     ecx, edi; this
0x6A8023: call    MagicTarget_GetParentActor
0x6A8028: mov     esi, eax
0x6A802A: test    esi, esi
0x6A802C: jz      loc_6A80C3
0x6A8032: mov     eax, [esi]
0x6A8034: mov     edx, [eax+198h]
0x6A803A: push    0
0x6A803C: mov     ecx, esi
0x6A803E: call    edx
0x6A8040: test    al, al
0x6A8042: jnz     short loc_6A80C3
0x6A8044: mov     eax, [esi]
0x6A8046: mov     edx, [eax+1F8h]
0x6A804C: mov     ecx, esi
0x6A804E: call    edx
0x6A8050: test    al, al
0x6A8052: jnz     short loc_6A80C3
0x6A8054: fld     dword ptr [ebx+18h]
0x6A8057: push    ecx
0x6A8058: fstp    [esp+10h+arg_0]
0x6A805C: mov     ecx, esi
0x6A805E: fld     [esp+10h+arg_0]
0x6A8062: fstp    [esp+10h+var_10]; float
0x6A8065: call    Actor_GetLevel
0x6A806A: movzx   eax, ax
0x6A806D: push    eax; int
0x6A806E: call    Calc_MagnitudeAffectsLevel
0x6A8073: add     esp, 8
0x6A8076: test    al, al
0x6A8078: jz      short loc_6A80C3
0x6A807A: push    0; int
0x6A807C: push    offset ??_R0?AVCreature@@@8; struct TypeDescriptor *
0x6A8081: push    offset ??_R0?AVMagicTarget@@@8; struct _s_RTTICompleteObjectLocator *
0x6A8086: push    0; int
0x6A8088: push    edi; void *
0x6A8089: call    OblivionDynamicCast
0x6A808E: add     esp, 14h
0x6A8091: test    eax, eax
0x6A8093: jz      short loc_6A80AF
0x6A8095: push    0; a2
0x6A8097: mov     ecx, eax; this
0x6A8099: call    Actor_GetActorBaseForm
0x6A809E: cmp     byte ptr [eax+104h], 2
0x6A80A5: jnz     short loc_6A80C3
0x6A80A7: pop     edi
0x6A80A8: pop     esi
0x6A80A9: mov     al, 1
0x6A80AB: pop     ebx
0x6A80AC: retn    4
0x6A80AF: mov     ecx, esi; this
0x6A80B1: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x6A80B6: cmp     eax, 4
0x6A80B9: jnz     short loc_6A80C3
0x6A80BB: pop     edi
0x6A80BC: pop     esi
0x6A80BD: mov     al, 1
0x6A80BF: pop     ebx
0x6A80C0: retn    4
0x6A80C3: pop     edi
0x6A80C4: pop     esi
0x6A80C5: xor     al, al
0x6A80C7: pop     ebx
0x6A80C8: retn    4
