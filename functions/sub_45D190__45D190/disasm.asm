0x45D190: push    ebx
0x45D191: push    esi
0x45D192: push    edi
0x45D193: lea     edi, [ecx+64h]
0x45D196: mov     ebx, edi
0x45D198: test    ebx, ebx
0x45D19A: jz      short loc_45D1F5
0x45D19C: lea     esp, [esp+0]
0x45D1A0: mov     eax, [ebx]
0x45D1A2: test    eax, eax
0x45D1A4: jz      short loc_45D1EE
0x45D1A6: push    0; int
0x45D1A8: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x45D1AD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45D1B2: push    0; int
0x45D1B4: push    eax; void *
0x45D1B5: call    OblivionDynamicCast
0x45D1BA: mov     esi, eax
0x45D1BC: add     esp, 14h
0x45D1BF: test    esi, esi
0x45D1C1: jz      short loc_45D1EE
0x45D1C3: mov     eax, [esi+5Ch]
0x45D1C6: test    eax, eax
0x45D1C8: jz      short loc_45D1E7
0x45D1CA: mov     eax, [eax+28h]
0x45D1CD: test    eax, eax
0x45D1CF: jz      short loc_45D1E7
0x45D1D1: mov     eax, [eax+3Ch]
0x45D1D4: test    eax, eax
0x45D1D6: jz      short loc_45D1E7
0x45D1D8: fldz
0x45D1DA: push    0; a3
0x45D1DC: push    ecx
0x45D1DD: fstp    [esp+14h+a2]; a2
0x45D1E0: mov     ecx, eax; this
0x45D1E2: call    NiAVObject_UpdateNiAVObject
0x45D1E7: mov     ecx, esi
0x45D1E9: call    sub_60BE90
0x45D1EE: mov     ebx, [ebx+4]
0x45D1F1: test    ebx, ebx
0x45D1F3: jnz     short loc_45D1A0
0x45D1F5: cmp     dword ptr [edi+4], 0
0x45D1F9: jz      short loc_45D216
0x45D1FB: jmp     short loc_45D200
0x45D1FD: align 10h
0x45D200: mov     eax, [edi+4]
0x45D203: mov     esi, [eax+4]
0x45D206: push    eax
0x45D207: call    FormHeapFree
0x45D20C: add     esp, 4
0x45D20F: test    esi, esi
0x45D211: mov     [edi+4], esi
0x45D214: jnz     short loc_45D200
0x45D216: mov     dword ptr [edi], 0
0x45D21C: pop     edi
0x45D21D: pop     esi
0x45D21E: pop     ebx
0x45D21F: retn
