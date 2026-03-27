0x42B5F0: push    edi
0x42B5F1: mov     edi, [esp+4+arg_0]
0x42B5F5: test    edi, edi
0x42B5F7: jz      short loc_42B645
0x42B5F9: mov     ecx, [ecx]; this
0x42B5FB: test    ecx, ecx
0x42B5FD: push    ebx
0x42B5FE: mov     ebx, [esp+8+arg_4]
0x42B602: push    esi
0x42B603: jz      short loc_42B623
0x42B605: call    TESObjectREFR_GetParentCell
0x42B60A: mov     esi, eax
0x42B60C: test    esi, esi
0x42B60E: jz      short loc_42B623
0x42B610: mov     ecx, esi
0x42B612: call    TESObjectCELL_GetOwner
0x42B617: test    eax, eax
0x42B619: jz      short loc_42B623
0x42B61B: push    ebx
0x42B61C: mov     ecx, esi
0x42B61E: call    sub_4C9860
0x42B623: mov     ecx, edi; this
0x42B625: call    TESObjectREFR_GetParentCell
0x42B62A: mov     esi, eax
0x42B62C: test    esi, esi
0x42B62E: jz      short loc_42B643
0x42B630: mov     ecx, esi
0x42B632: call    TESObjectCELL_GetOwner
0x42B637: test    eax, eax
0x42B639: jz      short loc_42B643
0x42B63B: push    ebx
0x42B63C: mov     ecx, esi
0x42B63E: call    sub_4C9860
0x42B643: pop     esi
0x42B644: pop     ebx
0x42B645: pop     edi
0x42B646: retn    8
