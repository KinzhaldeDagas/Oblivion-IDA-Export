0x58E3B0: sub     esp, 10h
0x58E3B3: push    ebx
0x58E3B4: push    ebp
0x58E3B5: push    esi
0x58E3B6: push    edi
0x58E3B7: mov     esi, ecx
0x58E3B9: mov     edi, [esp+20h+arg_0]
0x58E3BD: lea     ecx, [ecx+0]
0x58E3C0: mov     eax, [esi+18h]
0x58E3C3: test    eax, eax
0x58E3C5: jz      short loc_58E3DC
0x58E3C7: lea     ecx, [eax+8]
0x58E3CA: mov     ecx, [ecx]
0x58E3CC: movzx   edx, word ptr [ecx+18h]
0x58E3D0: cmp     edx, edi
0x58E3D2: mov     eax, [eax]
0x58E3D4: jz      short loc_58E3EF
0x58E3D6: jg      short loc_58E3DC
0x58E3D8: test    eax, eax
0x58E3DA: jnz     short loc_58E3C7
0x58E3DC: mov     esi, [esi+10h]
0x58E3DF: test    esi, esi
0x58E3E1: jnz     short loc_58E3C0
0x58E3E3: pop     edi
0x58E3E4: pop     esi
0x58E3E5: pop     ebp
0x58E3E6: xor     eax, eax
0x58E3E8: pop     ebx
0x58E3E9: add     esp, 10h
0x58E3EC: retn    8
0x58E3EF: fld     dword ptr [ecx+4]
0x58E3F2: fcomp   qword ptr ds:0A6AE78h
0x58E3F8: fnstsw  ax
0x58E3FA: test    ah, 44h
0x58E3FD: jp      loc_58E4DB
0x58E403: push    0FAAh
0x58E408: mov     ecx, esi
0x58E40A: mov     [esp+24h+var_C], 0
0x58E412: mov     ebp, 7FFFFFFFh
0x58E417: call    Tile_GetFloat
0x58E41C: call    Double_To_SInt32
0x58E421: mov     esi, [esi+10h]
0x58E424: mov     ebx, [esi+34h]
0x58E427: test    ebx, ebx
0x58E429: mov     [esp+20h+var_4], eax
0x58E42D: mov     [esp+20h+var_10], esi
0x58E431: jz      loc_58E4D2
0x58E437: mov     esi, [ebx+8]
0x58E43A: mov     edi, [esi+18h]
0x58E43D: lea     eax, [ebx+8]
0x58E440: mov     ebx, [ebx]
0x58E442: mov     eax, edi
0x58E444: test    eax, eax
0x58E446: jz      short loc_58E47F
0x58E448: jmp     short loc_58E450
0x58E44A: align 10h
0x58E450: mov     edx, [eax+8]
0x58E453: lea     ecx, [eax+8]
0x58E456: movzx   ecx, word ptr [edx+18h]
0x58E45A: cmp     cx, 0FA1h
0x58E45F: mov     eax, [eax]
0x58E461: jz      short loc_58E46B
0x58E463: ja      short loc_58E47F
0x58E465: test    eax, eax
0x58E467: jnz     short loc_58E450
0x58E469: jmp     short loc_58E47F
0x58E46B: fld     dword ptr [edx+4]
0x58E46E: fstp    [esp+20h+var_8]
0x58E472: fld1
0x58E474: fcomp   [esp+20h+var_8]
0x58E478: fnstsw  ax
0x58E47A: test    ah, 44h
0x58E47D: jnp     short loc_58E4C0
0x58E47F: mov     eax, edi
0x58E481: test    eax, eax
0x58E483: jz      short loc_58E4C0
0x58E485: lea     ecx, [eax+8]
0x58E488: mov     ecx, [ecx]
0x58E48A: movzx   ecx, word ptr [ecx+18h]
0x58E48E: cmp     cx, 0FF0h
0x58E493: mov     eax, [eax]
0x58E495: jz      short loc_58E49F
0x58E497: ja      short loc_58E4C0
0x58E499: test    eax, eax
0x58E49B: jnz     short loc_58E485
0x58E49D: jmp     short loc_58E4C0
0x58E49F: push    0FAAh
0x58E4A4: mov     ecx, esi
0x58E4A6: call    Tile_GetFloat
0x58E4AB: call    Double_To_SInt32
0x58E4B0: cmp     eax, [esp+20h+var_4]
0x58E4B4: jle     short loc_58E4C0
0x58E4B6: cmp     eax, ebp
0x58E4B8: jge     short loc_58E4C0
0x58E4BA: mov     [esp+20h+var_C], esi
0x58E4BE: mov     ebp, eax
0x58E4C0: test    ebx, ebx
0x58E4C2: jnz     loc_58E437
0x58E4C8: cmp     [esp+20h+var_C], ebx
0x58E4CC: jnz     loc_58E5B8
0x58E4D2: mov     esi, [esp+20h+var_10]
0x58E4D6: jmp     loc_58E3B9
0x58E4DB: fld     dword ptr [ecx+4]
0x58E4DE: fcomp   qword ptr ds:0A6AE70h
0x58E4E4: fnstsw  ax
0x58E4E6: test    ah, 44h
0x58E4E9: jp      loc_58E5CF
0x58E4EF: push    0FAAh
0x58E4F4: mov     ecx, esi
0x58E4F6: mov     [esp+24h+var_C], 0
0x58E4FE: mov     ebp, 80000000h
0x58E503: call    Tile_GetFloat
0x58E508: call    Double_To_SInt32
0x58E50D: mov     esi, [esi+10h]
0x58E510: mov     ebx, [esi+34h]
0x58E513: test    ebx, ebx
0x58E515: mov     [esp+20h+var_8], eax
0x58E519: mov     [esp+20h+var_10], esi
0x58E51D: jz      short loc_58E4D2
0x58E51F: nop
0x58E520: mov     esi, [ebx+8]
0x58E523: mov     edi, [esi+18h]
0x58E526: lea     eax, [ebx+8]
0x58E529: mov     ebx, [ebx]
0x58E52B: mov     eax, edi
0x58E52D: test    eax, eax
0x58E52F: jz      short loc_58E560
0x58E531: mov     edx, [eax+8]
0x58E534: lea     ecx, [eax+8]
0x58E537: movzx   ecx, word ptr [edx+18h]
0x58E53B: cmp     cx, 0FA1h
0x58E540: mov     eax, [eax]
0x58E542: jz      short loc_58E54C
0x58E544: ja      short loc_58E560
0x58E546: test    eax, eax
0x58E548: jnz     short loc_58E531
0x58E54A: jmp     short loc_58E560
0x58E54C: fld     dword ptr [edx+4]
0x58E54F: fstp    [esp+20h+var_4]
0x58E553: fld1
0x58E555: fcomp   [esp+20h+var_4]
0x58E559: fnstsw  ax
0x58E55B: test    ah, 44h
0x58E55E: jnp     short loc_58E5A1
0x58E560: mov     eax, edi
0x58E562: test    eax, eax
0x58E564: jz      short loc_58E5A1
0x58E566: lea     ecx, [eax+8]
0x58E569: mov     ecx, [ecx]
0x58E56B: movzx   ecx, word ptr [ecx+18h]
0x58E56F: cmp     cx, 0FF0h
0x58E574: mov     eax, [eax]
0x58E576: jz      short loc_58E580
0x58E578: ja      short loc_58E5A1
0x58E57A: test    eax, eax
0x58E57C: jnz     short loc_58E566
0x58E57E: jmp     short loc_58E5A1
0x58E580: push    0FAAh
0x58E585: mov     ecx, esi
0x58E587: call    Tile_GetFloat
0x58E58C: call    Double_To_SInt32
0x58E591: cmp     eax, [esp+20h+var_8]
0x58E595: jge     short loc_58E5A1
0x58E597: cmp     eax, ebp
0x58E599: jle     short loc_58E5A1
0x58E59B: mov     [esp+20h+var_C], esi
0x58E59F: mov     ebp, eax
0x58E5A1: test    ebx, ebx
0x58E5A3: jnz     loc_58E520
0x58E5A9: cmp     [esp+20h+var_C], ebx
0x58E5AD: jnz     short loc_58E5B8
0x58E5AF: mov     esi, [esp+20h+var_10]
0x58E5B3: jmp     loc_58E3B9
0x58E5B8: mov     esi, [esp+20h+var_C]
0x58E5BC: mov     ecx, esi
0x58E5BE: call    sub_58E7D0
0x58E5C3: pop     edi
0x58E5C4: mov     eax, esi
0x58E5C6: pop     esi
0x58E5C7: pop     ebp
0x58E5C8: pop     ebx
0x58E5C9: add     esp, 10h
0x58E5CC: retn    8
0x58E5CF: fld     dword ptr [ecx+4]
0x58E5D2: fcomp   qword ptr ds:0A6AE68h
0x58E5D8: fnstsw  ax
0x58E5DA: test    ah, 44h
0x58E5DD: jp      loc_58E6B4
0x58E5E3: mov     ebx, [esi+34h]
0x58E5E6: test    ebx, ebx
0x58E5E8: mov     [esp+20h+arg_0], 0
0x58E5F0: mov     ebp, 7FFFFFFFh
0x58E5F5: jz      short loc_58E664
0x58E5F7: mov     edi, [ebx+8]
0x58E5FA: lea     eax, [ebx+8]
0x58E5FD: mov     ebx, [ebx]
0x58E5FF: push    0FA1h
0x58E604: mov     ecx, edi
0x58E606: call    Tile_GetFloat
0x58E60B: fcomp   dword ptr ds:0A2F948h
0x58E611: fnstsw  ax
0x58E613: test    ah, 44h
0x58E616: jnp     short loc_58E643
0x58E618: push    0FF0h
0x58E61D: mov     ecx, edi
0x58E61F: call    sub_588B50
0x58E624: test    eax, eax
0x58E626: jz      short loc_58E643
0x58E628: push    0FAAh
0x58E62D: mov     ecx, edi
0x58E62F: call    Tile_GetFloat
0x58E634: call    Double_To_SInt32
0x58E639: cmp     eax, ebp
0x58E63B: jge     short loc_58E643
0x58E63D: mov     [esp+20h+arg_0], edi
0x58E641: mov     ebp, eax
0x58E643: test    ebx, ebx
0x58E645: jnz     short loc_58E5F7
0x58E647: cmp     [esp+20h+arg_0], ebx
0x58E64B: jz      short loc_58E664
0x58E64D: mov     esi, [esp+20h+arg_0]
0x58E651: mov     ecx, esi
0x58E653: call    sub_58E7D0
0x58E658: pop     edi
0x58E659: mov     eax, esi
0x58E65B: pop     esi
0x58E65C: pop     ebp
0x58E65D: pop     ebx
0x58E65E: add     esp, 10h
0x58E661: retn    8
0x58E664: push    0FF0h
0x58E669: mov     ecx, esi
0x58E66B: call    sub_588B50
0x58E670: test    eax, eax
0x58E672: jz      short loc_58E682
0x58E674: push    0
0x58E676: push    0FF0h
0x58E67B: mov     ecx, esi
0x58E67D: call    sub_578ED0
0x58E682: mov     ecx, esi
0x58E684: mov     [esp+20h+arg_0], 80000000h
0x58E68C: call    sub_589390
0x58E691: push    eax
0x58E692: lea     eax, [esp+24h+arg_0]
0x58E696: push    eax
0x58E697: push    1; arg1
0x58E699: push    0; canCreate
0x58E69B: call    InterfaceManager_GetSingleton
0x58E6A0: add     esp, 8
0x58E6A3: mov     ecx, eax
0x58E6A5: call    sub_57DA90
0x58E6AA: pop     edi
0x58E6AB: pop     esi
0x58E6AC: pop     ebp
0x58E6AD: pop     ebx
0x58E6AE: add     esp, 10h
0x58E6B1: retn    8
0x58E6B4: fld     dword ptr [ecx+4]
0x58E6B7: fcomp   qword ptr ds:0A6AE60h
0x58E6BD: fnstsw  ax
0x58E6BF: test    ah, 44h
0x58E6C2: jp      loc_58E772
0x58E6C8: mov     ebx, [esi+34h]
0x58E6CB: test    ebx, ebx
0x58E6CD: mov     [esp+20h+arg_0], 0
0x58E6D5: mov     ebp, 80000000h
0x58E6DA: jz      short loc_58E73A
0x58E6DC: lea     esp, [esp+0]
0x58E6E0: mov     edi, [ebx+8]
0x58E6E3: lea     eax, [ebx+8]
0x58E6E6: mov     ebx, [ebx]
0x58E6E8: push    0FA1h
0x58E6ED: mov     ecx, edi
0x58E6EF: call    Tile_GetFloat
0x58E6F4: fcomp   dword ptr ds:0A2F948h
0x58E6FA: fnstsw  ax
0x58E6FC: test    ah, 44h
0x58E6FF: jnp     short loc_58E72C
0x58E701: push    0FF0h
0x58E706: mov     ecx, edi
0x58E708: call    sub_588B50
0x58E70D: test    eax, eax
0x58E70F: jz      short loc_58E72C
0x58E711: push    0FAAh
0x58E716: mov     ecx, edi
0x58E718: call    Tile_GetFloat
0x58E71D: call    Double_To_SInt32
0x58E722: cmp     eax, ebp
0x58E724: jle     short loc_58E72C
0x58E726: mov     [esp+20h+arg_0], edi
0x58E72A: mov     ebp, eax
0x58E72C: test    ebx, ebx
0x58E72E: jnz     short loc_58E6E0
0x58E730: cmp     [esp+20h+arg_0], ebx
0x58E734: jnz     loc_58E64D
0x58E73A: push    0FF0h
0x58E73F: mov     ecx, esi
0x58E741: call    sub_588B50
0x58E746: test    eax, eax
0x58E748: jz      short loc_58E758
0x58E74A: push    0
0x58E74C: push    0FF0h
0x58E751: mov     ecx, esi
0x58E753: call    sub_578ED0
0x58E758: mov     ecx, esi
0x58E75A: mov     [esp+20h+arg_0], 80000000h
0x58E762: call    sub_589390
0x58E767: push    eax
0x58E768: lea     ecx, [esp+24h+arg_0]
0x58E76C: push    ecx
0x58E76D: jmp     loc_58E697
0x58E772: mov     ecx, [ecx+10h]
0x58E775: test    ecx, ecx
0x58E777: jz      loc_58E3E3
0x58E77D: mov     eax, 7EBh
0x58E782: cmp     [ecx+0Ch], eax
0x58E785: jz      short loc_58E79A
0x58E787: mov     ecx, [ecx+4]
0x58E78A: test    ecx, ecx
0x58E78C: jnz     short loc_58E782
0x58E78E: pop     edi
0x58E78F: pop     esi
0x58E790: pop     ebp
0x58E791: xor     eax, eax
0x58E793: pop     ebx
0x58E794: add     esp, 10h
0x58E797: retn    8
0x58E79A: mov     eax, [ecx+10h]
0x58E79D: test    eax, eax
0x58E79F: jz      short loc_58E7AA
0x58E7A1: mov     ecx, eax
0x58E7A3: mov     eax, [ecx+10h]
0x58E7A6: test    eax, eax
0x58E7A8: jnz     short loc_58E7A1
0x58E7AA: mov     edx, [ecx+8]
0x58E7AD: movzx   eax, word ptr [edx+18h]
0x58E7B1: mov     edx, [esp+20h+arg_4]
0x58E7B5: pop     edi
0x58E7B6: pop     esi
0x58E7B7: mov     [edx], eax
0x58E7B9: mov     eax, [ecx+8]
0x58E7BC: mov     eax, [eax]
0x58E7BE: pop     ebp
0x58E7BF: pop     ebx
0x58E7C0: add     esp, 10h
0x58E7C3: retn    8
