0x414121: mov     eax, [edi+18h]
0x414124: cmp     eax, ebp
0x414126: jz      short loc_41412D
0x414128: mov     eax, [eax+4]
0x41412B: jmp     short loc_414133
0x41412D: mov     eax, [edi+1Ch]
0x414130: mov     eax, [eax+64h]
0x414133: mov     ecx, [esi+18h]
0x414136: fld     ds:flt_A30634
0x41413C: cmp     ecx, ebp
0x41413E: jz      short EffectItem_CopyFrom___CopySCIT_VFX
0x414140: mov     [ecx+4], eax
0x414143: fst     dword ptr [esi+20h]
