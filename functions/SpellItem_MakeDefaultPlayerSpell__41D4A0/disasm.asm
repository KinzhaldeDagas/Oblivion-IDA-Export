0x41D4A0: push    0FFFFFFFFh
0x41D4A2: push    offset SEH_803C90
0x41D4A7: mov     eax, large fs:0
0x41D4AD: push    eax
0x41D4AE: push    ecx
0x41D4AF: push    esi
0x41D4B0: push    edi
0x41D4B1: mov     eax, ___security_cookie
0x41D4B6: xor     eax, esp
0x41D4B8: push    eax
0x41D4B9: lea     eax, [esp+1Ch+var_C]
0x41D4BD: mov     large fs:0, eax
0x41D4C3: push    44h ; 'D'; Size
0x41D4C5: call    FormHeapAlloc
0x41D4CA: add     esp, 4
0x41D4CD: mov     [esp+1Ch+var_10], eax
0x41D4D1: test    eax, eax
0x41D4D3: mov     [esp+1Ch+var_4], 0
0x41D4DB: jz      short loc_41D4E8
0x41D4DD: mov     ecx, eax; this
0x41D4DF: call    ??0SpellItem@@QAE@XZ; SpellItem::SpellItem(void)
0x41D4E4: mov     edi, eax
0x41D4E6: jmp     short loc_41D4EA
0x41D4E8: xor     edi, edi
0x41D4EA: push    24h ; '$'; Size
0x41D4EC: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41D4F4: call    FormHeapAlloc
0x41D4F9: mov     esi, eax
0x41D4FB: add     esp, 4
0x41D4FE: mov     [esp+1Ch+var_10], esi
0x41D502: test    esi, esi
0x41D504: mov     [esp+1Ch+var_4], 1
0x41D50C: jz      short loc_41D527
0x41D50E: push    45484552h
0x41D513: call    EffectSettingCollection_LookupByCode
0x41D518: add     esp, 4
0x41D51B: push    eax
0x41D51C: mov     ecx, esi
0x41D51E: call    EffectItem_constr
0x41D523: mov     esi, eax
0x41D525: jmp     short loc_41D529
0x41D527: xor     esi, esi
0x41D529: push    0
0x41D52B: mov     ecx, esi
0x41D52D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41D535: call    EffectItem_SetRange
0x41D53A: push    0
0x41D53C: mov     ecx, esi
0x41D53E: call    EffectItem_SetDuration
0x41D543: push    5
0x41D545: mov     ecx, esi
0x41D547: call    EffectItem_SetMagnitude
0x41D54C: push    0
0x41D54E: mov     ecx, esi
0x41D550: call    EffectItem_SetArea
0x41D555: push    esi
0x41D556: lea     ecx, [edi+24h]
0x41D559: call    EffectItemList_AddItem
0x41D55E: push    0; a3
0x41D560: push    offset aDefaultPlayerS; "Default Player Spell"
0x41D565: lea     ecx, [edi+1Ch]; this
0x41D568: call    BSStringT_Set
0x41D56D: mov     dword ptr [edi+34h], 0
0x41D574: mov     eax, edi
0x41D576: mov     ecx, [esp+1Ch+var_C]
0x41D57A: mov     large fs:0, ecx
0x41D581: pop     ecx
0x41D582: pop     edi
0x41D583: pop     esi
0x41D584: add     esp, 10h
0x41D587: retn
