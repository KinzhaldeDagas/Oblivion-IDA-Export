0x5F46BC: test    bl, bl
0x5F46BE: jnz     short Actor_MagicCaster_IsMagicItemUseable___EffectLoop_Next
0x5F46C0: mov     eax, [esi]
0x5F46C2: test    eax, eax
0x5F46C4: jz      short Actor_MagicCaster_IsMagicItemUseable___ActvEffLoop_Next
0x5F46C6: mov     eax, [eax+0Ch]
0x5F46C9: mov     ecx, [eax+1Ch]
0x5F46CC: test    dword ptr [ecx+58h], 30000h
0x5F46D3: jz      short Actor_MagicCaster_IsMagicItemUseable___ActvEffLoop_Next
0x5F46D5: push    eax
0x5F46D6: push    edi
0x5F46D7: call    Magic_BoundItemSlotOverlap
0x5F46DC: add     esp, 8
0x5F46DF: mov     bl, al
