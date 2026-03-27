0x69B549: test    cl, cl
0x69B54B: jnz     MagicCaster_ApplyActiveMagicItem___EffectLoop_DestroyActvEff
0x69B551: cmp     [esp+arg_28], 0
0x69B556: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_DestroyActvEff
0x69B558: mov     ecx, [esp+arg_28]
0x69B55C: test    byte ptr [ecx+40h], 80h
0x69B560: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_DestroyActvEff
0x69B562: mov     ecx, ebp
0x69B564: call    EffectItem_GetArea
0x69B569: test    eax, eax
0x69B56B: jle     short MagicCaster_ApplyActiveMagicItem___EffectLoop_DestroyActvEff
0x69B56D: mov     ebp, [esp+arg_14]
0x69B571: test    ebp, ebp
0x69B573: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_DestroyActvEff
0x69B575: mov     edx, [ebp+0]
0x69B578: mov     eax, [edx+174h]
0x69B57E: mov     ecx, ebp
0x69B580: mov     byte ptr [esp+anonymous_0+2], 0
0x69B585: call    eax
0x69B587: fld1
0x69B589: push    ecx
0x69B58A: fstp    [esp+4+var_4]
0x69B58D: lea     ecx, [esp+4+anonymous_0+2]
0x69B591: push    ecx
0x69B592: lea     edx, [esp+8+arg_44]
0x69B596: push    edx
0x69B597: mov     edx, [eax]
0x69B599: push    0
0x69B59B: push    0
0x69B59D: sub     esp, 0Ch
0x69B5A0: mov     ecx, esp
0x69B5A2: mov     [ecx], edx
0x69B5A4: mov     edx, [eax+4]
0x69B5A7: mov     eax, [eax+8]
0x69B5AA: mov     [ecx+4], edx
0x69B5AD: mov     [ecx+8], eax
0x69B5B0: mov     ecx, ebp
