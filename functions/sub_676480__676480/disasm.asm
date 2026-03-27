0x676480: push    ecx
0x676481: push    ebp
0x676482: push    esi
0x676483: xor     esi, esi
0x676485: add     ecx, 68h ; 'h'; this
0x676488: mov     [esp+0Ch+var_4], esi
0x67648C: call    sub_7616D0
0x676491: mov     ebp, eax
0x676493: test    ebp, ebp
0x676495: jz      loc_67658E
0x67649B: push    ebx
0x67649C: mov     ebx, [esp+10h+arg_0]
0x6764A0: push    edi
0x6764A1: jmp     short loc_6764A7
0x6764A3: mov     esi, [esp+14h+var_4]
0x6764A7: mov     ecx, [ebp+0]
0x6764AA: test    ecx, ecx
0x6764AC: jz      loc_676596
0x6764B2: test    esi, esi
0x6764B4: jnz     loc_676596
0x6764BA: mov     eax, [ecx]
0x6764BC: mov     edx, [eax+190h]
0x6764C2: call    edx
0x6764C4: test    al, al
0x6764C6: jz      short loc_6764CB
0x6764C8: mov     esi, [ebp+0]
0x6764CB: xor     edi, edi
0x6764CD: test    esi, esi
0x6764CF: jz      loc_676577
0x6764D5: push    1
0x6764D7: push    esi
0x6764D8: mov     ecx, ebx
0x6764DA: call    TESOBjectREFR_IsOwnedBy
0x6764DF: test    al, al
0x6764E1: jz      short loc_67650B
0x6764E3: mov     eax, [ebx]
0x6764E5: mov     edx, [eax+170h]
0x6764EB: mov     ecx, ebx
0x6764ED: call    edx
0x6764EF: push    eax
0x6764F0: push    0; a2
0x6764F2: mov     ecx, esi; this
0x6764F4: call    Actor_GetActorBaseForm
0x6764F9: mov     ecx, eax
0x6764FB: add     ecx, 68h ; 'h'
0x6764FE: call    TESAIForm_OffersServiceForItem
0x676503: test    al, al
0x676505: jz      short loc_67650B
0x676507: mov     [esp+14h+var_4], esi
0x67650B: test    edi, edi
0x67650D: jz      short loc_676577
0x67650F: mov     ecx, [edi]
0x676511: test    ecx, ecx
0x676513: jz      short loc_676577
0x676515: mov     eax, [ecx]
0x676517: mov     edx, [eax+190h]
0x67651D: xor     esi, esi
0x67651F: call    edx
0x676521: test    al, al
0x676523: jz      short loc_676527
0x676525: mov     esi, [edi]
0x676527: mov     edi, [edi+4]
0x67652A: test    edi, edi
0x67652C: jz      short loc_67656F
0x67652E: mov     edi, edi
0x676530: test    esi, esi
0x676532: jz      short loc_676577
0x676534: mov     ecx, [esi+58h]
0x676537: test    ecx, ecx
0x676539: jz      short loc_676546
0x67653B: mov     eax, [ecx]
0x67653D: mov     edx, [eax+8]
0x676540: call    edx
0x676542: test    eax, eax
0x676544: jz      short loc_67656F
0x676546: test    edi, edi
0x676548: jz      short loc_676562
0x67654A: mov     ecx, [edi]
0x67654C: test    ecx, ecx
0x67654E: jz      short loc_676562
0x676550: mov     eax, [ecx]
0x676552: mov     edx, [eax+190h]
0x676558: call    edx
0x67655A: test    al, al
0x67655C: jz      short loc_676562
0x67655E: mov     esi, [edi]
0x676560: jmp     short loc_676564
0x676562: xor     esi, esi
0x676564: test    edi, edi
0x676566: jz      short loc_67656F
0x676568: mov     edi, [edi+4]
0x67656B: test    edi, edi
0x67656D: jnz     short loc_676530
0x67656F: test    esi, esi
0x676571: jnz     loc_6764D5
0x676577: mov     ebp, [ebp+4]
0x67657A: test    ebp, ebp
0x67657C: jnz     loc_6764A3
0x676582: mov     eax, [esp+14h+var_4]
0x676586: pop     edi
0x676587: pop     ebx
0x676588: pop     esi
0x676589: pop     ebp
0x67658A: pop     ecx
0x67658B: retn    4
0x67658E: mov     eax, esi
0x676590: pop     esi
0x676591: pop     ebp
0x676592: pop     ecx
0x676593: retn    4
0x676596: pop     edi
0x676597: pop     ebx
0x676598: mov     eax, esi
0x67659A: pop     esi
0x67659B: pop     ebp
0x67659C: pop     ecx
0x67659D: retn    4
