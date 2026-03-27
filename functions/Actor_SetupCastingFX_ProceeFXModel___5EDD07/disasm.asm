0x5EDD07: mov     ecx, [esp+arg_24]
0x5EDD0B: xor     ebp, ebp
0x5EDD0D: xor     edi, edi
0x5EDD0F: test    ecx, ecx
0x5EDD11: mov     [esp+arg_10], ebp
0x5EDD15: jz      short Actor_SetupCastingFX?___ProcessMagicCasterFX
0x5EDD17: push    edi
0x5EDD18: call    MagicItem_GetFXEffect
0x5EDD1D: mov     edi, eax
0x5EDD1F: test    edi, edi
0x5EDD21: jz      short Actor_SetupCastingFX?___ProcessMagicCasterFX
0x5EDD23: movzx   eax, word ptr [edi+20h]
0x5EDD27: cmp     ax, 0FFFFh
0x5EDD2B: jnz     short loc_5EDD40
0x5EDD2D: mov     eax, [edi+1Ch]
0x5EDD30: lea     edx, [eax+1]
0x5EDD33: mov     cl, [eax]
0x5EDD35: add     eax, 1
0x5EDD38: test    cl, cl
0x5EDD3A: jnz     short loc_5EDD33
0x5EDD3C: sub     eax, edx
0x5EDD3E: jmp     short loc_5EDD43
0x5EDD40: movzx   eax, ax
0x5EDD43: test    eax, eax
0x5EDD45: jbe     short Actor_SetupCastingFX?___ProcessMagicCasterFX
0x5EDD47: push    edi
0x5EDD48: call    sub_69FD20
0x5EDD4D: add     esp, 4
0x5EDD50: mov     [esp+arg_10], eax
0x5EDD54: mov     ebp, eax
