0x68E877: mov     edx, [ecx]
0x68E879: mov     eax, [edx+4]
0x68E87C: call    eax
0x68E87E: cmp     eax, ds:0B333C4h
0x68E884: jnz     short ActiveEffect_Base_ProcessEffect___UpdateEffect
0x68E886: call    InterfaceManager_IsMenuMode
0x68E88B: test    al, al
0x68E88D: jnz     short ActiveEffect_Base_ProcessEffect___UpdateEffect
0x68E88F: mov     ecx, [esi+14h]
0x68E892: shr     ecx, 6
0x68E895: test    cl, 1
0x68E898: jz      short ActiveEffect_Base_ProcessEffect___ProcessQueuedSoundFX
0x68E89A: mov     ecx, [esi+34h]
