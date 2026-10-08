0x68E6C6: mov     eax, [esi]; Verified ActiveEffect dispatcher slot: after Apply-condition checks, calls the current effect object's vtable +0x38. LockEffect_vftable[14] points to LockEffect_Apply; OpenEffect_vftable[14] points to OpenEffect_ApplyEffect. This is the per-effect application call inside ActiveEffect_Base_ProcessEffect.
0x68E6C8: mov     edx, [eax+38h]
0x68E6CB: mov     ecx, esi
0x68E6CD: call    edx
