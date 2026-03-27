0x677760: sub     esp, 1Ch
0x677763: push    ebp
0x677764: mov     ebp, [esp+20h+friendlyFight_]
0x677768: mov     eax, [ebp+0]
0x67776B: mov     edx, [eax+330h]
0x677771: push    esi
0x677772: mov     esi, ecx
0x677774: push    edi
0x677775: mov     ecx, ebp
0x677777: mov     [esp+28h+var_18], 0
0x67777F: mov     [esp+28h+var_8], 0
0x677784: call    edx
0x677786: test    eax, eax
0x677788: jz      short loc_6777A7
0x67778A: mov     eax, [ebp+0]
0x67778D: mov     edx, [eax+330h]
0x677793: mov     ecx, ebp
0x677795: mov     [esp+28h+var_8], 1
0x67779A: call    edx
0x67779C: mov     ecx, eax
0x67779E: call    sub_6135F0
0x6777A3: mov     [esp+28h+var_18], eax
0x6777A7: lea     ecx, [esi+68h]; this
0x6777AA: call    sub_7616D0
0x6777AF: mov     edi, eax
0x6777B1: test    edi, edi
0x6777B3: mov     [esp+28h+var_14], edi
0x6777B7: jz      loc_6779E8
0x6777BD: push    ebx
0x6777BE: jmp     short loc_6777C4
0x6777C0: mov     edi, [esp+2Ch+var_14]
0x6777C4: cmp     dword ptr [edi+4], 0
0x6777C8: jnz     short loc_6777D3
0x6777CA: cmp     dword ptr [edi], 0
0x6777CD: jz      loc_6779E7
0x6777D3: mov     ecx, [edi]
0x6777D5: mov     eax, [ecx]
0x6777D7: mov     edx, [eax+190h]
0x6777DD: call    edx
0x6777DF: test    al, al
0x6777E1: jz      loc_6779D8
0x6777E7: mov     esi, [edi]
0x6777E9: test    esi, esi
0x6777EB: jz      loc_6779D8
0x6777F1: cmp     esi, [esp+2Ch+arg_14]
0x6777F5: jz      loc_6779D8
0x6777FB: cmp     esi, ebp
0x6777FD: jz      loc_6779D8
0x677803: mov     eax, [esi]
0x677805: mov     edx, [eax+334h]
0x67780B: push    1
0x67780D: mov     ecx, esi
0x67780F: call    edx
0x677811: test    al, al
0x677813: jnz     loc_6779D8
0x677819: mov     eax, [esi]
0x67781B: mov     edx, [eax+198h]
0x677821: push    0
0x677823: mov     ecx, esi
0x677825: call    edx
0x677827: test    al, al
0x677829: jnz     loc_6779D8
0x67782F: mov     eax, [esi+8]
0x677832: shr     eax, 0Bh
0x677835: test    al, 1
0x677837: jnz     loc_6779D8
0x67783D: lea     ecx, [esp+2Ch+arg_4]
0x677841: push    ecx
0x677842: mov     ecx, esi
0x677844: call    sub_4D7E30
0x677849: fld     dword ptr ds:0B36948h
0x67784F: fcompp
0x677851: fnstsw  ax
0x677853: test    ah, 1
0x677856: jnz     loc_6779D8
0x67785C: push    0; int
0x67785E: push    0; int
0x677860: push    0; int
0x677862: lea     edx, [esp+38h+friendlyFight_]
0x677866: push    edx; int
0x677867: push    ebp; int
0x677868: push    0; int
0x67786A: mov     ecx, esi; int
0x67786C: mov     byte ptr [esp+44h+friendlyFight_], 0
0x677871: call    Actor_GetDetectionLevel
0x677876: mov     [esp+2Ch+var_4], eax
0x67787A: mov     eax, [esp+2Ch+var_18]
0x67787E: xor     ebx, ebx
0x677880: test    eax, eax
0x677882: jz      short loc_677893
0x677884: mov     edx, [esi]
0x677886: push    eax
0x677887: mov     eax, [edx+224h]
0x67788D: mov     ecx, esi
0x67788F: call    eax
0x677891: mov     ebx, eax
0x677893: mov     ecx, [esi+58h]
0x677896: mov     edx, [ecx]
0x677898: mov     eax, [edx+1C8h]
0x67789E: push    ebp
0x67789F: call    eax
0x6778A1: cmp     byte ptr [esp+28h+arg_14], 0
0x6778A6: mov     [esp+28h+var_18], eax
0x6778AA: fild    [esp+28h+var_18]
0x6778AE: jz      short loc_6778B8
0x6778B0: fadd    dword ptr ds:0B36948h
0x6778B6: jmp     short loc_6778BE
0x6778B8: fadd    dword ptr ds:0B36CA0h
0x6778BE: call    Double_To_SInt32
0x6778C3: mov     [esp+28h+var_18], eax
0x6778C7: mov     eax, [esp+28h+var_14]
0x6778CB: test    eax, eax
0x6778CD: mov     [esp+28h+var_8], 0
0x6778D2: jz      short loc_677934
0x6778D4: push    eax
0x6778D5: push    0Ch
0x6778D7: mov     ecx, offset dword_B3BDB0
0x6778DC: call    sub_67CF50
0x6778E1: mov     edi, eax
0x6778E3: test    edi, edi
0x6778E5: mov     [esp+28h+var_C], edi
0x6778E9: jz      short loc_677923
0x6778EB: jmp     short loc_6778F0
0x6778ED: align 10h
0x6778F0: mov     ecx, [edi]
0x6778F2: test    ecx, ecx
0x6778F4: jz      short loc_67791A
0x6778F6: mov     edx, [esp+28h+var_14]
0x6778FA: push    0
0x6778FC: push    edx
0x6778FD: call    sub_67B6B0
0x677902: test    eax, eax
0x677904: jz      short loc_67790C
0x677906: cmp     byte ptr [eax+4], 0
0x67790A: jnz     short loc_677915
0x67790C: mov     edi, [edi+4]
0x67790F: test    edi, edi
0x677911: jnz     short loc_6778F0
0x677913: jmp     short loc_67791A
0x677915: mov     [esp+28h+var_8], 1
0x67791A: mov     ecx, [esp+28h+var_C]
0x67791E: call    BSSimpleList_Clear
0x677923: mov     eax, [esp+28h+var_C]
0x677927: push    eax
0x677928: call    FormHeapFree
0x67792D: mov     edi, [esp+2Ch+var_10]
0x677931: add     esp, 4
0x677934: mov     edx, [esi]
0x677936: mov     eax, [edx+284h]
0x67793C: push    24h ; '$'
0x67793E: mov     ecx, esi
0x677940: call    eax
0x677942: mov     ecx, [esp+24h+var_4]
0x677946: push    eax
0x677947: push    ecx
0x677948: mov     ecx, esi; this
0x67794A: call    Actor_IsCreature
0x67794F: mov     edx, [esp+2Ch]
0x677953: mov     ecx, esi
0x677955: push    eax; responsibility
0x677956: push    edx; a7
0x677957: push    0
0x677959: push    ebp
0x67795A: call    TesObjectREF_GetDistance
0x67795F: mov     eax, [esi]
0x677961: mov     edx, [eax+284h]
0x677967: push    ecx
0x677968: fstp    [esp+38h+a6]; a6
0x67796B: push    21h ; '!'; a5
0x67796D: mov     ecx, esi
0x67796F: call    edx
0x677971: push    eax; distanceToTarget
0x677972: mov     eax, [esi]
0x677974: mov     edx, [eax+224h]
0x67797A: push    ebx; aggressionStat
0x67797B: push    ebp; friendlyFight?
0x67797C: mov     ecx, esi
0x67797E: call    edx
0x677980: push    eax; disposition
0x677981: call    shouldActorFight
0x677986: mov     ebx, [esp+4Ch+var_1C]
0x67798A: add     esp, 20h
0x67798D: test    ebx, ebx
0x67798F: jle     short loc_6779BD
0x677991: test    eax, eax
0x677993: jle     short loc_6779BD
0x677995: cmp     [esp+2Ch+var_4], 0
0x67799A: jg      short loc_6779BD
0x67799C: mov     ecx, [esi+58h]
0x67799F: mov     eax, [ecx]
0x6779A1: mov     edx, [eax+228h]
0x6779A7: push    0
0x6779A9: push    0
0x6779AB: push    0
0x6779AD: push    0
0x6779AF: push    1
0x6779B1: push    0
0x6779B3: push    0
0x6779B5: push    0
0x6779B7: push    ebp
0x6779B8: push    esi
0x6779B9: call    edx
0x6779BB: jmp     short loc_6779D8
0x6779BD: mov     ecx, esi
0x6779BF: call    sub_5E0F30
0x6779C4: test    al, al
0x6779C6: jz      short loc_6779D8
0x6779C8: test    ebx, ebx
0x6779CA: jle     short loc_6779D8
0x6779CC: mov     eax, [esi]
0x6779CE: mov     edx, [eax+320h]
0x6779D4: mov     ecx, esi
0x6779D6: call    edx
0x6779D8: mov     eax, [edi+4]
0x6779DB: test    eax, eax
0x6779DD: mov     [esp+2Ch+var_14], eax
0x6779E1: jnz     loc_6777C0
0x6779E7: pop     ebx
0x6779E8: pop     edi
0x6779E9: pop     esi
0x6779EA: pop     ebp
0x6779EB: add     esp, 1Ch
0x6779EE: retn    18h
