0x68E69C: mov     ecx, [esi+20h]
0x68E69F: fstp    st
0x68E6A1: mov     eax, [ecx]
0x68E6A3: mov     edx, [eax+4]
0x68E6A6: call    edx
0x68E6A8: cmp     eax, ds:0B333C4h
0x68E6AE: jnz     short ActiveEffect_Base_ProcessEffect___PlayHitSound
0x68E6B0: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x68E6B5: test    al, al
0x68E6B7: jz      short ActiveEffect_Base_ProcessEffect___PlayHitSound
0x68E6B9: or      dword ptr [esi+14h], 20h
0x68E6BD: jmp     short ActiveEffect_Base_ProcessEffect___ApplyEffect; Verified ActiveEffect dispatcher slot: after Apply-condition checks, calls the current effect object's vtable +0x38. LockEffect_vftable[14] points to LockEffect_Apply; OpenEffect_vftable[14] points to OpenEffect_ApplyEffect. This is the per-effect application call inside ActiveEffect_Base_ProcessEffect.
