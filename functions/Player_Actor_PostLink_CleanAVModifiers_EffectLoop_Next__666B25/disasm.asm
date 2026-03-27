0x666B25: mov     edi, [edi+4]
0x666B28: test    edi, edi
0x666B2A: jnz     Player_Actor_PostLink_CleanAVModifiers___EffectLoop_Test
0x666B30: lea     edi, [ebp+204h]
0x666B36: mov     ecx, 48h ; 'H'
0x666B3B: lea     esi, [esp+arg_8]
0x666B3F: rep movsd
0x666B41: pop     edi
0x666B42: pop     esi
0x666B43: pop     ebp
0x666B44: add     esp, 120h
0x666B4A: retn
