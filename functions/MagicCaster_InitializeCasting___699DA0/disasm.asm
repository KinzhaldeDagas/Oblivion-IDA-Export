0x699DA0: push    ebx
0x699DA1: push    esi
0x699DA2: mov     esi, ecx
0x699DA4: mov     eax, [esi]
0x699DA6: mov     edx, [eax+20h]
0x699DA9: push    edi
0x699DAA: call    edx
0x699DAC: test    eax, eax
0x699DAE: jz      short loc_699DC5
0x699DB0: mov     edx, [eax]
0x699DB2: mov     ecx, eax
0x699DB4: mov     eax, [edx+190h]
0x699DBA: call    eax
0x699DBC: test    al, al
0x699DBE: jz      short loc_699DC5
0x699DC0: lea     eax, [esi-5Ch]
0x699DC3: jmp     short loc_699DC7
0x699DC5: xor     eax, eax
0x699DC7: xor     bl, bl
0x699DC9: test    eax, eax
0x699DCB: jz      short MagicCaster_InitializeCasting???___GetMagicItem
0x699DCD: mov     edx, [eax+5Ch]
0x699DD0: lea     ecx, [eax+5Ch]
0x699DD3: mov     eax, [edx+24h]
0x699DD6: call    eax
0x699DD8: test    eax, eax
0x699DDA: jz      short MagicCaster_InitializeCasting???___CleanupCastingVFX
0x699DDC: cmp     word ptr [eax+0B8h], 0
0x699DE4: jbe     short MagicCaster_InitializeCasting???___CleanupCastingVFX
0x699DE6: lea     ecx, [eax+0ACh]
0x699DEC: mov     bl, 1
0x699DEE: call    sub_477EF0
