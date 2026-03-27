0x653520: sub     esp, 18h
0x653523: push    esi
0x653524: push    edi
0x653525: lea     edi, [ecx+54h]
0x653528: mov     eax, edi
0x65352A: test    eax, eax
0x65352C: mov     [esp+20h+var_8], ecx
0x653530: mov     [esp+20h+var_C], edi
0x653534: mov     [esp+20h+var_14], edi
0x653538: jz      loc_6538EA
0x65353E: mov     esi, [esp+20h+arg_0]
0x653542: push    ebx
0x653543: push    ebp
0x653544: jmp     short loc_65354A
0x653546: mov     eax, [esp+28h+var_14]
0x65354A: mov     ebp, [eax]
0x65354C: test    ebp, ebp
0x65354E: jz      loc_6538E8
0x653554: mov     edi, [ebp+0]
0x653557: mov     ebx, [ebp+4]
0x65355A: mov     ecx, edi; this
0x65355C: mov     [esp+28h+var_10], ebx
0x653560: mov     byte ptr [esp+28h+arg_0], 1
0x653565: call    TESObjectREFR_GetOwner
0x65356A: test    eax, eax
0x65356C: jnz     short loc_653595
0x65356E: mov     eax, [edi]
0x653570: mov     edx, [eax+190h]
0x653576: mov     ecx, edi
0x653578: call    edx
0x65357A: test    al, al
0x65357C: jnz     short loc_653595
0x65357E: push    0
0x653580: push    edi
0x653581: mov     ecx, esi
0x653583: call    TesObjectREF_GetDistance
0x653588: call    Double_To_SInt32
0x65358D: mov     [ebp+14h], eax
0x653590: jmp     loc_65383E
0x653595: push    ebx
0x653596: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x65359E: call    sub_470520
0x6535A3: mov     ebx, eax
0x6535A5: mov     eax, [edi]
0x6535A7: mov     edx, [eax+198h]
0x6535AD: add     esp, 4
0x6535B0: push    0
0x6535B2: mov     ecx, edi
0x6535B4: call    edx
0x6535B6: test    al, al
0x6535B8: jnz     loc_653665
0x6535BE: mov     ecx, esi
0x6535C0: call    sub_5E4420
0x6535C5: cmp     eax, ebx
0x6535C7: jl      loc_653665
0x6535CD: mov     ecx, edi; this
0x6535CF: call    Actor_IsNPC
0x6535D4: test    al, al
0x6535D6: jz      short loc_6535DC
0x6535D8: mov     eax, edi
0x6535DA: jmp     short loc_653609
0x6535DC: push    0; int
0x6535DE: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x6535E3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6535E8: push    0; int
0x6535EA: mov     ecx, edi; this
0x6535EC: call    TESObjectREFR_GetOwner
0x6535F1: push    eax; void *
0x6535F2: call    OblivionDynamicCast
0x6535F7: add     esp, 14h
0x6535FA: test    eax, eax
0x6535FC: jz      short loc_653665
0x6535FE: push    eax
0x6535FF: mov     ecx, offset ActorProcessManager_ptr
0x653604: call    sub_675220
0x653609: test    eax, eax
0x65360B: jz      short loc_653665
0x65360D: mov     ecx, [esp+28h+var_10]
0x653611: push    ecx
0x653612: push    0; a2
0x653614: mov     ecx, eax; this
0x653616: call    Actor_GetActorBaseForm
0x65361B: mov     ecx, eax
0x65361D: add     ecx, 68h ; 'h'
0x653620: call    TESAIForm_OffersServiceForItem
0x653625: test    al, al
0x653627: jz      short loc_653665
0x653629: mov     edx, [ebp+4]
0x65362C: push    edx
0x65362D: call    sub_470520
0x653632: add     esp, 4
0x653635: mov     ecx, esi
0x653637: mov     ebx, eax
0x653639: call    sub_5E4420
0x65363E: cmp     eax, ebx
0x653640: jl      short loc_653665
0x653642: mov     eax, [esi]
0x653644: mov     edx, [eax+334h]
0x65364A: push    1
0x65364C: mov     ecx, esi
0x65364E: call    edx
0x653650: test    al, al
0x653652: jnz     short loc_653660
0x653654: mov     dword ptr [ebp+1Ch], 2
0x65365B: jmp     loc_65357E
0x653660: mov     byte ptr [esp+28h+arg_0], 0
0x653665: mov     eax, [edi]
0x653667: mov     edx, [eax+190h]
0x65366D: mov     ecx, edi
0x65366F: call    edx
0x653671: test    al, al
0x653673: jnz     short loc_6536A5
0x653675: mov     eax, [esi]
0x653677: mov     edx, [eax+284h]
0x65367D: push    24h ; '$'
0x65367F: mov     ecx, esi
0x653681: call    edx
0x653683: push    eax
0x653684: push    1Fh
0x653686: mov     ecx, esi
0x653688: call    Actor_GetLuckModifiedBaseAV
0x65368D: call    Double_To_SInt32
0x653692: push    eax
0x653693: call    Calc_AIAquireForStealing?
0x653698: mov     ebx, [esp+30h+var_4]
0x65369C: mov     dword ptr [esp+30h+var_18], eax
0x6536A0: jmp     loc_65374A
0x6536A5: mov     eax, [edi]
0x6536A7: mov     edx, [eax+198h]
0x6536AD: push    0
0x6536AF: mov     ecx, edi
0x6536B1: call    edx
0x6536B3: test    al, al
0x6536B5: jnz     loc_653758
0x6536BB: mov     ecx, edi; this
0x6536BD: call    Actor_IsNPC
0x6536C2: test    al, al
0x6536C4: jz      loc_653758
0x6536CA: mov     eax, [esi]
0x6536CC: mov     edx, [eax+284h]
0x6536D2: push    24h ; '$'
0x6536D4: mov     ecx, esi
0x6536D6: call    edx
0x6536D8: push    eax
0x6536D9: push    1Fh
0x6536DB: mov     ecx, esi
0x6536DD: call    Actor_GetLuckModifiedBaseAV
0x6536E2: call    Double_To_SInt32
0x6536E7: push    eax
0x6536E8: call    Calc_AIAquireForPickpocketing?
0x6536ED: add     esp, 8
0x6536F0: push    64h ; 'd'
0x6536F2: push    0
0x6536F4: push    0; responsibility
0x6536F6: push    0; a7
0x6536F8: push    0
0x6536FA: push    edi
0x6536FB: mov     ecx, esi
0x6536FD: mov     dword ptr [esp+40h+var_18], eax
0x653701: call    TesObjectREF_GetDistance
0x653706: mov     eax, [esi]
0x653708: mov     edx, [eax+284h]
0x65370E: push    ecx
0x65370F: fstp    [esp+3Ch+a6]; a6
0x653712: push    21h ; '!'; a5
0x653714: mov     ecx, esi
0x653716: call    edx
0x653718: push    eax; distanceToTarget
0x653719: mov     eax, [esi]
0x65371B: mov     edx, [eax+224h]
0x653721: push    0; aggressionStat
0x653723: push    edi; friendlyFight?
0x653724: mov     ecx, esi
0x653726: call    edx
0x653728: push    eax; disposition
0x653729: call    shouldActorFight
0x65372E: mov     ebx, eax
0x653730: mov     eax, [esi]
0x653732: mov     edx, [eax+284h]
0x653738: add     esp, 20h
0x65373B: push    24h ; '$'
0x65373D: mov     ecx, esi
0x65373F: call    edx
0x653741: push    eax
0x653742: push    ebx
0x653743: call    sub_546640
0x653748: mov     ebx, eax
0x65374A: add     esp, 8
0x65374D: cmp     dword ptr [esp+28h+var_18], 0
0x653752: jg      short loc_6537B3
0x653754: test    ebx, ebx
0x653756: jg      short loc_6537B3
0x653758: mov     ecx, esi; this
0x65375A: call    Actor_IsCreature
0x65375F: test    al, al
0x653761: jnz     loc_6538C8
0x653767: mov     eax, [edi]
0x653769: mov     edx, [eax+190h]
0x65376F: mov     ecx, edi
0x653771: call    edx
0x653773: test    al, al
0x653775: jz      loc_6538C8
0x65377B: mov     ecx, edi; this
0x65377D: call    Actor_IsNPC
0x653782: test    al, al
0x653784: jnz     loc_6538C8
0x65378A: mov     eax, [esi]
0x65378C: mov     edx, [eax+170h]
0x653792: mov     ecx, esi
0x653794: call    edx
0x653796: mov     ecx, edi; this
0x653798: mov     ebx, eax
0x65379A: call    TESObjectREFR_GetOwner
0x65379F: cmp     eax, ebx
0x6537A1: jz      loc_6538C8
0x6537A7: mov     dword ptr [ebp+1Ch], 5
0x6537AE: jmp     loc_65383E
0x6537B3: mov     eax, [edi]
0x6537B5: mov     edx, [eax+190h]
0x6537BB: mov     ecx, edi
0x6537BD: call    edx
0x6537BF: test    al, al
0x6537C1: jnz     loc_653888
0x6537C7: cmp     dword ptr [ebp+1Ch], 1
0x6537CB: jnz     loc_65387F
0x6537D1: lea     eax, [esp+28h+var_10]
0x6537D5: push    eax
0x6537D6: push    0
0x6537D8: push    1
0x6537DA: mov     dword ptr [ebp+1Ch], 4
0x6537E1: mov     ecx, ds:0B35EC8h
0x6537E7: push    0
0x6537E9: push    ecx
0x6537EA: mov     ecx, esi
0x6537EC: mov     [esp+3Ch+var_10], 0
0x6537F4: call    sub_5E4A00
0x6537F9: test    al, al
0x6537FB: jnz     short loc_653829
0x6537FD: mov     eax, ds:0B35ECCh
0x653802: lea     edx, [esp+28h+var_10]
0x653806: push    edx
0x653807: push    0
0x653809: push    1
0x65380B: push    0
0x65380D: push    eax
0x65380E: mov     ecx, esi
0x653810: call    sub_5E4A00
0x653815: test    al, al
0x653817: jnz     short loc_653829
0x653819: mov     ecx, edi
0x65381B: call    sub_4D7740
0x653820: test    eax, eax
0x653822: jz      short loc_653829
0x653824: mov     byte ptr [esp+28h+arg_0], 0
0x653829: cmp     byte ptr [esp+28h+arg_0], 0
0x65382E: mov     ecx, dword ptr [esp+28h+var_18]
0x653832: mov     [ebp+8], ecx
0x653835: mov     [ebp+0Ch], ebx
0x653838: jz      loc_6538C8
0x65383E: mov     ecx, [ebp+0]
0x653841: push    1
0x653843: call    Actor__SetCompressedFlag
0x653848: mov     edi, [esp+28h+var_8]
0x65384C: add     edi, 3Ch ; '<'
0x65384F: cmp     dword ptr [edi+4], 0
0x653853: jz      short loc_65385E
0x653855: mov     edi, [edi+4]
0x653858: cmp     dword ptr [edi+4], 0
0x65385C: jnz     short loc_653855
0x65385E: cmp     dword ptr [edi], 0
0x653861: jz      short loc_6538C4
0x653863: push    8; Size
0x653865: call    FormHeapAlloc
0x65386A: add     esp, 4
0x65386D: test    eax, eax
0x65386F: jz      short loc_6538BD
0x653871: mov     [eax], ebp
0x653873: mov     dword ptr [eax+4], 0
0x65387A: mov     [edi+4], eax
0x65387D: jmp     short loc_6538D1
0x65387F: mov     dword ptr [ebp+1Ch], 3
0x653886: jmp     short loc_653829
0x653888: mov     edx, [esi]
0x65388A: mov     eax, [edx+334h]
0x653890: push    1
0x653892: mov     ecx, esi
0x653894: call    eax
0x653896: cmp     ebx, dword ptr [esp+28h+var_18]
0x65389A: jle     short loc_6538A9
0x65389C: test    al, al
0x65389E: jnz     short loc_653824
0x6538A0: mov     dword ptr [ebp+1Ch], 5
0x6538A7: jmp     short loc_653829
0x6538A9: test    al, al
0x6538AB: jnz     loc_653824
0x6538B1: mov     dword ptr [ebp+1Ch], 4
0x6538B8: jmp     loc_653829
0x6538BD: xor     eax, eax
0x6538BF: mov     [edi+4], eax
0x6538C2: jmp     short loc_6538D1
0x6538C4: mov     [edi], ebp
0x6538C6: jmp     short loc_6538D1
0x6538C8: push    ebp
0x6538C9: call    FormHeapFree
0x6538CE: add     esp, 4
0x6538D1: mov     edx, [esp+28h+var_14]
0x6538D5: mov     eax, [edx+4]
0x6538D8: test    eax, eax
0x6538DA: mov     edi, [esp+28h+var_C]
0x6538DE: mov     [esp+28h+var_14], eax
0x6538E2: jnz     loc_653546
0x6538E8: pop     ebp
0x6538E9: pop     ebx
0x6538EA: mov     esi, [esp+20h+var_8]
0x6538EE: mov     ecx, esi
0x6538F0: call    sub_64E240
0x6538F5: mov     ecx, esi
0x6538F7: call    sub_64E2B0
0x6538FC: cmp     dword ptr [edi+4], 0
0x653900: jz      short loc_653918
0x653902: mov     eax, [edi+4]
0x653905: mov     esi, [eax+4]
0x653908: push    eax
0x653909: call    FormHeapFree
0x65390E: add     esp, 4
0x653911: test    esi, esi
0x653913: mov     [edi+4], esi
0x653916: jnz     short loc_653902
0x653918: mov     dword ptr [edi], 0
0x65391E: pop     edi
0x65391F: pop     esi
0x653920: add     esp, 18h
0x653923: retn    4
