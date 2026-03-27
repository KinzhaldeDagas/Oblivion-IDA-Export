0x502059: mov     ecx, [esp+arg_C]
0x50205D: add     ecx, 0Ch
0x502060: call    EffectItemList_HasTouchEffect
0x502065: test    al, al
0x502067: jz      short Cmd_Cast___CastOnSelf
