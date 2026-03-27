0x419060: mov     eax, [esp+arg_0]
0x419064: push    esi
0x419065: push    0; int
0x419067: push    offset ??_R0?AVEnchantmentItem@@@8; struct TypeDescriptor *
0x41906C: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x419071: push    0; int
0x419073: push    eax; void *
0x419074: mov     esi, ecx
0x419076: call    OblivionDynamicCast
0x41907B: add     esp, 14h
0x41907E: test    eax, eax
0x419080: jz      short EnchantmentItem_MagicItem_CopyData___Done
0x419082: mov     ecx, [eax+38h]
0x419085: mov     [esi+20h], ecx
0x419088: mov     edx, [eax+3Ch]
0x41908B: mov     [esi+24h], edx
0x41908E: mov     ecx, [eax+34h]
0x419091: mov     [esi+1Ch], ecx
0x419094: mov     dl, [eax+40h]
0x419097: mov     [esi+28h], dl
