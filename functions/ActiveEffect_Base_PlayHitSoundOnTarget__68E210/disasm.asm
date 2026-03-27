0x68E210: sub     esp, 10h
0x68E213: push    ebp
0x68E214: push    esi
0x68E215: mov     esi, ecx
0x68E217: mov     eax, [esi+0Ch]
0x68E21A: mov     ecx, [eax+1Ch]
0x68E21D: mov     eax, [ecx+88h]
0x68E223: test    eax, eax
0x68E225: jz      short loc_68E22C
0x68E227: mov     ebp, [eax+0Ch]
0x68E22A: jmp     short loc_68E22E
0x68E22C: xor     ebp, ebp
0x68E22E: test    ebp, ebp
0x68E230: jz      ActiveEffect_Base_PlayHitSoundOnTarget___Done_
