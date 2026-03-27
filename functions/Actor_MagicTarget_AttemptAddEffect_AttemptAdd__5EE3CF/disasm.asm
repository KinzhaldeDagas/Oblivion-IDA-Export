0x5EE3CF: mov     eax, [esp+arg_14]
0x5EE3D3: push    edi
0x5EE3D4: mov     edi, [esp+4+arg_C]
0x5EE3D8: push    0
0x5EE3DA: push    eax
0x5EE3DB: push    esi
0x5EE3DC: push    edi
0x5EE3DD: mov     ecx, ebp
0x5EE3DF: call    MagicTarget_AttemptAddEffect
0x5EE3E4: lea     ecx, [esi+0Ch]
0x5EE3E7: mov     [esp+4+arg_10], al
0x5EE3EB: call    EffectItemList_HasHostile
0x5EE3F0: test    al, al
0x5EE3F2: jz      Actor_MagicTarget_AttemptAddEffect___Done
0x5EE3F8: mov     edx, [esi]
0x5EE3FA: mov     eax, [edx+18h]
0x5EE3FD: mov     ecx, esi
0x5EE3FF: call    eax
0x5EE401: cmp     eax, 1
0x5EE404: jz      Actor_MagicTarget_AttemptAddEffect___Done
0x5EE40A: mov     edx, [esi]
0x5EE40C: mov     eax, [edx+18h]
0x5EE40F: mov     ecx, esi
0x5EE411: call    eax
0x5EE413: cmp     eax, 4
0x5EE416: jz      Actor_MagicTarget_AttemptAddEffect___Done
0x5EE41C: push    0; int
0x5EE41E: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5EE423: push    offset ??_R0?AVMagicCaster@@@8; struct _s_RTTICompleteObjectLocator *
0x5EE428: push    0; int
0x5EE42A: push    edi; void *
0x5EE42B: call    OblivionDynamicCast
0x5EE430: mov     edi, eax
0x5EE432: add     esp, 14h
0x5EE435: test    edi, edi
0x5EE437: jz      Actor_MagicTarget_AttemptAddEffect___Done
0x5EE43D: mov     edx, [edi]
0x5EE43F: mov     eax, [edx+170h]
0x5EE445: push    ebx
0x5EE446: mov     ecx, edi
0x5EE448: add     ebp, 0FFFFFF98h
0x5EE44B: call    eax
0x5EE44D: mov     edx, [ebp+0]
0x5EE450: mov     ebx, eax
0x5EE452: mov     eax, [edx+170h]
0x5EE458: mov     ecx, ebp
0x5EE45A: call    eax
0x5EE45C: cmp     ebx, eax
0x5EE45E: jz      Actor_MagicTarget_AttemptAddEffect___Done_
0x5EE464: mov     ecx, [esp+8+arg_4]
0x5EE468: push    80h ; '€'
0x5EE46D: push    ecx
0x5EE46E: push    edi
0x5EE46F: call    Script_AddEventToExtraScript
0x5EE474: mov     edx, [esi]
0x5EE476: mov     eax, [edx+18h]
0x5EE479: add     esp, 0Ch
0x5EE47C: mov     ecx, esi
0x5EE47E: mov     bl, 1
0x5EE480: call    eax
0x5EE482: cmp     eax, 6
0x5EE485: jnz     short loc_5EE4C2
0x5EE487: push    0; int
0x5EE489: push    offset ??_R0?AVEnchantmentItem@@@8; struct TypeDescriptor *
0x5EE48E: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5EE493: push    0; int
0x5EE495: push    esi; void *
0x5EE496: call    OblivionDynamicCast
0x5EE49B: add     esp, 14h
0x5EE49E: test    eax, eax
0x5EE4A0: jz      short loc_5EE4C2
0x5EE4A2: cmp     dword ptr [eax+34h], 2
0x5EE4A6: jnz     short loc_5EE4C2
0x5EE4A8: mov     ecx, [esp+8+arg_14]
0x5EE4AC: mov     eax, [ecx+30h]
0x5EE4AF: test    eax, eax
0x5EE4B1: jz      short loc_5EE4C0
0x5EE4B3: cmp     byte ptr [eax+4], 22h ; '"'
0x5EE4B7: jnz     short loc_5EE4C0
0x5EE4B9: cmp     [esp+8+arg_18], 0
0x5EE4BE: jnz     short loc_5EE4C2
0x5EE4C0: xor     bl, bl
0x5EE4C2: mov     edx, [esi]
0x5EE4C4: mov     eax, [edx+18h]
0x5EE4C7: mov     ecx, esi
0x5EE4C9: call    eax
0x5EE4CB: cmp     eax, 7
0x5EE4CE: jz      short Actor_MagicTarget_AttemptAddEffect___UpdateHUDHealthBar
0x5EE4D0: test    bl, bl
0x5EE4D2: jz      short Actor_MagicTarget_AttemptAddEffect___UpdateHUDHealthBar
0x5EE4D4: mov     eax, [esp+8+arg_14]
0x5EE4D8: mov     edx, [ebp+0]
0x5EE4DB: mov     edx, [edx+3A8h]
0x5EE4E1: push    eax
0x5EE4E2: push    edi
0x5EE4E3: mov     ecx, ebp
0x5EE4E5: call    edx
