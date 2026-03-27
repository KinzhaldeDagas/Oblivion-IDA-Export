0x5FC8A3: mov     eax, [edi-5Ch]
0x5FC8A6: mov     edx, [eax+284h]
0x5FC8AC: push    ebp
0x5FC8AD: lea     ebp, [edi-5Ch]
0x5FC8B0: push    2Fh ; '/'
0x5FC8B2: mov     ecx, ebp
0x5FC8B4: call    edx
0x5FC8B6: test    eax, eax
0x5FC8B8: jle     short Actor_MagicCaster_ApplyMagicItemCost___UpdateAI?
0x5FC8BA: push    esi
0x5FC8BB: push    49564E49h
0x5FC8C0: lea     ecx, [edi+0Ch]
0x5FC8C3: call    MagicTarget_RemoveEffectsFromOtherItems
