0x5F4679: cmp     dword ptr [ebp+8], 0
0x5F467D: jnz     short loc_5F4685
0x5F467F: cmp     dword ptr [ebp+4], 0
0x5F4683: jz      short Actor_MagicCaster_IsMagicItemUseable___SetFailureCode
0x5F4685: test    bl, bl
0x5F4687: jnz     short Actor_MagicCaster_IsMagicItemUseable___SetFailureCode
0x5F4689: mov     edi, [ebp+4]
0x5F468C: test    edi, edi
0x5F468E: jz      short Actor_MagicCaster_IsMagicItemUseable___EffectLoop_Next
0x5F4690: mov     eax, [edi+1Ch]
0x5F4693: test    dword ptr [eax+58h], 30000h
0x5F469A: jz      short Actor_MagicCaster_IsMagicItemUseable___EffectLoop_Next
0x5F469C: mov     ecx, [esp+arg_14]
0x5F46A0: mov     edx, [ecx+0Ch]
0x5F46A3: mov     eax, [edx+8]
0x5F46A6: add     ecx, 0Ch
0x5F46A9: call    eax
0x5F46AB: mov     esi, eax
0x5F46AD: test    esi, esi
0x5F46AF: jz      short Actor_MagicCaster_IsMagicItemUseable___EffectLoop_Next
