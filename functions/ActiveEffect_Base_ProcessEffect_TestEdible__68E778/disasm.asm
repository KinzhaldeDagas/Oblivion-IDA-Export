0x68E778: test    edi, edi
0x68E77A: jz      short loc_68E785
0x68E77C: mov     al, [edi+7Ch]
0x68E77F: shr     al, 1
0x68E781: and     al, 1
0x68E783: jmp     short loc_68E78E
0x68E785: test    ecx, ecx
0x68E787: jz      short ActiveEffect_Base_ProcessEffect___TestMenuMode
0x68E789: call    AlchemyItem_IsEdible
0x68E78E: test    al, al
0x68E790: jnz     short ActiveEffect_Base_ProcessEffect___UpdateHUDActiveEffectList_
