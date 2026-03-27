0x690730: push    0FFFFFFFFh
0x690732: push    offset BoundItemEffect_Clone_SEH
0x690737: mov     eax, large fs:0
0x69073D: push    eax
0x69073E: sub     esp, 0Ch
0x690741: push    ebx
0x690742: push    ebp
0x690743: push    esi
0x690744: push    edi
0x690745: mov     eax, ds:0B30AACh
0x69074A: xor     eax, esp
0x69074C: push    eax
0x69074D: lea     eax, [esp+2Ch+var_C]
0x690751: mov     large fs:0, eax
0x690757: mov     ebx, ecx
0x690759: mov     [esp+2Ch+var_14], ebx
0x69075D: push    8Ch ; 'Œ'; Size
0x690762: call    FormHeapAlloc
0x690767: add     esp, 4
0x69076A: mov     [esp+2Ch+var_10], eax
0x69076E: xor     esi, esi
0x690770: cmp     eax, esi
0x690772: mov     [esp+2Ch+var_4], esi
0x690776: jz      short loc_690793
0x690778: mov     ecx, [ebx+0Ch]
0x69077B: mov     edx, [ebx+8]
0x69077E: push    ecx
0x69077F: mov     ecx, [ebx+24h]
0x690782: push    edx
0x690783: push    ecx
0x690784: mov     ecx, eax; this
0x690786: call    ??0BoundItemEffect@@QAE@XZ; BoundItemEffect::BoundItemEffect(void)
0x69078B: mov     edi, eax
0x69078D: mov     [esp+2Ch+var_18], edi
0x690791: jmp     short loc_690799
0x690793: mov     [esp+2Ch+var_18], esi
0x690797: mov     edi, esi
0x690799: or      ebp, 0FFFFFFFFh
0x69079C: push    edi
0x69079D: mov     ecx, ebx
0x69079F: mov     [esp+30h+var_4], ebp
0x6907A3: call    AssociatedItemEffect_CopyTo
0x6907A8: cmp     [ebx+3Ch], esi
0x6907AB: jz      short loc_6907DD
0x6907AD: push    0Ch; Size
0x6907AF: call    FormHeapAlloc
0x6907B4: add     esp, 4
0x6907B7: mov     [esp+2Ch+var_10], eax
0x6907BB: cmp     eax, esi
0x6907BD: mov     [esp+2Ch+var_4], 1
0x6907C5: jz      short loc_6907D4
0x6907C7: mov     edx, [ebx+3Ch]
0x6907CA: push    edx
0x6907CB: mov     ecx, eax
0x6907CD: call    sub_4844A0
0x6907D2: jmp     short loc_6907D6
0x6907D4: xor     eax, eax
0x6907D6: mov     [esp+2Ch+var_4], ebp
0x6907DA: mov     [edi+3Ch], eax
0x6907DD: lea     esi, [ebx+40h]
0x6907E0: sub     edi, ebx
0x6907E2: mov     ebp, 10h
0x6907E7: mov     ebx, 2
0x6907EC: lea     esp, [esp+0]
0x6907F0: cmp     dword ptr [esi], 0
0x6907F3: jz      short loc_690824
0x6907F5: push    0Ch; Size
0x6907F7: call    FormHeapAlloc
0x6907FC: add     esp, 4
0x6907FF: mov     [esp+2Ch+var_10], eax
0x690803: test    eax, eax
0x690805: mov     [esp+2Ch+var_4], ebx
0x690809: jz      short loc_690817
0x69080B: mov     ecx, [esi]
0x69080D: push    ecx
0x69080E: mov     ecx, eax
0x690810: call    sub_4844A0
0x690815: jmp     short loc_690819
0x690817: xor     eax, eax
0x690819: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x690821: mov     [edi+esi], eax
0x690824: add     esi, 4
0x690827: sub     ebp, 1
0x69082A: jnz     short loc_6907F0
0x69082C: mov     edi, [esp+2Ch+var_14]
0x690830: mov     eax, [edi+3Ch]
0x690833: test    eax, eax
0x690835: jz      loc_6908EE
0x69083B: cmp     byte ptr [edi+86h], 0
0x690842: jz      loc_6908EE
0x690848: mov     eax, [eax+8]
0x69084B: push    0; int
0x69084D: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x690852: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x690857: push    0; int
0x690859: push    eax; void *
0x69085A: call    OblivionDynamicCast
0x69085F: add     esp, 14h
0x690862: test    eax, eax
0x690864: jz      loc_6908EE
0x69086A: movzx   ecx, word ptr [eax+38h]
0x69086E: cmp     cx, 0FFFFh
0x690873: jnz     short loc_69088D
0x690875: mov     ecx, [eax+34h]
0x690878: lea     esi, [ecx+1]
0x69087B: jmp     short loc_690880
0x69087D: align 10h
0x690880: mov     dl, [ecx]
0x690882: add     ecx, 1
0x690885: test    dl, dl
0x690887: jnz     short loc_690880
0x690889: sub     ecx, esi
0x69088B: jmp     short loc_690890
0x69088D: movzx   ecx, cx
0x690890: test    ecx, ecx
0x690892: jbe     short loc_6908EE
0x690894: mov     ebx, [esp+2Ch+var_18]
0x690898: push    1
0x69089A: push    1
0x69089C: push    0
0x69089E: lea     ecx, [eax+30h]
0x6908A1: push    0
0x6908A3: mov     byte ptr [ebx+86h], 1
0x6908AA: mov     edx, [ecx]
0x6908AC: mov     eax, [edx+14h]
0x6908AF: push    0
0x6908B1: push    0
0x6908B3: call    eax
0x6908B5: push    eax
0x6908B6: lea     ecx, [esp+48h+var_18]
0x6908BA: push    ecx
0x6908BB: mov     ecx, ds:0B33A1Ch
0x6908C1: call    sub_43B420
0x6908C6: mov     eax, [esp+2Ch+var_18]
0x6908CA: test    eax, eax
0x6908CC: jz      short loc_6908F2
0x6908CE: mov     esi, eax
0x6908D0: add     eax, 8
0x6908D3: push    eax; lpAddend
0x6908D4: call    dword ptr ds:0A2807Ch
0x6908DA: test    eax, eax
0x6908DC: jnz     short loc_6908F2
0x6908DE: test    esi, esi
0x6908E0: jz      short loc_6908F2
0x6908E2: mov     edx, [esi]
0x6908E4: mov     eax, [edx]
0x6908E6: push    1
0x6908E8: mov     ecx, esi
0x6908EA: call    eax
0x6908EC: jmp     short loc_6908F2
0x6908EE: mov     ebx, [esp+2Ch+var_18]
0x6908F2: cmp     byte ptr [edi+87h], 0
0x6908F9: jz      loc_6909DE
0x6908FF: mov     ecx, [edi+20h]
0x690902: mov     edx, [ecx]
0x690904: mov     eax, [edx+4]
0x690907: xor     ebp, ebp
0x690909: call    eax
0x69090B: test    eax, eax
0x69090D: jz      short loc_690947
0x69090F: mov     ecx, [edi+20h]
0x690912: mov     edx, [ecx]
0x690914: mov     eax, [edx+4]
0x690917: call    eax
0x690919: mov     edx, [eax]
0x69091B: push    ebp; int
0x69091C: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x690921: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x690926: mov     ecx, eax
0x690928: mov     eax, [edx+170h]
0x69092E: push    ebp; int
0x69092F: call    eax
0x690931: push    eax; void *
0x690932: call    OblivionDynamicCast
0x690937: add     esp, 14h
0x69093A: test    eax, eax
0x69093C: jz      short loc_690947
0x69093E: mov     ecx, eax
0x690940: call    TESActorBase_IsFemale
0x690945: mov     ebp, eax
0x690947: add     edi, 40h ; '@'
0x69094A: mov     [esp+2Ch+var_18], 10h
0x690952: mov     eax, [edi]
0x690954: test    eax, eax
0x690956: jz      short loc_6909CC
0x690958: mov     eax, [eax+8]
0x69095B: test    eax, eax
0x69095D: jz      short loc_6909CC
0x69095F: push    0; int
0x690961: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x690966: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x69096B: push    0; int
0x69096D: push    eax; void *
0x69096E: call    OblivionDynamicCast
0x690973: add     esp, 14h
0x690976: test    eax, eax
0x690978: jz      short loc_6909CC
0x69097A: push    1
0x69097C: push    1
0x69097E: push    0
0x690980: push    0
0x690982: push    0
0x690984: push    0
0x690986: push    ebp
0x690987: mov     ecx, eax
0x690989: mov     byte ptr [ebx+87h], 1
0x690990: call    TESBipedModelForm_GetModelPath
0x690995: push    eax
0x690996: lea     ecx, [esp+48h+var_10]
0x69099A: push    ecx
0x69099B: mov     ecx, ds:0B33A1Ch
0x6909A1: call    sub_43B420
0x6909A6: mov     eax, [esp+2Ch+var_10]
0x6909AA: test    eax, eax
0x6909AC: jz      short loc_6909CC
0x6909AE: mov     esi, eax
0x6909B0: add     eax, 8
0x6909B3: push    eax; lpAddend
0x6909B4: call    dword ptr ds:0A2807Ch
0x6909BA: test    eax, eax
0x6909BC: jnz     short loc_6909CC
0x6909BE: test    esi, esi
0x6909C0: jz      short loc_6909CC
0x6909C2: mov     edx, [esi]
0x6909C4: mov     eax, [edx]
0x6909C6: push    1
0x6909C8: mov     ecx, esi
0x6909CA: call    eax
0x6909CC: add     edi, 4
0x6909CF: sub     [esp+2Ch+var_18], 1
0x6909D4: jnz     loc_690952
0x6909DA: mov     edi, [esp+2Ch+var_14]
0x6909DE: mov     cl, [edi+84h]
0x6909E4: mov     [ebx+84h], cl
0x6909EA: mov     eax, ebx
0x6909EC: mov     ecx, dword ptr [esp+2Ch+var_C]
0x6909F0: mov     large fs:0, ecx
0x6909F7: pop     ecx
0x6909F8: pop     edi
0x6909F9: pop     esi
0x6909FA: pop     ebp
0x6909FB: pop     ebx
0x6909FC: add     esp, 18h
0x6909FF: retn
