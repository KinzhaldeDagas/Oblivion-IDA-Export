0x514660: sub     esp, 8
0x514663: mov     ecx, [esp+8+l]
0x514667: mov     edx, [esp+8+arg_10]
0x51466B: push    esi
0x51466C: mov     esi, [esp+0Ch+a4]
0x514670: push    edi
0x514671: lea     eax, [esp+10h+var_8]
0x514675: push    eax; UInt16
0x514676: mov     eax, [esp+14h+arg_C]
0x51467A: push    ecx; l
0x51467B: mov     ecx, [esp+18h+a3]
0x51467F: push    edx; a6
0x514680: mov     edx, [esp+1Ch+arg_4]
0x514684: push    eax; a5
0x514685: mov     eax, [esp+20h+a1]
0x514689: push    esi; a4
0x51468A: push    ecx; a3
0x51468B: push    edx; a2
0x51468C: xor     edi, edi
0x51468E: push    eax; a1
0x51468F: mov     dword ptr [esp+30h+var_8], edi
0x514693: call    Script_ExtractArgs
0x514698: add     esp, 20h
0x51469B: test    al, al
0x51469D: jnz     short loc_5146A5
0x51469F: pop     edi
0x5146A0: pop     esi
0x5146A1: add     esp, 8
0x5146A4: retn
0x5146A5: cmp     esi, edi
0x5146A7: jz      loc_514947
0x5146AD: push    edi; int
0x5146AE: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5146B3: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5146B8: push    edi; int
0x5146B9: push    esi; void *
0x5146BA: call    OblivionDynamicCast
0x5146BF: mov     esi, eax
0x5146C1: add     esp, 14h
0x5146C4: cmp     esi, edi
0x5146C6: jz      loc_514947
0x5146CC: mov     edx, [esi]
0x5146CE: mov     eax, [edx+198h]
0x5146D4: push    edi
0x5146D5: mov     ecx, esi
0x5146D7: call    eax
0x5146D9: test    al, al
0x5146DB: jnz     loc_514947
0x5146E1: mov     ecx, dword ptr [esp+10h+var_8]
0x5146E5: cmp     ecx, edi
0x5146E7: jz      loc_514947
0x5146ED: mov     edx, [ecx]
0x5146EF: mov     eax, [edx+198h]
0x5146F5: push    edi
0x5146F6: call    eax
0x5146F8: test    al, al
0x5146FA: jnz     loc_514947
0x514700: cmp     [esi+58h], edi
0x514703: jz      loc_514947
0x514709: mov     ecx, dword ptr [esp+10h+var_8]
0x51470D: cmp     [ecx+58h], edi
0x514710: jz      loc_514947
0x514716: mov     ecx, esi
0x514718: call    sub_5E6B40
0x51471D: test    al, al
0x51471F: mov     ecx, ds:0B333C4h; this
0x514725: jz      short loc_51474A
0x514727: cmp     dword ptr [esp+10h+var_8], ecx
0x51472B: jz      short loc_514750
0x51472D: mov     ecx, esi; this
0x51472F: call    TESObjectREFR_GetName
0x514734: push    eax; ArgList
0x514735: push    offset aSIsInConversat; "  %s is in conversation so will not go "...
0x51473A: call    PrintError
0x51473F: add     esp, 8
0x514742: pop     edi
0x514743: mov     al, 1
0x514745: pop     esi
0x514746: add     esp, 8
0x514749: retn
0x51474A: cmp     dword ptr [esp+10h+var_8], ecx
0x51474E: jnz     short loc_514776
0x514750: call    PlayerCharacter__IsSleeping?
0x514755: test    al, al
0x514757: jz      short loc_514776
0x514759: mov     eax, ds:0B333C4h
0x51475E: push    esi
0x51475F: mov     ecx, offset ActorProcessManager_ptr
0x514764: mov     [eax+590h], edi
0x51476A: mov     byte ptr [eax+594h], 1
0x514771: call    sub_674E10
0x514776: push    ebx
0x514777: xor     bl, bl
0x514779: push    ebp
0x51477A: mov     ecx, esi; this
0x51477C: mov     byte ptr [esp+18h+var_4], bl
0x514780: call    sub_5E6C60
0x514785: test    al, al
0x514787: jnz     short loc_51478F
0x514789: mov     bl, 1
0x51478B: mov     byte ptr [esp+18h+var_4], bl
0x51478F: mov     edx, [esi]
0x514791: mov     eax, [edx+330h]
0x514797: mov     ebp, ds:0B37210h
0x51479D: mov     ecx, esi
0x51479F: call    eax
0x5147A1: test    eax, eax
0x5147A3: jz      short loc_5147C4
0x5147A5: mov     edx, [esi]
0x5147A7: mov     eax, [edx+330h]
0x5147AD: mov     ecx, esi
0x5147AF: call    eax
0x5147B1: mov     eax, [eax+40h]
0x5147B4: cmp     eax, edi
0x5147B6: jz      short loc_5147C4
0x5147B8: mov     eax, [eax]
0x5147BA: cmp     eax, edi
0x5147BC: jz      short loc_5147C4
0x5147BE: mov     ebp, [eax+4]
0x5147C1: add     ebp, 14h
0x5147C4: mov     edx, [esi]
0x5147C6: mov     eax, [edx+334h]
0x5147CC: push    1
0x5147CE: mov     ecx, esi
0x5147D0: call    eax
0x5147D2: test    al, al
0x5147D4: jz      short loc_514802
0x5147D6: mov     edx, [esi]
0x5147D8: mov     eax, [edx+330h]
0x5147DE: mov     ecx, esi
0x5147E0: call    eax
0x5147E2: test    eax, eax
0x5147E4: jz      short loc_514828
0x5147E6: mov     ecx, dword ptr [esp+18h+var_8]
0x5147EA: mov     edx, [esi]
0x5147EC: mov     eax, [edx+330h]
0x5147F2: push    ecx
0x5147F3: mov     ecx, esi
0x5147F5: call    eax
0x5147F7: mov     ecx, eax
0x5147F9: call    sub_613670
0x5147FE: test    al, al
0x514800: jnz     short loc_514828
0x514802: mov     ecx, [esi+58h]
0x514805: cmp     ecx, edi
0x514807: jz      short loc_514828
0x514809: mov     eax, [esp+18h+var_4]
0x51480D: mov     edx, [ecx]
0x51480F: mov     edx, [edx+228h]
0x514815: push    1
0x514817: push    edi
0x514818: push    1
0x51481A: push    edi
0x51481B: push    eax
0x51481C: mov     eax, dword ptr [esp+2Ch+var_8]
0x514820: push    edi
0x514821: push    edi
0x514822: push    1
0x514824: push    eax
0x514825: push    esi
0x514826: call    edx
0x514828: mov     eax, [esi]
0x51482A: mov     edx, [eax+330h]
0x514830: mov     ecx, esi
0x514832: call    edx
0x514834: test    eax, eax
0x514836: jz      short loc_5148B7
0x514838: mov     eax, [esi]
0x51483A: mov     edx, [eax+330h]
0x514840: mov     ecx, esi
0x514842: call    edx
0x514844: mov     edi, [eax+40h]
0x514847: mov     ecx, edi
0x514849: call    BSSimpleList_Count
0x51484E: cmp     eax, 1
0x514851: jnz     short loc_514871
0x514853: mov     ecx, [edi]
0x514855: mov     eax, [ecx]
0x514857: cmp     eax, dword ptr [esp+18h+var_8]
0x51485B: jnz     short loc_5148B7
0x51485D: cmp     byte ptr [ecx+8], 0
0x514861: jnz     short loc_5148B7
0x514863: push    ebp
0x514864: call    sub_60D020
0x514869: mov     ecx, [edi]
0x51486B: mov     byte ptr [ecx+8], 1
0x51486F: jmp     short loc_5148B7
0x514871: test    edi, edi
0x514873: jz      short loc_5148B7
0x514875: mov     eax, dword ptr [esp+18h+var_8]
0x514879: lea     esp, [esp+0]
0x514880: mov     ecx, [edi]
0x514882: test    ecx, ecx
0x514884: jz      short loc_51488A
0x514886: cmp     [ecx], eax
0x514888: jz      short loc_514893
0x51488A: mov     edi, [edi+4]
0x51488D: test    edi, edi
0x51488F: jnz     short loc_514880
0x514891: jmp     short loc_5148B7
0x514893: cmp     [ecx+4], ebp
0x514896: jz      short loc_5148B7
0x514898: push    ebp
0x514899: call    sub_60D020
0x51489E: mov     edx, [esi]
0x5148A0: mov     eax, [edx+330h]
0x5148A6: mov     ecx, esi
0x5148A8: call    eax
0x5148AA: mov     ecx, [eax+40h]
0x5148AD: push    offset sub_614190
0x5148B2: call    sub_5B27A0
0x5148B7: pop     ebp
0x5148B8: test    bl, bl
0x5148BA: pop     ebx
0x5148BB: jnz     short loc_5148E2
0x5148BD: mov     eax, ds:0B333C4h
0x5148C2: cmp     dword ptr [esp+10h+var_8], eax
0x5148C6: jnz     short loc_5148CF
0x5148C8: mov     byte ptr [eax+738h], 1
0x5148CF: mov     ecx, [esi+58h]
0x5148D2: mov     eax, dword ptr [esp+10h+var_8]
0x5148D6: mov     edx, [ecx]
0x5148D8: mov     edx, [edx+22Ch]
0x5148DE: push    eax
0x5148DF: push    esi
0x5148E0: call    edx
0x5148E2: mov     eax, [esi]
0x5148E4: mov     edx, [eax+330h]
0x5148EA: mov     ecx, esi
0x5148EC: call    edx
0x5148EE: test    eax, eax
0x5148F0: jz      short loc_514947
0x5148F2: push    1
0x5148F4: push    4C4D4843h
0x5148F9: push    1Dh
0x5148FB: mov     ecx, esi
0x5148FD: call    sub_5E91E0
0x514902: mov     ecx, [esi+58h]
0x514905: mov     eax, [ecx]
0x514907: mov     edx, [eax+50h]
0x51490A: call    edx
0x51490C: test    eax, eax
0x51490E: jnz     short loc_514920
0x514910: push    1
0x514912: push    49564E49h
0x514917: push    1Dh
0x514919: mov     ecx, esi
0x51491B: call    sub_5E91E0
0x514920: mov     ecx, [esi+58h]
0x514923: mov     eax, [ecx]
0x514925: mov     edx, [eax+50h]
0x514928: call    edx
0x51492A: test    eax, eax
0x51492C: jz      short loc_514947
0x51492E: mov     ecx, [esi+58h]
0x514931: mov     edx, [ecx]
0x514933: push    0
0x514935: lea     eax, [esi+68h]
0x514938: push    eax
0x514939: mov     eax, [edx+50h]
0x51493C: call    eax
0x51493E: push    eax
0x51493F: lea     ecx, [esi+5Ch]
0x514942: call    MagicCaster_CastMagicItem
0x514947: pop     edi
0x514948: mov     al, 1
0x51494A: pop     esi
0x51494B: add     esp, 8
0x51494E: retn
