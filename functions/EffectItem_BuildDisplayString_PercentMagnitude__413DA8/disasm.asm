0x413DA8: mov     eax, sMagicEffectItemPercent
0x413DAD: push    eax
0x413DAE: push    edx
0x413DAF: push    offset aDS; " %d %s"
0x413DB4: lea     ecx, [esp+0Ch+arg_20]
0x413DB8: push    ecx
0x413DB9: jmp     EffectItem_BuildDisplayString___ConcatMagnitude
