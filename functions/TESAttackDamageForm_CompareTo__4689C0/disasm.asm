0x4689C0: mov     eax, [esp+arg_0]
0x4689C4: push    esi
0x4689C5: push    0; int
0x4689C7: push    offset ??_R0?AVTESAttackDamageForm@@@8; struct TypeDescriptor *
0x4689CC: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x4689D1: push    0; int
0x4689D3: push    eax; void *
0x4689D4: mov     esi, ecx
0x4689D6: call    OblivionDynamicCast
0x4689DB: add     esp, 14h
0x4689DE: test    eax, eax
0x4689E0: jnz     short loc_4689E8
0x4689E2: mov     al, 1
0x4689E4: pop     esi
0x4689E5: retn    4
0x4689E8: mov     edx, [eax]
0x4689EA: mov     ecx, eax
0x4689EC: mov     eax, [edx+10h]
0x4689EF: push    edi
0x4689F0: call    eax
0x4689F2: mov     edx, [esi]
0x4689F4: mov     di, ax
0x4689F7: mov     eax, [edx+10h]
0x4689FA: mov     ecx, esi
0x4689FC: call    eax
0x4689FE: cmp     ax, di
0x468A01: pop     edi
0x468A02: setnz   al
0x468A05: pop     esi
0x468A06: retn    4
