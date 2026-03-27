0x59FE30: mov     eax, [ecx+78h]
0x59FE33: test    eax, eax
0x59FE35: push    esi
0x59FE36: jz      short loc_59FE3D
0x59FE38: mov     ecx, [eax+74h]
0x59FE3B: jmp     short loc_59FE47
0x59FE3D: mov     eax, [ecx+7Ch]
0x59FE40: test    eax, eax
0x59FE42: jz      short loc_59FE68
0x59FE44: mov     ecx, [eax+28h]
0x59FE47: mov     esi, [esp+4+arg_0]
0x59FE4B: push    esi
0x59FE4C: add     ecx, 24h ; '$'
0x59FE4F: call    EffectItemList_RemoveItem
0x59FE54: test    esi, esi
0x59FE56: jz      short loc_59FE68
0x59FE58: mov     ecx, esi
0x59FE5A: call    EffectItem_destr
0x59FE5F: push    esi
0x59FE60: call    FormHeapFree
0x59FE65: add     esp, 4
0x59FE68: pop     esi
0x59FE69: retn    4
