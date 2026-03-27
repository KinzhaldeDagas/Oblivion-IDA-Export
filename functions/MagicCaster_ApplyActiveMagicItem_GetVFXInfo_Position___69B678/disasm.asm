0x69B678: test    edi, edi
0x69B67A: jz      MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B680: mov     eax, [esp+arg_14]
0x69B684: test    eax, eax
0x69B686: jz      short loc_69B6A5
0x69B688: cmp     [esp+arg_78], 0
0x69B68D: jnz     short loc_69B6A5
0x69B68F: mov     edx, [eax+5Ch]
0x69B692: lea     ecx, [eax+5Ch]
0x69B695: mov     eax, [edx+24h]
0x69B698: call    eax
0x69B69A: test    eax, eax
0x69B69C: jz      short loc_69B6A5
0x69B69E: add     eax, 88h ; 'ˆ'
0x69B6A3: jmp     short MagicCaster_ApplyActiveMagicItem___AOE_VFX?
0x69B6A5: mov     edx, [edi]
0x69B6A7: mov     eax, [edx+174h]
0x69B6AD: mov     ecx, edi
0x69B6AF: call    eax
