0x41416A: mov     ecx, [edi+1Ch]
0x41416D: mov     al, [ecx+58h]
0x414170: and     al, 1
0x414172: mov     ecx, [esi+18h]
0x414175: cmp     ecx, ebp
0x414177: jz      short EffectItem_CopyFrom___Done
0x414179: mov     [ecx+14h], al
