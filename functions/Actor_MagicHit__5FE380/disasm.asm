0x5FE380: sub     esp, 14h
0x5FE383: push    esi
0x5FE384: mov     esi, ecx
0x5FE386: mov     eax, [esi]
0x5FE388: mov     edx, [eax+198h]
0x5FE38E: push    0
0x5FE390: call    edx
0x5FE392: test    al, al
0x5FE394: jnz     Actor_MagicHit___Done
0x5FE39A: lea     ecx, [esi+44h]
0x5FE39D: call    BaseExtraList_HasGhost
0x5FE3A2: test    al, al
0x5FE3A4: jnz     Actor_MagicHit___Done
0x5FE3AA: mov     eax, [esi]
0x5FE3AC: mov     edx, [eax+170h]
0x5FE3B2: push    ebx
0x5FE3B3: mov     ecx, esi
0x5FE3B5: call    edx
0x5FE3B7: cmp     byte ptr [eax+4], 24h ; '$'
0x5FE3BB: mov     ebx, 4
0x5FE3C0: jnz     short loc_5FE3FB
0x5FE3C2: mov     eax, [esi]
0x5FE3C4: mov     edx, [eax+170h]
0x5FE3CA: mov     ecx, esi
0x5FE3CC: call    edx
0x5FE3CE: test    eax, eax
0x5FE3D0: jz      short loc_5FE3FB
0x5FE3D2: cmp     [eax+104h], bl
0x5FE3D8: jnz     short loc_5FE3FB
0x5FE3DA: mov     eax, [esi]
0x5FE3DC: mov     edx, [eax+388h]
0x5FE3E2: mov     ecx, esi
0x5FE3E4: call    edx
0x5FE3E6: test    eax, eax
0x5FE3E8: jz      short loc_5FE3FB
0x5FE3EA: mov     edx, [eax]
0x5FE3EC: pop     ebx
0x5FE3ED: pop     esi
0x5FE3EE: add     esp, 14h
0x5FE3F1: mov     ecx, eax
0x5FE3F3: mov     edx, [edx+3A8h]
0x5FE3F9: jmp     edx
0x5FE3FB: cmp     [esi+0B0h], ebx
0x5FE401: push    edi
0x5FE402: mov     edi, [esp+24h]
0x5FE406: jnz     short loc_5FE41D
0x5FE408: mov     ecx, [esi+58h]
0x5FE40B: mov     eax, [ecx]
0x5FE40D: mov     edx, [eax+3D0h]
0x5FE413: call    edx
0x5FE415: cmp     eax, edi
0x5FE417: jz      loc_5FEBE0
0x5FE41D: test    edi, edi
0x5FE41F: jz      short loc_5FE426
0x5FE421: lea     eax, [edi+5Ch]
0x5FE424: jmp     short loc_5FE428
0x5FE426: xor     eax, eax
0x5FE428: push    ebp
0x5FE429: push    eax
0x5FE42A: push    4D524843h
0x5FE42F: lea     ecx, [esi+68h]
0x5FE432: call    sub_6A24B0
0x5FE437: mov     eax, [esi]
0x5FE439: mov     edx, [eax+330h]
0x5FE43F: mov     ecx, esi
0x5FE441: mov     byte ptr [esp+28h], 0
0x5FE446: call    edx
0x5FE448: mov     ebx, [esi+8]
0x5FE44B: mov     [esp+28h+var_18], eax
0x5FE44F: mov     eax, [esi]
0x5FE451: mov     edx, [eax+224h]
0x5FE457: shr     ebx, 14h
0x5FE45A: push    edi
0x5FE45B: mov     ecx, esi
0x5FE45D: and     bl, 1
0x5FE460: call    edx
0x5FE462: mov     ebp, eax
0x5FE464: cmp     ebp, ds:0B36888h
0x5FE46A: jge     short loc_5FE46E
0x5FE46C: xor     bl, bl
0x5FE46E: mov     eax, [esi]
0x5FE470: mov     edx, [eax+170h]
0x5FE476: mov     ecx, esi
0x5FE478: call    edx
0x5FE47A: cmp     byte ptr [eax+4], 24h ; '$'
0x5FE47E: push    64h ; 'd'
0x5FE480: setz    al
0x5FE483: push    0; responsibility
0x5FE485: mov     [esp+34h+a7], al
0x5FE489: mov     ecx, dword ptr [esp+34h+a7]
0x5FE48D: push    ecx; a7
0x5FE48E: push    0; a6
0x5FE490: push    0; unk000
0x5FE492: push    edi; a2
0x5FE493: mov     ecx, esi; this
0x5FE495: call    TesObjectREF_GetDistance
0x5FE49A: mov     edx, [esi]
0x5FE49C: mov     eax, [edx+284h]
0x5FE4A2: push    ecx
0x5FE4A3: fstp    dword ptr [esp+40h+a5]; a5
0x5FE4A6: push    21h ; '!'; distanceToTarget
0x5FE4A8: mov     ecx, esi
0x5FE4AA: call    eax
0x5FE4AC: push    eax; aggressionStat
0x5FE4AD: push    0; friendlyFight?
0x5FE4AF: push    ebp; disposition
0x5FE4B0: call    shouldActorFight
0x5FE4B5: add     esp, 20h
0x5FE4B8: cmp     [esp+30h+var_20], 0
0x5FE4BD: mov     [esp+30h+var_18], eax
0x5FE4C1: jnz     short loc_5FE511
0x5FE4C3: test    bl, bl
0x5FE4C5: jnz     short loc_5FE511
0x5FE4C7: mov     ecx, [esi+58h]
0x5FE4CA: mov     edx, [ecx]
0x5FE4CC: mov     eax, [edx+3D0h]
0x5FE4D2: call    eax
0x5FE4D4: cmp     eax, edi
0x5FE4D6: jnz     loc_5FE5C4
0x5FE4DC: cmp     edi, ds:0B333C4h
0x5FE4E2: jnz     loc_5FEBDF
0x5FE4E8: lea     ebx, [esi+44h]
0x5FE4EB: push    edi
0x5FE4EC: mov     ecx, ebx
0x5FE4EE: call    sub_420E00
0x5FE4F3: push    edi
0x5FE4F4: mov     ecx, ebx
0x5FE4F6: call    sub_420ED0
0x5FE4FB: cmp     eax, ds:0B368A8h
0x5FE501: jge     loc_5FE5C4
0x5FE507: pop     ebp
0x5FE508: pop     edi
0x5FE509: pop     ebx
0x5FE50A: pop     esi
0x5FE50B: add     esp, 14h
0x5FE50E: retn    8
0x5FE511: mov     ecx, [esi+8]
0x5FE514: mov     ebp, [esp+30h+var_20]
0x5FE518: shr     ecx, 14h
0x5FE51B: test    cl, 1
0x5FE51E: jnz     loc_5FE6EF
0x5FE524: test    ebp, ebp
0x5FE526: jz      short loc_5FE58A
0x5FE528: push    edi
0x5FE529: mov     ecx, ebp
0x5FE52B: call    sub_613670
0x5FE530: test    al, al
0x5FE532: jnz     short loc_5FE58A
0x5FE534: push    0; a2
0x5FE536: mov     ecx, esi; this
0x5FE538: call    Actor_GetActorBaseForm
0x5FE53D: mov     ecx, eax
0x5FE53F: add     ecx, 24h ; '$'
0x5FE542: call    TESActorBaseData_AllFactionsAreEvil
0x5FE547: test    al, al
0x5FE549: jnz     short loc_5FE58A
0x5FE54B: cmp     [esp+30h+var_18], 0
0x5FE550: jg      short loc_5FE58A
0x5FE552: cmp     edi, ds:0B333C4h
0x5FE558: jz      loc_5FE6F7
0x5FE55E: mov     edx, [edi]
0x5FE560: mov     eax, [edx+330h]
0x5FE566: mov     ecx, edi
0x5FE568: call    eax
0x5FE56A: test    eax, eax
0x5FE56C: jz      short loc_5FE58A
0x5FE56E: mov     edx, [edi]
0x5FE570: mov     eax, [edx+330h]
0x5FE576: push    esi
0x5FE577: mov     ecx, edi
0x5FE579: call    eax
0x5FE57B: mov     ecx, eax
0x5FE57D: call    sub_613670
0x5FE582: test    al, al
0x5FE584: jz      loc_5FE6EF
0x5FE58A: push    edi
0x5FE58B: lea     ecx, [esi+44h]
0x5FE58E: call    sub_420EB0
0x5FE593: test    bl, bl
0x5FE595: jnz     short loc_5FE5A8
0x5FE597: test    ebp, ebp
0x5FE599: jz      short loc_5FE5C4
0x5FE59B: mov     ecx, [esp+30h+var_4]
0x5FE59F: push    ecx
0x5FE5A0: push    edi
0x5FE5A1: mov     ecx, ebp
0x5FE5A3: call    sub_624C90
0x5FE5A8: test    ebp, ebp
0x5FE5AA: jz      short loc_5FE5BC
0x5FE5AC: push    edi
0x5FE5AD: mov     ecx, ebp
0x5FE5AF: call    sub_613670
0x5FE5B4: test    al, al
0x5FE5B6: jnz     loc_5FEBDF
0x5FE5BC: test    bl, bl
0x5FE5BE: jnz     loc_5FEBDF
0x5FE5C4: push    0; int
0x5FE5C6: push    0; int
0x5FE5C8: push    0; int
0x5FE5CA: lea     edx, [esp+3Ch+var_1C]
0x5FE5CE: push    edx; int
0x5FE5CF: push    edi; int
0x5FE5D0: push    0; int
0x5FE5D2: mov     ecx, esi; int
0x5FE5D4: call    Actor_GetDetectionLevel
0x5FE5D9: push    0; int
0x5FE5DB: push    1; int
0x5FE5DD: push    1; int
0x5FE5DF: mov     [esp+3Ch+var_10], eax
0x5FE5E3: lea     eax, [esp+3Ch+var_1C]
0x5FE5E7: push    eax; int
0x5FE5E8: push    edi; int
0x5FE5E9: push    1; int
0x5FE5EB: mov     ecx, esi; int
0x5FE5ED: call    Actor_GetDetectionLevel
0x5FE5F2: mov     ebx, eax
0x5FE5F4: mov     dword ptr [esp+30h+a7], ebx
0x5FE5F8: fild    dword ptr [esp+30h+a7]
0x5FE5FC: xor     ebp, ebp
0x5FE5FE: fld     dword ptr ds:0B36778h
0x5FE604: fcompp
0x5FE606: fnstsw  ax
0x5FE608: test    ah, 5
0x5FE60B: jp      short loc_5FE612
0x5FE60D: mov     ebp, 3
0x5FE612: mov     ecx, [esi+58h]
0x5FE615: mov     edx, [ecx]
0x5FE617: mov     eax, [edx+8]
0x5FE61A: call    eax
0x5FE61C: test    eax, eax
0x5FE61E: jnz     short loc_5FE654
0x5FE620: mov     ecx, [esi+58h]
0x5FE623: mov     edx, [ecx]
0x5FE625: mov     eax, [edx+3B0h]
0x5FE62B: push    edi
0x5FE62C: call    eax
0x5FE62E: test    eax, eax
0x5FE630: jnz     short loc_5FE647
0x5FE632: mov     eax, [esp+34h+var_20]
0x5FE636: mov     ecx, [esi+58h]
0x5FE639: mov     edx, [ecx]
0x5FE63B: mov     edx, [edx+0A8h]
0x5FE641: push    ebx
0x5FE642: push    eax
0x5FE643: push    ebp
0x5FE644: push    edi
0x5FE645: call    edx
0x5FE647: mov     cl, byte ptr [esp+44h+var_30]
0x5FE64B: mov     [eax+0Ch], ebx
0x5FE64E: mov     [eax+4], ebp
0x5FE651: mov     [eax+8], cl
0x5FE654: test    ebx, ebx
0x5FE656: mov     ecx, esi; this
0x5FE658: jle     loc_5FEA7C
0x5FE65E: call    sub_5E6C60
0x5FE663: test    al, al
0x5FE665: jz      loc_5FE7A0
0x5FE66B: cmp     [esp+44h+var_34], 0
0x5FE670: jnz     loc_5FE7A0
0x5FE676: mov     ecx, edi; this
0x5FE678: call    Actor_IsNPC
0x5FE67D: test    al, al
0x5FE67F: jz      loc_5FE7A0
0x5FE685: mov     ecx, edi; this
0x5FE687: call    Actor_IsNPC
0x5FE68C: test    al, al
0x5FE68E: jz      loc_5FE7A0
0x5FE694: mov     ecx, edi
0x5FE696: call    Actor__GetRaceIfNPC
0x5FE69B: test    eax, eax
0x5FE69D: jz      loc_5FE7A0
0x5FE6A3: mov     ecx, edi
0x5FE6A5: call    Actor__GetRaceIfNPC
0x5FE6AA: test    byte ptr [eax+70h], 1
0x5FE6AE: jz      loc_5FE7A0
0x5FE6B4: mov     eax, ds:0B333C4h
0x5FE6B9: cmp     edi, eax
0x5FE6BB: jnz     loc_5FE787
0x5FE6C1: cmp     byte ptr [eax+738h], 0
0x5FE6C8: jz      loc_5FE787
0x5FE6CE: mov     edx, [esi]
0x5FE6D0: push    1
0x5FE6D2: push    0
0x5FE6D4: push    0
0x5FE6D6: push    0
0x5FE6D8: push    0
0x5FE6DA: push    eax
0x5FE6DB: mov     eax, [edx+32Ch]
0x5FE6E1: mov     ecx, esi
0x5FE6E3: call    eax
0x5FE6E5: pop     ebp
0x5FE6E6: pop     edi
0x5FE6E7: pop     ebx
0x5FE6E8: pop     esi
0x5FE6E9: add     esp, 14h
0x5FE6EC: retn    8
0x5FE6EF: cmp     edi, ds:0B333C4h
0x5FE6F5: jnz     short loc_5FE76F
0x5FE6F7: mov     ecx, [esi+8]
0x5FE6FA: shr     ecx, 14h
0x5FE6FD: test    cl, 1
0x5FE700: jz      short loc_5FE706
0x5FE702: test    ebp, ebp
0x5FE704: jnz     short loc_5FE76F
0x5FE706: push    edi
0x5FE707: lea     ecx, [esi+44h]
0x5FE70A: call    sub_420E00
0x5FE70F: test    ebp, ebp
0x5FE711: mov     edx, ds:0B368A8h
0x5FE717: mov     [esp+30h+var_1C], edx
0x5FE71B: jz      short loc_5FE736
0x5FE71D: push    edi
0x5FE71E: lea     ecx, [ebp+15Ch]
0x5FE724: call    sub_446C30
0x5FE729: test    al, al
0x5FE72B: jz      short loc_5FE736
0x5FE72D: mov     eax, ds:0B368E0h
0x5FE732: mov     [esp+30h+var_1C], eax
0x5FE736: push    edi
0x5FE737: lea     ecx, [esi+44h]
0x5FE73A: call    sub_420ED0
0x5FE73F: cmp     eax, [esp+30h+var_1C]
0x5FE743: setnle  al
0x5FE746: test    al, al
0x5FE748: jz      short loc_5FE76F
0x5FE74A: test    ebp, ebp
0x5FE74C: jz      loc_5FE5C4
0x5FE752: fldz
0x5FE754: sub     esp, 8
0x5FE757: fst     [esp+38h+var_34]; float
0x5FE75B: mov     ecx, ebp
0x5FE75D: fstp    [esp+38h+var_38]; float
0x5FE760: push    0; float
0x5FE762: push    0; char
0x5FE764: push    edi; int
0x5FE765: call    sub_616190
0x5FE76A: jmp     loc_5FE593
0x5FE76F: mov     edx, [esi]
0x5FE771: mov     eax, [edx+308h]
0x5FE777: push    1
0x5FE779: push    1
0x5FE77B: push    edi
0x5FE77C: mov     ecx, esi
0x5FE77E: call    eax
0x5FE780: mov     bl, 1
0x5FE782: jmp     loc_5FE5A8
0x5FE787: mov     edx, [esi]
0x5FE789: mov     eax, [edx+240h]
0x5FE78F: push    1
0x5FE791: push    edi
0x5FE792: mov     ecx, esi
0x5FE794: call    eax
0x5FE796: pop     ebp
0x5FE797: pop     edi
0x5FE798: pop     ebx
0x5FE799: pop     esi
0x5FE79A: add     esp, 14h
0x5FE79D: retn    8
0x5FE7A0: cmp     edi, ds:0B333C4h
0x5FE7A6: jz      short loc_5FE7E3
0x5FE7A8: mov     edx, [edi]
0x5FE7AA: mov     eax, [edx+338h]
0x5FE7B0: mov     ecx, edi
0x5FE7B2: call    eax
0x5FE7B4: cmp     eax, esi
0x5FE7B6: jz      short loc_5FE7E3
0x5FE7B8: mov     ecx, edi
0x5FE7BA: call    sub_5E14A0
0x5FE7BF: cmp     eax, ds:0B333C4h
0x5FE7C5: jnz     loc_5FE92C
0x5FE7CB: mov     edx, [edi]
0x5FE7CD: mov     eax, [edx+338h]
0x5FE7D3: mov     ecx, edi
0x5FE7D5: call    eax
0x5FE7D7: cmp     eax, ds:0B333C4h
0x5FE7DD: jnz     loc_5FE92C
0x5FE7E3: cmp     esi, ds:0B333C4h
0x5FE7E9: jz      loc_5FE934
0x5FE7EF: push    0; a2
0x5FE7F1: mov     ecx, esi; this
0x5FE7F3: mov     byte ptr [esp+48h+var_30], 0
0x5FE7F8: call    Actor_GetActorBaseForm
0x5FE7FD: mov     ecx, eax
0x5FE7FF: add     ecx, 24h ; '$'
0x5FE802: call    TESActorBaseData_AllFactionsAreEvil
0x5FE807: test    al, al
0x5FE809: jnz     short loc_5FE812
0x5FE80B: cmp     [esp+44h+var_2C], 0
0x5FE810: jle     short loc_5FE817
0x5FE812: mov     byte ptr [esp+44h+var_30], 1
0x5FE817: cmp     [esp+44h+var_24], 0
0x5FE81C: mov     byte ptr [esp+44h+var_2C], 1
0x5FE821: jg      short loc_5FE828
0x5FE823: mov     byte ptr [esp+44h+var_2C], 0
0x5FE828: mov     eax, [esp+44h+var_2C]
0x5FE82C: mov     ecx, [esi+58h]
0x5FE82F: mov     edx, [ecx]
0x5FE831: mov     edx, [edx+228h]
0x5FE837: push    eax
0x5FE838: mov     eax, [esp+48h+var_30]
0x5FE83C: push    eax
0x5FE83D: push    0
0x5FE83F: push    0
0x5FE841: push    eax
0x5FE842: push    0
0x5FE844: push    0
0x5FE846: push    1
0x5FE848: push    edi
0x5FE849: push    esi
0x5FE84A: call    edx
0x5FE84C: cmp     [esp+6Ch+var_5C], 0
0x5FE851: jnz     loc_5FE92C
0x5FE857: mov     eax, [esi]
0x5FE859: mov     edx, [eax+330h]
0x5FE85F: mov     ecx, esi
0x5FE861: call    edx
0x5FE863: test    eax, eax
0x5FE865: jz      short loc_5FE880
0x5FE867: mov     eax, dword ptr [esp+6Ch+a5]
0x5FE86B: mov     edx, [esi]
0x5FE86D: push    eax
0x5FE86E: mov     eax, [edx+330h]
0x5FE874: push    edi
0x5FE875: mov     ecx, esi
0x5FE877: call    eax
0x5FE879: mov     ecx, eax
0x5FE87B: call    sub_624C90
0x5FE880: mov     ecx, edi; this
0x5FE882: call    sub_5E6C60
0x5FE887: test    al, al
0x5FE889: jnz     loc_5FE92C
0x5FE88F: mov     edx, [esi]
0x5FE891: mov     eax, [edx+330h]
0x5FE897: mov     ecx, esi
0x5FE899: call    eax
0x5FE89B: test    eax, eax
0x5FE89D: jnz     short loc_5FE902
0x5FE89F: push    eax
0x5FE8A0: mov     ecx, esi
0x5FE8A2: call    sub_5E6CD0
0x5FE8A7: test    al, al
0x5FE8A9: jnz     short loc_5FE902
0x5FE8AB: mov     ecx, esi; this
0x5FE8AD: call    Actor_IsCreature
0x5FE8B2: test    al, al
0x5FE8B4: jz      short loc_5FE8F1
0x5FE8B6: lea     ecx, [esi+44h]
0x5FE8B9: call    ExtraDataList_GetOwner
0x5FE8BE: test    eax, eax
0x5FE8C0: jz      short loc_5FE92C
0x5FE8C2: push    1
0x5FE8C4: push    edi
0x5FE8C5: mov     ecx, esi
0x5FE8C7: call    TESOBjectREFR_IsOwnedBy
0x5FE8CC: test    al, al
0x5FE8CE: jnz     short loc_5FE92C
0x5FE8D0: mov     ebp, [edi]
0x5FE8D2: lea     ecx, [esi+44h]
0x5FE8D5: add     ebp, 238h
0x5FE8DB: call    ExtraDataList_GetOwner
0x5FE8E0: mov     edx, [ebp+0]
0x5FE8E3: push    eax
0x5FE8E4: push    0
0x5FE8E6: push    1
0x5FE8E8: push    0
0x5FE8EA: push    esi
0x5FE8EB: mov     ecx, edi
0x5FE8ED: call    edx
0x5FE8EF: jmp     short loc_5FE92C
0x5FE8F1: mov     eax, [esi]
0x5FE8F3: mov     edx, [eax+240h]
0x5FE8F9: push    1
0x5FE8FB: push    edi
0x5FE8FC: mov     ecx, esi
0x5FE8FE: call    edx
0x5FE900: jmp     short loc_5FE92C
0x5FE902: mov     ecx, offset fCrimeDispAttack
0x5FE907: call    GameSetting_GetSafeFloatPointer
0x5FE90C: fld     dword ptr [eax]
0x5FE90E: mov     eax, [esi]
0x5FE910: fstp    dword ptr [esp+6Ch+a5]
0x5FE914: fld     dword ptr [esp+6Ch+a5]
0x5FE918: mov     edx, [eax+374h]
0x5FE91E: push    ecx
0x5FE91F: fstp    [esp+70h+var_70]
0x5FE922: push    edi
0x5FE923: mov     ecx, esi
0x5FE925: call    edx
0x5FE927: mov     [esp+74h+var_4C], 1
0x5FE92C: cmp     esi, ds:0B333C4h
0x5FE932: jnz     short loc_5FE946
0x5FE934: mov     eax, [edi]
0x5FE936: mov     edx, [eax+334h]
0x5FE93C: push    1
0x5FE93E: mov     ecx, edi
0x5FE940: call    edx
0x5FE942: test    al, al
0x5FE944: jz      short loc_5FE954
0x5FE946: mov     eax, [esi]
0x5FE948: mov     edx, [eax+394h]
0x5FE94E: push    1
0x5FE950: mov     ecx, esi
0x5FE952: call    edx
0x5FE954: push    1; a2
0x5FE956: mov     ecx, esi; this
0x5FE958: call    Actor_GetActorBaseForm
0x5FE95D: mov     ebx, eax
0x5FE95F: test    ebx, ebx
0x5FE961: jz      short loc_5FE97A
0x5FE963: lea     ecx, [ebx+3Ch]
0x5FE966: call    BSSimpleList_IsEmpty
0x5FE96B: test    al, al
0x5FE96D: jz      short loc_5FE97A
0x5FE96F: push    0; a2
0x5FE971: mov     ecx, esi; this
0x5FE973: call    Actor_GetActorBaseForm
0x5FE978: mov     ebx, eax
0x5FE97A: cmp     edi, ds:0B333C4h
0x5FE980: jnz     short loc_5FE98C
0x5FE982: push    1
0x5FE984: lea     ecx, [ebx+24h]
0x5FE987: call    TESActorBaseData_SetSharedPlayerFactionFlags
0x5FE98C: cmp     byte ptr [esp+8Ch+var_64], 0
0x5FE991: jz      loc_5FEBDF
0x5FE997: mov     ecx, edi; this
0x5FE999: call    Actor_IsNPC
0x5FE99E: test    al, al
0x5FE9A0: jz      loc_5FEBDF
0x5FE9A6: mov     ecx, edi
0x5FE9A8: call    Actor__GetRaceIfNPC
0x5FE9AD: test    eax, eax
0x5FE9AF: jz      loc_5FEBDF
0x5FE9B5: mov     ecx, edi
0x5FE9B7: call    Actor__GetRaceIfNPC
0x5FE9BC: test    byte ptr [eax+70h], 1
0x5FE9C0: jz      loc_5FEBDF
0x5FE9C6: mov     eax, [esi]
0x5FE9C8: mov     edx, [eax+334h]
0x5FE9CE: push    1
0x5FE9D0: mov     ecx, esi
0x5FE9D2: call    edx
0x5FE9D4: test    al, al
0x5FE9D6: jz      loc_5FEB86
0x5FE9DC: push    edi
0x5FE9DD: push    0Ch
0x5FE9DF: mov     ecx, offset dword_B3BDB0
0x5FE9E4: call    sub_67CF50
0x5FE9E9: mov     ebx, eax
0x5FE9EB: test    ebx, ebx
0x5FE9ED: mov     ebp, ebx
0x5FE9EF: mov     [esp+90h+var_64], ebp
0x5FE9F3: jz      loc_5FEB6C
0x5FE9F9: lea     esp, [esp+0]
0x5FEA00: mov     ecx, [ebx]
0x5FEA02: test    ecx, ecx
0x5FEA04: jz      loc_5FEB68
0x5FEA0A: mov     ebx, [ebx+4]
0x5FEA0D: push    0
0x5FEA0F: push    edi
0x5FEA10: call    sub_67B6B0
0x5FEA15: mov     ebp, eax
0x5FEA17: test    ebp, ebp
0x5FEA19: jz      loc_5FEB60
0x5FEA1F: cmp     byte ptr [ebp+4], 0
0x5FEA23: jnz     short loc_5FEA40
0x5FEA25: push    0; a2
0x5FEA27: mov     ecx, esi; this
0x5FEA29: call    Actor_GetActorBaseForm
0x5FEA2E: mov     ecx, eax
0x5FEA30: add     ecx, 24h ; '$'
0x5FEA33: call    TESActorBaseData_AllFactionsAreEvil
0x5FEA38: test    al, al
0x5FEA3A: jz      loc_5FEB60
0x5FEA40: mov     ecx, [ebp+0]; this
0x5FEA43: call    Actor_IsNPC
0x5FEA48: test    al, al
0x5FEA4A: jz      loc_5FEB60
0x5FEA50: mov     ecx, esi; this
0x5FEA52: call    TESObjectREFR_GetOwner
0x5FEA57: mov     ecx, esi; this
0x5FEA59: mov     ebp, eax
0x5FEA5B: call    Actor_IsNPC
0x5FEA60: test    al, al
0x5FEA62: jz      loc_5FEB1F
0x5FEA68: mov     eax, [esi]
0x5FEA6A: mov     edx, [eax+240h]
0x5FEA70: push    1
0x5FEA72: push    edi
0x5FEA73: mov     ecx, esi
0x5FEA75: call    edx
0x5FEA77: jmp     loc_5FEB60
0x5FEA7C: call    sub_5E6BA0
0x5FEA81: test    al, al
0x5FEA83: jnz     short loc_5FEAB5
0x5FEA85: mov     eax, [esi]
0x5FEA87: mov     edx, [eax+288h]
0x5FEA8D: push    21h ; '!'
0x5FEA8F: call    edx
0x5FEA91: fcomp   qword ptr ds:0A3AA50h
0x5FEA97: fnstsw  ax
0x5FEA99: test    ah, 5
0x5FEA9C: jp      short loc_5FEAB5
0x5FEA9E: mov     eax, [esi]
0x5FEAA0: mov     edx, [eax+318h]
0x5FEAA6: push    0
0x5FEAA8: push    0
0x5FEAAA: push    0
0x5FEAAC: push    0
0x5FEAAE: push    edi
0x5FEAAF: mov     ecx, esi
0x5FEAB1: call    edx
0x5FEAB3: jmp     short loc_5FEAC2
0x5FEAB5: mov     eax, [esi]
0x5FEAB7: mov     edx, [eax+31Ch]
0x5FEABD: push    edi
0x5FEABE: mov     ecx, esi
0x5FEAC0: call    edx
0x5FEAC2: push    1; a2
0x5FEAC4: mov     ecx, esi; this
0x5FEAC6: call    Actor_GetActorBaseForm
0x5FEACB: mov     ebx, eax
0x5FEACD: test    ebx, ebx
0x5FEACF: jz      short loc_5FEAE8
0x5FEAD1: lea     ecx, [ebx+3Ch]
0x5FEAD4: call    BSSimpleList_IsEmpty
0x5FEAD9: test    al, al
0x5FEADB: jz      short loc_5FEAE8
0x5FEADD: push    0; a2
0x5FEADF: mov     ecx, esi; this
0x5FEAE1: call    Actor_GetActorBaseForm
0x5FEAE6: mov     ebx, eax
0x5FEAE8: mov     ecx, esi; this
0x5FEAEA: call    Actor_IsNPC
0x5FEAEF: test    al, al
0x5FEAF1: jz      loc_5FEBDF
0x5FEAF7: test    ebx, ebx
0x5FEAF9: jz      loc_5FEBDF
0x5FEAFF: cmp     edi, ds:0B333C4h
0x5FEB05: jnz     loc_5FEBDF
0x5FEB0B: push    1
0x5FEB0D: lea     ecx, [ebx+24h]
0x5FEB10: call    TESActorBaseData_SetSharedPlayerFactionFlags
0x5FEB15: pop     ebp
0x5FEB16: pop     edi
0x5FEB17: pop     ebx
0x5FEB18: pop     esi
0x5FEB19: add     esp, 14h
0x5FEB1C: retn    8
0x5FEB1F: test    ebp, ebp
0x5FEB21: jz      short loc_5FEB60
0x5FEB23: mov     al, [ebp+4]
0x5FEB26: cmp     al, 23h ; '#'
0x5FEB28: jnz     short loc_5FEB37
0x5FEB2A: push    ebp
0x5FEB2B: mov     ecx, offset ActorProcessManager_ptr
0x5FEB30: call    sub_675220
0x5FEB35: jmp     short loc_5FEB4D
0x5FEB37: cmp     al, 6
0x5FEB39: jnz     short loc_5FEB60
0x5FEB3B: mov     ecx, esi; this
0x5FEB3D: call    TESObjectREFR_GetOwner
0x5FEB42: push    eax
0x5FEB43: mov     ecx, offset ActorProcessManager_ptr
0x5FEB48: call    sub_675290
0x5FEB4D: test    eax, eax
0x5FEB4F: jz      short loc_5FEB60
0x5FEB51: mov     edx, [eax]
0x5FEB53: push    1
0x5FEB55: mov     ecx, eax
0x5FEB57: mov     eax, [edx+240h]
0x5FEB5D: push    edi
0x5FEB5E: call    eax
0x5FEB60: test    ebx, ebx
0x5FEB62: jnz     loc_5FEA00
0x5FEB68: mov     ebp, [esp+98h+var_6C]
0x5FEB6C: mov     ecx, ebp
0x5FEB6E: call    BSSimpleList_Clear
0x5FEB73: push    ebp
0x5FEB74: call    FormHeapFree
0x5FEB79: add     esp, 4
0x5FEB7C: pop     ebp
0x5FEB7D: pop     edi
0x5FEB7E: pop     ebx
0x5FEB7F: pop     esi
0x5FEB80: add     esp, 14h
0x5FEB83: retn    8
0x5FEB86: mov     ecx, esi; this
0x5FEB88: call    Actor_IsCreature
0x5FEB8D: test    al, al
0x5FEB8F: jz      short loc_5FEBD0
0x5FEB91: lea     ebx, [esi+44h]
0x5FEB94: mov     ecx, ebx
0x5FEB96: call    ExtraDataList_GetOwner
0x5FEB9B: test    eax, eax
0x5FEB9D: jz      short loc_5FEBDF
0x5FEB9F: mov     ecx, ds:0B333C4h
0x5FEBA5: mov     edi, [ecx]
0x5FEBA7: mov     ecx, ebx
0x5FEBA9: add     edi, 238h
0x5FEBAF: call    ExtraDataList_GetOwner
0x5FEBB4: mov     ecx, ds:0B333C4h
0x5FEBBA: mov     edx, [edi]
0x5FEBBC: push    eax
0x5FEBBD: push    0
0x5FEBBF: push    1
0x5FEBC1: push    0
0x5FEBC3: push    esi
0x5FEBC4: call    edx
0x5FEBC6: pop     ebp
0x5FEBC7: pop     edi
0x5FEBC8: pop     ebx
0x5FEBC9: pop     esi
0x5FEBCA: add     esp, 14h
0x5FEBCD: retn    8
0x5FEBD0: mov     eax, [esi]
0x5FEBD2: mov     edx, [eax+240h]
0x5FEBD8: push    1
0x5FEBDA: push    edi
0x5FEBDB: mov     ecx, esi
0x5FEBDD: call    edx
0x5FEBDF: pop     ebp
0x5FEBE0: pop     edi
0x5FEBE1: pop     ebx
