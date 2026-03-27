0x69B8FF: cmp     [esp+arg_1C], 0
0x69B904: jz      short MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B906: mov     ecx, [esp+arg_1C]
0x69B90A: mov     edx, [ecx]
0x69B90C: mov     eax, [edx+190h]
0x69B912: call    eax
0x69B914: test    al, al
0x69B916: jz      short MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B918: mov     edi, [esp+arg_38]
0x69B91C: test    edi, edi
0x69B91E: jz      short MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B920: mov     ecx, [edi+1Ch]
0x69B923: mov     edx, [ecx+58h]
0x69B926: shr     edx, 1Dh
0x69B929: test    dl, 1
0x69B92C: jz      short MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B92E: mov     eax, [esi]
0x69B930: mov     edx, [eax+30h]
0x69B933: mov     ecx, esi
0x69B935: call    edx
0x69B937: push    eax
0x69B938: mov     eax, [esp+4+arg_1C]
0x69B93C: add     eax, 68h ; 'h'
0x69B93F: push    eax
0x69B940: mov     ecx, esi
0x69B942: call    sub_699EB0
0x69B947: test    al, al
0x69B949: jz      short MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B94B: mov     ecx, edi
0x69B94D: call    EffectItem_MagickaCost
0x69B952: mov     edx, [esp+arg_1C]
0x69B956: push    ecx
0x69B957: mov     ecx, [esp+4+arg_60]
0x69B95B: fstp    [esp+4+var_4]; float
0x69B95E: push    edi; int
0x69B95F: sub     esp, 0Ch
0x69B962: mov     eax, esp
0x69B964: mov     [eax], ebp
0x69B966: mov     [eax+4], ebx
0x69B969: mov     [eax+8], ecx
0x69B96C: push    edx; int
0x69B96D: mov     ecx, esi
0x69B96F: call    sub_699900
