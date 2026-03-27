0x5F474D: mov     edx, [edi]
0x5F474F: mov     eax, [edx+18h]
0x5F4752: mov     ecx, edi
0x5F4754: call    eax
0x5F4756: cmp     eax, 8; switch 9 cases
0x5F4759: ja      Actor_MagicCaster_IsMagicItemUseable___ActorMagicCaster_IsAbleToCast_Return1; jumptable 005F475F default case, cases 1,4,7
0x5F475F: jmp     ds:jpt_5F475F[eax*4]; switch jump
0x5F4766: push    0; jumptable 005F475F case 2
0x5F4768: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x5F476D: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5F4772: push    0; int
0x5F4774: push    edi; void *
0x5F4775: call    OblivionDynamicCast
0x5F477A: mov     ecx, [esp+14h+arg_10]
0x5F477E: add     esp, 14h
0x5F4781: push    eax
0x5F4782: add     ecx, 0FFFFFFA4h
0x5F4785: call    Actor_GetMagicItemCooldown
0x5F478A: test    eax, eax
0x5F478C: jz      short Actor_MagicCaster_IsMagicItemUseable___Actor_MagicCaster_IsMagicItemUseable_LPW; jumptable 005F475F case 3
0x5F478E: test    esi, esi
0x5F4790: jz      short loc_5F4798
0x5F4792: mov     dword ptr [esi], 4
0x5F4798: pop     edi
0x5F4799: pop     esi
0x5F479A: xor     al, al
0x5F479C: pop     ebx
0x5F479D: add     esp, 0Ch
0x5F47A0: retn    10h
0x5F47A3: cmp     [esp+arg_18], 0; jumptable 005F475F case 3
