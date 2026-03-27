0x501F50: sub     esp, 8
0x501F53: mov     edx, [esp+8+l]
0x501F57: push    esi
0x501F58: mov     esi, [esp+0Ch+a4]
0x501F5C: push    edi
0x501F5D: lea     eax, [esp+10h+var_4]
0x501F61: push    eax
0x501F62: mov     eax, [esp+14h+arg_10]
0x501F66: lea     ecx, [esp+14h+var_8]
0x501F6A: push    ecx; UInt16
0x501F6B: mov     ecx, [esp+18h+arg_C]
0x501F6F: push    edx; l
0x501F70: mov     edx, [esp+1Ch+a3]
0x501F74: push    eax; a6
0x501F75: mov     eax, [esp+20h+arg_4]
0x501F79: push    ecx; a5
0x501F7A: mov     ecx, [esp+24h+a1]
0x501F7E: push    esi; a4
0x501F7F: push    edx; a3
0x501F80: push    eax; a2
0x501F81: xor     edi, edi
0x501F83: push    ecx; a1
0x501F84: mov     dword ptr [esp+34h+var_8], edi
0x501F88: mov     [esp+34h+var_4], edi
0x501F8C: call    Script_ExtractArgs
0x501F91: add     esp, 24h
0x501F94: test    al, al
0x501F96: jnz     short loc_501F9E
0x501F98: pop     edi
0x501F99: pop     esi
0x501F9A: add     esp, 8
0x501F9D: retn
0x501F9E: cmp     esi, edi
0x501FA0: push    ebx
0x501FA1: jz      Cmd_Cast___Done
0x501FA7: mov     edx, [esi]
0x501FA9: mov     eax, [edx+120h]
0x501FAF: mov     ecx, esi
0x501FB1: call    eax
0x501FB3: mov     ebx, eax
0x501FB5: cmp     ebx, edi
0x501FB7: jz      Cmd_Cast___Done
0x501FBD: mov     ecx, dword ptr [esp+14h+var_8]
0x501FC1: cmp     ecx, edi
0x501FC3: jz      Cmd_Cast___Done
0x501FC9: mov     edx, [ecx]
0x501FCB: mov     eax, [edx+18h]
0x501FCE: call    eax
0x501FD0: cmp     eax, 1
0x501FD3: jz      Cmd_Cast___Done
0x501FD9: mov     ecx, dword ptr [esp+14h+var_8]
0x501FDD: mov     edx, [ecx]
0x501FDF: mov     eax, [edx+18h]
0x501FE2: call    eax
0x501FE4: cmp     eax, 4
0x501FE7: jz      Cmd_Cast___Done
0x501FED: push    ebp
0x501FEE: mov     ecx, ebx
0x501FF0: call    MagicCaster_InitializeCasting???
0x501FF5: mov     ecx, [esp+18h+var_4]
0x501FF9: cmp     ecx, edi
0x501FFB: jz      short loc_50200B
0x501FFD: mov     edx, [ecx]
0x501FFF: mov     eax, [edx+124h]
0x502005: call    eax
0x502007: mov     ebp, eax
0x502009: jmp     short loc_50200D
0x50200B: xor     ebp, ebp
0x50200D: push    edi; int
0x50200E: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x502013: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x502018: push    edi; int
0x502019: push    esi; void *
0x50201A: call    OblivionDynamicCast
0x50201F: mov     edi, eax
0x502021: add     esp, 14h
0x502024: test    edi, edi
0x502026: jz      Cmd_Cast___CastNonActor
0x50202C: mov     ecx, dword ptr [esp+18h+var_8]
0x502030: add     ecx, 0Ch
0x502033: call    EffectItemList_HasOnTarget
0x502038: test    al, al
0x50203A: jz      short Cmd_Cast___CheckOnTouch
