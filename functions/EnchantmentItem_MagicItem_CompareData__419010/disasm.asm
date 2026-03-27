0x419010: mov     eax, [esp+arg_0]
0x419014: push    esi
0x419015: push    0; int
0x419017: push    offset ??_R0?AVEnchantmentItem@@@8; struct TypeDescriptor *
0x41901C: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x419021: push    0; int
0x419023: push    eax; void *
0x419024: mov     esi, ecx
0x419026: call    OblivionDynamicCast
0x41902B: add     esp, 14h
0x41902E: test    eax, eax
0x419030: jz      short EnchantmentItem_MagicItem_CompareData___Return_1
0x419032: mov     ecx, [eax+38h]
0x419035: cmp     ecx, [esi+20h]
0x419038: jnz     short EnchantmentItem_MagicItem_CompareData___Return_1
0x41903A: mov     edx, [eax+3Ch]
0x41903D: cmp     edx, [esi+24h]
0x419040: jnz     short EnchantmentItem_MagicItem_CompareData___Return_1
0x419042: mov     ecx, [eax+34h]
0x419045: cmp     ecx, [esi+1Ch]
0x419048: jnz     short EnchantmentItem_MagicItem_CompareData___Return_1
0x41904A: mov     dl, [eax+40h]
0x41904D: cmp     dl, [esi+28h]
0x419050: jnz     short EnchantmentItem_MagicItem_CompareData___Return_1
0x419052: xor     al, al
0x419054: pop     esi
0x419055: retn    4
