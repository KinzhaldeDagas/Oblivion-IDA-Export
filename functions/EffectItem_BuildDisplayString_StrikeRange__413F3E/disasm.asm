0x413F3E: mov     eax, sMagicRangeStrike
0x413F43: mov     ecx, sMagicEffectItemOn
0x413F49: push    eax
0x413F4A: push    ecx
0x413F4B: push    offset aSS_4; " %s %s"
0x413F50: lea     edx, [esp+0Ch+arg_20]
0x413F54: push    edx
0x413F55: jmp     short EffectItem_BuildDisplayString___AppendRange
