0x649340: sub     esp, 8
0x649343: push    ebp
0x649344: push    esi
0x649345: mov     esi, ecx
0x649347: push    edi; float
0x649348: mov     ecx, offset TimeGlobals
0x64934D: call    TimeGlobals_GetGameHour
0x649352: fstp    [esp+14h+var_8]
0x649356: cmp     [esp+14h+arg_4], 0
0x64935B: mov     ebp, [esi+8]
0x64935E: mov     edi, [esp+14h+arg_0]
0x649362: jnz     short loc_64938C
0x649364: mov     ecx, edi
0x649366: call    sub_5E6BA0
0x64936B: test    al, al
0x64936D: jnz     short loc_649381
0x64936F: mov     eax, [edi]
0x649371: mov     edx, [eax+334h]
0x649377: push    1
0x649379: mov     ecx, edi
0x64937B: call    edx
0x64937D: test    al, al
0x64937F: jz      short loc_64938C
0x649381: pop     edi
0x649382: pop     esi
0x649383: xor     al, al
0x649385: pop     ebp
0x649386: add     esp, 8
0x649389: retn    8
0x64938C: mov     ecx, [esi+8]
0x64938F: push    ebx; int
0x649390: xor     ebx, ebx
0x649392: cmp     ecx, ebx
0x649394: jz      short loc_6493A7
0x649396: call    sub_565DB0
0x64939B: test    al, al
0x64939D: jnz     short loc_6493A7
0x64939F: mov     ecx, [esi+8]
0x6493A2: call    sub_565DC0
0x6493A7: cmp     ebp, ebx
0x6493A9: mov     byte ptr [esp+18h+arg_0], bl
0x6493AD: jnz     short loc_649417
0x6493AF: push    edi
0x6493B0: mov     ecx, esi
0x6493B2: mov     byte ptr [esp+1Ch+arg_0], 1
0x6493B7: call    sub_648E40
0x6493BC: mov     ebp, [esi+8]
0x6493BF: cmp     ebp, ebx
0x6493C1: jnz     short loc_6493C7
0x6493C3: mov     byte ptr [esp+18h+arg_0], bl
0x6493C7: mov     eax, [esi]
0x6493C9: fld     [esp+18h+var_8]
0x6493CD: mov     edx, [eax+394h]
0x6493D3: fstp    dword ptr [esi+0Ch]
0x6493D6: push    ebx
0x6493D7: mov     ecx, esi
0x6493D9: mov     [esi+4], ebx
0x6493DC: mov     [esi+2Ch], ebx
0x6493DF: call    edx
0x6493E1: cmp     byte ptr [esp+18h+arg_0], 0
0x6493E6: jz      loc_649536
0x6493EC: cmp     ebp, ebx
0x6493EE: jz      loc_649686
0x6493F4: cmp     [esi+8], ebp
0x6493F7: jz      loc_649686
0x6493FD: mov     ecx, ebp
0x6493FF: call    sub_565DB0
0x649404: test    al, al
0x649406: jz      loc_649634
0x64940C: push    edi
0x64940D: push    offset sub_645A30
0x649412: jmp     loc_649645
0x649417: cmp     dword ptr [ebp+18h], 0FFFFFFFFh
0x64941B: jnz     short loc_649424
0x64941D: mov     ecx, ebp
0x64941F: call    sub_5672A0
0x649424: mov     ecx, [ebp+30h]
0x649427: fld     [esp+18h+var_8]
0x64942B: cmp     ecx, ebx
0x64942D: jz      loc_649509
0x649433: mov     eax, [ebp+1Ch]
0x649436: shr     eax, 2
0x649439: test    al, 1
0x64943B: jz      loc_649509
0x649441: mov     al, [ebp+20h]
0x649444: cmp     al, 5
0x649446: jz      short loc_64946A
0x649448: cmp     al, 4
0x64944A: jz      short loc_64946A
0x64944C: cmp     al, 3
0x64944E: jz      short loc_64946A
0x649450: mov     edx, [esi+8]
0x649453: mov     eax, [edx+18h]
0x649456: mov     edx, [esi+4]
0x649459: mov     eax, ds:0B152B0h[eax*4]
0x649460: cmp     dword ptr [eax+edx*4], 2Ch ; ','
0x649464: jnz     loc_64957B
0x64946A: mov     al, [ebp+2Fh]
0x64946D: cmp     al, 0FFh
0x64946F: jnz     short loc_649480
0x649471: fld     dword ptr [esi+0Ch]
0x649474: call    Double_To_SInt32
0x649479: mov     ebx, eax
0x64947B: add     ebx, [ebp+30h]
0x64947E: jmp     short loc_649485
0x649480: movsx   ebx, al
0x649483: add     ebx, ecx
0x649485: cmp     ebx, 17h
0x649488: jle     short loc_64948F
0x64948A: sub     ebx, 17h
0x64948D: jmp     short loc_6494A9
0x64948F: movsx   ecx, byte ptr [ebp+2Fh]
0x649493: mov     [esp+18h+var_4], ecx
0x649497: fild    [esp+18h+var_4]
0x64949B: fcomp   st(1)
0x64949D: fnstsw  ax
0x64949F: test    ah, 41h
0x6494A2: jnz     short loc_6494A9
0x6494A4: mov     byte ptr [esp+18h+arg_0], 1
0x6494A9: call    Double_To_SInt32
0x6494AE: cmp     eax, ebx
0x6494B0: jl      short loc_6494B9
0x6494B2: mov     byte ptr [esp+18h+arg_0], 1
0x6494B7: jmp     short loc_6494CC
0x6494B9: cmp     byte ptr [esp+18h+arg_0], 0
0x6494BE: jnz     short loc_6494CC
0x6494C0: cmp     [esp+18h+arg_4], 0
0x6494C5: jz      short loc_6494CC
0x6494C7: mov     [esp+18h+arg_4], 0
0x6494CC: push    400h
0x6494D1: lea     ebx, [edi+44h]
0x6494D4: push    ebx
0x6494D5: push    ebp
0x6494D6: call    Script_AddEventToExtraScript
0x6494DB: add     esp, 0Ch
0x6494DE: mov     ecx, ebp
0x6494E0: call    sub_565DF0
0x6494E5: test    al, al
0x6494E7: jz      short loc_6494FC
0x6494E9: mov     ecx, offset TimeGlobals
0x6494EE: call    TimeGlobals_GetGameDay
0x6494F3: mov     ecx, ebx
0x6494F5: push    eax
0x6494F6: push    ebp
0x6494F7: call    sub_41FFC0
0x6494FC: cmp     byte ptr [esp+18h+arg_0], 0
0x649501: jnz     loc_64958F
0x649507: jmp     short loc_64957D
0x649509: mov     eax, [ebp+1Ch]
0x64950C: fstp    st
0x64950E: mov     edx, eax
0x649510: shr     edx, 2
0x649513: test    dl, 1
0x649516: jz      short loc_649544
0x649518: mov     eax, [ebp+18h]
0x64951B: mov     ecx, [esi+4]
0x64951E: mov     edx, ds:0B152B0h[eax*4]
0x649525: cmp     dword ptr [edx+ecx*4], 2Ch ; ','
0x649529: jnz     short loc_649532
0x64952B: mov     byte ptr [esp+18h+arg_0], 1
0x649530: jmp     short loc_64958F
0x649532: mov     byte ptr [esp+18h+arg_0], bl
0x649536: mov     al, byte ptr [esp+18h+arg_0]
0x64953A: pop     ebx
0x64953B: pop     edi
0x64953C: pop     esi
0x64953D: pop     ebp
0x64953E: add     esp, 8
0x649541: retn    8
0x649544: shr     eax, 1
0x649546: test    al, 1
0x649548: jz      short loc_64952B
0x64954A: fld     dword ptr ds:0A30634h
0x649550: push    ecx
0x649551: fstp    [esp+1Ch+var_1C]; float
0x649554: push    ebx; char
0x649555: push    edi; int
0x649556: mov     ecx, ebp
0x649558: call    sub_566DC0
0x64955D: test    al, al
0x64955F: jnz     short loc_649574
0x649561: mov     eax, [ebp+18h]
0x649564: mov     ecx, [esi+4]
0x649567: mov     edx, ds:0B152B0h[eax*4]
0x64956E: cmp     dword ptr [edx+ecx*4], 2Ch ; ','
0x649572: jnz     short loc_649536
0x649574: mov     byte ptr [esp+18h+arg_0], 1
0x649579: jmp     short loc_64958F
0x64957B: fstp    st
0x64957D: cmp     [esp+18h+arg_4], 0
0x649582: jz      short loc_649536
0x649584: mov     ecx, ebp
0x649586: call    sub_5660B0
0x64958B: test    al, al
0x64958D: jnz     short loc_649536
0x64958F: mov     ecx, ebp
0x649591: call    sub_5660A0
0x649596: test    al, al
0x649598: jz      short loc_6495BA
0x64959A: mov     ecx, edi; int
0x64959C: call    sub_5EAE70
0x6495A1: mov     eax, [esi+8]
0x6495A4: test    eax, eax
0x6495A6: jz      short loc_6495B8
0x6495A8: cmp     ebp, eax
0x6495AA: jnz     short loc_6495B8
0x6495AC: mov     eax, [ebp+0]
0x6495AF: mov     edx, [eax+10h]
0x6495B2: push    1
0x6495B4: mov     ecx, ebp
0x6495B6: call    edx
0x6495B8: xor     ebp, ebp
0x6495BA: push    edi
0x6495BB: mov     ecx, esi
0x6495BD: call    sub_648E40
0x6495C2: test    ebp, ebp
0x6495C4: jz      short loc_649621
0x6495C6: cmp     ebp, [esi+8]
0x6495C9: jz      short loc_649621
0x6495CB: mov     eax, [ebp+1Ch]
0x6495CE: shr     eax, 9
0x6495D1: test    al, 1
0x6495D3: jz      short loc_649610
0x6495D5: mov     ecx, ds:0B333C4h; this
0x6495DB: call    TESObjectREFR_GetParentCell
0x6495E0: mov     ecx, edi; this
0x6495E2: mov     ebx, eax
0x6495E4: call    TESObjectREFR_GetParentCell
0x6495E9: cmp     ebx, eax
0x6495EB: jnz     short loc_649610
0x6495ED: cmp     dword ptr [esi+4], 0
0x6495F1: jz      short loc_649601
0x6495F3: mov     edx, [esi]
0x6495F5: mov     eax, [edx+38Ch]
0x6495FB: push    1
0x6495FD: mov     ecx, esi
0x6495FF: call    eax
0x649601: pop     ebx
0x649602: pop     edi
0x649603: mov     [esi+8], ebp
0x649606: pop     esi
0x649607: xor     al, al
0x649609: pop     ebp
0x64960A: add     esp, 8
0x64960D: retn    8
0x649610: fld     [esp+18h+var_8]
0x649614: xor     ebx, ebx
0x649616: fstp    dword ptr [esi+0Ch]
0x649619: mov     [esi+4], ebx
0x64961C: jmp     loc_6493E1
0x649621: pop     ebx
0x649622: pop     edi
0x649623: mov     byte ptr [esp+10h+arg_0], 0
0x649628: mov     al, byte ptr [esp+10h+arg_0]
0x64962C: pop     esi
0x64962D: pop     ebp
0x64962E: add     esp, 8
0x649631: retn    8
0x649634: mov     ecx, ebp
0x649636: call    sub_565DC0
0x64963B: test    al, al
0x64963D: jz      short loc_649686
0x64963F: push    edi; a7
0x649640: push    offset sub_645AF0; a6
0x649645: mov     edx, [edi]
0x649647: fld     dword ptr ds:0A5B6C0h
0x64964D: mov     eax, [edx+174h]
0x649653: push    ecx
0x649654: mov     ecx, edi
0x649656: fstp    [esp+24h+a5]; a5
0x649659: call    eax
0x64965B: fld     dword ptr ds:0A5B6C0h
0x649661: mov     edx, [edi]
0x649663: push    eax; a4
0x649664: mov     eax, [edx+174h]
0x64966A: push    ecx
0x64966B: mov     ecx, edi
0x64966D: fstp    [esp+2Ch+a3]; a3
0x649670: call    eax
0x649672: push    eax; a2
0x649673: mov     ecx, edi; this
0x649675: call    TESObjectREFR_GetParentCell
0x64967A: mov     ecx, ds:0B33A98h
0x649680: push    eax; a1
0x649681: call    sub_446B90
0x649686: mov     ecx, [esi+8]
0x649689: cmp     ecx, ebx
0x64968B: jz      short loc_6496F5
0x64968D: cmp     ecx, ebp
0x64968F: jz      short loc_6496F5
0x649691: call    sub_4BF150
0x649696: test    al, al
0x649698: jz      short loc_6496A2
0x64969A: push    edi
0x64969B: push    offset sub_645A30
0x6496A0: jmp     short loc_6496B4
0x6496A2: mov     ecx, [esi+8]
0x6496A5: call    sub_565DA0
0x6496AA: test    al, al
0x6496AC: jz      short loc_6496F5
0x6496AE: push    edi; a7
0x6496AF: push    offset sub_645AF0; a6
0x6496B4: mov     edx, [edi]
0x6496B6: fld     dword ptr ds:0A5B6C0h
0x6496BC: mov     eax, [edx+174h]
0x6496C2: push    ecx
0x6496C3: mov     ecx, edi
0x6496C5: fstp    [esp+24h+a5]; a5
0x6496C8: call    eax
0x6496CA: fld     dword ptr ds:0A5B6C0h
0x6496D0: mov     edx, [edi]
0x6496D2: push    eax; a4
0x6496D3: mov     eax, [edx+174h]
0x6496D9: push    ecx
0x6496DA: mov     ecx, edi
0x6496DC: fstp    [esp+2Ch+a3]; a3
0x6496DF: call    eax
0x6496E1: push    eax; a2
0x6496E2: mov     ecx, edi; this
0x6496E4: call    TESObjectREFR_GetParentCell
0x6496E9: mov     ecx, ds:0B33A98h
0x6496EF: push    eax; a1
0x6496F0: call    sub_446B90
0x6496F5: mov     eax, [esi+8]
0x6496F8: cmp     eax, ebx
0x6496FA: jz      short loc_649726
0x6496FC: cmp     ebp, eax
0x6496FE: jnz     short loc_64970B
0x649700: mov     ecx, edi
0x649702: call    sub_5EAE10
0x649707: test    eax, eax
0x649709: jnz     short loc_649726
0x64970B: mov     ecx, [esi+8]
0x64970E: call    sub_567CA0
0x649713: test    al, al
0x649715: jz      short loc_649726
0x649717: mov     ecx, [esi+8]
0x64971A: cmp     byte ptr [ecx+20h], 0
0x64971E: jz      short loc_649726
0x649720: push    edi
0x649721: call    sub_568BB0
0x649726: fld     dword ptr ds:0A30634h
0x64972C: push    ecx
0x64972D: mov     ecx, [esi+8]
0x649730: fstp    [esp+1Ch+var_1C]; float
0x649733: push    ebx; char
0x649734: push    edi; int
0x649735: call    sub_566DC0
0x64973A: test    al, al
0x64973C: jz      short loc_649745
0x64973E: mov     ecx, edi; int
0x649740: call    sub_5E6E00
0x649745: mov     byte ptr [esi+84h], 0
0x64974C: fld     dword ptr [edi+28h]
0x64974F: mov     edx, [edi]
0x649751: mov     eax, [edx+174h]
0x649757: push    ecx
0x649758: mov     ecx, edi
0x64975A: fstp    [esp+1Ch+var_1C]
0x64975D: call    eax
0x64975F: push    eax; int
0x649760: mov     ecx, edi; this
0x649762: call    TESObjectREFR_GetParentCell
0x649767: push    eax; int
0x649768: mov     ecx, edi; this
0x64976A: call    TESObjectREFR_GetWorldSpace
0x64976F: push    eax; int
0x649770: mov     ecx, edi
0x649772: call    sub_4D7A20
0x649777: mov     edx, [esi]
0x649779: mov     eax, [edx+38Ch]
0x64977F: push    ebx
0x649780: mov     ecx, esi
0x649782: call    eax
0x649784: mov     edx, [esi]
0x649786: mov     eax, [edx+174h]
0x64978C: mov     ecx, esi
0x64978E: mov     [esi+2Ch], ebx
0x649791: call    eax
0x649793: cmp     eax, ebx
0x649795: jz      short loc_6497AA
0x649797: cmp     byte ptr [eax+20h], 15h
0x64979B: jz      short loc_6497AA
0x64979D: mov     edx, [esi]
0x64979F: mov     eax, [edx+178h]
0x6497A5: push    ebx
0x6497A6: mov     ecx, esi
0x6497A8: call    eax
0x6497AA: mov     edx, [esi]
0x6497AC: mov     eax, [edx+0BCh]
0x6497B2: push    ebx
0x6497B3: mov     ecx, esi
0x6497B5: call    eax
0x6497B7: mov     edx, [esi]
0x6497B9: mov     eax, [edx+394h]
0x6497BF: push    ebx
0x6497C0: mov     ecx, esi
0x6497C2: call    eax
0x6497C4: add     esi, 3Ch ; '<'
0x6497C7: cmp     [esi+4], ebx
0x6497CA: jnz     short loc_6497D4
0x6497CC: cmp     [esi], ebx
0x6497CE: jz      loc_649536
0x6497D4: mov     edi, [esi]
0x6497D6: cmp     edi, ebx
0x6497D8: jz      short loc_6497E3
0x6497DA: push    edi
0x6497DB: call    FormHeapFree
0x6497E0: add     esp, 4
0x6497E3: push    edi
0x6497E4: mov     ecx, esi
0x6497E6: call    BSSimpleList_Remove
0x6497EB: jmp     short loc_6497C7
