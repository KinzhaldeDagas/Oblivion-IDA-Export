0x692F00: push    ebx
0x692F01: push    esi
0x692F02: push    edi
0x692F03: mov     edi, [esp+0Ch+arg_0]
0x692F07: test    edi, edi
0x692F09: mov     ebx, ecx
0x692F0B: jz      loc_692F97
0x692F11: mov     ecx, edi; this
0x692F13: call    MagicTarget_GetParentActor
0x692F18: mov     esi, eax
0x692F1A: test    esi, esi
0x692F1C: jz      short loc_692F97
0x692F1E: mov     eax, [esi]
0x692F20: mov     edx, [eax+198h]
0x692F26: push    0
0x692F28: mov     ecx, esi
0x692F2A: call    edx
0x692F2C: test    al, al
0x692F2E: jnz     short loc_692F97
0x692F30: mov     eax, [esi]
0x692F32: mov     edx, [eax+1F8h]
0x692F38: mov     ecx, esi
0x692F3A: call    edx
0x692F3C: test    al, al
0x692F3E: jnz     short loc_692F97
0x692F40: fld     dword ptr [ebx+18h]
0x692F43: push    ecx
0x692F44: fstp    [esp+10h+arg_0]
0x692F48: mov     ecx, esi
0x692F4A: fld     [esp+10h+arg_0]
0x692F4E: fstp    [esp+10h+var_10]; float
0x692F51: call    Actor_GetLevel
0x692F56: movzx   eax, ax
0x692F59: push    eax; int
0x692F5A: call    Calc_MagnitudeAffectsLevel
0x692F5F: add     esp, 8
0x692F62: test    al, al
0x692F64: jz      short loc_692F97
0x692F66: push    0; int
0x692F68: push    offset ??_R0?AVCreature@@@8; struct TypeDescriptor *
0x692F6D: push    offset ??_R0?AVMagicTarget@@@8; struct _s_RTTICompleteObjectLocator *
0x692F72: push    0; int
0x692F74: push    edi; void *
0x692F75: call    OblivionDynamicCast
0x692F7A: add     esp, 14h
0x692F7D: test    eax, eax
0x692F7F: jz      short loc_692F9F
0x692F81: push    0; a2
0x692F83: mov     ecx, eax; this
0x692F85: call    Actor_GetActorBaseForm
0x692F8A: test    eax, eax
0x692F8C: jz      short loc_692FAB
0x692F8E: cmp     byte ptr [eax+104h], 2
0x692F95: jnz     short loc_692FAB
0x692F97: pop     edi
0x692F98: pop     esi
0x692F99: xor     al, al
0x692F9B: pop     ebx
0x692F9C: retn    4
0x692F9F: mov     ecx, esi; this
0x692FA1: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x692FA6: cmp     eax, 4
0x692FA9: jz      short loc_692F97
0x692FAB: pop     edi
0x692FAC: pop     esi
0x692FAD: mov     al, 1
0x692FAF: pop     ebx
0x692FB0: retn    4
