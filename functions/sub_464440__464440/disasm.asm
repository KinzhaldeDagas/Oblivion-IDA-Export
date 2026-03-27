0x464440: push    0FFFFFFFFh
0x464442: push    offset SEH_464440
0x464447: mov     eax, large fs:0
0x46444D: push    eax
0x46444E: sub     esp, 44h
0x464451: push    ebx
0x464452: push    ebp
0x464453: push    esi
0x464454: push    edi; int
0x464455: mov     eax, ds:0B30AACh
0x46445A: xor     eax, esp
0x46445C: push    eax; ArgList
0x46445D: lea     eax, [esp+64h+var_C]
0x464461: mov     large fs:0, eax
0x464467: mov     ebp, ecx
0x464469: mov     eax, ds:0B33398h
0x46446E: mov     al, [eax+4]
0x464471: test    al, al
0x464473: jz      loc_464689
0x464479: mov     ecx, ds:0BA9DE4h
0x46447F: mov     edx, large fs:2Ch
0x464486: mov     eax, [edx+ecx*4]
0x464489: mov     ecx, ebp
0x46448B: mov     byte ptr [eax+184h], 1
0x464492: call    sub_4599B0
0x464497: mov     ecx, ebp
0x464499: call    sub_463700
0x46449E: mov     ecx, [ebp+0]
0x4644A1: mov     edx, [ecx]
0x4644A3: mov     eax, [edx+1Ch]
0x4644A6: call    eax
0x4644A8: mov     ecx, ebp
0x4644AA: call    sub_462080
0x4644AF: mov     ecx, ebp
0x4644B1: call    SaveLoad_ValidateCreatedObj??
0x4644B6: push    1; arg1
0x4644B8: push    0; canCreate
0x4644BA: call    InterfaceManager_GetSingleton
0x4644BF: add     esp, 8
0x4644C2: mov     ecx, eax
0x4644C4: call    sub_57ECB0
0x4644C9: call    sub_67F180
0x4644CE: call    sub_67FCF0
0x4644D3: mov     ecx, ds:0B333A0h
0x4644D9: call    sub_43F6E0
0x4644DE: mov     ecx, ds:0B333A0h
0x4644E4: call    sub_43F560
0x4644E9: mov     ecx, ds:0B33A98h
0x4644EF: call    TESDataHandler_Clear
0x4644F4: call    EffectSettingCollection_Reset
0x4644F9: call    sub_5B7150
0x4644FE: call    sub_5A6A80
0x464503: push    0
0x464505: call    sub_5AD750
0x46450A: mov     ecx, ds:0B33A98h
0x464510: add     esp, 4
0x464513: push    offset aData; "Data\\"
0x464518: call    sub_44A2B0
0x46451D: push    804h; Size
0x464522: call    FormHeapAlloc
0x464527: add     esp, 4
0x46452A: mov     [esp+64h+arg_0], eax
0x46452E: test    eax, eax
0x464530: mov     [esp+64h+var_4], 0
0x464538: jz      short loc_464543
0x46453A: mov     ecx, eax; int
0x46453C: call    PlayerCharacter_constr
0x464541: jmp     short loc_464545
0x464543: xor     eax, eax
0x464545: push    1; a3
0x464547: push    14h; a2
0x464549: mov     ecx, eax; this
0x46454B: mov     [esp+6Ch+var_4], 0FFFFFFFFh
0x464553: mov     ds:0B333C4h, eax
0x464558: call    TESForm_SetFormID
0x46455D: mov     ecx, ds:0B33398h
0x464563: mov     edi, ds:0A2808Ch
0x464569: mov     esi, [ecx+10h]
0x46456C: call    edi ; GetCurrentThreadId
0x46456E: cmp     eax, esi
0x464570: jnz     short loc_46457E
0x464572: mov     dl, [ebp+18h]
0x464575: and     dl, 1
0x464578: mov     byte ptr [esp+64h+arg_0], dl
0x46457C: jmp     short loc_46458A
0x46457E: mov     eax, [ebp+18h]
0x464581: shr     eax, 12h
0x464584: and     al, 1
0x464586: mov     byte ptr [esp+64h+arg_0], al
0x46458A: mov     ecx, ds:0B33398h
0x464590: mov     esi, [ecx+10h]
0x464593: call    edi ; GetCurrentThreadId
0x464595: cmp     eax, esi
0x464597: jnz     short loc_46459F
0x464599: and     dword ptr [ebp+18h], 0FFFFFFFEh
0x46459D: jmp     short loc_4645A6
0x46459F: and     dword ptr [ebp+18h], 0FFFBFFFFh
0x4645A6: mov     ecx, ds:0B33A98h
0x4645AC: push    0
0x4645AE: push    0
0x4645B0: call    TESDataHandler_LoadFiles?
0x4645B5: mov     edx, [esp+64h+arg_0]
0x4645B9: push    edx
0x4645BA: mov     ecx, ebp
0x4645BC: call    sub_45A530
0x4645C1: push    0
0x4645C3: call    sub_5AD750
0x4645C8: mov     ecx, ds:0B333C4h; this
0x4645CE: add     esp, 4
0x4645D1: call    TESObjectREFR_GetParentCell
0x4645D6: mov     ecx, ds:0B333C4h; this
0x4645DC: push    0; a2
0x4645DE: mov     esi, eax
0x4645E0: call    TESObjectREFR_ChangeCell
0x4645E5: mov     ecx, ds:0B33A98h
0x4645EB: call    sub_447D80
0x4645F0: mov     ecx, ds:0B333C4h; this
0x4645F6: push    esi; a2
0x4645F7: call    TESObjectREFR_ChangeCell
0x4645FC: mov     eax, ds:0B33A98h
0x464601: mov     ecx, [eax+0Ch]
0x464604: push    ecx
0x464605: mov     ecx, ds:0B333A0h
0x46460B: call    sub_4431F0
0x464610: push    offset aInitializingLo; "Initializing LOD land..."
0x464615: call    PrintToLog???
0x46461A: mov     esi, ds:0B33A98h
0x464620: add     esp, 4
0x464623: add     esi, 0Ch
0x464626: jz      loc_4648F0
0x46462C: lea     esp, [esp+0]
0x464630: cmp     dword ptr [esi+4], 0
0x464634: jnz     short loc_46463F
0x464636: cmp     dword ptr [esi], 0
0x464639: jz      loc_4648F0
0x46463F: mov     ecx, [esi]
0x464641: call    TESWorldSpace_GetParentWorldpsace
0x464646: test    eax, eax
0x464648: jnz     short loc_46467D
0x46464A: mov     ecx, [esi]
0x46464C: call    sub_4EF7E0
0x464651: test    eax, eax
0x464653: jz      short loc_46467D
0x464655: mov     ecx, [esi]
0x464657: mov     edx, [ecx]
0x464659: mov     eax, [edx+0D4h]
0x46465F: call    eax
0x464661: push    eax; ArgList
0x464662: push    offset aInitializing_0; "Initializing LOD land for worldspace '%"...
0x464667: call    sub_40FEC0
0x46466C: mov     ecx, [esi]
0x46466E: add     esp, 8
0x464671: call    sub_4EF7E0
0x464676: mov     ecx, eax
0x464678: call    sub_4EBC00
0x46467D: mov     esi, [esi+4]
0x464680: test    esi, esi
0x464682: jnz     short loc_464630
0x464684: jmp     loc_4648F0
0x464689: xor     edi, edi
0x46468B: cmp     [ebp+4], edi
0x46468E: jnz     short loc_4646C0
0x464690: push    10h; Size
0x464692: call    FormHeapAlloc
0x464697: add     esp, 4
0x46469A: mov     [esp+64h+var_3C], eax
0x46469E: cmp     eax, edi
0x4646A0: mov     [esp+64h+var_4], 1
0x4646A8: jz      short loc_4646B3
0x4646AA: mov     ecx, eax; this
0x4646AC: call    ??0ChangesMap@@QAE@XZ; ChangesMap::ChangesMap(void)
0x4646B1: jmp     short loc_4646B5
0x4646B3: xor     eax, eax
0x4646B5: mov     [esp+64h+var_4], 0FFFFFFFFh
0x4646BD: mov     [ebp+4], eax
0x4646C0: mov     bl, byte ptr [esp+64h+arg_0]
0x4646C4: test    bl, bl
0x4646C6: jnz     short loc_4646CF
0x4646C8: mov     ecx, ebp
0x4646CA: call    sub_45EC50
0x4646CF: or      dword ptr [ebp+18h], 40h
0x4646D3: test    bl, bl
0x4646D5: jnz     short loc_4646DE
0x4646D7: mov     ecx, ebp
0x4646D9: call    sub_463700
0x4646DE: mov     edx, [ebp+0]
0x4646E1: fld     dword ptr ds:0A379CCh
0x4646E7: mov     ecx, [edx+4]
0x4646EA: fstp    [esp+64h+var_50]
0x4646EE: xor     eax, eax
0x4646F0: cmp     ecx, edi
0x4646F2: jbe     short loc_464712
0x4646F4: mov     esi, [edx+8]
0x4646F7: mov     edx, esi
0x4646F9: lea     esp, [esp+0]
0x464700: cmp     [edx], edi
0x464702: jnz     loc_46479A
0x464708: add     eax, 1
0x46470B: add     edx, 4
0x46470E: cmp     eax, ecx
0x464710: jb      short loc_464700
0x464712: xor     eax, eax
0x464714: cmp     eax, edi
0x464716: mov     [esp+64h+var_3C], eax
0x46471A: jz      loc_4648C0
0x464720: mov     ecx, ds:0B33398h
0x464726: cmp     byte ptr [ecx+1], 0
0x46472A: jz      short loc_46474C
0x46472C: fld     [esp+64h+var_50]
0x464730: push    ecx
0x464731: fadd    qword ptr ds:0A3B150h
0x464737: fstp    [esp+68h+var_50]
0x46473B: fld     [esp+68h+var_50]
0x46473F: fstp    [esp+68h+var_68]; float
0x464742: push    2; int
0x464744: call    sub_57B950
0x464749: add     esp, 8
0x46474C: lea     edx, [esp+64h+var_4C]
0x464750: push    edx
0x464751: lea     eax, [esp+68h+a1]
0x464755: push    eax
0x464756: lea     ecx, [esp+6Ch+var_3C]
0x46475A: push    ecx
0x46475B: mov     ecx, [ebp+0]
0x46475E: mov     [esp+70h+var_4C], edi
0x464762: mov     [esp+70h+a1], edi
0x464766: call    sub_452600
0x46476B: mov     ebx, [esp+64h+a1]
0x46476F: push    ebx; a1
0x464770: call    TESForm_LookupByFormID
0x464775: add     esp, 4
0x464778: cmp     eax, ds:0B333C4h
0x46477E: jz      loc_4648B0
0x464784: cmp     eax, edi
0x464786: jz      short loc_4647A2
0x464788: mov     edx, [esp+64h+var_4C]
0x46478C: push    edx
0x46478D: push    eax
0x46478E: mov     ecx, ebp
0x464790: call    sub_45F180
0x464795: jmp     loc_4648B0
0x46479A: mov     eax, [esi+eax*4]
0x46479D: jmp     loc_464714
0x4647A2: mov     eax, [esp+64h+var_4C]
0x4647A6: test    dword ptr [eax], 80000000h
0x4647AC: jz      loc_4648B0
0x4647B2: mov     esi, [eax+4]
0x4647B5: cmp     esi, edi
0x4647B7: jz      loc_4648B0
0x4647BD: add     esi, 4
0x4647C0: mov     ecx, 0Bh
0x4647C5: lea     edi, [esp+64h+var_38]
0x4647C9: rep movsd
0x4647CB: mov     esi, [esp+64h+var_38]
0x4647CF: mov     ecx, ds:0B33A98h
0x4647D5: push    esi; _DWORD
0x4647D6: call    TESDataHandler_IsFormIDCreated?
0x4647DB: test    al, al
0x4647DD: jnz     short loc_4647F1
0x4647DF: mov     eax, [ebp+74h]
0x4647E2: cmp     esi, [eax+0Ch]
0x4647E5: jbe     short loc_4647EB
0x4647E7: xor     esi, esi
0x4647E9: jmp     short loc_4647F1
0x4647EB: mov     eax, [eax+4]
0x4647EE: mov     esi, [eax+esi*4]
0x4647F1: mov     edi, [esp+64h+var_28]
0x4647F5: mov     ecx, ds:0B33A98h
0x4647FB: push    edi; _DWORD
0x4647FC: mov     [esp+68h+var_38], esi
0x464800: call    TESDataHandler_IsFormIDCreated?
0x464805: test    al, al
0x464807: jz      short loc_46480D
0x464809: mov     eax, edi
0x46480B: jmp     short loc_46481F
0x46480D: mov     eax, [ebp+74h]
0x464810: cmp     edi, [eax+0Ch]
0x464813: jbe     short loc_464819
0x464815: xor     eax, eax
0x464817: jmp     short loc_46481F
0x464819: mov     ecx, [eax+4]
0x46481C: mov     eax, [ecx+edi*4]
0x46481F: push    esi; a1
0x464820: mov     [esp+68h+var_28], eax
0x464824: call    TESForm_LookupByFormID
0x464829: push    0; int
0x46482B: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x464830: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x464835: mov     esi, eax
0x464837: push    0; int
0x464839: push    esi; void *
0x46483A: call    OblivionDynamicCast
0x46483F: push    0; int
0x464841: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x464846: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46484B: push    0; int
0x46484D: push    esi; void *
0x46484E: mov     edi, eax
0x464850: call    OblivionDynamicCast
0x464855: add     esp, 2Ch
0x464858: test    eax, eax
0x46485A: jz      short loc_464885
0x46485C: fld     [esp+64h+var_34]
0x464860: fistp   [esp+64h+var_40]
0x464864: fld     [esp+64h+var_30]
0x464868: fistp   [esp+64h+var_44]
0x46486C: mov     edx, [esp+64h+var_44]
0x464870: mov     ecx, [esp+64h+var_40]
0x464874: sar     edx, 0Ch
0x464877: sar     ecx, 0Ch
0x46487A: push    edx; signed int
0x46487B: push    ecx; signed int
0x46487C: mov     ecx, eax; this
0x46487E: call    TESWorldSpace__GetCellAtCellCoord
0x464883: mov     edi, eax
0x464885: test    edi, edi
0x464887: jz      short loc_4648B0
0x464889: mov     ecx, ds:0B333A0h
0x46488F: push    0; a2
0x464891: push    edi; a1
0x464892: call    TESObjectCELL_IsProcessLevel?LowHigh
0x464897: test    al, al
0x464899: jz      short loc_4648B0
0x46489B: lea     edx, [esp+64h+var_38]
0x46489F: push    edx
0x4648A0: push    ebx
0x4648A1: mov     ecx, ebp
0x4648A3: call    sub_45C4F0
0x4648A8: push    eax; Concurrency::details::SchedulerBase *
0x4648A9: mov     ecx, edi
0x4648AB: call    sub_4D35D0
0x4648B0: xor     edi, edi
0x4648B2: cmp     [esp+64h+var_3C], edi
0x4648B6: jnz     loc_464720
0x4648BC: mov     bl, byte ptr [esp+64h+arg_0]
0x4648C0: mov     ecx, [ebp+0]
0x4648C3: mov     eax, [ecx]
0x4648C5: mov     edx, [eax+1Ch]
0x4648C8: call    edx
0x4648CA: mov     ecx, [ebp+0]
0x4648CD: cmp     ecx, edi
0x4648CF: jz      short loc_4648D9
0x4648D1: mov     eax, [ecx]
0x4648D3: mov     edx, [eax]
0x4648D5: push    1
0x4648D7: call    edx
0x4648D9: mov     eax, [ebp+4]
0x4648DC: and     dword ptr [ebp+18h], 0FFFFFFBFh
0x4648E0: test    bl, bl
0x4648E2: mov     [ebp+0], eax
0x4648E5: mov     [ebp+4], edi
0x4648E8: jnz     short loc_4648F0
0x4648EA: mov     [ebp+0A8h], bl
0x4648F0: mov     ecx, dword ptr [esp+64h+var_C]
0x4648F4: mov     large fs:0, ecx
0x4648FB: pop     ecx
0x4648FC: pop     edi
0x4648FD: pop     esi
0x4648FE: pop     ebp
0x4648FF: pop     ebx
0x464900: add     esp, 50h
0x464903: retn    4
