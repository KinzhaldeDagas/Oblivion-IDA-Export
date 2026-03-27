0x419BB0: mov     esi, [edi+4]
0x419BB3: push    0
0x419BB5: mov     ecx, esi
0x419BB7: call    EffectItem_MagickaCostForCaster
0x419BBC: call    Double_To_SInt32
0x419BC1: mov     edx, [esi+1Ch]
0x419BC4: mov     edx, [edx+58h]
0x419BC7: mov     ecx, [esi+10h]
0x419BCA: shr     edx, 16h
0x419BCD: test    dl, 1
0x419BD0: jnz     short loc_419BE6
0x419BD2: cmp     ecx, ebp
0x419BD4: jg      short MagicItem_GetFXEffect___EffectLoop_Accept
0x419BD6: jnz     short loc_419BE6
0x419BD8: cmp     eax, ebx
0x419BDA: jle     short loc_419BE6
