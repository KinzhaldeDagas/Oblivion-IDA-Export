0x413DF2: mov     ecx, [eax+58h]
0x413DF5: shr     ecx, 1Fh
0x413DF8: test    cl, 1
0x413DFB: jz      short EffectItem_BuildDisplayString___PointsMagnitude
0x413DFD: mov     eax, sMagicEffectItemFeet
0x413E02: push    eax
0x413E03: push    edx
0x413E04: push    offset aDS; " %d %s"
0x413E09: lea     ecx, [esp+0Ch+arg_20]
0x413E0D: push    ecx
0x413E0E: jmp     short EffectItem_BuildDisplayString___ConcatMagnitude
