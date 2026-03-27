0x7D6390: sub     esp, 0A4h
0x7D6396: push    ebx
0x7D6397: push    ebp
0x7D6398: push    esi
0x7D6399: push    edi; _DWORD
0x7D639A: mov     ebp, ecx
0x7D639C: call    InitBSShaderAccumulator
0x7D63A1: cmp     byte ptr ds:0B42CDBh, 0
0x7D63A8: jnz     loc_7D68E6
0x7D63AE: mov     eax, [ebp+100h]
0x7D63B4: mov     ecx, [eax+88h]
0x7D63BA: fld     dword ptr [eax+0F8h]
0x7D63C0: mov     bl, [ebp+0F4h]
0x7D63C6: fstp    [esp+0B4h+var_90.Radius]
0x7D63CA: test    bl, bl
0x7D63CC: mov     edx, [eax+8Ch]
0x7D63D2: mov     [esp+0B4h+var_90.Center.x], ecx
0x7D63D6: mov     ecx, [eax+90h]
0x7D63DC: mov     [esp+0B4h+var_98], 0
0x7D63E4: mov     [esp+0B4h+var_99], 1
0x7D63E9: mov     [esp+0B4h+var_90.Center.y], edx
0x7D63ED: mov     [esp+0B4h+var_90.Center.z], ecx
0x7D63F1: jz      short loc_7D6427
0x7D63F3: mov     ecx, [ebp+14Ch]
0x7D63F9: test    ecx, ecx
0x7D63FB: jz      short loc_7D6427
0x7D63FD: mov     edx, [esp+0B4h+arg_0]
0x7D6404: mov     eax, [edx+0Ch]
0x7D6407: push    ecx
0x7D6408: push    eax
0x7D6409: mov     ecx, ebp
0x7D640B: call    sub_7D34C0
0x7D6410: neg     al
0x7D6412: sbb     eax, eax
0x7D6414: and     eax, 0FFFFFF01h
0x7D6419: add     eax, 0FFh
0x7D641E: mov     [esp+0B4h+var_98], eax
0x7D6422: jmp     loc_7D6539
0x7D6427: mov     esi, [esp+0B4h+arg_0]
0x7D642E: add     esi, 2Ch ; ','
0x7D6431: mov     ecx, 19h
0x7D6436: lea     edi, [esp+0B4h+a2.CullingPlanes.Constant+10h]
0x7D643A: rep movsd
0x7D643C: xor     esi, esi
0x7D643E: lea     edi, [esp+0B4h+a2.CullingPlanes.Constant+10h]
0x7D6442: mov     ecx, esi
0x7D6444: mov     eax, 1
0x7D6449: shl     eax, cl
0x7D644B: mov     ecx, [esp+0B4h+var_4]
0x7D6452: test    ecx, eax
0x7D6454: jz      short loc_7D64A0
0x7D6456: mov     eax, [edi+4]
0x7D6459: mov     edx, [edi]
0x7D645B: mov     ecx, [edi+8]
0x7D645E: mov     [esp+0B4h+a2.CullingPlanes.Normal.y], eax
0x7D6462: mov     [esp+0B4h+a2.CullingPlanes.Normal.x], edx
0x7D6466: mov     edx, [edi+0Ch]
0x7D6469: lea     eax, [esp+0B4h+a2]
0x7D646D: mov     [esp+0B4h+a2.CullingPlanes.Normal.z], ecx
0x7D6471: push    eax; a2
0x7D6472: lea     ecx, [esp+0B8h+var_90]; this
0x7D6476: mov     [esp+0B8h+a2.CullingPlanes.Constant], edx
0x7D647A: call    sub_47DA70
0x7D647F: cmp     eax, 2
0x7D6482: jz      loc_7D6635
0x7D6488: lea     ecx, [esp+0B4h+var_90]
0x7D648C: push    ecx
0x7D648D: lea     ecx, [esp+0B8h+a2]
0x7D6491: call    sub_7415E0
0x7D6496: cmp     eax, 2
0x7D6499: jnz     short loc_7D64A0
0x7D649B: mov     [esp+0B4h+var_99], 0
0x7D64A0: add     esi, 1
0x7D64A3: add     edi, 10h
0x7D64A6: cmp     esi, 6
0x7D64A9: jb      short loc_7D6442
0x7D64AB: cmp     [esp+0B4h+var_99], 0
0x7D64B0: jnz     loc_7D6539
0x7D64B6: test    bl, bl
0x7D64B8: jz      short loc_7D6539
0x7D64BA: cmp     dword ptr ds:0B42F48h, 3
0x7D64C1: jl      short loc_7D6539
0x7D64C3: test    byte ptr ds:0B42F40h, 10h
0x7D64CA: mov     eax, 0
0x7D64CF: setnle  al
0x7D64D2: test    al, al
0x7D64D4: jz      short loc_7D6539
0x7D64D6: cmp     byte ptr [ebp+0F5h], 0
0x7D64DD: jz      short loc_7D6539
0x7D64DF: mov     edi, [esp+0B4h+var_90.Radius]
0x7D64E3: xor     esi, esi
0x7D64E5: xor     ebx, ebx
0x7D64E7: jmp     short loc_7D64F0
0x7D64E9: align 10h
0x7D64F0: mov     edx, [esp+0B4h+arg_0]
0x7D64F7: mov     ecx, [esp+0B4h+var_90.Center.x]
0x7D64FB: push    esi
0x7D64FC: push    edx
0x7D64FD: mov     edx, [esp+0BCh+var_90.Center.y]
0x7D6501: sub     esp, 10h
0x7D6504: mov     eax, esp
0x7D6506: mov     [eax], ecx
0x7D6508: mov     ecx, [esp+0CCh+var_90.Center.z]
0x7D650C: mov     [eax+4], edx
0x7D650F: mov     [eax+8], ecx
0x7D6512: mov     ecx, ebp
0x7D6514: mov     [eax+0Ch], edi
0x7D6517: call    sub_7D5B20
0x7D651C: test    al, al
0x7D651E: jnz     short loc_7D652D
0x7D6520: mov     edx, 1
0x7D6525: mov     ecx, ebx
0x7D6527: shl     edx, cl
0x7D6529: or      [esp+0B4h+var_98], edx
0x7D652D: add     esi, 1
0x7D6530: add     ebx, 1
0x7D6533: cmp     si, 6
0x7D6537: jb      short loc_7D64F0
0x7D6539: fld     dword ptr [ebp+0D4h]
0x7D653F: mov     esi, 0FFh
0x7D6544: cmp     word ptr [esp+0B4h+var_98], si
0x7D6549: fstp    [esp+0B4h+var_94]
0x7D654D: fld     dword ptr [ebp+0D8h]
0x7D6553: fstp    [esp+0B4h+var_A0]
0x7D6557: fldz
0x7D6559: jz      loc_7D67A7
0x7D655F: mov     eax, [esp+0B4h+arg_0]
0x7D6566: fstp    st
0x7D6568: mov     eax, [eax+0Ch]
0x7D656B: fld     [esp+0B4h+var_90.Center.x]
0x7D656F: mov     ecx, [eax+88h]
0x7D6575: mov     edx, [eax+8Ch]
0x7D657B: mov     eax, [eax+90h]
0x7D6581: mov     [esp+0B4h+a2.CullingPlanes.Normal.y+0Ch], ecx
0x7D6585: fsub    [esp+0B4h+a2.CullingPlanes.Normal.y+0Ch]
0x7D6589: mov     [esp+0B4h+a2.CullingPlanes.Normal.z+0Ch], edx
0x7D658D: mov     [esp+0B4h+a2.CullingPlanes.Normal.x+18h], eax
0x7D6591: fstp    [esp+0B4h+a2.CullingPlanes.Normal.x]
0x7D6595: fld     [esp+0B4h+var_90.Center.y]
0x7D6599: fsub    [esp+0B4h+a2.CullingPlanes.Normal.z+0Ch]
0x7D659D: fstp    [esp+0B4h+a2.CullingPlanes.Normal.y]
0x7D65A1: fld     [esp+0B4h+var_90.Center.z]
0x7D65A5: fsub    [esp+0B4h+a2.CullingPlanes.Normal.x+18h]
0x7D65A9: fstp    [esp+0B4h+a2.CullingPlanes.Normal.z]
0x7D65AD: fld     [esp+0B4h+a2.CullingPlanes.Normal.y]
0x7D65B1: fld     [esp+0B4h+a2.CullingPlanes.Normal.x]
0x7D65B5: fld     [esp+0B4h+a2.CullingPlanes.Normal.z]
0x7D65B9: fld     st(1)
0x7D65BB: fmulp   st(2), st
0x7D65BD: fld     st(2)
0x7D65BF: fmulp   st(3), st
0x7D65C1: fxch    st(1)
0x7D65C3: faddp   st(2), st
0x7D65C5: fmul    st, st
0x7D65C7: faddp   st(1), st
0x7D65C9: fstp    [esp+0B4h+var_A4]
0x7D65CD: fld     [esp+0B4h+var_A4]
0x7D65D1: call    __CIsqrt
0x7D65D6: fstp    [esp+0B4h+var_A4]
0x7D65DA: fld     [esp+0B4h+var_A4]
0x7D65DE: fsub    [esp+0B4h+var_90.Radius]
0x7D65E2: fstp    [esp+0B4h+var_A4]
0x7D65E6: fld     [esp+0B4h+var_A4]
0x7D65EA: fld     dword ptr ds:0B4307Ch
0x7D65F0: fcom    st(1)
0x7D65F2: fnstsw  ax
0x7D65F4: fld1
0x7D65F6: test    ah, 41h
0x7D65F9: jz      loc_7D66BA
0x7D65FF: fldz
0x7D6601: fld     st
0x7D6603: fld     dword ptr ds:0B43080h
0x7D6609: fucom   st(1)
0x7D660B: fnstsw  ax
0x7D660D: fstp    st(1)
0x7D660F: test    ah, 44h
0x7D6612: jnp     loc_7D670D
0x7D6618: fcom    st(4)
0x7D661A: fnstsw  ax
0x7D661C: test    ah, 5
0x7D661F: jp      short loc_7D6642
0x7D6621: fstp    st(4)
0x7D6623: mov     [esp+0B4h+var_98], esi
0x7D6627: fstp    st(2)
0x7D6629: fstp    st(2)
0x7D662B: fst     [esp+0B4h+var_94]
0x7D662F: fst     [esp+0B4h+var_A0]
0x7D6633: jmp     short loc_7D6667
0x7D6635: mov     [esp+0B4h+var_98], 0FFh
0x7D663D: jmp     loc_7D6539
0x7D6642: fld     st(4)
0x7D6644: fsub    st, st(4)
0x7D6646: fxch    st(1)
0x7D6648: fsubrp  st(4), st
0x7D664A: fdivrp  st(3), st
0x7D664C: fld     st(1)
0x7D664E: fsubrp  st(3), st
0x7D6650: fxch    st(2)
0x7D6652: fstp    [esp+0B4h+var_94]
0x7D6656: fxch    st(1)
0x7D6658: fcom    [esp+0B4h+var_94]
0x7D665C: fnstsw  ax
0x7D665E: test    ah, 5
0x7D6661: jnp     short loc_7D66C8
0x7D6663: fstp    st(2)
0x7D6665: fxch    st(1)
0x7D6667: mov     ecx, [ebp+130h]
0x7D666D: test    ecx, ecx
0x7D666F: jz      short loc_7D668F
0x7D6671: fstp    st
0x7D6673: push    2
0x7D6675: fstp    st
0x7D6677: call    NiNode_GetNiPropertyByID
0x7D667C: test    eax, eax
0x7D667E: jz      short loc_7D668B
0x7D6680: fld     dword ptr [eax+50h]
0x7D6683: fmul    [esp+0B4h+var_A0]
0x7D6687: fstp    [esp+0B4h+var_A0]
0x7D668B: fld1
0x7D668D: fldz
0x7D668F: cmp     dword ptr ds:0B42D78h, 0
0x7D6696: jz      loc_7D673B
0x7D669C: fstp    st
0x7D669E: push    1; _DWORD
0x7D66A0: push    1; _DWORD
0x7D66A2: fstp    st
0x7D66A4: call    dword ptr ds:0B42D78h
0x7D66AA: fstp    [esp+0BCh+var_A4]
0x7D66AE: fld1
0x7D66B0: add     esp, 8
0x7D66B3: fldz
0x7D66B5: jmp     loc_7D673F
0x7D66BA: fstp    st(1)
0x7D66BC: fldz
0x7D66BE: fxch    st(1)
0x7D66C0: fld1
0x7D66C2: fstp    [esp+0B4h+var_94]
0x7D66C6: fxch    st(1)
0x7D66C8: cmp     byte ptr [ebp+0F4h], 0
0x7D66CF: jz      short loc_7D6663
0x7D66D1: fld     dword ptr ds:0B43084h
0x7D66D7: fcom    st(3)
0x7D66D9: fnstsw  ax
0x7D66DB: test    ah, 41h
0x7D66DE: jz      short loc_7D672C
0x7D66E0: fld     st(1)
0x7D66E2: fld     dword ptr ds:0B43088h
0x7D66E8: fucom   st(1)
0x7D66EA: fnstsw  ax
0x7D66EC: fstp    st(1)
0x7D66EE: test    ah, 44h
0x7D66F1: jnp     short loc_7D672A
0x7D66F3: fcom    st(4)
0x7D66F5: fnstsw  ax
0x7D66F7: test    ah, 5
0x7D66FA: jp      short loc_7D6713
0x7D66FC: fstp    st(4)
0x7D66FE: fstp    st(3)
0x7D6700: fstp    st(2)
0x7D6702: fxch    st(1)
0x7D6704: fst     [esp+0B4h+var_A0]
0x7D6708: jmp     loc_7D6667
0x7D670D: fstp    st(3)
0x7D670F: fstp    st(2)
0x7D6711: jmp     short loc_7D66C0
0x7D6713: fld     st(1)
0x7D6715: fsubp   st(5), st
0x7D6717: fsubrp  st(1), st
0x7D6719: fdivp   st(3), st
0x7D671B: fld     st(1)
0x7D671D: fsubrp  st(3), st
0x7D671F: fxch    st(2)
0x7D6721: fstp    [esp+0B4h+var_A0]
0x7D6725: jmp     loc_7D6665
0x7D672A: fstp    st(4)
0x7D672C: fstp    st(3)
0x7D672E: fstp    st(2)
0x7D6730: fld1
0x7D6732: fstp    [esp+0B4h+var_A0]
0x7D6736: jmp     loc_7D6665
0x7D673B: fst     [esp+0B4h+var_A4]
0x7D673F: fld     dword ptr [ebp+0E0h]
0x7D6745: fadd    [esp+0B4h+var_A4]
0x7D6749: fstp    [esp+0B4h+var_A4]
0x7D674D: fld     [esp+0B4h+var_A4]
0x7D6751: fst     dword ptr [ebp+0E0h]
0x7D6757: fld     st
0x7D6759: fld     dword ptr ds:0B2C680h
0x7D675F: fld     st
0x7D6761: fdivp   st(2), st
0x7D6763: fxch    st(1)
0x7D6765: fcomp   st(4)
0x7D6767: fnstsw  ax
0x7D6769: test    ah, 41h
0x7D676C: jnz     short loc_7D6776
0x7D676E: fstp    st(1)
0x7D6770: fstp    st
0x7D6772: fld     st(1)
0x7D6774: jmp     short loc_7D6778
0x7D6776: fdivp   st(1), st
0x7D6778: fstp    [esp+0B4h+var_A4]
0x7D677C: fcom    dword ptr [ebp+0DCh]
0x7D6782: fnstsw  ax
0x7D6784: test    ah, 44h
0x7D6787: jp      short loc_7D6799
0x7D6789: fld     [esp+0B4h+var_A4]
0x7D678D: fsubp   st(2), st
0x7D678F: fld     [esp+0B4h+var_A0]
0x7D6793: fmulp   st(2), st
0x7D6795: fxch    st(1)
0x7D6797: jmp     short loc_7D67A3
0x7D6799: fstp    st(1)
0x7D679B: fld     [esp+0B4h+var_A4]
0x7D679F: fmul    [esp+0B4h+var_A0]
0x7D67A3: fstp    [esp+0B4h+var_A0]
0x7D67A7: movzx   eax, word ptr [ebp+118h]
0x7D67AE: fld     [esp+0B4h+var_A0]
0x7D67B2: cmp     ax, si
0x7D67B5: jnz     short loc_7D67C3
0x7D67B7: cmp     word ptr [esp+0B4h+var_98], si
0x7D67BC: jnz     short loc_7D683A
0x7D67BE: cmp     ax, si
0x7D67C1: jz      short loc_7D67CA
0x7D67C3: cmp     word ptr [esp+0B4h+var_98], si
0x7D67C8: jz      short loc_7D683A
0x7D67CA: fld     st(1)
0x7D67CC: fcomp   dword ptr [ebp+0D4h]
0x7D67D2: fnstsw  ax
0x7D67D4: test    ah, 44h
0x7D67D7: jp      short loc_7D67E6
0x7D67D9: fld1
0x7D67DB: fcomp   [esp+0B4h+var_94]
0x7D67DF: fnstsw  ax
0x7D67E1: test    ah, 5
0x7D67E4: jnp     short loc_7D683A
0x7D67E6: fxch    st(1)
0x7D67E8: fcom    dword ptr [ebp+0D4h]
0x7D67EE: fnstsw  ax
0x7D67F0: test    ah, 5
0x7D67F3: jp      short loc_7D6800
0x7D67F5: fcom    [esp+0B4h+var_94]
0x7D67F9: fnstsw  ax
0x7D67FB: test    ah, 44h
0x7D67FE: jnp     short loc_7D683E
0x7D6800: fcom    dword ptr [ebp+0D8h]
0x7D6806: fnstsw  ax
0x7D6808: test    ah, 44h
0x7D680B: jp      short loc_7D6816
0x7D680D: fcom    st(1)
0x7D680F: fnstsw  ax
0x7D6811: test    ah, 5
0x7D6814: jnp     short loc_7D683E
0x7D6816: fcom    dword ptr [ebp+0D8h]
0x7D681C: fnstsw  ax
0x7D681E: test    ah, 5
0x7D6821: jp      loc_7D68C2
0x7D6827: fld     st
0x7D6829: fucomp  st(2)
0x7D682B: fnstsw  ax
0x7D682D: fstp    st(1)
0x7D682F: test    ah, 44h
0x7D6832: jp      loc_7D68C4
0x7D6838: jmp     short loc_7D6840
0x7D683A: fstp    st
0x7D683C: jmp     short loc_7D6840
0x7D683E: fstp    st(1)
0x7D6840: mov     esi, [ebp+0E8h]
0x7D6846: test    esi, esi
0x7D6848: jz      short loc_7D686D
0x7D684A: fstp    st
0x7D684C: lea     eax, [esi+8]
0x7D684F: mov     eax, [eax]
0x7D6851: mov     esi, [esi]
0x7D6853: push    4
0x7D6855: mov     ecx, eax
0x7D6857: call    NiNode_GetNiPropertyByID
0x7D685C: test    eax, eax
0x7D685E: jz      short loc_7D6867
0x7D6860: mov     dword ptr [eax+24h], 0
0x7D6867: test    esi, esi
0x7D6869: jnz     short loc_7D684C
0x7D686B: fldz
0x7D686D: fcomp   dword ptr [ebp+0D8h]
0x7D6873: fnstsw  ax
0x7D6875: test    ah, 44h
0x7D6878: jp      short loc_7D68C6
0x7D687A: mov     eax, [ebp+114h]
0x7D6880: test    eax, eax
0x7D6882: jz      short loc_7D68C6
0x7D6884: mov     ecx, ds:0B42F50h; this
0x7D688A: push    eax; a2
0x7D688B: call    BSTextureManager_DiscardShadowMap
0x7D6890: mov     esi, [ebp+114h]
0x7D6896: test    esi, esi
0x7D6898: jz      short loc_7D68C6
0x7D689A: lea     ecx, [esi+4]
0x7D689D: push    ecx; lpAddend
0x7D689E: call    dword ptr ds:0A2807Ch
0x7D68A4: test    eax, eax
0x7D68A6: jnz     short loc_7D68B6
0x7D68A8: test    esi, esi
0x7D68AA: jz      short loc_7D68B6
0x7D68AC: mov     edx, [esi]
0x7D68AE: mov     eax, [edx]
0x7D68B0: push    1
0x7D68B2: mov     ecx, esi
0x7D68B4: call    eax
0x7D68B6: mov     dword ptr [ebp+114h], 0
0x7D68C0: jmp     short loc_7D68C6
0x7D68C2: fstp    st(1)
0x7D68C4: fstp    st
0x7D68C6: fld     [esp+0B4h+var_94]
0x7D68CA: mov     cx, word ptr [esp+0B4h+var_98]
0x7D68CF: fstp    dword ptr [ebp+0D4h]
0x7D68D5: mov     [ebp+118h], cx
0x7D68DC: fld     [esp+0B4h+var_A0]
0x7D68E0: fstp    dword ptr [ebp+0D8h]
0x7D68E6: pop     edi
0x7D68E7: pop     esi
0x7D68E8: pop     ebp
0x7D68E9: pop     ebx
0x7D68EA: add     esp, 0A4h
0x7D68F0: retn    4
