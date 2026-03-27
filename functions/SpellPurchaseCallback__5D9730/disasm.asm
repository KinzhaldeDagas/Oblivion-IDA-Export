0x5D9730: push    ecx
0x5D9731: push    esi
0x5D9732: push    edi
0x5D9733: push    40Dh
0x5D9738: call    Menu_GetOpenMenuTile
0x5D973D: add     esp, 4
0x5D9740: mov     ecx, eax
0x5D9742: call    Tile_GetParentMenu
0x5D9747: xor     edi, edi
0x5D9749: push    edi; int
0x5D974A: push    offset ??_R0?AVSpellPurchaseMenu@@@8; struct TypeDescriptor *
0x5D974F: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D9754: push    edi; int
0x5D9755: push    eax; void *
0x5D9756: call    OblivionDynamicCast
0x5D975B: mov     esi, eax
0x5D975D: add     esp, 14h
0x5D9760: cmp     esi, edi
0x5D9762: jz      loc_5D9880
0x5D9768: cmp     [esi+54h], edi
0x5D976B: jz      loc_5D9880
0x5D9771: call    sub_578D70
0x5D9776: cmp     al, 1
0x5D9778: jnz     loc_5D987A
0x5D977E: cmp     dword ptr [esi+58h], 1
0x5D9782: jl      short loc_5D97EA
0x5D9784: mov     eax, ds:0B333C4h
0x5D9789: mov     ecx, [esi+50h]
0x5D978C: push    eax; float
0x5D978D: call    sub_5E10F0
0x5D9792: test    al, al
0x5D9794: jnz     short loc_5D97EA
0x5D9796: mov     ecx, ds:0B33398h
0x5D979C: mov     ecx, [ecx+24h]
0x5D979F: call    sub_6AC3D0
0x5D97A4: push    2
0x5D97A6: push    5
0x5D97A8: call    TESTopic__GEtTopic
0x5D97AD: mov     ecx, [esi+50h]
0x5D97B0: mov     esi, ds:0B333C4h
0x5D97B6: mov     edx, [ecx]
0x5D97B8: add     esp, 8
0x5D97BB: push    edi
0x5D97BC: push    edi
0x5D97BD: push    edi
0x5D97BE: push    esi
0x5D97BF: push    eax
0x5D97C0: mov     eax, [edx+0DCh]
0x5D97C6: call    eax
0x5D97C8: fstp    st
0x5D97CA: fld     dword ptr ds:0A30634h
0x5D97D0: push    ecx
0x5D97D1: mov     ecx, ds:0B38DB8h
0x5D97D7: fstp    [esp+10h+duration]; duration
0x5D97DA: push    1; unk2
0x5D97DC: push    edi; unk1
0x5D97DD: push    ecx; string
0x5D97DE: call    GameUI_QueueMessage
0x5D97E3: add     esp, 10h
0x5D97E6: pop     edi
0x5D97E7: pop     esi
0x5D97E8: pop     ecx
0x5D97E9: retn
0x5D97EA: mov     ecx, ds:0B333C4h
0x5D97F0: mov     edx, [ecx]
0x5D97F2: mov     eax, [esi+54h]
0x5D97F5: mov     edx, [edx+2DCh]
0x5D97FB: push    eax
0x5D97FC: call    edx
0x5D97FE: mov     ecx, ds:0B333C4h
0x5D9804: add     ecx, 44h ; 'D'; this
0x5D9807: call    ExtraDataList_GetContainerChanges
0x5D980C: mov     ecx, [esi+58h]
0x5D980F: mov     edx, ds:0B333C4h
0x5D9815: push    edi
0x5D9816: push    ecx
0x5D9817: push    edx
0x5D9818: mov     ecx, eax
0x5D981A: call    sub_491700
0x5D981F: mov     ecx, esi
0x5D9821: call    SpellPurchaseMenu_Update
0x5D9826: push    0Fh; int
0x5D9828: mov     [esi+54h], edi
0x5D982B: mov     [esi+58h], edi
0x5D982E: call    sub_57DE50
0x5D9833: mov     ecx, ds:0B333C4h
0x5D9839: mov     edx, [ecx+11Ch]
0x5D983F: add     esp, 4
0x5D9842: cmp     edx, edi
0x5D9844: jle     short loc_5D9872
0x5D9846: mov     eax, 51EB851Fh
0x5D984B: imul    edx
0x5D984D: sar     edx, 5
0x5D9850: mov     eax, edx
0x5D9852: shr     eax, 1Fh
0x5D9855: add     eax, edx
0x5D9857: push    ebp
0x5D9858: mov     ebp, [ecx]
0x5D985A: mov     edx, [ebp+39Ch]
0x5D9860: mov     [esp+10h+var_4], eax
0x5D9864: push    ecx
0x5D9865: fild    [esp+14h+var_4]
0x5D9869: fstp    [esp+14h+var_14]
0x5D986C: push    edi
0x5D986D: push    1Dh
0x5D986F: call    edx
0x5D9871: pop     ebp
0x5D9872: pop     edi
0x5D9873: mov     byte ptr [esi+5Ch], 1
0x5D9877: pop     esi
0x5D9878: pop     ecx
0x5D9879: retn
0x5D987A: mov     [esi+54h], edi
0x5D987D: mov     [esi+58h], edi
0x5D9880: pop     edi
0x5D9881: pop     esi
0x5D9882: pop     ecx
0x5D9883: retn
