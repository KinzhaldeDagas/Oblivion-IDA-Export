0x4190A0: test    byte ptr [ecx+1Ch], 1
0x4190A4: jz      short loc_4190AC
0x4190A6: fild    dword ptr [ecx+18h]
0x4190A9: retn    4
0x4190AC: mov     [esp+arg_0], 0
0x4190B4: jmp     EffectItemList_MagickaCostForCaster
