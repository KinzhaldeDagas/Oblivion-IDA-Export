0x68E8C9: mov     eax, [esi+14h]
0x68E8CC: shr     eax, 5
0x68E8CF: test    al, 1
0x68E8D1: jz      short ActiveEffect_Base_ProcessEffect___UpdateEffect; Verified periodic update dispatch: when this effect's update condition is met, ActiveEffect_Base_ProcessEffect calls vtable +0x08 with elapsed-time data. LockEffect/OpenEffect use the shared null implementation at this slot, so their lock changes occur through Apply (+0x38), not the periodic update override.
0x68E8D3: mov     ecx, esi
0x68E8D5: call    ActiveEffect_Base_PlayHitSoundOnTarget
0x68E8DA: and     dword ptr [esi+14h], 0FFFFFFDFh
