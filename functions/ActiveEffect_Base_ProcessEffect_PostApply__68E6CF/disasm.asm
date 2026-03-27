0x68E6CF: cmp     byte ptr [esi+11h], 0
0x68E6D3: jnz     ActiveEffect_Base_ProcessEffect___TestUpdate_
0x68E6D9: cmp     byte ptr [esi+12h], 0
0x68E6DD: jnz     ActiveEffect_Base_ProcessEffect___TestUpdate_
0x68E6E3: test    byte ptr [esi+14h], 1
0x68E6E7: jnz     ActiveEffect_Base_ProcessEffect___UpdateHUDActiveEffectList
0x68E6ED: mov     eax, [esi+0Ch]
0x68E6F0: mov     eax, [eax+1Ch]
0x68E6F3: mov     ecx, [eax+58h]
0x68E6F6: shr     ecx, 1Bh
0x68E6F9: test    cl, 1
0x68E6FC: jnz     ActiveEffect_Base_ProcessEffect___UpdateHUDActiveEffectList
