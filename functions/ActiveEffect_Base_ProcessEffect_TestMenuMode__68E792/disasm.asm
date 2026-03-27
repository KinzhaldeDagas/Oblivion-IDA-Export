0x68E792: mov     ecx, [esi+20h]
0x68E795: mov     edx, [ecx]
0x68E797: mov     eax, [edx+4]
0x68E79A: call    eax
0x68E79C: cmp     eax, ds:0B333C4h
0x68E7A2: jnz     short ActiveEffect_Base_ProcessEffect___ClearHitEffectList
0x68E7A4: call    InterfaceManager_IsMenuMode
0x68E7A9: test    al, al
0x68E7AB: jz      short ActiveEffect_Base_ProcessEffect___ClearHitEffectList
0x68E7AD: or      dword ptr [esi+14h], 40h
0x68E7B1: jmp     short ActiveEffect_Base_ProcessEffect___UpdateHUDActiveEffectList_
