0x4693E0: mov     eax, [esp+arg_0]
0x4693E4: push    esi
0x4693E5: push    0; int
0x4693E7: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x4693EC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4693F1: push    0; int
0x4693F3: push    eax; void *
0x4693F4: call    OblivionDynamicCast
0x4693F9: mov     esi, eax
0x4693FB: add     esp, 14h
0x4693FE: test    esi, esi
0x469400: jnz     short loc_469404
0x469402: pop     esi
0x469403: retn
0x469404: mov     ecx, [esp+4+arg_4]; this
0x469408: test    ecx, ecx
0x46940A: jnz     short loc_469418
0x46940C: mov     edx, [esi+38h]
0x46940F: mov     eax, [edx+14h]
0x469412: lea     ecx, [esi+38h]
0x469415: pop     esi
0x469416: jmp     eax
0x469418: call    TESObjectREFR_GetOwner
0x46941D: mov     ecx, eax
0x46941F: xor     eax, eax
0x469421: test    ecx, ecx
0x469423: jz      short loc_469430
0x469425: cmp     byte ptr [ecx+4], 23h ; '#'
0x469429: jnz     short loc_469430
0x46942B: call    TESActorBase_IsFemale
0x469430: push    eax
0x469431: mov     ecx, esi
0x469433: call    TESBipedModelForm_GetWorldModelPath
0x469438: pop     esi
0x469439: retn
