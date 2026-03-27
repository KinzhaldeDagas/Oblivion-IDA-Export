0x51D600: sub     esp, 0D0h
0x51D606: mov     eax, ds:0B30AACh
0x51D60B: xor     eax, esp
0x51D60D: mov     [esp+0D0h+var_4], eax
0x51D614: mov     eax, [esp+0D0h+arg_4]
0x51D61B: push    ebx
0x51D61C: mov     ebx, [esp+0D4h+arg_0]
0x51D623: push    ebp
0x51D624: mov     ebp, [esp+0D8h+arg_C]
0x51D62B: push    esi
0x51D62C: push    edi; int
0x51D62D: push    0; int
0x51D62F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x51D634: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x51D639: push    0; int
0x51D63B: push    eax; void *
0x51D63C: mov     [esp+0F4h+var_D0], ecx
0x51D640: call    OblivionDynamicCast
0x51D645: push    0; int
0x51D647: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x51D64C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x51D651: push    0; int
0x51D653: push    ebx; void *
0x51D654: mov     edi, eax
0x51D656: call    OblivionDynamicCast
0x51D65B: mov     esi, eax
0x51D65D: add     esp, 28h
0x51D660: test    esi, esi
0x51D662: jz      short loc_51D6DE
0x51D664: test    edi, edi
0x51D666: jz      short loc_51D6DE
0x51D668: mov     eax, [esi]
0x51D66A: mov     edx, [eax+334h]
0x51D670: push    1
0x51D672: mov     ecx, esi
0x51D674: call    edx
0x51D676: test    al, al
0x51D678: jz      loc_51D728
0x51D67E: cmp     edi, ds:0B333C4h
0x51D684: jnz     loc_51D728
0x51D68A: mov     eax, [esi]
0x51D68C: mov     edx, [eax+330h]
0x51D692: mov     ecx, esi
0x51D694: call    edx
0x51D696: test    eax, eax
0x51D698: jz      short loc_51D6FB
0x51D69A: mov     eax, [esi]
0x51D69C: mov     edx, [eax+330h]
0x51D6A2: mov     ecx, esi
0x51D6A4: call    edx
0x51D6A6: cmp     dword ptr [eax+70h], 0Bh
0x51D6AA: jnz     short loc_51D6FB
0x51D6AC: mov     eax, ds:0B37300h
0x51D6B1: lea     edx, [esp+0E0h+string]
0x51D6B5: sub     edx, eax
0x51D6B7: mov     cl, [eax]
0x51D6B9: mov     [edx+eax], cl
0x51D6BC: add     eax, 1
0x51D6BF: test    cl, cl
0x51D6C1: jnz     short loc_51D6B7
0x51D6C3: fld     dword ptr ds:0A30634h
0x51D6C9: push    ecx
0x51D6CA: fstp    [esp+0E4h+duration]; duration
0x51D6CD: push    1; unk2
0x51D6CF: push    0; unk1
0x51D6D1: lea     eax, [esp+0ECh+string]
0x51D6D5: push    eax; string
0x51D6D6: call    GameUI_QueueMessage
0x51D6DB: add     esp, 10h
0x51D6DE: xor     al, al
0x51D6E0: mov     ecx, [esp+0E0h+var_4]
0x51D6E7: pop     edi
0x51D6E8: pop     esi
0x51D6E9: pop     ebp
0x51D6EA: pop     ebx
0x51D6EB: xor     ecx, esp
0x51D6ED: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51D6F2: add     esp, 0D0h
0x51D6F8: retn    14h
0x51D6FB: mov     ecx, ds:0B33398h
0x51D701: mov     ecx, [ecx+20h]; this
0x51D704: push    0; a3
0x51D706: push    6; a2
0x51D708: call    InputGlobals__QueryControlState
0x51D70D: test    eax, eax
0x51D70F: jz      short loc_51D6DE
0x51D711: fld     dword ptr ds:0A30634h
0x51D717: mov     edx, ds:0B38DC8h
0x51D71D: push    ecx
0x51D71E: fstp    [esp+0E4h+duration]
0x51D721: push    1
0x51D723: push    0
0x51D725: push    edx
0x51D726: jmp     short loc_51D6D6
0x51D728: mov     eax, [esi]
0x51D72A: mov     edx, [eax+198h]
0x51D730: push    0
0x51D732: mov     ecx, esi
0x51D734: call    edx
0x51D736: test    al, al
0x51D738: jz      short loc_51D7A7
0x51D73A: cmp     edi, ds:0B333C4h
0x51D740: jnz     short loc_51D755
0x51D742: push    0
0x51D744: push    1
0x51D746: push    0
0x51D748: push    ebx
0x51D749: call    sub_57A8D0
0x51D74E: add     esp, 10h
0x51D751: mov     al, 1
0x51D753: jmp     short loc_51D6E0
0x51D755: test    ebp, ebp
0x51D757: jz      loc_51DA40
0x51D75D: push    0; int
0x51D75F: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x51D764: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x51D769: push    0; int
0x51D76B: push    ebp; void *
0x51D76C: call    OblivionDynamicCast
0x51D771: add     esp, 14h
0x51D774: test    eax, eax
0x51D776: jnz     loc_51DA40
0x51D77C: mov     ecx, [esp+0E0h+arg_10]
0x51D783: mov     eax, [ebx]
0x51D785: mov     edx, [eax+100h]
0x51D78B: push    0
0x51D78D: push    1
0x51D78F: push    0
0x51D791: push    0
0x51D793: push    edi
0x51D794: push    0
0x51D796: push    0
0x51D798: push    ecx
0x51D799: push    0
0x51D79B: push    ebp
0x51D79C: mov     ecx, ebx
0x51D79E: call    edx
0x51D7A0: mov     al, 1
0x51D7A2: jmp     loc_51D6E0
0x51D7A7: cmp     edi, ds:0B333C4h
0x51D7AD: jz      short loc_51D816
0x51D7AF: push    64h ; 'd'; responsibility
0x51D7B1: push    0; a7
0x51D7B3: push    0; a6
0x51D7B5: push    0; a5
0x51D7B7: push    0
0x51D7B9: push    esi
0x51D7BA: mov     ecx, edi
0x51D7BC: call    TesObjectREF_GetDistance
0x51D7C1: mov     eax, [edi]
0x51D7C3: mov     edx, [eax+284h]
0x51D7C9: push    ecx
0x51D7CA: fstp    [esp+0F4h+var_F4]
0x51D7CD: push    21h ; '!'
0x51D7CF: mov     ecx, edi
0x51D7D1: call    edx
0x51D7D3: push    eax; distanceToTarget
0x51D7D4: mov     eax, [edi]
0x51D7D6: mov     edx, [eax+224h]
0x51D7DC: push    0; aggressionStat
0x51D7DE: push    esi; friendlyFight?
0x51D7DF: mov     ecx, edi
0x51D7E1: call    edx
0x51D7E3: push    eax; disposition
0x51D7E4: call    shouldActorFight
0x51D7E9: add     esp, 20h
0x51D7EC: test    eax, eax
0x51D7EE: jle     short loc_51D816
0x51D7F0: mov     ecx, [edi+58h]
0x51D7F3: mov     eax, [ecx]
0x51D7F5: mov     edx, [eax+228h]
0x51D7FB: push    1
0x51D7FD: push    0
0x51D7FF: push    0
0x51D801: push    0
0x51D803: push    1
0x51D805: push    0
0x51D807: push    0
0x51D809: push    1
0x51D80B: push    esi
0x51D80C: push    edi
0x51D80D: call    edx
0x51D80F: mov     al, 1
0x51D811: jmp     loc_51D6E0
0x51D816: mov     eax, [esp+0E0h+var_D0]
0x51D81A: cmp     byte ptr [eax+104h], 4
0x51D821: jnz     loc_51DA18
0x51D827: mov     edx, [esi]
0x51D829: mov     eax, [edx+388h]
0x51D82F: mov     ecx, esi
0x51D831: call    eax
0x51D833: mov     ebx, eax
0x51D835: test    ebx, ebx
0x51D837: jz      loc_51D8D6
0x51D83D: mov     edx, [ebx]
0x51D83F: mov     eax, [edx+198h]
0x51D845: push    0
0x51D847: mov     ecx, ebx
0x51D849: call    eax
0x51D84B: test    al, al
0x51D84D: jz      short loc_51D858
0x51D84F: mov     ecx, ebx
0x51D851: call    sub_5F0410
0x51D856: jmp     short loc_51D887
0x51D858: mov     ecx, [ebx+58h]
0x51D85B: test    ecx, ecx
0x51D85D: jz      short loc_51D887
0x51D85F: mov     edx, [ecx]
0x51D861: mov     eax, [edx+184h]
0x51D867: call    eax
0x51D869: test    eax, eax
0x51D86B: jz      short loc_51D887
0x51D86D: mov     ecx, [ebx+58h]
0x51D870: mov     edx, [ecx]
0x51D872: mov     eax, [edx+184h]
0x51D878: call    eax
0x51D87A: cmp     byte ptr [eax+20h], 16h
0x51D87E: jnz     short loc_51D887
0x51D880: mov     ecx, ebx; int
0x51D882: call    sub_5EAE70
0x51D887: cmp     edi, ds:0B333C4h
0x51D88D: jnz     short loc_51D8D6
0x51D88F: mov     edx, [ebx]
0x51D891: mov     eax, [edx+198h]
0x51D897: push    0
0x51D899: mov     ecx, ebx
0x51D89B: call    eax
0x51D89D: test    al, al
0x51D89F: jnz     short loc_51D8D6
0x51D8A1: cmp     ebx, ds:0B333C4h
0x51D8A7: jz      short loc_51D8D6
0x51D8A9: mov     ecx, [ebx+58h]
0x51D8AC: mov     edx, [ecx]
0x51D8AE: mov     eax, [edx+36Ch]
0x51D8B4: call    eax
0x51D8B6: cmp     eax, 4
0x51D8B9: jnz     short loc_51D8D6
0x51D8BB: mov     ecx, ds:0B333C4h
0x51D8C1: push    1
0x51D8C3: push    0
0x51D8C5: push    0
0x51D8C7: push    ecx
0x51D8C8: mov     ecx, ebx
0x51D8CA: call    ActivateRef
0x51D8CF: mov     al, 1
0x51D8D1: jmp     loc_51D6E0
0x51D8D6: mov     edx, [edi]
0x51D8D8: mov     eax, [edx+380h]
0x51D8DE: mov     ecx, edi
0x51D8E0: call    eax
0x51D8E2: test    eax, eax
0x51D8E4: jz      short loc_51D919
0x51D8E6: mov     edx, [edi]
0x51D8E8: mov     eax, [edx+380h]
0x51D8EE: mov     ecx, edi
0x51D8F0: call    eax
0x51D8F2: mov     esi, eax
0x51D8F4: mov     ecx, esi
0x51D8F6: call    sub_5E9A60
0x51D8FB: test    al, al
0x51D8FD: jnz     short loc_51D906
0x51D8FF: mov     ecx, esi; int
0x51D901: call    sub_5F80D0
0x51D906: mov     edx, [edi]
0x51D908: mov     eax, [edx+230h]
0x51D90E: mov     ecx, edi
0x51D910: call    eax
0x51D912: mov     al, 1
0x51D914: jmp     loc_51D6E0
0x51D919: mov     edx, [esi]
0x51D91B: mov     eax, [edx+388h]
0x51D921: mov     ecx, esi
0x51D923: call    eax
0x51D925: test    eax, eax
0x51D927: jz      short loc_51D95C
0x51D929: mov     edx, [esi]
0x51D92B: mov     eax, [edx+388h]
0x51D931: mov     ecx, esi
0x51D933: call    eax
0x51D935: cmp     dword ptr [eax+58h], 0
0x51D939: jz      short loc_51D95C
0x51D93B: mov     edx, [esi]
0x51D93D: mov     eax, [edx+388h]
0x51D943: mov     ecx, esi
0x51D945: call    eax
0x51D947: mov     ecx, [eax+58h]
0x51D94A: mov     edx, [ecx]
0x51D94C: mov     eax, [edx+36Ch]
0x51D952: call    eax
0x51D954: test    eax, eax
0x51D956: jnz     loc_51DA40
0x51D95C: mov     edx, [edi]
0x51D95E: mov     eax, [edx+25Ch]
0x51D964: mov     ecx, edi
0x51D966: call    eax
0x51D968: test    al, al
0x51D96A: jnz     loc_51DA40
0x51D970: mov     edx, [edi]
0x51D972: mov     eax, [edx+1A0h]
0x51D978: mov     ecx, edi
0x51D97A: call    eax
0x51D97C: test    al, al
0x51D97E: jnz     loc_51DA40
0x51D984: mov     edx, [edi]
0x51D986: mov     eax, [edx+19Ch]
0x51D98C: mov     ecx, edi
0x51D98E: call    eax
0x51D990: test    al, al
0x51D992: jnz     loc_51DA40
0x51D998: mov     edx, [esi]
0x51D99A: mov     eax, [edx+388h]
0x51D9A0: mov     ecx, esi
0x51D9A2: call    eax
0x51D9A4: test    eax, eax
0x51D9A6: jz      short loc_51D9D2
0x51D9A8: mov     edx, [esi]
0x51D9AA: mov     eax, [edx+388h]
0x51D9B0: mov     ecx, esi
0x51D9B2: call    eax
0x51D9B4: cmp     eax, edi
0x51D9B6: jz      short loc_51D9D2
0x51D9B8: mov     edx, [esi]
0x51D9BA: mov     eax, [edx+388h]
0x51D9C0: mov     ecx, esi
0x51D9C2: call    eax
0x51D9C4: mov     edx, [eax]
0x51D9C6: mov     ecx, eax
0x51D9C8: mov     eax, [edx+384h]
0x51D9CE: push    0
0x51D9D0: call    eax
0x51D9D2: mov     ecx, esi
0x51D9D4: call    sub_5E9A60
0x51D9D9: test    al, al
0x51D9DB: mov     ecx, esi; this
0x51D9DD: jnz     short loc_51D9E6
0x51D9DF: call    sub_5F80D0
0x51D9E4: jmp     short loc_51D9EB
0x51D9E6: call    sub_5F8000
0x51D9EB: mov     ebx, [edi]
0x51D9ED: push    0; int
0x51D9EF: push    offset ??_R0?AVCreature@@@8; struct TypeDescriptor *
0x51D9F4: push    offset ??_R0?AVActor@@@8; struct _s_RTTICompleteObjectLocator *
0x51D9F9: push    0; int
0x51D9FB: push    esi; void *
0x51D9FC: add     ebx, 22Ch
0x51DA02: call    OblivionDynamicCast
0x51DA07: mov     edx, [ebx]
0x51DA09: add     esp, 14h
0x51DA0C: push    eax
0x51DA0D: mov     ecx, edi
0x51DA0F: call    edx
0x51DA11: mov     al, 1
0x51DA13: jmp     loc_51D6E0
0x51DA18: mov     ecx, edi
0x51DA1A: call    sub_5E0380
0x51DA1F: test    eax, eax
0x51DA21: jz      short loc_51DA40
0x51DA23: mov     ecx, edi
0x51DA25: call    sub_5E0380
0x51DA2A: cmp     byte ptr [eax+20h], 1
0x51DA2E: jz      short loc_51DA40
0x51DA30: mov     ecx, [edi+58h]
0x51DA33: mov     eax, [ecx]
0x51DA35: mov     edx, [eax+188h]
0x51DA3B: push    1
0x51DA3D: push    edi
0x51DA3E: call    edx
0x51DA40: mov     al, 1
0x51DA42: jmp     loc_51D6E0
