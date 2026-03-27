0x6A34A0: mov     eax, [esp+arg_0]
0x6A34A4: push    esi
0x6A34A5: push    0; int
0x6A34A7: push    offset ??_R0?AVNonActorMagicTarget@@@8; struct TypeDescriptor *
0x6A34AC: push    offset ??_R0?AVMagicTarget@@@8; struct _s_RTTICompleteObjectLocator *
0x6A34B1: push    0; int
0x6A34B3: push    eax; void *
0x6A34B4: call    OblivionDynamicCast
0x6A34B9: add     esp, 14h
0x6A34BC: test    eax, eax
0x6A34BE: jz      loc_6A3546
0x6A34C4: mov     edx, [eax+0Ch]
0x6A34C7: lea     esi, [eax+0Ch]
0x6A34CA: mov     eax, [edx+4]
0x6A34CD: mov     ecx, esi
0x6A34CF: call    eax
0x6A34D1: test    eax, eax
0x6A34D3: jz      short loc_6A3546
0x6A34D5: mov     edx, [esi]
0x6A34D7: mov     eax, [edx+4]
0x6A34DA: push    edi
0x6A34DB: mov     ecx, esi
0x6A34DD: call    eax
0x6A34DF: mov     edx, [eax]
0x6A34E1: push    0; int
0x6A34E3: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x6A34E8: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6A34ED: mov     ecx, eax
0x6A34EF: mov     eax, [edx+170h]
0x6A34F5: push    0; int
0x6A34F7: call    eax
0x6A34F9: push    eax; void *
0x6A34FA: call    OblivionDynamicCast
0x6A34FF: mov     edx, [esi]
0x6A3501: mov     edi, eax
0x6A3503: mov     eax, [edx+4]
0x6A3506: add     esp, 14h
0x6A3509: mov     ecx, esi
0x6A350B: call    eax
0x6A350D: mov     edx, [eax]
0x6A350F: push    0; int
0x6A3511: push    offset ??_R0?AVTESObjectCONT@@@8; struct TypeDescriptor *
0x6A3516: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6A351B: mov     ecx, eax
0x6A351D: mov     eax, [edx+170h]
0x6A3523: push    0; int
0x6A3525: call    eax
0x6A3527: push    eax; void *
0x6A3528: call    OblivionDynamicCast
0x6A352D: add     esp, 14h
0x6A3530: test    edi, edi
0x6A3532: pop     edi
0x6A3533: jnz     short loc_6A353D
0x6A3535: test    eax, eax
0x6A3537: jnz     short loc_6A353D
0x6A3539: pop     esi
0x6A353A: retn    4
0x6A353D: mov     eax, 1
0x6A3542: pop     esi
0x6A3543: retn    4
0x6A3546: xor     al, al
0x6A3548: pop     esi
0x6A3549: retn    4
