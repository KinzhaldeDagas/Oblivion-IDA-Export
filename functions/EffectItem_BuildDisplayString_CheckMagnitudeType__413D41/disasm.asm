0x413D41: mov     ebp, [esp+arg_9C]
0x413D48: cmp     ebp, 8
0x413D4B: jz      EffectItem_BuildDisplayString___Done
0x413D51: mov     eax, [esi+1Ch]
0x413D54: mov     edx, [eax+58h]
0x413D57: shr     edx, 8
0x413D5A: test    dl, 1
0x413D5D: jnz     EffectItem_BuildDisplayString___CheckArea
0x413D63: mov     ecx, [eax+58h]
0x413D66: shr     ecx, 8
0x413D69: test    cl, 1
0x413D6C: jnz     EffectItem_BuildDisplayString___CheckArea
0x413D72: mov     ecx, [esi+4]
0x413D75: cmp     ecx, ebx
0x413D77: jz      EffectItem_BuildDisplayString___CheckArea
0x413D7D: mov     edx, ecx
0x413D7F: mov     ecx, [esi]
0x413D81: cmp     ecx, 4E45504Fh
0x413D87: mov     [esp+arg_10], edx
0x413D8B: jz      EffectItem_BuildDisplayString___LockMagnitude
0x413D91: cmp     ecx, 4B434F4Ch
0x413D97: jz      EffectItem_BuildDisplayString___LockMagnitude
0x413D9D: mov     ecx, [eax+58h]
0x413DA0: shr     ecx, 3
0x413DA3: test    cl, 1
0x413DA6: jz      short EffectItem_BuildDisplayString___LevelMagnitude
