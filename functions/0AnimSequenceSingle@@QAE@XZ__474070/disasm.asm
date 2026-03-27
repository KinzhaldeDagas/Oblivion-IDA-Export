0x474070: push    0FFFFFFFFh
0x474072: push    offset ??0AnimSequenceSingle@@QAE@XZ_SEH
0x474077: mov     eax, large fs:0
0x47407D: push    eax
0x47407E: sub     esp, 0Ch
0x474081: push    ebx
0x474082: push    ebp
0x474083: push    esi
0x474084: push    edi
0x474085: mov     eax, ds:0B30AACh
0x47408A: xor     eax, esp
0x47408C: push    eax
0x47408D: lea     eax, [esp+2Ch+var_C]
0x474091: mov     large fs:0, eax
0x474097: mov     ebx, ecx
0x474099: mov     ebp, [esp+2Ch+arg_0]
0x47409D: mov     esi, [ebp+8]
0x4740A0: test    esi, esi
0x4740A2: mov     [esp+2Ch+var_18], esi
0x4740A6: jz      short loc_4740B2
0x4740A8: lea     eax, [esi+4]
0x4740AB: push    eax; lpAddend
0x4740AC: call    dword ptr ds:0A28078h
0x4740B2: test    esi, esi
0x4740B4: mov     [esp+2Ch+var_4], 0
0x4740BC: jz      short loc_47411D
0x4740BE: mov     ecx, esi
0x4740C0: call    TESAnimGroup_GetAnimationGroup
0x4740C5: mov     ecx, esi
0x4740C7: mov     [esp+2Ch+arg_0], eax
0x4740CB: call    TESActorBaseData_GetMagicka
0x4740D0: cmp     [esp+2Ch+arg_0], 0FFh
0x4740D8: movzx   edi, ax
0x4740DB: mov     [esp+2Ch+var_10], edi
0x4740DF: jnz     short loc_474124
0x4740E1: mov     eax, [ebp+4]
0x4740E4: test    eax, eax
0x4740E6: jz      short loc_4740FD
0x4740E8: mov     ecx, [ebp+0]
0x4740EB: mov     eax, [eax+8]
0x4740EE: push    ecx
0x4740EF: push    eax; ArgList
0x4740F0: push    offset aAnimationSeque; "Animation sequence '%s' not found in TE"...
0x4740F5: call    PrintError
0x4740FA: add     esp, 0Ch
0x4740FD: lea     ecx, [esi+4]
0x474100: push    ecx; lpAddend
0x474101: mov     [esp+30h+var_4], 0FFFFFFFFh
0x474109: call    dword ptr ds:0A2807Ch
0x47410F: test    eax, eax
0x474111: jnz     short loc_47411D
0x474113: mov     edx, [esi]
0x474115: mov     eax, [edx]
0x474117: push    1
0x474119: mov     ecx, esi
0x47411B: call    eax
0x47411D: xor     al, al
0x47411F: jmp     loc_4744EF
0x474124: lea     ecx, [esp+2Ch+var_14]
0x474128: push    ecx
0x474129: mov     ecx, [ebx+9Ch]
0x47412F: xor     esi, esi
0x474131: push    edi
0x474132: mov     [esp+34h+var_14], esi
0x474136: call    sub_470960
0x47413B: test    al, al
0x47413D: jnz     short loc_47417A
0x47413F: push    8; Size
0x474141: call    FormHeapAlloc
0x474146: add     esp, 4
0x474149: cmp     eax, esi
0x47414B: jz      short loc_474167
0x47414D: mov     [eax+4], esi
0x474150: push    eax
0x474151: mov     dword ptr [eax], offset ??_7AnimSequenceSingle@@6B@; const AnimSequenceSingle::`vftable'
0x474157: mov     ecx, [ebx+9Ch]
0x47415D: push    edi
0x47415E: mov     esi, eax
0x474160: call    sub_470820
0x474165: jmp     short loc_47417E
0x474167: mov     ecx, [ebx+9Ch]
0x47416D: xor     eax, eax
0x47416F: push    eax
0x474170: push    edi
0x474171: mov     esi, eax
0x474173: call    sub_470820
0x474178: jmp     short loc_47417E
0x47417A: mov     esi, [esp+2Ch+var_14]
0x47417E: mov     edx, [esi]
0x474180: mov     eax, [edx+0Ch]
0x474183: mov     ecx, esi
0x474185: call    eax
0x474187: test    al, al
0x474189: jz      loc_474315
0x47418F: mov     edx, [esi]
0x474191: mov     eax, [edx+10h]
0x474194: push    0FFFFFFFFh
0x474196: mov     ecx, esi
0x474198: call    eax
0x47419A: test    eax, eax
0x47419C: jz      loc_474315
0x4741A2: mov     eax, [esp+2Ch+arg_0]
0x4741A6: lea     ecx, [eax+eax*8]
0x4741A9: cmp     byte ptr ds:0B102E4h[ecx*4], 0
0x4741B1: jz      short loc_4741FB
0x4741B3: mov     ecx, [ebx+9Ch]
0x4741B9: push    edi
0x4741BA: call    sub_4708B0
0x4741BF: push    8; Size
0x4741C1: call    FormHeapAlloc
0x4741C6: add     esp, 4
0x4741C9: mov     [esp+2Ch+var_14], eax
0x4741CD: test    eax, eax
0x4741CF: mov     byte ptr [esp+2Ch+var_4], 1
0x4741D4: jz      short loc_4741E0
0x4741D6: push    esi
0x4741D7: mov     ecx, eax; this
0x4741D9: call    ??0AnimSequenceMultiple@@QAE@XZ; AnimSequenceMultiple::AnimSequenceMultiple(void)
0x4741DE: jmp     short loc_4741E2
0x4741E0: xor     eax, eax
0x4741E2: mov     ecx, [ebx+9Ch]
0x4741E8: push    eax
0x4741E9: push    edi
0x4741EA: mov     byte ptr [esp+34h+var_4], 0
0x4741EF: mov     esi, eax
0x4741F1: call    sub_470820
0x4741F6: jmp     loc_474315
0x4741FB: mov     edx, [esi]
0x4741FD: mov     eax, [edx+10h]
0x474200: push    0FFFFFFFFh
0x474202: mov     ecx, esi
0x474204: call    eax
0x474206: mov     eax, [eax+68h]
0x474209: mov     ecx, [ebp+8]
0x47420C: cmp     eax, ecx
0x47420E: jnz     short loc_47423A
0x474210: call    TESAnimGroup_GetAnimationGroup
0x474215: cmp     eax, 1
0x474218: jnz     short loc_474224
0x47421A: add     ebp, 0Ch
0x47421D: push    ebp; lpAddend
0x47421E: call    dword ptr ds:0A2807Ch
0x474224: lea     ecx, [esp+2Ch+var_18]; this
0x474228: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x474230: call    sub_7016A0
0x474235: jmp     loc_4744ED
0x47423A: mov     edx, [esi]
0x47423C: mov     eax, [edx+10h]
0x47423F: push    0FFFFFFFFh
0x474241: mov     ecx, esi
0x474243: call    eax
0x474245: mov     ecx, [eax+68h]
0x474248: call    TESAnimGroup_GetAnimationGroup
0x47424D: cmp     eax, 1
0x474250: jnz     short loc_47426E
0x474252: mov     edx, [esi]
0x474254: mov     eax, [edx+10h]
0x474257: push    0FFFFFFFFh
0x474259: mov     ecx, esi
0x47425B: call    eax
0x47425D: mov     eax, [eax+8]
0x474260: mov     ecx, ds:0B33A1Ch
0x474266: push    1
0x474268: push    eax
0x474269: call    sub_438540
0x47426E: mov     eax, [ebx+0D4h]
0x474274: test    eax, eax
0x474276: jz      short loc_47428A
0x474278: mov     edx, [esi]
0x47427A: mov     edi, [eax+10h]
0x47427D: mov     eax, [edx+10h]
0x474280: push    0FFFFFFFFh
0x474282: mov     ecx, esi
0x474284: call    eax
0x474286: cmp     edi, eax
0x474288: jz      short loc_4742CD
0x47428A: mov     eax, [ebx+0D8h]
0x474290: test    eax, eax
0x474292: jz      short loc_4742A6
0x474294: mov     edx, [esi]
0x474296: mov     edi, [eax+10h]
0x474299: mov     eax, [edx+10h]
0x47429C: push    0FFFFFFFFh
0x47429E: mov     ecx, esi
0x4742A0: call    eax
0x4742A2: cmp     edi, eax
0x4742A4: jz      short loc_4742CD
0x4742A6: mov     edx, [esi]
0x4742A8: mov     eax, [edx+10h]
0x4742AB: mov     edi, [ebx+98h]
0x4742B1: push    0FFFFFFFFh
0x4742B3: mov     ecx, esi
0x4742B5: call    eax
0x4742B7: push    eax
0x4742B8: lea     ecx, [esp+30h+var_14]
0x4742BC: push    ecx
0x4742BD: mov     ecx, edi
0x4742BF: call    sub_6C4A10
0x4742C4: lea     ecx, [esp+2Ch+var_14]; this
0x4742C8: call    sub_7016A0
0x4742CD: mov     edx, [esi]
0x4742CF: mov     eax, [edx+10h]
0x4742D2: push    0FFFFFFFFh
0x4742D4: mov     ecx, esi
0x4742D6: call    eax
0x4742D8: test    eax, eax
0x4742DA: jz      short loc_47430A
0x4742DC: lea     edx, [ebx+3Ch]
0x4742DF: lea     ecx, [ebx+0A0h]
0x4742E5: mov     edi, 5
0x4742EA: lea     ebx, [ebx+0]
0x4742F0: cmp     [ecx], eax
0x4742F2: jnz     short loc_4742FF
0x4742F4: mov     dword ptr [ecx], 0
0x4742FA: mov     word ptr [edx], 0
0x4742FF: add     ecx, 4
0x474302: add     edx, 2
0x474305: sub     edi, 1
0x474308: jnz     short loc_4742F0
0x47430A: mov     edx, [esi]
0x47430C: mov     eax, [edx+4]
0x47430F: push    0
0x474311: mov     ecx, esi
0x474313: call    eax
0x474315: cmp     [esp+2Ch+ArgList], 0
0x47431A: jz      short loc_474352
0x47431C: mov     edi, [esp+2Ch+arg_0]
0x474320: test    edi, edi
0x474322: jz      short loc_474352
0x474324: push    0
0x474326: push    40Ch
0x47432B: call    sub_5790E0
0x474330: add     esp, 8
0x474333: test    al, al
0x474335: jz      short loc_47433C
0x474337: cmp     edi, 21h ; '!'
0x47433A: jz      short loc_474352
0x47433C: cmp     edi, 20h ; ' '
0x47433F: jz      short loc_474352
0x474341: push    ebp
0x474342: lea     ecx, [ebx+0B4h]
0x474348: call    BSSimpleList_PushBack
0x47434D: jmp     loc_4744C9
0x474352: mov     edi, [ebp+4]
0x474355: push    6Ch ; 'l'; Size
0x474357: call    FormHeapAlloc
0x47435C: add     esp, 4
0x47435F: mov     dword ptr [esp+2Ch+ArgList], eax
0x474363: test    eax, eax
0x474365: mov     byte ptr [esp+2Ch+var_4], 2
0x47436A: jz      short loc_47437C
0x47436C: mov     ecx, [ebp+8]
0x47436F: push    edi
0x474370: push    ecx
0x474371: mov     ecx, eax; this
0x474373: call    ??0BSAnimGroupSequence@@QAE@XZ; BSAnimGroupSequence::BSAnimGroupSequence(void)
0x474378: mov     edi, eax
0x47437A: jmp     short loc_47437E
0x47437C: xor     edi, edi
0x47437E: mov     edx, [esi]
0x474380: mov     eax, [edx+4]
0x474383: push    edi
0x474384: mov     ecx, esi
0x474386: mov     byte ptr [esp+30h+var_4], 0
0x47438B: call    eax
0x47438D: mov     ecx, [ebx+98h]
0x474393: push    1
0x474395: push    0
0x474397: push    edi
0x474398: call    sub_6C5760
0x47439D: test    al, al
0x47439F: jnz     loc_4744AA
0x4743A5: mov     ecx, [ebx+4]
0x4743A8: mov     eax, [ecx+8]
0x4743AB: mov     ecx, [edi+8]
0x4743AE: push    eax
0x4743AF: push    ecx; ArgList
0x4743B0: push    offset aUnableToAddSTo; "Unable to add '%s' to keyframe manager "...
0x4743B5: call    PrintError
0x4743BA: xor     ebp, ebp
0x4743BC: add     esp, 0Ch
0x4743BF: mov     byte ptr ds:0B06B18h, 1
0x4743C6: cmp     [edi+0Ch], ebp
0x4743C9: jbe     short loc_474417
0x4743CB: jmp     short loc_4743D0
0x4743CD: align 10h
0x4743D0: lea     edx, [esp+2Ch+ArgList]
0x4743D4: push    edx
0x4743D5: push    ebp
0x4743D6: mov     ecx, edi
0x4743D8: call    sub_6C66B0
0x4743DD: mov     ecx, [ebx+4]
0x4743E0: mov     eax, [ecx]
0x4743E2: mov     edx, dword ptr [esp+2Ch+ArgList]
0x4743E6: mov     eax, [eax+58h]
0x4743E9: push    edx
0x4743EA: call    eax
0x4743EC: test    eax, eax
0x4743EE: jnz     short loc_474402
0x4743F0: mov     ecx, dword ptr [esp+2Ch+ArgList]
0x4743F4: push    ecx; ArgList
0x4743F5: push    offset aObjectSInSeque; "Object '%s' in sequence but not skeleto"...
0x4743FA: call    PrintError
0x4743FF: add     esp, 8
0x474402: mov     edx, dword ptr [esp+2Ch+ArgList]
0x474406: push    edx
0x474407: call    FormHeapFree
0x47440C: add     ebp, 1
0x47440F: add     esp, 4
0x474412: cmp     ebp, [edi+0Ch]
0x474415: jb      short loc_4743D0
0x474417: push    edi
0x474418: lea     eax, [esp+30h+ArgList]
0x47441C: mov     byte ptr ds:0B06B18h, 0
0x474423: mov     ecx, [ebx+98h]
0x474429: push    eax
0x47442A: call    sub_6C4A10
0x47442F: mov     eax, dword ptr [esp+2Ch+ArgList]
0x474433: test    eax, eax
0x474435: jz      short loc_474456
0x474437: mov     ebp, eax
0x474439: add     eax, 4
0x47443C: push    eax; lpAddend
0x47443D: call    dword ptr ds:0A2807Ch
0x474443: test    eax, eax
0x474445: jnz     short loc_474456
0x474447: test    ebp, ebp
0x474449: jz      short loc_474456
0x47444B: mov     edx, [ebp+0]
0x47444E: mov     eax, [edx]
0x474450: push    1
0x474452: mov     ecx, ebp
0x474454: call    eax
0x474456: mov     edx, [esi]
0x474458: mov     eax, [edx+8]
0x47445B: push    edi
0x47445C: mov     ecx, esi
0x47445E: call    eax
0x474460: test    al, al
0x474462: jz      short loc_47447E
0x474464: mov     ecx, [esp+2Ch+var_10]
0x474468: push    ecx
0x474469: mov     ecx, [ebx+9Ch]
0x47446F: call    sub_4708B0
0x474474: mov     edx, [esi]
0x474476: mov     eax, [edx]
0x474478: push    1
0x47447A: mov     ecx, esi
0x47447C: call    eax
0x47447E: mov     esi, [esp+2Ch+var_18]
0x474482: lea     ecx, [esi+4]
0x474485: push    ecx; lpAddend
0x474486: mov     [esp+30h+var_4], 0FFFFFFFFh
0x47448E: call    dword ptr ds:0A2807Ch
0x474494: test    eax, eax
0x474496: jnz     loc_47411D
0x47449C: mov     edx, [esi]
0x47449E: mov     eax, [edx]
0x4744A0: push    1
0x4744A2: mov     ecx, esi
0x4744A4: call    eax
0x4744A6: xor     al, al
0x4744A8: jmp     short loc_4744EF
0x4744AA: cmp     dword ptr [ebx+8], 0
0x4744AE: jnz     short loc_4744BE
0x4744B0: mov     ecx, [ebx+98h]
0x4744B6: call    sub_471600
0x4744BB: mov     [ebx+8], eax
0x4744BE: mov     eax, [ebp+8]
0x4744C1: push    eax
0x4744C2: mov     ecx, ebx
0x4744C4: call    sub_472640
0x4744C9: mov     esi, [esp+2Ch+var_18]
0x4744CD: lea     ecx, [esi+4]
0x4744D0: push    ecx; lpAddend
0x4744D1: mov     [esp+30h+var_4], 0FFFFFFFFh
0x4744D9: call    dword ptr ds:0A2807Ch
0x4744DF: test    eax, eax
0x4744E1: jnz     short loc_4744ED
0x4744E3: mov     edx, [esi]
0x4744E5: mov     eax, [edx]
0x4744E7: push    1
0x4744E9: mov     ecx, esi
0x4744EB: call    eax
0x4744ED: mov     al, 1
0x4744EF: mov     ecx, [esp+2Ch+var_C]
0x4744F3: mov     large fs:0, ecx
0x4744FA: pop     ecx
0x4744FB: pop     edi
0x4744FC: pop     esi
0x4744FD: pop     ebp
0x4744FE: pop     ebx
0x4744FF: add     esp, 18h
0x474502: retn    8
