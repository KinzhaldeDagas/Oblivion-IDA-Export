0x6A5B96: mov     esi, [eax+4]
0x6A5B99: test    esi, esi
0x6A5B9B: jnz     short loc_6A5BA1
0x6A5B9D: cmp     [eax], esi
0x6A5B9F: jz      short loc_6A5BDC
0x6A5BA1: mov     edx, [eax]
0x6A5BA3: mov     eax, [edx+0Ch]
0x6A5BA6: mov     eax, [eax+1Ch]
0x6A5BA9: mov     eax, [eax+58h]
0x6A5BAC: test    eax, 70000h
0x6A5BB1: jz      short SummonCreatureEffect_DispelOtherSummons___EffectLoop_Next
0x6A5BB3: shr     eax, 12h
0x6A5BB6: test    al, 1
0x6A5BB8: jz      short SummonCreatureEffect_DispelOtherSummons___EffectLoop_Next
0x6A5BBA: fld     dword ptr [edx+4]
0x6A5BBD: add     edi, 1
0x6A5BC0: fld     [esp+arg_4]
0x6A5BC4: fcompp
0x6A5BC6: fnstsw  ax
0x6A5BC8: test    ah, 5
0x6A5BCB: jp      short SummonCreatureEffect_DispelOtherSummons___EffectLoop_Next
0x6A5BCD: fld     dword ptr [edx+4]
0x6A5BD0: mov     ecx, edx
0x6A5BD2: fstp    [esp+arg_4]
