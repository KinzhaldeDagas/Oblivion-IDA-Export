0x5D4700: push    ecx
0x5D4701: push    ebx
0x5D4702: push    esi
0x5D4703: push    edi
0x5D4704: mov     edi, ecx
0x5D4706: mov     ecx, [edi+28h]
0x5D4709: xor     esi, esi
0x5D470B: xor     bl, bl
0x5D470D: push    esi
0x5D470E: add     ecx, 78h ; 'x'
0x5D4711: mov     [esp+14h+var_1], bl
0x5D4715: call    EffectItemList_GetItemByIndex2
0x5D471A: test    eax, eax
0x5D471C: jz      short loc_5D4753
0x5D471E: mov     ebx, 1
0x5D4723: mov     ecx, [edi+28h]
0x5D4726: push    esi
0x5D4727: add     ecx, 78h ; 'x'
0x5D472A: call    EffectItemList_GetItemByIndex2
0x5D472F: cmp     [eax+10h], ebx
0x5D4732: jnz     short loc_5D4738
0x5D4734: mov     [esp+10h+var_1], bl
0x5D4738: mov     ecx, [edi+28h]
0x5D473B: add     esi, ebx
0x5D473D: push    esi
0x5D473E: add     ecx, 78h ; 'x'
0x5D4741: call    EffectItemList_GetItemByIndex2
0x5D4746: test    eax, eax
0x5D4748: jnz     short loc_5D4723
0x5D474A: mov     al, [esp+10h+var_1]
0x5D474E: pop     edi
0x5D474F: pop     esi
0x5D4750: pop     ebx
0x5D4751: pop     ecx
0x5D4752: retn
0x5D4753: pop     edi
0x5D4754: pop     esi
0x5D4755: mov     al, bl
0x5D4757: pop     ebx
0x5D4758: pop     ecx
0x5D4759: retn
