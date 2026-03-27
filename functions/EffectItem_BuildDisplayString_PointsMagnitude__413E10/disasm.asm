0x413E10: cmp     edx, 1
0x413E13: mov     eax, sMagicEffectItemPointsSingular
0x413E18: jz      short loc_413E1F
0x413E1A: mov     eax, sMagicEffectItemPointsPlural
0x413E1F: push    eax
0x413E20: push    edx
0x413E21: push    offset aDS; " %d %s"
0x413E26: jmp     short loc_413E4F
