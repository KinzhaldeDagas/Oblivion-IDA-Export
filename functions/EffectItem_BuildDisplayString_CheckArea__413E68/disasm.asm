0x413E68: cmp     ebp, 1
0x413E6B: jz      EffectItem_BuildDisplayString___Done
0x413E71: mov     eax, [esi+1Ch]
0x413E74: mov     ecx, [eax+58h]
0x413E77: shr     ecx, 9
0x413E7A: test    cl, 1
0x413E7D: jnz     short EffectItem_BuildDisplayString___CheckDuration
0x413E7F: mov     edx, [eax+58h]
0x413E82: shr     edx, 9
0x413E85: test    dl, 1
0x413E88: jnz     short EffectItem_BuildDisplayString___CheckDuration
0x413E8A: cmp     [esi+10h], ebx
0x413E8D: jz      short EffectItem_BuildDisplayString___CheckDuration
0x413E8F: cmp     [esi+8], ebx
0x413E92: jle     short EffectItem_BuildDisplayString___CheckDuration
