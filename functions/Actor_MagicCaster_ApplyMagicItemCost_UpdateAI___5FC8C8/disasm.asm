0x5FC8C8: mov     eax, [ebp+0]
0x5FC8CB: mov     edx, [eax+330h]
0x5FC8D1: mov     ecx, ebp
0x5FC8D3: call    edx
0x5FC8D5: test    eax, eax
0x5FC8D7: jz      short Actor_MagicCaster_ApplyMagicItemCost___GetMagickaCost
0x5FC8D9: mov     eax, [ebp+0]
0x5FC8DC: mov     edx, [eax+330h]
0x5FC8E2: push    esi
0x5FC8E3: mov     ecx, ebp
0x5FC8E5: call    edx
0x5FC8E7: mov     ecx, eax
0x5FC8E9: call    CombatController_ApplyMagicItemCosts??
