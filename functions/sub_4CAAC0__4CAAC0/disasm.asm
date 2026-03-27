0x4CAAC0: sub     esp, 8
0x4CAAC3: push    esi
0x4CAAC4: add     ecx, 28h ; '('
0x4CAAC7: push    edi
0x4CAAC8: mov     [esp+10h+var_5], 0
0x4CAACD: mov     [esp+10h+var_4], ecx
0x4CAAD1: call    ExtraDataList_GetOwner
0x4CAAD6: mov     esi, eax
0x4CAAD8: test    esi, esi
0x4CAADA: jz      loc_4CABA8
0x4CAAE0: mov     edi, [esp+10h+arg_0]
0x4CAAE4: mov     ecx, edi; this
0x4CAAE6: call    Actor_IsNPC
0x4CAAEB: test    al, al
0x4CAAED: jnz     short loc_4CAAF7
0x4CAAEF: pop     edi
0x4CAAF0: pop     esi
0x4CAAF1: add     esp, 8
0x4CAAF4: retn    4
0x4CAAF7: push    ebx
0x4CAAF8: push    ebp
0x4CAAF9: push    0; int
0x4CAAFB: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x4CAB00: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CAB05: push    0; int
0x4CAB07: push    esi; void *
0x4CAB08: call    OblivionDynamicCast
0x4CAB0D: push    0; int
0x4CAB0F: push    offset ??_R0?AVTESFaction@@@8; struct TypeDescriptor *
0x4CAB14: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CAB19: push    0; int
0x4CAB1B: push    esi; void *
0x4CAB1C: mov     ebx, eax
0x4CAB1E: call    OblivionDynamicCast
0x4CAB23: add     esp, 28h
0x4CAB26: test    ebx, ebx
0x4CAB28: mov     ebp, eax
0x4CAB2A: jz      short loc_4CAB4F
0x4CAB2C: mov     eax, [edi]
0x4CAB2E: mov     edx, [eax+170h]
0x4CAB34: mov     ecx, edi
0x4CAB36: call    edx
0x4CAB38: cmp     ebx, eax
0x4CAB3A: jnz     short loc_4CABA6
0x4CAB3C: pop     ebp
0x4CAB3D: pop     ebx
0x4CAB3E: mov     [esp+10h+var_5], 1
0x4CAB43: mov     al, [esp+10h+var_5]
0x4CAB47: pop     edi
0x4CAB48: pop     esi
0x4CAB49: add     esp, 8
0x4CAB4C: retn    4
0x4CAB4F: test    ebp, ebp
0x4CAB51: jz      short loc_4CABA6
0x4CAB53: mov     ecx, [esp+18h+var_4]
0x4CAB57: call    sub_41E7F0
0x4CAB5C: mov     esi, eax
0x4CAB5E: sub     esi, 0FFFFFFFFh
0x4CAB61: push    0; int
0x4CAB63: neg     esi
0x4CAB65: sbb     esi, esi
0x4CAB67: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x4CAB6C: and     esi, eax
0x4CAB6E: mov     eax, [edi]
0x4CAB70: mov     edx, [eax+170h]
0x4CAB76: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4CAB7B: push    0; int
0x4CAB7D: mov     ecx, edi
0x4CAB7F: call    edx
0x4CAB81: push    eax; void *
0x4CAB82: call    OblivionDynamicCast
0x4CAB87: add     esp, 14h
0x4CAB8A: cmp     edi, ds:0B333C4h
0x4CAB90: setz    cl
0x4CAB93: push    ecx
0x4CAB94: push    ebp
0x4CAB95: lea     ecx, [eax+24h]
0x4CAB98: call    TESActorBaseData_GetFactionRank
0x4CAB9D: cmp     eax, esi
0x4CAB9F: jl      short loc_4CABA6
0x4CABA1: mov     [esp+18h+var_5], 1
0x4CABA6: pop     ebp
0x4CABA7: pop     ebx
0x4CABA8: mov     al, [esp+10h+var_5]
0x4CABAC: pop     edi
0x4CABAD: pop     esi
0x4CABAE: add     esp, 8
0x4CABB1: retn    4
