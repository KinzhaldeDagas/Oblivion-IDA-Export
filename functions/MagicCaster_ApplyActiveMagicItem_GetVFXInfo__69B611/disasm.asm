0x69B611: mov     edx, [esi]
0x69B613: mov     eax, [edx+30h]
0x69B616: push    0
0x69B618: mov     ecx, esi
0x69B61A: call    eax
0x69B61C: mov     ecx, eax
0x69B61E: call    MagicItem_GetFXEffect
0x69B623: mov     edx, [esi]
0x69B625: push    1
0x69B627: mov     [esp+8+arg_70], eax
0x69B62B: mov     eax, [edx+30h]
0x69B62E: push    1
0x69B630: mov     ecx, esi
0x69B632: call    eax
0x69B634: mov     ecx, eax
0x69B636: add     ecx, 0Ch
0x69B639: call    EffectItemList_GetStrongestItem
0x69B63E: mov     [esp+4+arg_78], eax
