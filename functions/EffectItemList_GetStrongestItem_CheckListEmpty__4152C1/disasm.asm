0x4152C1: cmp     dword ptr [ecx+8], 0
0x4152C5: push    ebp
0x4152C6: mov     dword ptr [esp+4], 0
0x4152CE: mov     ebp, ecx
0x4152D0: jnz     short EffectItemList_GetStrongestItem___EffectsLoop
0x4152D2: cmp     dword ptr [ecx+4], 0
0x4152D6: jnz     short EffectItemList_GetStrongestItem___EffectsLoop
0x4152D8: xor     eax, eax
0x4152DA: pop     ebp
0x4152DB: pop     ecx
0x4152DC: retn    8
