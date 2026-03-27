0x68E69C: mov     ecx, [esi+20h]
0x68E69F: fstp    st
0x68E6A1: mov     eax, [ecx]
0x68E6A3: mov     edx, [eax+4]
0x68E6A6: call    edx
0x68E6A8: cmp     eax, ds:0B333C4h
0x68E6AE: jnz     short ActiveEffect_Base_ProcessEffect___PlayHitSound
0x68E6B0: call    InterfaceManager_IsMenuMode
0x68E6B5: test    al, al
0x68E6B7: jz      short ActiveEffect_Base_ProcessEffect___PlayHitSound
0x68E6B9: or      dword ptr [esi+14h], 20h
0x68E6BD: jmp     short ActiveEffect_Base_ProcessEffect___ApplyEffect
