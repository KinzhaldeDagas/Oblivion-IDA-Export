0x413F57: mov     esi, [esi+10h]
0x413F5A: mov     eax, Magic_RangeNameArray[esi*4]
0x413F61: cmp     eax, ebx
0x413F63: jz      short loc_413F69
0x413F65: mov     eax, [eax]
0x413F67: jmp     short loc_413F6B
0x413F69: xor     eax, eax
0x413F6B: push    eax
0x413F6C: mov     eax, sMagicEffectItemOn
0x413F71: push    eax
0x413F72: push    offset aSS_4; " %s %s"
0x413F77: lea     ecx, [esp+0Ch+arg_20]
0x413F7B: push    ecx
