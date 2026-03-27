0x5E96E0: push    esi
0x5E96E1: mov     esi, [esp+4+arg_0]
0x5E96E5: test    esi, esi
0x5E96E7: jnz     short loc_5E96EF
0x5E96E9: xor     eax, eax
0x5E96EB: pop     esi
0x5E96EC: retn    0Ch
0x5E96EF: mov     eax, ds:0B33398h
0x5E96F4: cmp     dword ptr [eax+24h], 0
0x5E96F8: push    edi
0x5E96F9: movzx   edi, byte ptr [esi+4]
0x5E96FD: jz      loc_5E995F
0x5E9703: cmp     esi, ds:0B35EC8h
0x5E9709: jnz     short loc_5E9721
0x5E970B: cmp     [esp+8+arg_4], 1
0x5E9710: mov     eax, offset aItmlockpickup; "ITMLockpickUp"
0x5E9715: jz      short loc_5E9773
0x5E9717: pop     edi
0x5E9718: mov     eax, offset aItmlockpickdow; "ITMLockpickDown"
0x5E971D: pop     esi
0x5E971E: retn    0Ch
0x5E9721: push    esi
0x5E9722: call    sub_469980
0x5E9727: add     esp, 4
0x5E972A: test    al, al
0x5E972C: jz      short loc_5E9744
0x5E972E: cmp     [esp+8+arg_4], 1
0x5E9733: mov     eax, offset aItmgoldup; "ITMGoldUp"
0x5E9738: jz      short loc_5E9773
0x5E973A: pop     edi
0x5E973B: mov     eax, offset aItmgolddown; "ITMGoldDown"
0x5E9740: pop     esi
0x5E9741: retn    0Ch
0x5E9744: lea     eax, [edi-13h]; switch 22 cases
0x5E9747: cmp     eax, 15h
0x5E974A: push    ebx
0x5E974B: mov     bl, 1
0x5E974D: ja      GetItemUpDownSound___def_5E975A; jumptable 005E975A default case, cases 23,24,26-32,35-37
0x5E9753: movzx   ecx, ds:byte_5E99A8[eax]
0x5E975A: jmp     ds:jpt_5E975A[ecx*4]; switch jump
0x5E9761: cmp     [esp+0Ch+arg_4], 1; jumptable 005E975A case 34
0x5E9766: mov     eax, offset aItmammoup; "ITMAmmoUp"
0x5E976B: jz      short loc_5E9772
0x5E976D: mov     eax, offset aItmammodown; "ITMAmmoDown"
0x5E9772: pop     ebx
0x5E9773: pop     edi
0x5E9774: pop     esi
0x5E9775: retn    0Ch
0x5E9778: mov     ecx, esi; jumptable 005E975A case 20
0x5E977A: call    TESObjectARMO_ISHeavyArmor
0x5E977F: test    al, al
0x5E9781: jnz     short loc_5E979A
0x5E9783: cmp     [esp+0Ch+arg_4], 1
0x5E9788: mov     eax, offset aItmarmorlightu; "ITMArmorLightUp"
0x5E978D: jz      short loc_5E9772
0x5E978F: pop     ebx
0x5E9790: pop     edi
0x5E9791: mov     eax, offset aItmarmorlightd; "ITMArmorLightDown"
0x5E9796: pop     esi
0x5E9797: retn    0Ch
0x5E979A: mov     ecx, esi
0x5E979C: call    TESObjectARMO_ISHeavyArmor
0x5E97A1: cmp     al, bl
0x5E97A3: jnz     GetItemUpDownSound___def_5E975A; jumptable 005E975A default case, cases 23,24,26-32,35-37
0x5E97A9: cmp     [esp+0Ch+arg_4], bl
0x5E97AD: mov     eax, offset aItmarmorheavyu; "ITMArmorHeavyUp"
0x5E97B2: jz      short loc_5E9772
0x5E97B4: pop     ebx
0x5E97B5: pop     edi
0x5E97B6: mov     eax, offset aItmarmorheavyd; "ITMArmorHeavyDown"
0x5E97BB: pop     esi
0x5E97BC: retn    0Ch
0x5E97BF: cmp     [esp+0Ch+arg_8], 0; jumptable 005E975A case 25
0x5E97C4: jnz     short loc_5E97DD
0x5E97C6: cmp     [esp+0Ch+arg_4], 1
0x5E97CB: mov     eax, offset aItmingredientu; "ITMIngredientUp"
0x5E97D0: jz      short loc_5E9772
0x5E97D2: pop     ebx
0x5E97D3: pop     edi
0x5E97D4: mov     eax, offset aItmingredientd; "ITMIngredientDown"
0x5E97D9: pop     esi
0x5E97DA: retn    0Ch
0x5E97DD: pop     ebx
0x5E97DE: pop     edi
0x5E97DF: mov     eax, offset aNpchumanchew; "NPCHumanChew"
0x5E97E4: pop     esi
0x5E97E5: retn    0Ch
0x5E97E8: cmp     [esp+0Ch+arg_4], 1; jumptable 005E975A case 22
0x5E97ED: mov     eax, offset aItmclothingup; "ITMClothingUp"
0x5E97F2: jz      loc_5E9772
0x5E97F8: pop     ebx
0x5E97F9: pop     edi
0x5E97FA: mov     eax, offset aItmclothingdow; "ITMClothingDown"
0x5E97FF: pop     esi
0x5E9800: retn    0Ch
0x5E9803: cmp     [esp+0Ch+arg_8], 0; jumptable 005E975A case 40
0x5E9808: jnz     short loc_5E9825
0x5E980A: cmp     [esp+0Ch+arg_4], 1
0x5E980F: mov     eax, offset aItmpotionup; "ITMPotionUp"
0x5E9814: jz      loc_5E9772
0x5E981A: pop     ebx
0x5E981B: pop     edi
0x5E981C: mov     eax, offset aItmpotiondown; "ITMPotionDown"
0x5E9821: pop     esi
0x5E9822: retn    0Ch
0x5E9825: pop     ebx
0x5E9826: pop     edi
0x5E9827: mov     eax, offset aNpchumanswallo; "NPCHumanSwallow"
0x5E982C: pop     esi
0x5E982D: retn    0Ch
0x5E9830: mov     bl, 1; jumptable 005E975A case 21
0x5E9832: test    [esi+88h], bl
0x5E9838: jz      short loc_5E9854
0x5E983A: cmp     [esp+0Ch+arg_4], bl
0x5E983E: mov     eax, offset aItmscrollup; "ITMScrollUp"
0x5E9843: jz      loc_5E9772
0x5E9849: pop     ebx
0x5E984A: pop     edi
0x5E984B: mov     eax, offset aItmscrolldown; "ITMScrollDown"
0x5E9850: pop     esi
0x5E9851: retn    0Ch
0x5E9854: cmp     [esp+0Ch+arg_4], bl
0x5E9858: mov     eax, offset aItmbookup; "ITMBookUp"
0x5E985D: jz      loc_5E9772
0x5E9863: pop     ebx
0x5E9864: pop     edi
0x5E9865: mov     eax, offset aItmbookdown; "ITMBookDown"
0x5E986A: pop     esi
0x5E986B: retn    0Ch
0x5E986E: cmp     [esp+0Ch+arg_4], 1; jumptable 005E975A case 19
0x5E9873: mov     eax, offset aItmapparatusup; "ITMApparatusUp"
0x5E9878: jz      loc_5E9772
0x5E987E: pop     ebx
0x5E987F: pop     edi
0x5E9880: mov     eax, offset aItmapparatusdo; "ITMApparatusDown"
0x5E9885: pop     esi
0x5E9886: retn    0Ch
0x5E9889: cmp     [esp+0Ch+arg_4], 1; jumptable 005E975A case 39
0x5E988E: mov     eax, offset aItmkeyup; "ITMKeyUp"
0x5E9893: jz      loc_5E9772
0x5E9899: pop     ebx
0x5E989A: pop     edi
0x5E989B: mov     eax, offset aItmkeydown; "ITMKeyDown"
0x5E98A0: pop     esi
0x5E98A1: retn    0Ch
0x5E98A4: mov     al, [esi+90h]; jumptable 005E975A case 33
0x5E98AA: test    al, al
0x5E98AC: jz      short loc_5E9910
0x5E98AE: cmp     al, bl
0x5E98B0: jz      short loc_5E9910
0x5E98B2: cmp     al, 2
0x5E98B4: jz      short loc_5E98F6
0x5E98B6: cmp     al, 3
0x5E98B8: jz      short loc_5E98F6
0x5E98BA: cmp     al, 4
0x5E98BC: jnz     short loc_5E98D8
0x5E98BE: cmp     [esp+0Ch+arg_4], bl
0x5E98C2: mov     eax, offset aItmweaponstaff; "ITMWeaponStaffUp"
0x5E98C7: jz      loc_5E9772
0x5E98CD: pop     ebx
0x5E98CE: pop     edi
0x5E98CF: mov     eax, offset aItmweaponsta_0; "ITMWeaponStaffDown"
0x5E98D4: pop     esi
0x5E98D5: retn    0Ch
0x5E98D8: cmp     al, 5
0x5E98DA: jnz     short GetItemUpDownSound___def_5E975A; jumptable 005E975A default case, cases 23,24,26-32,35-37
0x5E98DC: cmp     [esp+0Ch+arg_4], bl
0x5E98E0: mov     eax, offset aItmweaponbowup; "ITMWeaponBowUp"
0x5E98E5: jz      loc_5E9772
0x5E98EB: pop     ebx
0x5E98EC: pop     edi
0x5E98ED: mov     eax, offset aItmweaponbowdo; "ITMWeaponBowDown"
0x5E98F2: pop     esi
0x5E98F3: retn    0Ch
0x5E98F6: cmp     [esp+0Ch+arg_4], bl
0x5E98FA: mov     eax, offset aItmweaponblunt; "ITMWeaponBluntUp"
0x5E98FF: jz      loc_5E9772
0x5E9905: pop     ebx
0x5E9906: pop     edi
0x5E9907: mov     eax, offset aItmweaponblu_0; "ITMWeaponBluntDown"
0x5E990C: pop     esi
0x5E990D: retn    0Ch
0x5E9910: cmp     [esp+0Ch+arg_4], bl
0x5E9914: mov     eax, offset aItmweaponblade; "ITMWeaponBladeUp"
0x5E9919: jz      loc_5E9772
0x5E991F: pop     ebx
0x5E9920: pop     edi
0x5E9921: mov     eax, offset aItmweaponbla_0; "ITMWeaponBladeDown"
0x5E9926: pop     esi
0x5E9927: retn    0Ch
0x5E992A: cmp     [esp+0Ch+arg_4], 1; jumptable 005E975A case 38
0x5E992F: mov     eax, offset aItmsoulgemup; "ITMSoulGemUp"
0x5E9934: jz      loc_5E9772
0x5E993A: pop     ebx
0x5E993B: pop     edi
0x5E993C: mov     eax, offset aItmsoulgemdown; "ITMSoulGemDown"
0x5E9941: pop     esi
0x5E9942: retn    0Ch
0x5E9945: cmp     [esp+0Ch+arg_4], bl; jumptable 005E975A default case, cases 23,24,26-32,35-37
0x5E9949: mov     eax, offset aItmgenericup; "ITMGenericUp"
0x5E994E: jz      loc_5E9772
0x5E9954: pop     ebx
0x5E9955: pop     edi
0x5E9956: mov     eax, offset aItmgenericdown; "ITMGenericDown"
0x5E995B: pop     esi
0x5E995C: retn    0Ch
0x5E995F: cmp     [esp+8+arg_4], 1
0x5E9964: mov     eax, offset aItmgenericup; "ITMGenericUp"
0x5E9969: jz      loc_5E9773
0x5E996F: pop     edi
0x5E9970: mov     eax, offset aItmgenericdown; "ITMGenericDown"
0x5E9975: pop     esi
0x5E9976: retn    0Ch
