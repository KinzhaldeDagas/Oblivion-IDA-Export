0x586000: push    0FFFFFFFFh
0x586002: push    offset SEH_586000
0x586007: mov     eax, large fs:0
0x58600D: push    eax
0x58600E: mov     eax, 1F70h
0x586013: call    __alloca_probe
0x586018: mov     eax, ds:0B30AACh
0x58601D: xor     eax, esp
0x58601F: mov     [esp+1F7Ch+var_10], eax
0x586026: push    ebx
0x586027: push    ebp
0x586028: push    esi
0x586029: push    edi
0x58602A: mov     eax, ds:0B30AACh
0x58602F: xor     eax, esp
0x586031: push    eax; a3
0x586032: lea     eax, [esp+1F90h+var_C]
0x586039: mov     large fs:0, eax
0x58603F: mov     edi, ecx
0x586041: xor     ebp, ebp
0x586043: cmp     byte ptr [edi+31h], 0
0x586047: mov     [esp+1F90h+var_1F74], edi
0x58604B: jle     loc_587409
0x586051: push    1; arg1
0x586053: push    ebp; canCreate
0x586054: call    InterfaceManager_GetSingleton
0x586059: add     esp, 8
0x58605C: cmp     byte ptr [eax+8], 1
0x586060: jz      loc_587409
0x586066: mov     ebx, [esp+1F90h+arg_0]
0x58606D: cmp     ebx, ebp
0x58606F: jz      loc_587405
0x586075: fild    dword ptr ds:0B3A704h
0x58607B: push    1; int
0x58607D: sub     esp, 8
0x586080: lea     eax, [esp+1F9Ch+var_810]
0x586087: fstp    [esp+1F9Ch+var_1F98]; float
0x58608B: fild    dword ptr ds:0B3A700h
0x586091: fstp    [esp+1F9Ch+var_1F9C]; float
0x586094: push    eax; unsigned __int8 *
0x586095: push    1
0x586097: call    sub_571F90
0x58609C: add     esp, 4
0x58609F: mov     ecx, eax
0x5860A1: call    sub_571660
0x5860A6: push    7FEh; size_t
0x5860AB: lea     ecx, [esp+1F94h+var_810]
0x5860B2: push    ecx; unsigned __int8 *
0x5860B3: lea     edx, [esp+1F98h+Src]
0x5860BA: push    edx; unsigned __int8 *
0x5860BB: call    __mbsnbcpy
0x5860C0: xor     edx, edx
0x5860C2: add     esp, 0Ch
0x5860C5: cmp     [esp+1F90h+Src], dl
0x5860CC: jz      short loc_5860DD
0x5860CE: mov     edi, edi
0x5860D0: add     edx, 1
0x5860D3: cmp     [esp+edx+1F90h+Src], 0
0x5860DB: jnz     short loc_5860D0
0x5860DD: cmp     [esp+edx+1F90h+var_1E39], 7Ch ; '|'
0x5860E5: jnz     short loc_5860F2
0x5860E7: sub     edx, 1
0x5860EA: mov     [esp+edx+1F90h+Src], 0
0x5860F2: xor     eax, eax
0x5860F4: cmp     edx, ebp
0x5860F6: jle     short loc_586111
0x5860F8: jmp     short loc_586100
0x5860FA: align 10h
0x586100: cmp     [esp+eax+1F90h+Src], 7Ch ; '|'
0x586108: jz      short loc_586111
0x58610A: add     eax, 1
0x58610D: cmp     eax, edx
0x58610F: jl      short loc_586100
0x586111: cmp     eax, edx
0x586113: jnz     short loc_586120
0x586115: mov     [esp+eax+1F90h+Src], 7Ch ; '|'
0x58611D: add     edx, 1
0x586120: cmp     ebx, 80000008h
0x586126: jnz     loc_58700A
0x58612C: add     edx, 1
0x58612F: xor     eax, eax
0x586131: cmp     edx, ebp
0x586133: jle     short loc_58615C
0x586135: cmp     [esp+eax+1F90h+Src], 7Ch ; '|'
0x58613D: jnz     short loc_586155
0x58613F: mov     cl, [esp+eax+1F90h+var_1E37]
0x586146: mov     [esp+eax+1F90h+Src], cl
0x58614D: mov     [esp+eax+1F90h+var_1E37], 7Ch ; '|'
0x586155: add     eax, 1
0x586158: cmp     eax, edx
0x58615A: jl      short loc_586135
0x58615C: xor     eax, eax
0x58615E: cmp     edx, ebp
0x586160: jle     short loc_5861BD
0x586162: or      ebp, 0FFFFFFFFh
0x586165: mov     bl, 2Dh ; '-'
0x586167: jmp     short loc_586170
0x586169: align 10h
0x586170: cmp     [esp+eax+1F90h+Src], 0Ah
0x586178: jnz     short loc_5861B3
0x58617A: cmp     [esp+eax+1F90h+var_1E39], bl
0x586181: jnz     short loc_586199
0x586183: cmp     ebp, edx
0x586185: jge     short loc_5861A1
0x586187: lea     esi, [esp+ebp+1F90h+var_1E36]
0x58618E: mov     ecx, edx
0x586190: sub     ecx, ebp
0x586192: lea     edi, [esi-2]
0x586195: rep movsb
0x586197: jmp     short loc_5861A1
0x586199: mov     [esp+eax+1F90h+Src], 20h ; ' '
0x5861A1: cmp     [esp+eax+1F90h+Src], 0Ah
0x5861A9: jnz     short loc_5861B3
0x5861AB: mov     [esp+eax+1F90h+Src], 20h ; ' '
0x5861B3: add     eax, 1
0x5861B6: add     ebp, 1
0x5861B9: cmp     eax, edx
0x5861BB: jl      short loc_586170
0x5861BD: cmp     [esp+1F90h+Src], 0
0x5861C5: jz      loc_587405
0x5861CB: push    1; arg1
0x5861CD: push    0; canCreate
0x5861CF: call    InterfaceManager_GetSingleton
0x5861D4: mov     ebx, [esp+1F98h+var_1F74]
0x5861D8: mov     ecx, [ebx+10h]
0x5861DB: mov     ebp, eax
0x5861DD: mov     eax, [ebx+2Ch]
0x5861E0: add     eax, ecx
0x5861E2: add     esp, 8
0x5861E5: cmp     eax, ecx
0x5861E7: jle     short loc_5861EB
0x5861E9: mov     eax, ecx
0x5861EB: mov     esi, ds:0B1398Ch
0x5861F1: mov     edx, eax
0x5861F3: sub     edx, esi
0x5861F5: test    edx, edx
0x5861F7: jg      short loc_5861FB
0x5861F9: mov     eax, esi
0x5861FB: cmp     eax, ecx
0x5861FD: jle     short loc_586201
0x5861FF: mov     eax, ecx
0x586201: lea     edx, [esp+1F90h+Src]
0x586208: push    edx; Format
0x586209: push    ebx; int
0x58620A: mov     [ebx+2Ch], eax
0x58620D: call    sub_585F40
0x586212: xor     esi, esi
0x586214: add     esp, 8
0x586217: push    esi; a3
0x586218: lea     eax, [esp+1F94h+Src]
0x58621F: push    eax; a2
0x586220: lea     ecx, [esp+1F98h+var_1F68]; this
0x586224: mov     [esp+1F98h+var_1F68.m_data], esi
0x586228: mov     [esp+1F98h+var_1F68.m_dataLen], si
0x58622D: mov     [esp+1F98h+var_1F68.m_bufLen], si
0x586232: call    BSStringT_Set
0x586237: mov     edx, [ebx+14h]
0x58623A: mov     eax, [edx+4]
0x58623D: mov     [esp+1F90h+var_4], esi
0x586244: lea     esi, [ebx+14h]
0x586247: mov     ecx, esi
0x586249: call    eax
0x58624B: mov     edx, [esp+1F90h+var_1F68.m_data]
0x58624F: mov     edi, eax
0x586251: push    0; a3
0x586253: lea     ecx, [edi+8]; this
0x586256: push    edx; a2
0x586257: call    BSStringT_Set
0x58625C: mov     dword ptr [edi+4], 0
0x586263: mov     eax, [esi+4]
0x586266: mov     [edi], eax
0x586268: mov     eax, [esi+4]
0x58626B: test    eax, eax
0x58626D: jz      short loc_586274
0x58626F: mov     [eax+4], edi
0x586272: jmp     short loc_586277
0x586274: mov     [esi+8], edi
0x586277: add     dword ptr [esi+0Ch], 1
0x58627B: fld     dword ptr ds:0A30634h
0x586281: mov     [esi+4], edi
0x586284: mov     dword ptr [ebx+24h], 0
0x58628B: mov     ecx, ds:0B13994h
0x586291: push    ecx; int
0x586292: push    ecx
0x586293: fstp    [esp+1F98h+var_1F98]; float
0x586296: push    0FFFFFFFFh; int
0x586298: fild    dword ptr ds:0B3A704h
0x58629E: push    1; int
0x5862A0: sub     esp, 8
0x5862A3: fstp    [esp+1FA8h+var_1FA4]; float
0x5862A7: fild    dword ptr ds:0B3A700h
0x5862AD: fstp    [esp+1FA8h+var_1FA8]; float
0x5862B0: push    offset asc_A69C84; int
0x5862B5: push    1
0x5862B7: call    sub_571F90
0x5862BC: add     esp, 4
0x5862BF: mov     ecx, eax
0x5862C1: call    sub_5723E0
0x5862C6: push    3; MaxCount
0x5862C8: lea     edx, [esp+1F94h+Src]
0x5862CF: push    offset off_A69F5C; Str2
0x5862D4: push    edx; Str1
0x5862D5: call    sub_986B26
0x5862DA: add     esp, 0Ch
0x5862DD: test    eax, eax
0x5862DF: jnz     short loc_586347
0x5862E1: fldz
0x5862E3: lea     eax, [esp+1F90h+var_1F74]
0x5862E7: push    eax
0x5862E8: fstp    [esp+1F94h+var_1F74]
0x5862EC: lea     ecx, [esp+1F94h+Src]
0x5862F3: push    offset aDofF; "dof %f"
0x5862F8: push    ecx; Src
0x5862F9: call    _sscanf
0x5862FE: fld     [esp+1F9Ch+var_1F74]
0x586302: mov     ebp, [ebp+0]
0x586305: mov     eax, [ebp+0DCh]
0x58630B: lea     esi, [eax+0ECh]
0x586311: mov     ecx, 7
0x586316: lea     edi, [esp+1F9Ch+a2]
0x58631A: rep movsd
0x58631C: fstp    [esp+1F9Ch+var_1F40]
0x586320: mov     ecx, [ebp+0DCh]; this
0x586326: add     esp, 0Ch
0x586329: lea     edx, [esp+1F90h+a2]
0x58632D: push    edx; a2
0x58632E: call    Camera_SetFrustum
0x586333: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586337: push    eax
0x586338: call    FormHeapFree
0x58633D: add     esp, 4
0x586340: mov     al, 1
0x586342: jmp     loc_58740B
0x586347: push    3; MaxCount
0x586349: lea     eax, [esp+1F94h+Src]
0x586350: push    offset off_A69F50; Str2
0x586355: push    eax; Str1
0x586356: call    sub_986B26
0x58635B: add     esp, 0Ch
0x58635E: test    eax, eax
0x586360: jnz     short loc_5863AC
0x586362: lea     ecx, [esp+1F90h+var_1F74]
0x586366: push    ecx
0x586367: lea     edx, [esp+1F94h+var_1F70]
0x58636B: push    edx
0x58636C: mov     [esp+1F98h+var_1F70], eax
0x586370: mov     [esp+1F98h+var_1F74], eax
0x586374: lea     eax, [esp+1F98h+Src]
0x58637B: push    offset aUszI; "usz %i"
0x586380: push    eax; Src
0x586381: call    _sscanf
0x586386: mov     ecx, [esp+1FA0h+var_1F74]
0x58638A: mov     edx, [esp+1FA0h+var_1F70]
0x58638E: push    ecx
0x58638F: push    edx
0x586390: call    sub_579370
0x586395: mov     eax, [esp+1FA8h+var_1F68.m_data]
0x586399: add     esp, 18h
0x58639C: push    eax
0x58639D: call    FormHeapFree
0x5863A2: add     esp, 4
0x5863A5: mov     al, 1
0x5863A7: jmp     loc_58740B
0x5863AC: lea     eax, [esp+1F90h+Src]
0x5863B3: push    offset off_A69F44; unsigned __int8 *
0x5863B8: push    eax; unsigned __int8 *
0x5863B9: call    __mbsicmp
0x5863BE: add     esp, 8
0x5863C1: test    eax, eax
0x5863C3: jz      loc_586FE0
0x5863C9: lea     ecx, [esp+1F90h+Src]
0x5863D0: push    offset off_A69F40; unsigned __int8 *
0x5863D5: push    ecx; unsigned __int8 *
0x5863D6: call    __mbscmp
0x5863DB: add     esp, 8
0x5863DE: test    eax, eax
0x5863E0: jz      loc_586FE0
0x5863E6: lea     edx, [esp+1F90h+Src]
0x5863ED: push    offset off_A69F3C; unsigned __int8 *
0x5863F2: push    edx; unsigned __int8 *
0x5863F3: call    __mbsicmp
0x5863F8: add     esp, 8
0x5863FB: test    eax, eax
0x5863FD: jnz     loc_5864B7
0x586403: mov     ebp, [ebp+0BCh]
0x586409: xor     esi, esi
0x58640B: cmp     ebp, esi
0x58640D: jz      loc_586FF6
0x586413: mov     [esp+1F90h+var_1F7C.m_data], esi
0x586417: mov     [esp+1F90h+var_1F7C.m_dataLen], si
0x58641C: mov     [esp+1F90h+var_1F7C.m_bufLen], si
0x586421: mov     eax, [ebp+0Ch]
0x586424: push    eax
0x586425: mov     ecx, ebp; this
0x586427: mov     byte ptr [esp+1F94h+var_4], 1
0x58642F: call    TESObjectREFR_GetName
0x586434: push    eax; ArgList
0x586435: lea     eax, [esp+1F98h+var_1F7C]
0x586439: push    offset aS08x_0; "\"%s\" (%08x)"
0x58643E: push    eax; int
0x58643F: call    BSStringT_Static_Format
0x586444: mov     edx, [ebp+0]
0x586447: mov     eax, [edx+154h]
0x58644D: add     esp, 10h
0x586450: mov     ecx, ebp
0x586452: call    eax
0x586454: push    eax
0x586455: push    offset dword_B3FAB0
0x58645A: call    NiRTTI_Cast
0x58645F: add     esp, 8
0x586462: cmp     eax, esi
0x586464: jnz     short loc_586484
0x586466: mov     edx, [ebp+0]
0x586469: mov     eax, [edx+154h]
0x58646F: mov     ecx, ebp
0x586471: call    eax
0x586473: mov     eax, [eax+1Ch]
0x586476: push    eax
0x586477: push    offset dword_B3FAB0
0x58647C: call    NiRTTI_Cast
0x586481: add     esp, 8
0x586484: fld     dword ptr ds:0A30634h
0x58648A: push    ecx
0x58648B: fstp    [esp+1F94h+var_1F94]; float
0x58648E: push    esi; int
0x58648F: mov     esi, [esp+1F98h+var_1F7C.m_data]
0x586493: push    esi; int
0x586494: push    eax; int
0x586495: call    sub_572850
0x58649A: push    esi
0x58649B: call    FormHeapFree
0x5864A0: mov     eax, [esp+1FA4h+var_1F68.m_data]
0x5864A4: add     esp, 14h
0x5864A7: push    eax
0x5864A8: call    FormHeapFree
0x5864AD: add     esp, 4
0x5864B0: mov     al, 1
0x5864B2: jmp     loc_58740B
0x5864B7: push    0Eh; MaxCount
0x5864B9: lea     ecx, [esp+1F94h+Src]
0x5864C0: push    offset aReloadStrings; "reload strings"
0x5864C5: push    ecx; Str1
0x5864C6: call    sub_986B26
0x5864CB: add     esp, 0Ch
0x5864CE: test    eax, eax
0x5864D0: jnz     short loc_586521
0x5864D2: mov     ecx, [ebp+6Ch]
0x5864D5: test    ecx, ecx
0x5864D7: jz      short loc_5864E1
0x5864D9: mov     edx, [ecx]
0x5864DB: mov     eax, [edx]
0x5864DD: push    1
0x5864DF: call    eax
0x5864E1: push    0; int
0x5864E3: push    offset aDataMenusStrin; "Data\\Menus\\strings.xml"
0x5864E8: call    sub_584670
0x5864ED: mov     ecx, [ebp+68h]; TileWindow *
0x5864F0: add     esp, 8
0x5864F3: push    offset aDataMenusStrin; "Data\\Menus\\strings.xml"
0x5864F8: call    Menu_LoadXML
0x5864FD: mov     esi, eax
0x5864FF: push    0
0x586501: push    0
0x586503: mov     ecx, esi
0x586505: call    sub_58D1C0
0x58650A: mov     eax, [esp+1F90h+var_1F68.m_data]
0x58650E: push    eax
0x58650F: mov     [ebp+6Ch], esi
0x586512: call    FormHeapFree
0x586517: add     esp, 4
0x58651A: mov     al, 1
0x58651C: jmp     loc_58740B
0x586521: push    11h; MaxCount
0x586523: lea     ecx, [esp+1F94h+Src]
0x58652A: push    offset aReloadHudretic; "reload HUDReticle"
0x58652F: push    ecx; Str1
0x586530: call    sub_986B26
0x586535: add     esp, 0Ch
0x586538: test    eax, eax
0x58653A: jnz     short loc_58655F
0x58653C: call    sub_584DB0
0x586541: push    3
0x586543: call    sub_578CF0
0x586548: mov     eax, [esp+1F94h+var_1F68.m_data]
0x58654C: add     esp, 4
0x58654F: push    eax
0x586550: call    FormHeapFree
0x586555: add     esp, 4
0x586558: mov     al, 1
0x58655A: jmp     loc_58740B
0x58655F: push    12h; MaxCount
0x586561: lea     edx, [esp+1F94h+Src]
0x586568: push    offset aReloadHudsafez; "reload HUDSafeZone"
0x58656D: push    edx; Str1
0x58656E: call    sub_986B26
0x586573: add     esp, 0Ch
0x586576: test    eax, eax
0x586578: jnz     short loc_58659D
0x58657A: call    sub_584DB0
0x58657F: push    3
0x586581: call    sub_5798F0
0x586586: mov     eax, [esp+1F94h+var_1F68.m_data]
0x58658A: add     esp, 4
0x58658D: push    eax
0x58658E: call    FormHeapFree
0x586593: add     esp, 4
0x586596: mov     al, 1
0x586598: jmp     loc_58740B
0x58659D: push    3; MaxCount
0x58659F: lea     eax, [esp+1F94h+Src]
0x5865A6: push    offset off_A69F00; Str2
0x5865AB: push    eax; Str1
0x5865AC: call    sub_9868DD
0x5865B1: add     esp, 0Ch
0x5865B4: test    eax, eax
0x5865B6: jnz     short loc_58662E
0x5865B8: push    offset aHudreticle_ene; "hudreticle_enemy_health"
0x5865BD: push    3EEh
0x5865C2: call    Menu_GetOpenMenuTile
0x5865C7: add     esp, 4
0x5865CA: push    eax; int
0x5865CB: call    sub_58B800
0x5865D0: mov     esi, eax
0x5865D2: add     esp, 8
0x5865D5: test    esi, esi
0x5865D7: jz      loc_586FF6
0x5865DD: push    0FA1h
0x5865E2: mov     ecx, esi
0x5865E4: call    Tile_GetFloat
0x5865E9: fcomp   dword ptr ds:0A379B4h
0x5865EF: mov     [esp+1F90h+var_1F70], 1
0x5865F7: fnstsw  ax
0x5865F9: test    ah, 44h
0x5865FC: jnp     short loc_586606
0x5865FE: mov     [esp+1F90h+var_1F70], 2
0x586606: fild    [esp+1F90h+var_1F70]
0x58660A: push    ecx
0x58660B: mov     ecx, esi; this
0x58660D: fstp    [esp+1F94h+var_1F94]; a3
0x586610: push    0FA1h; a2
0x586615: call    Tile_SetFloat
0x58661A: mov     eax, [esp+1F90h+var_1F68.m_data]
0x58661E: push    eax
0x58661F: call    FormHeapFree
0x586624: add     esp, 4
0x586627: mov     al, 1
0x586629: jmp     loc_58740B
0x58662E: push    7; MaxCount
0x586630: lea     ecx, [esp+1F94h+Src]
0x586637: push    offset aReload; "reload "
0x58663C: push    ecx; Str1
0x58663D: call    sub_986B26
0x586642: add     esp, 0Ch
0x586645: test    eax, eax
0x586647: jnz     loc_5866F5
0x58664D: call    sub_584DB0
0x586652: lea     edx, [esp+1F90h+var_1638]
0x586659: push    edx
0x58665A: lea     eax, [esp+1F94h+Src]
0x586661: push    offset aReloadS; "reload %s"
0x586666: push    eax; Src
0x586667: call    _sscanf
0x58666C: mov     cl, [esp+1F9Ch+var_1638]
0x586673: add     esp, 0Ch
0x586676: cmp     cl, 26h ; '&'
0x586679: jz      short loc_5866BF
0x58667B: xor     eax, eax
0x58667D: test    cl, cl
0x58667F: jz      short loc_58668E
0x586681: add     eax, 1
0x586684: cmp     [esp+eax+1F90h+var_1638], 0
0x58668C: jnz     short loc_586681
0x58668E: test    eax, eax
0x586690: mov     [esp+eax+1F90h+var_1636], 0
0x586698: mov     [esp+eax+1F90h+var_1637], 3Bh ; ';'
0x5866A0: jle     short loc_5866B7
0x5866A2: mov     cl, [esp+eax+1F90h+var_1639]
0x5866A9: mov     [esp+eax+1F90h+var_1638], cl
0x5866B0: sub     eax, 1
0x5866B3: test    eax, eax
0x5866B5: jg      short loc_5866A2
0x5866B7: mov     [esp+1F90h+var_1638], 26h ; '&'
0x5866BF: lea     edx, [esp+1F90h+var_1638]
0x5866C6: push    edx; unsigned __int8 *
0x5866C7: call    TileStringToStringID
0x5866CC: add     esp, 4
0x5866CF: push    eax
0x5866D0: push    1
0x5866D2: call    Menu_GetB3A708
0x5866D7: add     esp, 4
0x5866DA: mov     ecx, eax
0x5866DC: call    sub_587550
0x5866E1: mov     eax, [esp+1F90h+var_1F68.m_data]
0x5866E5: push    eax
0x5866E6: call    FormHeapFree
0x5866EB: add     esp, 4
0x5866EE: mov     al, 1
0x5866F0: jmp     loc_58740B
0x5866F5: push    7; MaxCount
0x5866F7: lea     eax, [esp+1F94h+Src]
0x5866FE: push    offset aDelete; "delete "
0x586703: push    eax; Str1
0x586704: call    sub_986B26
0x586709: add     esp, 0Ch
0x58670C: test    eax, eax
0x58670E: jnz     short loc_586760
0x586710: lea     ecx, [esp+1F90h+var_1638]
0x586717: push    ecx
0x586718: lea     edx, [esp+1F94h+Src]
0x58671F: push    offset aDeleteS; "delete %s"
0x586724: push    edx; Src
0x586725: call    _sscanf
0x58672A: lea     eax, [esp+1F9Ch+var_1638]
0x586731: push    eax; unsigned __int8 *
0x586732: call    TileStringToStringID
0x586737: add     esp, 10h
0x58673A: push    eax
0x58673B: push    1
0x58673D: call    Menu_GetB3A708
0x586742: add     esp, 4
0x586745: mov     ecx, eax
0x586747: call    sub_587440
0x58674C: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586750: push    eax
0x586751: call    FormHeapFree
0x586756: add     esp, 4
0x586759: mov     al, 1
0x58675B: jmp     loc_58740B
0x586760: push    5; MaxCount
0x586762: lea     ecx, [esp+1F94h+Src]
0x586769: push    offset aFront; "front"
0x58676E: push    ecx; Str1
0x58676F: call    sub_9868DD
0x586774: add     esp, 0Ch
0x586777: test    eax, eax
0x586779: jnz     short loc_5867B5
0x58677B: push    1
0x58677D: call    Menu_GetB3A708
0x586782: add     esp, 4
0x586785: mov     ecx, eax
0x586787: call    sub_5877D0
0x58678C: mov     eax, [eax+4]
0x58678F: mov     eax, [eax+8]
0x586792: push    eax; ArgList
0x586793: push    offset aFrontmostS; "Frontmost: %s"
0x586798: push    ebx; int
0x586799: call    sub_585F40
0x58679E: mov     eax, [esp+1F9Ch+var_1F68.m_data]
0x5867A2: add     esp, 0Ch
0x5867A5: push    eax
0x5867A6: call    FormHeapFree
0x5867AB: add     esp, 4
0x5867AE: mov     al, 1
0x5867B0: jmp     loc_58740B
0x5867B5: push    5; MaxCount
0x5867B7: lea     edx, [esp+1F94h+Src]
0x5867BE: push    offset aStack; "stack"
0x5867C3: push    edx; Str1
0x5867C4: call    sub_9868DD
0x5867C9: add     esp, 0Ch
0x5867CC: test    eax, eax
0x5867CE: jnz     short loc_58681D
0x5867D0: xor     esi, esi
0x5867D2: push    esi
0x5867D3: mov     ecx, ebp
0x5867D5: call    sub_57CFA0
0x5867DA: test    eax, eax
0x5867DC: jz      loc_586FF6
0x5867E2: add     esi, 1
0x5867E5: push    esi
0x5867E6: mov     ecx, ebp
0x5867E8: call    sub_57CFA0
0x5867ED: push    eax
0x5867EE: push    esi; ArgList
0x5867EF: push    offset aII; "%i: %i"
0x5867F4: push    ebx; int
0x5867F5: call    sub_585F40
0x5867FA: add     esp, 10h
0x5867FD: push    esi
0x5867FE: mov     ecx, ebp
0x586800: call    sub_57CFA0
0x586805: test    eax, eax
0x586807: jnz     short loc_5867E2
0x586809: mov     eax, [esp+1F90h+var_1F68.m_data]
0x58680D: push    eax
0x58680E: call    FormHeapFree
0x586813: add     esp, 4
0x586816: mov     al, 1
0x586818: jmp     loc_58740B
0x58681D: push    0Fh; MaxCount
0x58681F: lea     eax, [esp+1F94h+Src]
0x586826: push    offset aCloseAllMenus; "close all menus"
0x58682B: push    eax; Str1
0x58682C: call    sub_9868DD
0x586831: add     esp, 0Ch
0x586834: test    eax, eax
0x586836: jnz     short loc_586851
0x586838: call    CloseAllMenus
0x58683D: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586841: push    eax
0x586842: call    FormHeapFree
0x586847: add     esp, 4
0x58684A: mov     al, 1
0x58684C: jmp     loc_58740B
0x586851: push    7; MaxCount
0x586853: lea     ecx, [esp+1F94h+Src]
0x58685A: push    offset aVisible; "visible"
0x58685F: push    ecx; Str1
0x586860: call    sub_9868DD
0x586865: add     esp, 0Ch
0x586868: test    eax, eax
0x58686A: lea     eax, [esp+1F90h+Src]
0x586871: jnz     short loc_5868CA
0x586873: lea     edx, [esp+1F90h+var_1F70]
0x586877: push    edx
0x586878: push    offset aVisibleI; "visible %i"
0x58687D: push    eax; Src
0x58687E: mov     [esp+1F9Ch+var_1F70], 0
0x586886: call    _sscanf
0x58688B: mov     ecx, [esp+1F9Ch+var_1F70]
0x58688F: add     esp, 0Ch
0x586892: push    ecx
0x586893: push    1
0x586895: call    Menu_GetB3A708
0x58689A: add     esp, 4
0x58689D: mov     ecx, eax
0x58689F: call    sub_5878B0
0x5868A4: movzx   edx, al
0x5868A7: push    edx; ArgList
0x5868A8: push    offset aIsVisibleI; "Is Visible: %i"
0x5868AD: push    ebx; int
0x5868AE: call    sub_585F40
0x5868B3: mov     eax, [esp+1F9Ch+var_1F68.m_data]
0x5868B7: add     esp, 0Ch
0x5868BA: push    eax
0x5868BB: call    FormHeapFree
0x5868C0: add     esp, 4
0x5868C3: mov     al, 1
0x5868C5: jmp     loc_58740B
0x5868CA: push    0Ah; MaxCount
0x5868CC: push    offset aExitMenus; "exit menus"
0x5868D1: push    eax; Str1
0x5868D2: call    sub_9868DD
0x5868D7: add     esp, 0Ch
0x5868DA: test    eax, eax
0x5868DC: jnz     short loc_586919
0x5868DE: mov     ecx, ebp
0x5868E0: call    InterfaceManager__GetTopVisibleMenuID
0x5868E5: test    eax, eax
0x5868E7: jz      loc_586FF6
0x5868ED: lea     ecx, [ecx+0]
0x5868F0: push    0
0x5868F2: push    eax
0x5868F3: mov     ecx, ebp
0x5868F5: call    sub_57CFE0
0x5868FA: mov     ecx, ebp
0x5868FC: call    InterfaceManager__GetTopVisibleMenuID
0x586901: test    eax, eax
0x586903: jnz     short loc_5868F0
0x586905: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586909: push    eax
0x58690A: call    FormHeapFree
0x58690F: add     esp, 4
0x586912: mov     al, 1
0x586914: jmp     loc_58740B
0x586919: push    19h; MaxCount
0x58691B: lea     ecx, [esp+1F94h+Src]
0x586922: push    offset aEmergencyTextu; "emergency texture release"
0x586927: push    ecx; Str1
0x586928: call    sub_9868DD
0x58692D: add     esp, 0Ch
0x586930: test    eax, eax
0x586932: jnz     short loc_58695B
0x586934: call    sub_579AE0
0x586939: push    offset aFirstChangeRel; "First change release of hidden textures"...
0x58693E: push    ebx; int
0x58693F: call    sub_585F40
0x586944: mov     eax, [esp+1F98h+var_1F68.m_data]
0x586948: add     esp, 8
0x58694B: push    eax
0x58694C: call    FormHeapFree
0x586951: add     esp, 4
0x586954: mov     al, 1
0x586956: jmp     loc_58740B
0x58695B: push    9; MaxCount
0x58695D: lea     edx, [esp+1F94h+Src]
0x586964: push    offset aPlayerpos; "playerpos"
0x586969: push    edx; Str1
0x58696A: call    sub_9868DD
0x58696F: add     esp, 0Ch
0x586972: test    eax, eax
0x586974: jnz     loc_586A14
0x58697A: fldz
0x58697C: lea     eax, [esp+1F90h+var_1F7C]
0x586980: push    eax
0x586981: fst     [esp+1F94h+var_1F70]
0x586985: lea     ecx, [esp+1F94h+var_1F74]
0x586989: fst     [esp+1F94h+var_1F74]
0x58698D: push    ecx
0x58698E: fstp    [esp+1F98h+var_1F7C.m_data]
0x586992: lea     edx, [esp+1F98h+var_1F70]
0x586996: push    edx
0x586997: lea     eax, [esp+1F9Ch+Src]
0x58699E: push    offset aPlayerposFFF; "playerpos %f %f %f"
0x5869A3: push    eax; Src
0x5869A4: call    _sscanf
0x5869A9: fld     [esp+1FA4h+var_1F70]
0x5869AD: fstp    [esp+1FA4h+var_1F60]
0x5869B1: push    1; arg1
0x5869B3: fld     [esp+1FA8h+var_1F74]
0x5869B7: push    0; canCreate
0x5869B9: fstp    [esp+1FACh+var_1F5C]
0x5869BD: fld     [esp+1FACh+var_1F7C.m_data]
0x5869C1: fstp    [esp+1FACh+var_1F58]
0x5869C5: call    InterfaceManager_GetSingleton
0x5869CA: mov     eax, [eax+60h]
0x5869CD: mov     ecx, [esp+1FACh+var_1F60]
0x5869D1: mov     edx, [esp+1FACh+var_1F5C]
0x5869D5: mov     [eax+54h], ecx
0x5869D8: mov     ecx, [esp+1FACh+var_1F58]
0x5869DC: push    1; arg1
0x5869DE: mov     [eax+58h], edx
0x5869E1: push    0; canCreate
0x5869E3: mov     [eax+5Ch], ecx
0x5869E6: call    InterfaceManager_GetSingleton
0x5869EB: fldz
0x5869ED: mov     eax, [eax+60h]
0x5869F0: add     esp, 24h
0x5869F3: push    1; a3
0x5869F5: push    ecx
0x5869F6: mov     ecx, eax; this
0x5869F8: fstp    [esp+1F98h+var_1F98]; a2
0x5869FB: call    NiAVObject_UpdateNiAVObject
0x586A00: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586A04: push    eax
0x586A05: call    FormHeapFree
0x586A0A: add     esp, 4
0x586A0D: mov     al, 1
0x586A0F: jmp     loc_58740B
0x586A14: push    6; MaxCount
0x586A16: lea     edx, [esp+1F94h+Src]
0x586A1D: push    offset aRepair; "repair"
0x586A22: push    edx; Str1
0x586A23: call    sub_9868DD
0x586A28: add     esp, 0Ch
0x586A2B: test    eax, eax
0x586A2D: jnz     short loc_586A71
0x586A2F: mov     [esp+1F90h+var_1F7C.m_data], eax
0x586A33: lea     eax, [esp+1F90h+var_1F7C]
0x586A37: push    eax
0x586A38: lea     ecx, [esp+1F94h+Src]
0x586A3F: push    offset aRepairI; "repair %i"
0x586A44: push    ecx; Src
0x586A45: call    _sscanf
0x586A4A: mov     edx, [esp+1F9Ch+var_1F7C.m_data]
0x586A4E: push    0
0x586A50: push    0
0x586A52: push    5
0x586A54: push    edx
0x586A55: call    sub_5D2070
0x586A5A: mov     eax, [esp+1FACh+var_1F68.m_data]
0x586A5E: add     esp, 1Ch
0x586A61: push    eax
0x586A62: call    FormHeapFree
0x586A67: add     esp, 4
0x586A6A: mov     al, 1
0x586A6C: jmp     loc_58740B
0x586A71: push    9; MaxCount
0x586A73: lea     eax, [esp+1F94h+Src]
0x586A7A: push    offset aSetTrait; "set trait"
0x586A7F: push    eax; Str1
0x586A80: call    sub_9868DD
0x586A85: add     esp, 0Ch
0x586A88: test    eax, eax
0x586A8A: jnz     loc_586B60
0x586A90: fldz
0x586A92: lea     ecx, [esp+1F90h+var_1F7C]
0x586A96: push    ecx
0x586A97: fstp    [esp+1F94h+var_1F7C.m_data]
0x586A9B: lea     edx, [esp+1F94h+ArgList]
0x586AA2: push    edx
0x586AA3: lea     eax, [esp+1F98h+var_1F38]
0x586AA7: push    eax
0x586AA8: lea     ecx, [esp+1F9Ch+Src]
0x586AAF: push    offset aSetTraitSSF; "set trait %s %s %f"
0x586AB4: push    ecx; Src
0x586AB5: call    _sscanf
0x586ABA: lea     edx, [esp+1FA4h+var_1F38]
0x586ABE: push    edx; unsigned __int8 *
0x586ABF: push    0; int
0x586AC1: call    sub_58B800
0x586AC6: mov     esi, eax
0x586AC8: lea     eax, [esp+1FACh+ArgList]
0x586ACF: push    eax; unsigned __int8 *
0x586AD0: call    TileStringToStringID
0x586AD5: add     esp, 20h
0x586AD8: test    esi, esi
0x586ADA: mov     edi, eax
0x586ADC: jz      short loc_586B3B
0x586ADE: test    edi, edi
0x586AE0: jle     short loc_586B13
0x586AE2: push    offset aTraitSet_; "Trait set."
0x586AE7: push    ebx; int
0x586AE8: call    sub_585F40
0x586AED: fld     [esp+1F98h+var_1F7C.m_data]
0x586AF1: add     esp, 4
0x586AF4: fstp    [esp+1F94h+var_1F94]; a3
0x586AF7: push    edi; a2
0x586AF8: mov     ecx, esi; this
0x586AFA: call    Tile_SetFloat
0x586AFF: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586B03: push    eax
0x586B04: call    FormHeapFree
0x586B09: add     esp, 4
0x586B0C: mov     al, 1
0x586B0E: jmp     loc_58740B
0x586B13: lea     ecx, [esp+1F90h+ArgList]
0x586B1A: push    ecx; ArgList
0x586B1B: push    offset aUnknownTraitS; "Unknown trait '%s'"
0x586B20: mov     ecx, ebx; this
0x586B22: call    Console_FormatPrint
0x586B27: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586B2B: push    eax
0x586B2C: call    FormHeapFree
0x586B31: add     esp, 4
0x586B34: mov     al, 1
0x586B36: jmp     loc_58740B
0x586B3B: lea     edx, [esp+1F90h+var_1F38]
0x586B3F: push    edx; ArgList
0x586B40: push    offset aCanTFindTileS; "Can't find tile '%s'"
0x586B45: mov     ecx, ebx; this
0x586B47: call    Console_FormatPrint
0x586B4C: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586B50: push    eax
0x586B51: call    FormHeapFree
0x586B56: add     esp, 4
0x586B59: mov     al, 1
0x586B5B: jmp     loc_58740B
0x586B60: push    5; MaxCount
0x586B62: lea     eax, [esp+1F94h+Src]
0x586B69: push    offset aDepth; "depth"
0x586B6E: push    eax; Str1
0x586B6F: call    sub_9868DD
0x586B74: add     esp, 0Ch
0x586B77: test    eax, eax
0x586B79: jnz     short loc_586BD4
0x586B7B: call    InterfaceManager_GetDepth
0x586B80: call    Double_To_SInt32
0x586B85: push    eax; ArgList
0x586B86: push    offset aMaxDepthI; "Max Depth: %i"
0x586B8B: push    ebx; int
0x586B8C: call    sub_585F40
0x586B91: push    1; arg1
0x586B93: push    0; canCreate
0x586B95: call    InterfaceManager_GetSingleton
0x586B9A: mov     eax, [eax+1Ch]
0x586B9D: add     esp, 14h
0x586BA0: push    0FABh
0x586BA5: mov     ecx, eax
0x586BA7: call    Tile_GetFloat
0x586BAC: call    Double_To_SInt32
0x586BB1: push    eax; ArgList
0x586BB2: push    offset aCursorDepthI; "Cursor Depth: %i"
0x586BB7: push    ebx; int
0x586BB8: call    sub_585F40
0x586BBD: mov     eax, [esp+1F9Ch+var_1F68.m_data]
0x586BC1: add     esp, 0Ch
0x586BC4: push    eax
0x586BC5: call    FormHeapFree
0x586BCA: add     esp, 4
0x586BCD: mov     al, 1
0x586BCF: jmp     loc_58740B
0x586BD4: push    9; MaxCount
0x586BD6: lea     ecx, [esp+1F94h+Src]
0x586BDD: push    offset aNewFonts; "new fonts"
0x586BE2: push    ecx; Str1
0x586BE3: call    sub_9868DD
0x586BE8: add     esp, 0Ch
0x586BEB: test    eax, eax
0x586BED: jnz     short loc_586C0C
0x586BEF: call    FontManager_GetSingleton
0x586BF4: mov     byte ptr [eax+14h], 1
0x586BF8: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586BFC: push    eax
0x586BFD: call    FormHeapFree
0x586C02: add     esp, 4
0x586C05: mov     al, 1
0x586C07: jmp     loc_58740B
0x586C0C: push    9; MaxCount
0x586C0E: lea     edx, [esp+1F94h+Src]
0x586C15: push    offset aOldFonts; "old fonts"
0x586C1A: push    edx; Str1
0x586C1B: call    sub_9868DD
0x586C20: add     esp, 0Ch
0x586C23: test    eax, eax
0x586C25: jnz     short loc_586C44
0x586C27: call    FontManager_GetSingleton
0x586C2C: mov     byte ptr [eax+14h], 0
0x586C30: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586C34: push    eax
0x586C35: call    FormHeapFree
0x586C3A: add     esp, 4
0x586C3D: mov     al, 1
0x586C3F: jmp     loc_58740B
0x586C44: push    0Ch; MaxCount
0x586C46: lea     eax, [esp+1F94h+Src]
0x586C4D: push    offset aUseWorkbook; "use workbook"
0x586C52: push    eax; Str1
0x586C53: call    sub_9868DD
0x586C58: add     esp, 0Ch
0x586C5B: test    eax, eax
0x586C5D: jnz     loc_586CE8
0x586C63: push    eax; int
0x586C64: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x586C69: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x586C6E: push    eax; int
0x586C6F: push    402h
0x586C74: call    Menu_GetOpenMenuTile
0x586C79: add     esp, 4
0x586C7C: push    eax; void *
0x586C7D: call    OblivionDynamicCast
0x586C82: add     esp, 14h
0x586C85: test    eax, eax
0x586C87: jz      short loc_586CC6
0x586C89: mov     eax, [eax+44h]
0x586C8C: push    0; int
0x586C8E: push    offset ??_R0?AVBookMenu@@@8; struct TypeDescriptor *
0x586C93: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x586C98: push    0; int
0x586C9A: push    eax; void *
0x586C9B: call    OblivionDynamicCast
0x586CA0: add     esp, 14h
0x586CA3: test    eax, eax
0x586CA5: jz      loc_586FF6
0x586CAB: mov     ecx, eax
0x586CAD: call    sub_596150
0x586CB2: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586CB6: push    eax
0x586CB7: call    FormHeapFree
0x586CBC: add     esp, 4
0x586CBF: mov     al, 1
0x586CC1: jmp     loc_58740B
0x586CC6: push    offset aYouMustOpenABo; "You must open a book (or scroll) before"...
0x586CCB: push    ebx; int
0x586CCC: call    sub_585F40
0x586CD1: mov     eax, [esp+1F98h+var_1F68.m_data]
0x586CD5: add     esp, 8
0x586CD8: push    eax
0x586CD9: call    FormHeapFree
0x586CDE: add     esp, 4
0x586CE1: mov     al, 1
0x586CE3: jmp     loc_58740B
0x586CE8: push    3; MaxCount
0x586CEA: lea     ecx, [esp+1F94h+Src]
0x586CF1: push    offset off_A69CE8; Str2
0x586CF6: push    ecx; Str1
0x586CF7: call    sub_9868DD
0x586CFC: add     esp, 0Ch
0x586CFF: test    eax, eax
0x586D01: jnz     loc_586F1E
0x586D07: push    7Fh
0x586D09: push    eax
0x586D0A: lea     edx, [esp+1F98h+var_1EB7]
0x586D11: push    edx
0x586D12: mov     [esp+1F9Ch+ArgList], al
0x586D19: call    __memset
0x586D1E: lea     eax, [esp+1F9Ch+ArgList]
0x586D25: push    eax
0x586D26: lea     ecx, [esp+1FA0h+Src]
0x586D2D: push    offset aBatS; "bat %s"
0x586D32: push    ecx; Src
0x586D33: call    _sscanf
0x586D38: lea     eax, [esp+1FA8h+ArgList]
0x586D3F: add     esp, 18h
0x586D42: lea     edx, [eax+1]
0x586D45: mov     cl, [eax]
0x586D47: add     eax, 1
0x586D4A: test    cl, cl
0x586D4C: jnz     short loc_586D45
0x586D4E: sub     eax, edx
0x586D50: jnz     short loc_586D73
0x586D52: push    offset aYouMustEnterAF; "You must enter a filename."
0x586D57: call    Interface_ConsolePrint
0x586D5C: mov     eax, [esp+1F94h+var_1F68.m_data]
0x586D60: add     esp, 4
0x586D63: push    eax
0x586D64: call    FormHeapFree
0x586D69: add     esp, 4
0x586D6C: mov     al, 1
0x586D6E: jmp     loc_58740B
0x586D73: push    154h; Size
0x586D78: call    FormHeapAlloc
0x586D7D: add     esp, 4
0x586D80: mov     [esp+1F90h+var_1F7C.m_data], eax
0x586D84: test    eax, eax
0x586D86: mov     byte ptr [esp+1F90h+var_4], 2
0x586D8E: jz      short loc_586DAC
0x586D90: push    0
0x586D92: push    2800h
0x586D97: push    0
0x586D99: lea     edx, [esp+1F9Ch+ArgList]
0x586DA0: push    edx
0x586DA1: mov     ecx, eax
0x586DA3: call    BSFile_constr
0x586DA8: mov     edi, eax
0x586DAA: jmp     short loc_586DAE
0x586DAC: xor     edi, edi
0x586DAE: test    edi, edi
0x586DB0: mov     byte ptr [esp+1F90h+var_4], 0
0x586DB8: jz      loc_586EE3
0x586DBE: mov     eax, [edi]
0x586DC0: mov     edx, [eax+18h]
0x586DC3: push    0
0x586DC5: push    0
0x586DC7: mov     ecx, edi
0x586DC9: call    edx
0x586DCB: test    al, al
0x586DCD: jz      loc_586EE3
0x586DD3: mov     eax, [edi]
0x586DD5: mov     edx, [eax+28h]
0x586DD8: push    0Dh
0x586DDA: push    0A28h
0x586DDF: lea     ecx, [esp+1F98h+var_1238]
0x586DE6: push    ecx
0x586DE7: mov     ecx, edi
0x586DE9: call    edx
0x586DEB: test    eax, eax
0x586DED: jz      loc_586EF8
0x586DF3: lea     eax, [esp+1F90h+var_1238]
0x586DFA: xor     edx, edx
0x586DFC: lea     esi, [eax+1]
0x586DFF: nop
0x586E00: mov     cl, [eax]
0x586E02: add     eax, 1
0x586E05: test    cl, cl
0x586E07: jnz     short loc_586E00
0x586E09: sub     eax, esi
0x586E0B: jz      short loc_586E3F
0x586E0D: lea     ecx, [ecx+0]
0x586E10: cmp     [esp+edx+1F90h+var_1238], 0Ah
0x586E18: jnz     short loc_586E22
0x586E1A: mov     [esp+edx+1F90h+var_1238], 20h ; ' '
0x586E22: lea     eax, [esp+1F90h+var_1238]
0x586E29: add     edx, 1
0x586E2C: lea     esi, [eax+1]
0x586E2F: nop
0x586E30: mov     cl, [eax]
0x586E32: add     eax, 1
0x586E35: test    cl, cl
0x586E37: jnz     short loc_586E30
0x586E39: sub     eax, esi
0x586E3B: cmp     edx, eax
0x586E3D: jb      short loc_586E10
0x586E3F: lea     eax, [esp+1F90h+var_1238]
0x586E46: lea     edx, [eax+1]
0x586E49: lea     esp, [esp+0]
0x586E50: mov     cl, [eax]
0x586E52: add     eax, 1
0x586E55: test    cl, cl
0x586E57: jnz     short loc_586E50
0x586E59: sub     eax, edx
0x586E5B: cmp     eax, 1
0x586E5E: jbe     short loc_586EC1
0x586E60: lea     eax, [esp+1F90h+var_1238]
0x586E67: push    eax
0x586E68: push    offset aS_0; "> %s"
0x586E6D: call    Interface_ConsolePrint
0x586E72: add     esp, 8
0x586E75: lea     ecx, [esp+1F90h+var_1F38]
0x586E79: call    Script_Constructor
0x586E7E: lea     ecx, [esp+1F90h+var_1F38]; this
0x586E82: mov     byte ptr [esp+1F90h+var_4], 3
0x586E8A: call    TESForm_MakeTemporary
0x586E8F: lea     ecx, [esp+1F90h+var_1238]
0x586E96: push    ecx; Src
0x586E97: lea     ecx, [esp+1F94h+var_1F38]
0x586E9B: call    Script_SetText
0x586EA0: mov     edx, [ebx]
0x586EA2: push    0; int
0x586EA4: push    1; int
0x586EA6: push    edx; int
0x586EA7: lea     ecx, [esp+1F9Ch+var_1F38]; int
0x586EAB: call    Script_CompileAndRun
0x586EB0: lea     ecx, [esp+1F90h+var_1F38]
0x586EB4: mov     byte ptr [esp+1F90h+var_4], 0
0x586EBC: call    Script_StaticDestructor
0x586EC1: mov     eax, [edi]
0x586EC3: mov     edx, [eax+28h]
0x586EC6: push    0Dh
0x586EC8: push    0A28h
0x586ECD: lea     ecx, [esp+1F98h+var_1238]
0x586ED4: push    ecx
0x586ED5: mov     ecx, edi
0x586ED7: call    edx
0x586ED9: test    eax, eax
0x586EDB: jnz     loc_586DF3
0x586EE1: jmp     short loc_586EF8
0x586EE3: lea     eax, [esp+1F90h+ArgList]
0x586EEA: push    eax
0x586EEB: push    offset aTheFileSCouldN; "The file '%s' could not be opened."
0x586EF0: call    Interface_ConsolePrint
0x586EF5: add     esp, 8
0x586EF8: test    edi, edi
0x586EFA: jz      loc_586FF6
0x586F00: mov     edx, [edi]
0x586F02: mov     eax, [edx]
0x586F04: push    1
0x586F06: mov     ecx, edi
0x586F08: call    eax
0x586F0A: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586F0E: push    eax
0x586F0F: call    FormHeapFree
0x586F14: add     esp, 4
0x586F17: mov     al, 1
0x586F19: jmp     loc_58740B
0x586F1E: lea     eax, [esp+1F90h+Src]
0x586F25: xor     edx, edx
0x586F27: lea     esi, [eax+1]
0x586F2A: lea     ebx, [ebx+0]
0x586F30: mov     cl, [eax]
0x586F32: add     eax, 1
0x586F35: test    cl, cl
0x586F37: jnz     short loc_586F30
0x586F39: sub     eax, esi
0x586F3B: jz      short loc_586F6F
0x586F3D: lea     ecx, [ecx+0]
0x586F40: cmp     [esp+edx+1F90h+Src], 0Ah
0x586F48: jnz     short loc_586F52
0x586F4A: mov     [esp+edx+1F90h+Src], 20h ; ' '
0x586F52: lea     eax, [esp+1F90h+Src]
0x586F59: add     edx, 1
0x586F5C: lea     esi, [eax+1]
0x586F5F: nop
0x586F60: mov     cl, [eax]
0x586F62: add     eax, 1
0x586F65: test    cl, cl
0x586F67: jnz     short loc_586F60
0x586F69: sub     eax, esi
0x586F6B: cmp     edx, eax
0x586F6D: jb      short loc_586F40
0x586F6F: lea     ecx, [esp+1F90h+var_1F38]
0x586F73: call    Script_Constructor
0x586F78: lea     ecx, [esp+1F90h+var_1F38]; this
0x586F7C: mov     byte ptr [esp+1F90h+var_4], 4
0x586F84: call    TESForm_MakeTemporary
0x586F89: lea     ecx, [esp+1F90h+Src]
0x586F90: push    ecx; Src
0x586F91: lea     ecx, [esp+1F94h+var_1F38]
0x586F95: call    Script_SetText
0x586F9A: push    1; arg1
0x586F9C: push    0; canCreate
0x586F9E: call    InterfaceManager_GetSingleton
0x586FA3: mov     eax, [eax+0BCh]
0x586FA9: mov     edx, [ebx]
0x586FAB: add     esp, 8
0x586FAE: push    eax; int
0x586FAF: push    1; int
0x586FB1: push    edx; int
0x586FB2: lea     ecx, [esp+1F9Ch+var_1F38]; int
0x586FB6: call    Script_CompileAndRun
0x586FBB: lea     ecx, [esp+1F90h+var_1F38]
0x586FBF: mov     byte ptr [esp+1F90h+var_4], 0
0x586FC7: call    Script_StaticDestructor
0x586FCC: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586FD0: push    eax
0x586FD1: call    FormHeapFree
0x586FD6: add     esp, 4
0x586FD9: mov     al, 1
0x586FDB: jmp     loc_58740B
0x586FE0: lea     ecx, [ebx+4]
0x586FE3: call    NiTPointerList__FreeAllNodes
0x586FE8: mov     ecx, ebx
0x586FEA: mov     dword ptr [ebx+2Ch], 0
0x586FF1: call    sub_585620
0x586FF6: mov     eax, [esp+1F90h+var_1F68.m_data]
0x586FFA: push    eax
0x586FFB: call    FormHeapFree
0x587000: add     esp, 4
0x587003: mov     al, 1
0x587005: jmp     loc_58740B
0x58700A: cmp     ebx, 80000000h
0x587010: jnz     short loc_587058
0x587012: cmp     edx, ebp
0x587014: jz      loc_587325
0x58701A: cmp     eax, ebp
0x58701C: jz      loc_587325
0x587022: sub     edx, 1
0x587025: cmp     eax, edx
0x587027: jge     short loc_587043
0x587029: mov     ecx, edx
0x58702B: sub     ecx, eax
0x58702D: lea     edi, [esp+eax+1F90h+Src]
0x587034: lea     esi, [esp+eax+1F90h+var_1E37]
0x58703B: rep movsb
0x58703D: mov     edi, [esp+1F90h+var_1F74]
0x587041: xor     ebp, ebp
0x587043: mov     [esp+edx+1F90h+Src], 0
0x58704B: mov     [esp+eax+1F90h+var_1E39], 7Ch ; '|'
0x587053: jmp     loc_587325
0x587058: cmp     ebx, 80000007h
0x58705E: jnz     short loc_58709E
0x587060: cmp     eax, edx
0x587062: jge     loc_587325
0x587068: sub     edx, 1
0x58706B: cmp     eax, edx
0x58706D: jge     short loc_587089
0x58706F: mov     ecx, edx
0x587071: sub     ecx, eax
0x587073: lea     edi, [esp+eax+1F90h+Src]
0x58707A: lea     esi, [esp+eax+1F90h+var_1E37]
0x587081: rep movsb
0x587083: mov     edi, [esp+1F90h+var_1F74]
0x587087: xor     ebp, ebp
0x587089: mov     [esp+edx+1F90h+Src], 0
0x587091: mov     [esp+eax+1F90h+Src], 7Ch ; '|'
0x587099: jmp     loc_587325
0x58709E: cmp     ebx, 80000009h
0x5870A4: jnz     short loc_5870C3
0x5870A6: mov     ecx, 1
0x5870AB: sub     ecx, ds:0B1398Ch
0x5870B1: push    ecx
0x5870B2: mov     ecx, edi
0x5870B4: call    sub_5855E0
0x5870B9: call    sub_585620
0x5870BE: jmp     loc_587325
0x5870C3: cmp     ebx, 8000000Ah
0x5870C9: jnz     short loc_5870E6
0x5870CB: mov     edx, ds:0B1398Ch
0x5870D1: add     edx, 0FFFFFFFFh
0x5870D4: push    edx
0x5870D5: mov     ecx, edi
0x5870D7: call    sub_5855E0
0x5870DC: call    sub_585620
0x5870E1: jmp     loc_587325
0x5870E6: cmp     ebx, 80000003h
0x5870EC: jnz     short loc_587141
0x5870EE: mov     eax, [edi+20h]
0x5870F1: cmp     eax, ebp
0x5870F3: jz      loc_587325
0x5870F9: add     dword ptr [edi+24h], 1
0x5870FD: mov     ecx, [edi+24h]
0x587100: lea     edx, [eax-1]
0x587103: cmp     ecx, edx
0x587105: jl      short loc_58710A
0x587107: lea     ecx, [eax-1]
0x58710A: cmp     ecx, ebp
0x58710C: mov     eax, [edi+18h]
0x58710F: mov     [edi+24h], ecx
0x587112: jle     short loc_587123
0x587114: cmp     eax, ebp
0x587116: jz      short loc_58711C
0x587118: mov     eax, [eax]
0x58711A: jmp     short loc_58711E
0x58711C: xor     eax, eax
0x58711E: sub     ecx, 1
0x587121: jnz     short loc_587114
0x587123: mov     eax, [eax+8]
0x587126: push    eax
0x587127: lea     eax, [esp+1F94h+Src]
0x58712E: push    offset aS; "%s"
0x587133: push    eax
0x587134: call    __sprintf
0x587139: add     esp, 0Ch
0x58713C: jmp     loc_587325
0x587141: cmp     ebx, 80000004h
0x587147: jnz     loc_587202
0x58714D: cmp     [edi+20h], ebp
0x587150: jz      loc_587325
0x587156: or      esi, 0FFFFFFFFh
0x587159: add     [edi+24h], esi
0x58715C: mov     eax, [edi+24h]
0x58715F: xor     ecx, ecx
0x587161: cmp     eax, ebp
0x587163: setle   cl
0x587166: mov     [esp+1F90h+var_1F7C.m_data], ebp
0x58716A: mov     [esp+1F90h+var_1F7C.m_dataLen], bp
0x58716F: mov     [esp+1F90h+var_1F7C.m_bufLen], bp
0x587174: sub     ecx, 1
0x587177: and     eax, ecx
0x587179: mov     [edi+24h], eax
0x58717C: cmp     eax, ebp
0x58717E: mov     [esp+1F90h+var_4], 5
0x587189: jz      short loc_5871B2
0x58718B: mov     ecx, [edi+18h]
0x58718E: jle     short loc_58719F
0x587190: cmp     ecx, ebp
0x587192: jz      short loc_587198
0x587194: mov     ecx, [ecx]
0x587196: jmp     short loc_58719A
0x587198: xor     ecx, ecx
0x58719A: sub     eax, 1
0x58719D: jnz     short loc_587190
0x58719F: cmp     ecx, ebp
0x5871A1: jz      short loc_5871B2
0x5871A3: add     ecx, 8
0x5871A6: push    ecx
0x5871A7: lea     ecx, [esp+1F94h+var_1F7C]
0x5871AB: call    sub_4FB4C0
0x5871B0: jmp     short loc_5871C1
0x5871B2: push    ebp; a3
0x5871B3: push    offset EmptyString; a2
0x5871B8: lea     ecx, [esp+1F98h+var_1F7C]; this
0x5871BC: call    BSStringT_Set
0x5871C1: lea     ecx, [esp+1F90h+var_1F7C]
0x5871C5: call    BSStringT_GetLen
0x5871CA: test    eax, eax
0x5871CC: mov     eax, [esp+1F90h+var_1F7C.m_data]
0x5871D0: jnz     short loc_5871D7
0x5871D2: mov     eax, offset EmptyString
0x5871D7: push    eax
0x5871D8: lea     edx, [esp+1F94h+Src]
0x5871DF: push    offset aS; "%s"
0x5871E4: push    edx
0x5871E5: call    __sprintf
0x5871EA: add     esp, 0Ch
0x5871ED: lea     ecx, [esp+1F90h+var_1F7C]; void *
0x5871F1: mov     [esp+1F90h+var_4], esi
0x5871F8: call    BSStringT_Clear
0x5871FD: jmp     loc_587325
0x587202: cmp     ebx, 80000001h
0x587208: jnz     short loc_587233
0x58720A: cmp     edx, ebp
0x58720C: jz      loc_587325
0x587212: cmp     eax, ebp
0x587214: jz      loc_587325
0x58721A: mov     cl, [esp+eax+1F90h+var_1E39]
0x587221: lea     eax, [esp+eax+1F90h+Src]
0x587228: mov     [eax], cl
0x58722A: mov     byte ptr [eax-1], 7Ch ; '|'
0x58722E: jmp     loc_587325
0x587233: cmp     ebx, 80000002h
0x587239: jnz     short loc_58726B
0x58723B: cmp     edx, ebp
0x58723D: jz      loc_587325
0x587243: lea     ecx, [eax+1]
0x587246: cmp     ecx, edx
0x587248: jge     loc_587325
0x58724E: mov     dl, [esp+eax+1F90h+var_1E37]
0x587255: lea     ecx, [esp+eax+1F90h+var_1E37]
0x58725C: mov     [esp+eax+1F90h+Src], dl
0x587263: mov     byte ptr [ecx], 7Ch ; '|'
0x587266: jmp     loc_587325
0x58726B: cmp     ebx, 80000005h
0x587271: jnz     short loc_5872AF
0x587273: cmp     edx, ebp
0x587275: jz      loc_587325
0x58727B: cmp     eax, ebp
0x58727D: jz      loc_587325
0x587283: jle     short loc_5872A5
0x587285: jmp     short loc_587290
0x587287: align 10h
0x587290: mov     cl, [esp+eax+1F90h+var_1E39]
0x587297: mov     [esp+eax+1F90h+Src], cl
0x58729E: sub     eax, 1
0x5872A1: cmp     eax, ebp
0x5872A3: jg      short loc_587290
0x5872A5: mov     [esp+1F90h+Src], 7Ch ; '|'
0x5872AD: jmp     short loc_587325
0x5872AF: cmp     ebx, 80000006h
0x5872B5: jnz     short loc_5872EB
0x5872B7: cmp     edx, ebp
0x5872B9: jz      short loc_587325
0x5872BB: lea     ecx, [eax+1]
0x5872BE: cmp     ecx, edx
0x5872C0: jge     short loc_587325
0x5872C2: lea     ecx, [edx-1]
0x5872C5: cmp     eax, ecx
0x5872C7: jge     short loc_5872E1
0x5872C9: sub     ecx, eax
0x5872CB: lea     edi, [esp+eax+1F90h+Src]
0x5872D2: lea     esi, [esp+eax+1F90h+var_1E37]
0x5872D9: rep movsb
0x5872DB: mov     edi, [esp+1F90h+var_1F74]
0x5872DF: xor     ebp, ebp
0x5872E1: mov     [esp+edx+1F90h+var_1E39], 7Ch ; '|'
0x5872E9: jmp     short loc_587325
0x5872EB: add     edx, 1
0x5872EE: cmp     edx, eax
0x5872F0: mov     [esp+eax+1F90h+Src], bl
0x5872F7: mov     esi, edx
0x5872F9: jle     short loc_587315
0x5872FB: jmp     short loc_587300
0x5872FD: align 10h
0x587300: mov     cl, [esp+esi+1F90h+Src]
0x587307: mov     [esp+esi+1F90h+var_1E37], cl
0x58730E: sub     esi, 1
0x587311: cmp     esi, eax
0x587313: jg      short loc_587300
0x587315: mov     [esp+edx+1F90h+var_1E37], 0
0x58731D: mov     [esp+eax+1F90h+var_1E37], 7Ch ; '|'
0x587325: xor     eax, eax
0x587327: cmp     [esp+1F90h+Src], al
0x58732E: jz      short loc_587347
0x587330: cmp     [esp+eax+1F90h+Src], 7Ch ; '|'
0x587338: jz      short loc_587357
0x58733A: add     eax, 1
0x58733D: cmp     [esp+eax+1F90h+Src], 0
0x587345: jnz     short loc_587330
0x587347: mov     [esp+eax+1F90h+Src], 7Ch ; '|'
0x58734F: mov     [esp+eax+1F90h+var_1E37], 0
0x587357: push    ebp; a3
0x587358: lea     edx, [esp+1F94h+Src]
0x58735F: push    edx; a2
0x587360: lea     ecx, [esp+1F98h+var_1F7C]; this
0x587364: mov     [esp+1F98h+var_1F7C.m_data], ebp
0x587368: mov     [esp+1F98h+var_1F7C.m_dataLen], bp
0x58736D: mov     [esp+1F98h+var_1F7C.m_bufLen], bp
0x587372: call    BSStringT_Set
0x587377: cmp     [edi+20h], ebp
0x58737A: mov     [esp+1F90h+var_4], 6
0x587385: jnz     short loc_58738C
0x587387: lea     ecx, [edi+14h]
0x58738A: jmp     short loc_5873AA
0x58738C: lea     ecx, [esp+1F90h+var_1F70]
0x587390: lea     esi, [edi+14h]
0x587393: push    ecx
0x587394: mov     ecx, esi
0x587396: call    sub_585AC0
0x58739B: mov     edx, [esp+1F90h+var_1F70]
0x58739F: push    edx
0x5873A0: call    FormHeapFree
0x5873A5: add     esp, 4
0x5873A8: mov     ecx, esi
0x5873AA: lea     eax, [esp+1F90h+var_1F7C]
0x5873AE: push    eax
0x5873AF: call    sub_585A70
0x5873B4: fld     dword ptr ds:0A30634h
0x5873BA: mov     ecx, ds:0B13994h
0x5873C0: push    ecx; int
0x5873C1: push    ecx
0x5873C2: fstp    [esp+1F98h+var_1F98]; float
0x5873C5: push    0FFFFFFFFh; int
0x5873C7: fild    dword ptr ds:0B3A704h
0x5873CD: push    1; int
0x5873CF: sub     esp, 8
0x5873D2: lea     edx, [esp+1FA8h+Src]
0x5873D9: fstp    [esp+1FA8h+var_1FA4]; float
0x5873DD: fild    dword ptr ds:0B3A700h
0x5873E3: fstp    [esp+1FA8h+var_1FA8]; float
0x5873E6: push    edx; int
0x5873E7: push    1
0x5873E9: call    sub_571F90
0x5873EE: add     esp, 4
0x5873F1: mov     ecx, eax
0x5873F3: call    sub_5723E0
0x5873F8: mov     eax, [esp+1F90h+var_1F7C.m_data]
0x5873FC: push    eax
0x5873FD: call    FormHeapFree
0x587402: add     esp, 4
0x587405: mov     al, 1
0x587407: jmp     short loc_58740B
0x587409: xor     al, al
0x58740B: mov     ecx, [esp+1F90h+var_C]
0x587412: mov     large fs:0, ecx
0x587419: pop     ecx
0x58741A: pop     edi
0x58741B: pop     esi
0x58741C: pop     ebp
0x58741D: pop     ebx
0x58741E: mov     ecx, [esp+1F7Ch+var_10]
0x587425: xor     ecx, esp
0x587427: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58742C: add     esp, 1F7Ch
0x587432: retn    4
