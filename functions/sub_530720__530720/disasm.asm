0x530720: mov     eax, [esp+a2]
0x530724: push    ebx
0x530725: push    esi
0x530726: mov     esi, ecx
0x530728: movzx   ecx, byte ptr [eax+4]
0x53072C: xor     bl, bl
0x53072E: sub     ecx, 39h ; '9'
0x530731: push    edi
0x530732: jz      short loc_53078D
0x530734: sub     ecx, 1
0x530737: jz      short loc_530747
0x530739: push    eax; a2
0x53073A: mov     ecx, esi; this
0x53073C: call    TESForm_LessThan
0x530741: pop     edi
0x530742: pop     esi
0x530743: pop     ebx
0x530744: retn    4
0x530747: push    0; int
0x530749: push    offset ??_R0?AVTESTopicInfo@@@8; struct TypeDescriptor *
0x53074E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x530753: push    0; int
0x530755: push    eax; void *
0x530756: call    OblivionDynamicCast
0x53075B: mov     edi, eax
0x53075D: add     esp, 14h
0x530760: test    edi, edi
0x530762: jz      short loc_5307C7
0x530764: push    esi
0x530765: call    TESTopic_static_GetTopicInfoParent?
0x53076A: push    edi
0x53076B: mov     esi, eax
0x53076D: call    TESTopic_static_GetTopicInfoParent?
0x530772: add     esp, 8
0x530775: test    eax, eax
0x530777: jz      short loc_5307C7
0x530779: cmp     eax, esi
0x53077B: jz      short loc_5307C7
0x53077D: mov     edx, [esi]
0x53077F: push    eax
0x530780: mov     eax, [edx+34h]
0x530783: mov     ecx, esi
0x530785: call    eax
0x530787: pop     edi
0x530788: pop     esi
0x530789: pop     ebx
0x53078A: retn    4
0x53078D: push    0; int
0x53078F: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x530794: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x530799: push    0; int
0x53079B: push    eax; void *
0x53079C: call    OblivionDynamicCast
0x5307A1: mov     edi, eax
0x5307A3: add     esp, 14h
0x5307A6: test    edi, edi
0x5307A8: jz      short loc_5307C7
0x5307AA: push    esi
0x5307AB: call    TESTopic_static_GetTopicInfoParent?
0x5307B0: add     esp, 4
0x5307B3: cmp     eax, edi
0x5307B5: jz      short loc_5307C7
0x5307B7: mov     edx, [eax]
0x5307B9: mov     ecx, eax
0x5307BB: mov     eax, [edx+34h]
0x5307BE: push    edi
0x5307BF: call    eax
0x5307C1: pop     edi
0x5307C2: pop     esi
0x5307C3: pop     ebx
0x5307C4: retn    4
0x5307C7: pop     edi
0x5307C8: pop     esi
0x5307C9: mov     al, bl
0x5307CB: pop     ebx
0x5307CC: retn    4
