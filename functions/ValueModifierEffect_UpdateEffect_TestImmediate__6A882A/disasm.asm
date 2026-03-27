0x6A882A: mov     ecx, esi
0x6A882C: call    ActiveEffect_Base_IsBoundObjWearable
0x6A8831: test    al, al
0x6A8833: jnz     short ValueModifierEffect_UpdateEffect___ApplyEffect
0x6A8835: fldz
0x6A8837: fcomp   dword ptr [esi+1Ch]
0x6A883A: fnstsw  ax
0x6A883C: test    ah, 5
0x6A883F: jnp     short ValueModifierEffect_UpdateEffect___ApplyEffect
0x6A8841: cmp     dword ptr [esi+28h], 4
0x6A8845: jnz     short ValueModifierEffect_UpdateEffect___Done_
