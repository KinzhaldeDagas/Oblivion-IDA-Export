0x413EEE: mov     ecx, esi
0x413EF0: call    EffectItem_GetDuration
0x413EF5: cmp     eax, 1
0x413EF8: mov     ecx, sMagicEffectItemSecondsSingular
0x413EFE: jz      short loc_413F06
0x413F00: mov     ecx, sMagicEffectItemSecondsPlural
0x413F06: push    ecx
0x413F07: push    eax
0x413F08: mov     eax, sMagicEffectItemFor
0x413F0D: push    eax
0x413F0E: lea     ecx, [esp+0Ch+arg_20]
0x413F12: push    offset aSDS; " %s %d %s"
0x413F17: push    ecx
0x413F18: call    __sprintf
0x413F1D: add     esp, 14h
0x413F20: lea     edx, [esp+arg_20]
0x413F24: push    edx
0x413F25: mov     ecx, edi
0x413F27: call    BSStringT_Append
