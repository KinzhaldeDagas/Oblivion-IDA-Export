0x41D2D0: mov     eax, [esp+arg_0]
0x41D2D4: push    esi
0x41D2D5: push    edi
0x41D2D6: push    0; int
0x41D2D8: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x41D2DD: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x41D2E2: push    0; int
0x41D2E4: push    eax; void *
0x41D2E5: mov     edi, ecx
0x41D2E7: call    OblivionDynamicCast
0x41D2EC: mov     esi, eax
0x41D2EE: add     esp, 14h
0x41D2F1: test    esi, esi
0x41D2F3: jz      short SpellItem_MagicItem_CopyData___Done
0x41D2F5: mov     edx, [esi+18h]
0x41D2F8: mov     eax, [edx+18h]
0x41D2FB: lea     ecx, [esi+18h]
0x41D2FE: call    eax
0x41D300: mov     [edi+1Ch], eax
0x41D303: mov     ecx, [esi+38h]
0x41D306: mov     [edi+20h], ecx
0x41D309: mov     edx, [esi+3Ch]
0x41D30C: mov     [edi+24h], edx
0x41D30F: mov     al, [esi+40h]
0x41D312: mov     [edi+28h], al
