0x4152F0: mov     esi, [ebp+4]
0x4152F3: push    0
0x4152F5: mov     ecx, esi
0x4152F7: call    EffectItem_MagickaCostForCaster
0x4152FC: call    Double_To_SInt32
0x415301: mov     edi, eax
0x415303: mov     eax, [esi+1Ch]
0x415306: mov     ecx, [eax+58h]
0x415309: shr     ecx, 16h
0x41530C: test    cl, 1
0x41530F: jnz     short EffectItemList_GetStrongestItem___LoopContinue
0x415311: cmp     edi, ebx
0x415313: jle     short EffectItemList_GetStrongestItem___LoopContinue
