0x413DBE: mov     ecx, [eax+58h]
0x413DC1: shr     ecx, 1Eh
0x413DC4: test    cl, 1
0x413DC7: jz      short EffectItem_BuildDisplayString___FeetMagnitude
0x413DC9: mov     ecx, offset fMagicLevelMagnitudeMult
0x413DCE: call    GameSetting_GetSafeFloatPointer
0x413DD3: fild    [esp+arg_10]
0x413DD7: fmul    dword ptr [eax]
0x413DD9: call    Double_To_SInt32
0x413DDE: mov     edx, sMagicEffectItemUpToLevel
0x413DE4: push    eax
0x413DE5: push    edx
0x413DE6: push    offset aSD_2; " %s %d"
0x413DEB: lea     eax, [esp+0Ch+arg_20]
0x413DEF: push    eax
0x413DF0: jmp     short EffectItem_BuildDisplayString___ConcatMagnitude
