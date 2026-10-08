0x68DBE5: mov     esi, [ebp+34h]; Verified SaveHitEffectList serializes the HitEffectNode chain at ActiveEffect+0x34. Each node's BSTempEffect reports a type byte through vtable +0x54 and writes type-specific payload through +0x78; the loop increments a byte count. This data is present only from save version 0x2A.
0x68DBE8: cmp     esi, edi
0x68DBEA: jz      short ActiveEffect_Base_SaveEffect___DoneDataList
0x68DBEC: push    ebx
0x68DBED: mov     ebx, [esp+4+arg_20]
