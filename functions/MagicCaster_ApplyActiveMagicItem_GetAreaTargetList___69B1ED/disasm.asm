0x69B1ED: cmp     ebx, ebp
0x69B1EF: jz      short loc_69B1F7
0x69B1F1: mov     edx, [ebx]
0x69B1F3: mov     ecx, ebx
0x69B1F5: jmp     short loc_69B20F
0x69B1F7: mov     ecx, [esp+arg_14]
0x69B1FB: test    ecx, ecx
0x69B1FD: jz      short MagicCaster_ApplyActiveMagicItem___EffectItemLoop_Before
0x69B1FF: mov     eax, [esp+arg_28]
0x69B203: test    eax, eax
0x69B205: jz      short MagicCaster_ApplyActiveMagicItem___EffectItemLoop_Before
0x69B207: test    byte ptr [eax+40h], 80h
0x69B20B: jz      short MagicCaster_ApplyActiveMagicItem___EffectItemLoop_Before
0x69B20D: mov     edx, [ecx]
0x69B20F: mov     eax, [edx+174h]
0x69B215: call    eax
0x69B217: mov     edx, [eax]
0x69B219: lea     ecx, [esp+arg_44]
0x69B21D: push    ecx
0x69B21E: sub     esp, 0Ch
0x69B221: mov     ecx, esp
0x69B223: mov     [ecx], edx
0x69B225: mov     edx, [eax+4]
0x69B228: mov     eax, [eax+8]
0x69B22B: mov     [ecx+4], edx
0x69B22E: push    1
0x69B230: mov     [ecx+8], eax
0x69B233: push    edi
0x69B234: mov     ecx, esi
0x69B236: call    MagicCaster_GetTargetsInArea?
