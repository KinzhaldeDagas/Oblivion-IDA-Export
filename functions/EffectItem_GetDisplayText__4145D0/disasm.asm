0x4145D0: sub     esp, 8
0x4145D3: push    ebx
0x4145D4: push    esi
0x4145D5: mov     esi, [esp+10h+arg_4]
0x4145D9: push    edi
0x4145DA: xor     ebx, ebx
0x4145DC: push    ebx; int
0x4145DD: push    offset ??_R0?AVEnchantmentItem@@@8; struct TypeDescriptor *
0x4145E2: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x4145E7: push    ebx; int
0x4145E8: push    esi; void *
0x4145E9: mov     edi, ecx
0x4145EB: mov     [esp+28h+var_4], ebx
0x4145EF: call    OblivionDynamicCast
0x4145F4: add     esp, 14h
0x4145F7: cmp     eax, ebx
0x4145F9: jz      short loc_414614
0x4145FB: mov     eax, [eax+34h]
0x4145FE: cmp     eax, 3
0x414601: setz    cl
0x414604: cmp     eax, 2
0x414607: setz    dl
0x41460A: mov     byte ptr [esp+14h+var_4], cl
0x41460E: mov     byte ptr [esp+14h+arg_4], dl
0x414612: jmp     short loc_41461C
0x414614: mov     byte ptr [esp+14h+var_4], bl
0x414618: mov     byte ptr [esp+14h+arg_4], bl
0x41461C: mov     eax, [esi]
0x41461E: mov     edx, [eax+18h]
0x414621: mov     ecx, esi
0x414623: call    edx
0x414625: cmp     eax, 7
0x414628: jnz     short loc_41463B
0x41462A: lea     ecx, [esi+0Ch]
0x41462D: call    EffectItemList_AllEffectsHostile
0x414632: test    al, al
0x414634: mov     byte ptr [esp+14h+var_8], 1
0x414639: jnz     short loc_41463F
0x41463B: mov     byte ptr [esp+14h+var_8], bl
0x41463F: mov     eax, [esp+14h+arg_4]
0x414643: fld     [esp+14h+arg_8]
0x414647: mov     ecx, [esp+14h+var_8]
0x41464B: mov     edx, [esp+14h+var_4]
0x41464F: push    eax
0x414650: mov     eax, [esi]
0x414652: push    ecx
0x414653: push    edx
0x414654: mov     edx, [eax+18h]
0x414657: push    ecx
0x414658: mov     ecx, esi
0x41465A: fstp    [esp+24h+var_24]
0x41465D: call    edx
0x41465F: mov     esi, [esp+14h+arg_10]
0x414663: push    eax
0x414664: push    esi
0x414665: mov     ecx, edi
0x414667: call    EffectItem_BuildDisplayString
0x41466C: pop     edi
0x41466D: mov     eax, esi
0x41466F: pop     esi
0x414670: pop     ebx
0x414671: add     esp, 8
0x414674: retn    0Ch
