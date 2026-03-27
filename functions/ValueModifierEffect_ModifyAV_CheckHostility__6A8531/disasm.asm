0x6A8531: mov     ecx, [esi+0Ch]
0x6A8534: cmp     dword ptr [ecx+10h], 0
0x6A8538: jz      short loc_6A8543
0x6A853A: call    EffectItem_IsHostile
0x6A853F: test    al, al
0x6A8541: jnz     short loc_6A8545
0x6A8543: xor     ebx, ebx
0x6A8545: mov     eax, [esi+0Ch]
0x6A8548: mov     ecx, [eax+1Ch]
0x6A854B: mov     edx, [ecx+58h]
0x6A854E: shr     edx, 1
0x6A8550: test    dl, 1
0x6A8553: jz      short ValueModifierEffect_ModifyAV___CalcEffectiveMagnitude
