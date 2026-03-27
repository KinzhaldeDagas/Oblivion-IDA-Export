0x5F4535: cmp     dword ptr [esi+58h], 0
0x5F4539: jz      short loc_5F4560
0x5F453B: mov     ecx, [esi+58h]
0x5F453E: mov     eax, [ecx]
0x5F4540: mov     edx, [eax+2C0h]
0x5F4546: call    edx
0x5F4548: test    ax, 800h
0x5F454C: jz      short loc_5F4560
0x5F454E: test    edi, edi
0x5F4550: jz      short loc_5F4560
0x5F4552: lea     ecx, [edi+0Ch]
0x5F4555: call    EffectItemList_HasOnTarget
0x5F455A: mov     [esp+arg_D], al
0x5F455E: jmp     short Actor_MagicCaster_IsMagicItemUseable___CheckMagickaCost
0x5F4560: mov     [esp+arg_D], 0
