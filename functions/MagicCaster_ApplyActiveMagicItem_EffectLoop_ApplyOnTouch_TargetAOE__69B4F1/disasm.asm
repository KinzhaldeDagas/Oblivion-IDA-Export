0x69B4F1: mov     ecx, ebp
0x69B4F3: call    EffectItem_GetArea
0x69B4F8: test    eax, eax
0x69B4FA: jle     MagicCaster_ApplyActiveMagicItem___EffectLoop_DestroyActvEff
0x69B500: test    ebx, ebx
0x69B502: jz      MagicCaster_ApplyActiveMagicItem___EffectLoop_DestroyActvEff
0x69B508: mov     edx, [ebx]
0x69B50A: mov     eax, [edx+174h]
0x69B510: mov     ecx, ebx
0x69B512: mov     [esp+anonymous_0+2], 0
0x69B517: call    eax
0x69B519: fld1
0x69B51B: push    ecx
0x69B51C: fstp    [esp+4+var_4]
0x69B51F: lea     ecx, [esp+4+anonymous_0+2]
0x69B523: push    ecx
0x69B524: mov     ecx, [esp+8+arg_18]
0x69B528: lea     edx, [esp+8+arg_44]
0x69B52C: push    edx
0x69B52D: mov     edx, [eax]
0x69B52F: push    0
0x69B531: push    ecx
0x69B532: sub     esp, 0Ch
0x69B535: mov     ecx, esp
0x69B537: mov     [ecx], edx
0x69B539: mov     edx, [eax+4]
0x69B53C: mov     eax, [eax+8]
0x69B53F: mov     [ecx+4], edx
0x69B542: mov     [ecx+8], eax
0x69B545: mov     ecx, ebx
0x69B547: jmp     short MagicCaster_ApplyActiveMagicItem___EffectLoop_ApplyOnTouch_AOE
