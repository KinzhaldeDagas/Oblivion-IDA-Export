0x627490: push    0FFFFFFFFh
0x627492: push    offset ??0FleePackage@@QAE@XZ_SEH
0x627497: mov     eax, large fs:0
0x62749D: push    eax
0x62749E: sub     esp, 8
0x6274A1: push    ebx
0x6274A2: push    ebp
0x6274A3: push    esi
0x6274A4: push    edi
0x6274A5: mov     eax, ds:0B30AACh
0x6274AA: xor     eax, esp
0x6274AC: push    eax
0x6274AD: lea     eax, [esp+28h+var_C]
0x6274B1: mov     large fs:0, eax
0x6274B7: mov     esi, ecx
0x6274B9: mov     [esp+28h+var_14], esi
0x6274BD: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x6274C2: xor     ebx, ebx
0x6274C4: mov     dword ptr [esi], offset ??_7FleePackage@@6B@; const FleePackage::`vftable'
0x6274CA: push    10h
0x6274CC: mov     ecx, esi
0x6274CE: mov     [esp+2Ch+var_4], ebx
0x6274D2: mov     [esi+54h], ebx
0x6274D5: mov     [esi+58h], ebx
0x6274D8: call    TESPackage_SetType?
0x6274DD: or      dword ptr [esi+1Ch], 6
0x6274E1: cmp     [esp+28h+arg_0], ebx
0x6274E5: jz      loc_627604
0x6274EB: push    0Ch; Size
0x6274ED: call    FormHeapAlloc
0x6274F2: add     esp, 4
0x6274F5: mov     [esp+28h+var_10], eax
0x6274F9: cmp     eax, ebx
0x6274FB: mov     byte ptr [esp+28h+var_4], 1
0x627500: jz      short loc_62750D
0x627502: mov     ecx, eax
0x627504: call    TESPackage_LocationData_constr
0x627509: mov     edi, eax
0x62750B: jmp     short loc_62750F
0x62750D: xor     edi, edi
0x62750F: cmp     [esp+28h+arg_4], ebx
0x627513: mov     ebp, [esp+28h+arg_8]
0x627517: mov     byte ptr [esp+28h+var_4], bl
0x62751B: jnz     short loc_62753B
0x62751D: cmp     ebp, ebx
0x62751F: jnz     short loc_62753F
0x627521: push    ebx
0x627522: mov     ecx, edi
0x627524: call    TESPackage_LocationData_SetType
0x627529: mov     ebp, [esp+28h+arg_0]
0x62752D: push    ebp
0x62752E: mov     ecx, edi
0x627530: call    TESPackage_LocationData_SetReference
0x627535: mov     byte ptr [esi+3Ch], 1
0x627539: jmp     short loc_62756D
0x62753B: cmp     ebp, ebx
0x62753D: jz      short loc_627551
0x62753F: push    ebx
0x627540: mov     ecx, edi
0x627542: call    TESPackage_LocationData_SetType
0x627547: push    ebp
0x627548: mov     ecx, edi
0x62754A: call    TESPackage_LocationData_SetReference
0x62754F: jmp     short loc_627566
0x627551: push    1
0x627553: mov     ecx, edi
0x627555: call    TESPackage_LocationData_SetType
0x62755A: mov     eax, [esp+28h+arg_4]
0x62755E: push    eax
0x62755F: mov     ecx, edi
0x627561: call    sub_569810
0x627566: mov     ebp, [esp+28h+arg_0]
0x62756A: mov     [esi+3Ch], bl
0x62756D: push    edi
0x62756E: mov     ecx, esi
0x627570: call    TESPackage_SetLocation
0x627575: cmp     edi, ebx
0x627577: jz      short loc_627589
0x627579: mov     ecx, edi
0x62757B: call    TESPackage_LocationData_destr
0x627580: push    edi
0x627581: call    FormHeapFree
0x627586: add     esp, 4
0x627589: push    0Ch; Size
0x62758B: call    FormHeapAlloc
0x627590: add     esp, 4
0x627593: mov     [esp+28h+arg_0], eax
0x627597: cmp     eax, ebx
0x627599: mov     byte ptr [esp+28h+var_4], 2
0x62759E: jz      short loc_6275AB
0x6275A0: mov     ecx, eax
0x6275A2: call    TESPackage_TargetData_constr
0x6275A7: mov     edi, eax
0x6275A9: jmp     short loc_6275AD
0x6275AB: xor     edi, edi
0x6275AD: push    edi
0x6275AE: mov     ecx, esi
0x6275B0: mov     byte ptr [esp+2Ch+var_4], bl
0x6275B4: call    TESPackage_SetTarget
0x6275B9: cmp     edi, ebx
0x6275BB: jz      short loc_6275CD
0x6275BD: mov     ecx, edi; void *
0x6275BF: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x6275C4: push    edi
0x6275C5: call    FormHeapFree
0x6275CA: add     esp, 4
0x6275CD: mov     ecx, [esi+28h]
0x6275D0: push    ebx
0x6275D1: mov     dword ptr [esi+18h], 13h
0x6275D8: call    TESPackage_TargetData_SetType
0x6275DD: mov     ecx, [esi+28h]
0x6275E0: push    ebp
0x6275E1: call    TeSPackage_TargetData_SetTargetREFR
0x6275E6: lea     eax, [esi+54h]
0x6275E9: cmp     eax, ebx
0x6275EB: jz      short loc_6275FB
0x6275ED: lea     ecx, [ecx+0]
0x6275F0: cmp     [eax], ebp
0x6275F2: jz      short loc_627604
0x6275F4: mov     eax, [eax+4]
0x6275F7: cmp     eax, ebx
0x6275F9: jnz     short loc_6275F0
0x6275FB: push    ebp
0x6275FC: lea     ecx, [esi+54h]
0x6275FF: call    BSSimpleList_PushFront
0x627604: push    1
0x627606: mov     ecx, esi
0x627608: call    sub_566830
0x62760D: fld     dword ptr ds:0A30634h
0x627613: mov     ecx, ds:0B3F9A8h
0x627619: mov     [esi+40h], ecx
0x62761C: mov     edx, ds:0B3F9ACh
0x627622: mov     [esi+44h], edx
0x627625: mov     eax, ds:0B3F9B0h
0x62762A: fstp    dword ptr [esi+4Ch]
0x62762D: mov     [esi+48h], eax
0x627630: mov     [esi+50h], bl
0x627633: mov     [esi+5Ch], ebx
0x627636: mov     [esi+60h], ebx
0x627639: mov     [esi+64h], bl
0x62763C: mov     [esi+65h], bl
0x62763F: mov     eax, esi
0x627641: mov     ecx, [esp+28h+var_C]
0x627645: mov     large fs:0, ecx
0x62764C: pop     ecx
0x62764D: pop     edi
0x62764E: pop     esi
0x62764F: pop     ebp
0x627650: pop     ebx
0x627651: add     esp, 14h
0x627654: retn    0Ch
