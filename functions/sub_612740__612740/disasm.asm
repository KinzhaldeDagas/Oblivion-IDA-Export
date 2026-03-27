0x612740: mov     eax, [esp+arg_0]
0x612744: mov     ecx, [eax]
0x612746: add     ecx, 0Ch
0x612749: call    EffectItemList_MagickaCost
0x61274E: fstp    [esp+arg_0]
0x612752: mov     ecx, [esp+arg_4]
0x612756: mov     ecx, [ecx]
0x612758: add     ecx, 0Ch
0x61275B: call    EffectItemList_MagickaCost
0x612760: fstp    [esp+arg_4]
0x612764: fld     [esp+arg_0]
0x612768: fld     [esp+arg_4]
0x61276C: fcom    st(1)
0x61276E: fnstsw  ax
0x612770: test    ah, 5
0x612773: jp      short loc_61277D
0x612775: fstp    st(1)
0x612777: or      eax, 0FFFFFFFFh
0x61277A: fstp    st
0x61277C: retn
0x61277D: fcompp
0x61277F: fnstsw  ax
0x612781: test    ah, 41h
0x612784: jnz     short loc_61278C
0x612786: mov     eax, 1
0x61278B: retn
0x61278C: xor     eax, eax
0x61278E: retn
