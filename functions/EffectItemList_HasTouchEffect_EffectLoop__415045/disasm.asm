0x415045: test    al, al
0x415047: jnz     short EffectItemList_HasTouchEffect___Done
0x415049: mov     edx, [ecx+4]
0x41504C: test    edx, edx
0x41504E: jz      short EffectItemList_HasTouchEffect___EffectLoop_Next
0x415050: cmp     dword ptr [edx+10h], 1
0x415054: jnz     short EffectItemList_HasTouchEffect___EffectLoop_Next
0x415056: mov     edx, [edx+1Ch]
0x415059: mov     edx, [edx+58h]
0x41505C: shr     edx, 16h
0x41505F: test    dl, 1
0x415062: jnz     short EffectItemList_HasTouchEffect___EffectLoop_Next
0x415064: mov     al, 1
