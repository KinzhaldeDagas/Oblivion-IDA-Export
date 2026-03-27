0x613780: push    esi
0x613781: mov     esi, ecx
0x613783: mov     ecx, [esi+3Ch]; this
0x613786: push    edi
0x613787: xor     edi, edi
0x613789: call    Actor_IsCreature
0x61378E: test    al, al
0x613790: jnz     short loc_6137D9
0x613792: cmp     [esi+70h], edi
0x613795: jnz     short loc_6137A9
0x613797: mov     ecx, [esi+3Ch]
0x61379A: mov     eax, [ecx]
0x61379C: mov     edx, [eax+284h]
0x6137A2: push    11h
0x6137A4: call    edx
0x6137A6: pop     edi
0x6137A7: pop     esi
0x6137A8: retn
0x6137A9: mov     ecx, esi
0x6137AB: call    sub_612D60
0x6137B0: test    eax, eax
0x6137B2: jz      short loc_613805
0x6137B4: push    ebx
0x6137B5: mov     ebx, [esi+3Ch]
0x6137B8: mov     edi, [ebx]
0x6137BA: mov     ecx, esi
0x6137BC: add     edi, 284h
0x6137C2: call    sub_612D60
0x6137C7: mov     ecx, eax
0x6137C9: call    TESObjectWEAP_GetWeaponSkillAV
0x6137CE: push    eax
0x6137CF: mov     eax, [edi]
0x6137D1: mov     ecx, ebx
0x6137D3: call    eax
0x6137D5: pop     ebx
0x6137D6: pop     edi
0x6137D7: pop     esi
0x6137D8: retn
0x6137D9: mov     esi, [esi+3Ch]
0x6137DC: push    0; int
0x6137DE: push    offset ??_R0?AVCreature@@@8; struct TypeDescriptor *
0x6137E3: push    offset ??_R0?AVActor@@@8; struct _s_RTTICompleteObjectLocator *
0x6137E8: push    0; int
0x6137EA: push    esi; void *
0x6137EB: call    OblivionDynamicCast
0x6137F0: add     esp, 14h
0x6137F3: test    eax, eax
0x6137F5: jz      short loc_613805
0x6137F7: mov     ecx, eax
0x6137F9: call    sub_624FC0
0x6137FE: pop     edi
0x6137FF: pop     esi
0x613800: jmp     Double_To_SInt32
0x613805: mov     eax, edi
0x613807: pop     edi
0x613808: pop     esi
0x613809: retn
