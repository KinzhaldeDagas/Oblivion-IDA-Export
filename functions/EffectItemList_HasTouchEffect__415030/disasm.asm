0x415030: cmp     dword ptr [ecx+8], 0
0x415034: jnz     short loc_41503F
0x415036: cmp     dword ptr [ecx+4], 0
0x41503A: jnz     short loc_41503F
0x41503C: xor     al, al
0x41503E: retn
0x41503F: xor     al, al
0x415041: test    ecx, ecx
0x415043: jz      short EffectItemList_HasTouchEffect___Done
