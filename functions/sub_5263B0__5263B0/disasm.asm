0x5263B0: push    0FFFFFFFFh
0x5263B2: push    offset SEH_5263B0
0x5263B7: mov     eax, large fs:0
0x5263BD: push    eax
0x5263BE: sub     esp, 1Ch
0x5263C1: push    ebx
0x5263C2: push    ebp
0x5263C3: push    esi
0x5263C4: push    edi
0x5263C5: mov     eax, ds:0B30AACh
0x5263CA: xor     eax, esp
0x5263CC: push    eax
0x5263CD: lea     eax, [esp+3Ch+var_C]
0x5263D1: mov     large fs:0, eax
0x5263D7: mov     esi, ecx
0x5263D9: mov     [esp+3Ch+var_20], esi
0x5263DD: xor     ebp, ebp
0x5263DF: xor     ebx, ebx
0x5263E1: mov     [esp+3Ch+var_28], ebp
0x5263E5: xor     edi, edi
0x5263E7: mov     [esp+3Ch+var_4], ebx
0x5263EB: mov     [esp+3Ch+var_24], edi
0x5263EF: mov     eax, [esi+1D4h]
0x5263F5: cmp     eax, ebx
0x5263F7: mov     byte ptr [esp+3Ch+var_4], 1
0x5263FC: jz      loc_526866
0x526402: movzx   eax, word ptr [eax+0B6h]
0x526409: cmp     eax, ebx
0x52640B: mov     [esp+3Ch+var_1C], eax
0x52640F: jbe     loc_52681C
0x526415: jmp     short loc_526424
0x526417: jmp     short loc_526420
0x526419: align 10h
0x526420: mov     esi, [esp+3Ch+var_20]
0x526424: mov     eax, [esi+1D4h]
0x52642A: movzx   ecx, word ptr [eax+0B6h]
0x526431: cmp     ecx, ebx
0x526433: ja      short loc_526439
0x526435: xor     ebp, ebp
0x526437: jmp     short loc_526442
0x526439: mov     edx, [eax+0B0h]
0x52643F: mov     ebp, [edx+ebx*4]
0x526442: mov     esi, [ebp+8]
0x526445: mov     edi, offset aFacegeneyeleft; "FaceGenEyeLeft"
0x52644A: mov     ecx, 0Fh
0x52644F: xor     eax, eax
0x526451: repe cmpsb
0x526453: jnz     short loc_526499
0x526455: mov     edx, [ebp+0]
0x526458: mov     eax, [edx+10h]
0x52645B: mov     ecx, ebp
0x52645D: call    eax
0x52645F: mov     esi, eax
0x526461: mov     eax, [esp+3Ch+var_28]
0x526465: cmp     eax, esi
0x526467: jz      short loc_526499
0x526469: test    eax, eax
0x52646B: jz      short loc_526487
0x52646D: add     eax, 4
0x526470: push    eax; lpAddend
0x526471: call    dword ptr ds:0A2807Ch
0x526477: test    eax, eax
0x526479: jnz     short loc_526487
0x52647B: mov     ecx, [esp+3Ch+var_28]
0x52647F: mov     edx, [ecx]
0x526481: mov     eax, [edx]
0x526483: push    1
0x526485: call    eax
0x526487: test    esi, esi
0x526489: mov     [esp+3Ch+var_28], esi
0x52648D: jz      short loc_526499
0x52648F: add     esi, 4
0x526492: push    esi; lpAddend
0x526493: call    dword ptr ds:0A28078h
0x526499: mov     esi, [ebp+8]
0x52649C: mov     edi, offset aFacegeneyerigh; "FaceGenEyeRight"
0x5264A1: mov     ecx, 10h
0x5264A6: xor     edx, edx
0x5264A8: repe cmpsb
0x5264AA: jnz     short loc_5264EE
0x5264AC: mov     eax, [ebp+0]
0x5264AF: mov     edx, [eax+10h]
0x5264B2: mov     ecx, ebp
0x5264B4: call    edx
0x5264B6: mov     edi, [esp+3Ch+var_24]
0x5264BA: mov     esi, eax
0x5264BC: cmp     edi, esi
0x5264BE: jz      short loc_5264EE
0x5264C0: test    edi, edi
0x5264C2: jz      short loc_5264DC
0x5264C4: lea     eax, [edi+4]
0x5264C7: push    eax; lpAddend
0x5264C8: call    dword ptr ds:0A2807Ch
0x5264CE: test    eax, eax
0x5264D0: jnz     short loc_5264DC
0x5264D2: mov     edx, [edi]
0x5264D4: mov     eax, [edx]
0x5264D6: push    1
0x5264D8: mov     ecx, edi
0x5264DA: call    eax
0x5264DC: test    esi, esi
0x5264DE: mov     [esp+3Ch+var_24], esi
0x5264E2: jz      short loc_5264EE
0x5264E4: add     esi, 4
0x5264E7: push    esi; lpAddend
0x5264E8: call    dword ptr ds:0A28078h
0x5264EE: add     ebx, 1
0x5264F1: cmp     ebx, [esp+3Ch+var_1C]
0x5264F5: jb      loc_526420
0x5264FB: cmp     [esp+3Ch+var_28], 0
0x526500: jz      loc_526810
0x526506: cmp     [esp+3Ch+var_24], 0
0x52650B: jz      loc_526810
0x526511: xor     ebp, ebp
0x526513: mov     dword ptr [esp+3Ch+ArgList], ebp
0x526517: mov     [esp+3Ch+var_10], bp
0x52651C: mov     [esp+3Ch+var_E], bp
0x526521: mov     eax, [esp+3Ch+arg_0]
0x526525: cmp     eax, ebp
0x526527: mov     byte ptr [esp+3Ch+var_4], 2
0x52652C: jz      short loc_52654F
0x52652E: mov     eax, [eax+28h]
0x526531: cmp     eax, ebp
0x526533: jnz     short loc_52653A
0x526535: mov     eax, offset EmptyString
0x52653A: push    eax; ArgList
0x52653B: lea     ecx, [esp+40h+ArgList]
0x52653F: push    offset aDataTextures_0; "Data\\Textures\\%s"
0x526544: push    ecx; int
0x526545: call    BSStringT_Static_Format
0x52654A: add     esp, 0Ch
0x52654D: jmp     short loc_526561
0x52654F: lea     edx, [esp+3Ch+ArgList]
0x526553: push    offset aDataTexturesCh; "Data\\Textures\\Characters\\Eyes\\EyeDe"...
0x526558: push    edx; int
0x526559: call    BSStringT_Static_Format
0x52655E: add     esp, 8
0x526561: mov     eax, dword ptr [esp+3Ch+ArgList]
0x526565: push    ebp; char
0x526566: push    ebp; char
0x526567: push    eax; ArgList
0x526568: lea     ecx, [esp+48h+arg_0]
0x52656C: push    ecx; int
0x52656D: mov     ecx, ds:0B333A0h
0x526573: call    sub_442890
0x526578: mov     eax, [esp+3Ch+arg_0]
0x52657C: cmp     eax, ebp
0x52657E: mov     byte ptr [esp+3Ch+var_4], 3
0x526583: jz      loc_5267D7
0x526589: mov     ebx, [esp+3Ch+var_28]
0x52658D: lea     edx, [esp+3Ch+var_1C]
0x526591: push    edx
0x526592: mov     ecx, ebx
0x526594: call    sub_405760
0x526599: mov     edi, [eax]
0x52659B: mov     eax, [esp+3Ch+var_1C]
0x52659F: cmp     eax, ebp
0x5265A1: jz      short loc_5265C1
0x5265A3: mov     esi, eax
0x5265A5: add     eax, 4
0x5265A8: push    eax; lpAddend
0x5265A9: call    dword ptr ds:0A2807Ch
0x5265AF: test    eax, eax
0x5265B1: jnz     short loc_5265C1
0x5265B3: cmp     esi, ebp
0x5265B5: jz      short loc_5265C1
0x5265B7: mov     eax, [esi]
0x5265B9: mov     edx, [eax]
0x5265BB: push    1
0x5265BD: mov     ecx, esi
0x5265BF: call    edx
0x5265C1: mov     ecx, [esp+3Ch+var_24]
0x5265C5: lea     eax, [esp+3Ch+var_18]
0x5265C9: push    eax
0x5265CA: call    sub_405760
0x5265CF: mov     ebp, [eax]
0x5265D1: mov     eax, [esp+3Ch+var_18]
0x5265D5: test    eax, eax
0x5265D7: jz      short loc_5265F7
0x5265D9: mov     esi, eax
0x5265DB: add     eax, 4
0x5265DE: push    eax; lpAddend
0x5265DF: call    dword ptr ds:0A2807Ch
0x5265E5: test    eax, eax
0x5265E7: jnz     short loc_5265F7
0x5265E9: test    esi, esi
0x5265EB: jz      short loc_5265F7
0x5265ED: mov     edx, [esi]
0x5265EF: mov     eax, [edx]
0x5265F1: push    1
0x5265F3: mov     ecx, esi
0x5265F5: call    eax
0x5265F7: test    edi, edi
0x5265F9: jz      loc_5266F4
0x5265FF: test    ebp, ebp
0x526601: jz      loc_5266F4
0x526607: mov     esi, [edi+18h]
0x52660A: test    esi, esi
0x52660C: jz      short loc_526648
0x52660E: mov     edx, [esi]
0x526610: mov     eax, [edx+54h]
0x526613: mov     ecx, esi
0x526615: call    eax
0x526617: cmp     eax, 5
0x52661A: jl      short loc_526625
0x52661C: mov     edx, [esi]
0x52661E: mov     eax, [edx+54h]
0x526621: mov     ecx, esi
0x526623: call    eax
0x526625: mov     edx, [esi]
0x526627: mov     eax, [edx+54h]
0x52662A: mov     ecx, esi
0x52662C: call    eax
0x52662E: cmp     eax, 5
0x526631: jl      short loc_526648
0x526633: mov     edx, [esi]
0x526635: mov     eax, [edx+54h]
0x526638: mov     ecx, esi
0x52663A: call    eax
0x52663C: cmp     eax, 0Ah
0x52663F: jg      short loc_526648
0x526641: mov     eax, 1
0x526646: jmp     short loc_52664A
0x526648: xor     eax, eax
0x52664A: neg     eax
0x52664C: sbb     eax, eax
0x52664E: and     eax, esi
0x526650: mov     esi, [ebp+18h]
0x526653: test    esi, esi
0x526655: mov     edi, eax
0x526657: jz      short loc_52667C
0x526659: mov     edx, [esi]
0x52665B: mov     eax, [edx+54h]
0x52665E: mov     ecx, esi
0x526660: call    eax
0x526662: cmp     eax, 5
0x526665: jl      short loc_52667C
0x526667: mov     edx, [esi]
0x526669: mov     eax, [edx+54h]
0x52666C: mov     ecx, esi
0x52666E: call    eax
0x526670: cmp     eax, 0Ah
0x526673: jg      short loc_52667C
0x526675: mov     eax, 1
0x52667A: jmp     short loc_52667E
0x52667C: xor     eax, eax
0x52667E: neg     eax
0x526680: sbb     eax, eax
0x526682: and     eax, esi
0x526684: test    edi, edi
0x526686: mov     esi, eax
0x526688: jz      short loc_5266F4
0x52668A: test    esi, esi
0x52668C: jz      short loc_5266F4
0x52668E: mov     eax, [esp+3Ch+arg_0]
0x526692: mov     edx, [edi]
0x526694: mov     edx, [edx+80h]
0x52669A: push    eax
0x52669B: push    0
0x52669D: mov     ecx, edi
0x52669F: call    edx
0x5266A1: mov     ecx, [esp+3Ch+arg_0]
0x5266A5: mov     eax, [esi]
0x5266A7: mov     edx, [eax+80h]
0x5266AD: push    ecx
0x5266AE: push    0
0x5266B0: mov     ecx, esi
0x5266B2: call    edx
0x5266B4: lea     ecx, [esp+3Ch+arg_0]; this
0x5266B8: mov     byte ptr [esp+3Ch+var_4], 2
0x5266BD: call    sub_7016A0
0x5266C2: lea     ecx, [esp+3Ch+ArgList]; void *
0x5266C6: mov     byte ptr [esp+3Ch+var_4], 1
0x5266CB: call    BSStringT_Clear
0x5266D0: lea     ecx, [esp+3Ch+var_24]; this
0x5266D4: mov     byte ptr [esp+3Ch+var_4], 0
0x5266D9: call    sub_7016A0
0x5266DE: lea     ecx, [esp+3Ch+var_28]; this
0x5266E2: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x5266EA: call    sub_7016A0
0x5266EF: jmp     loc_5268AC
0x5266F4: push    30h ; '0'; Size
0x5266F6: call    FormHeapAlloc
0x5266FB: add     esp, 4
0x5266FE: mov     [esp+3Ch+var_18], eax
0x526702: test    eax, eax
0x526704: mov     byte ptr [esp+3Ch+var_4], 4
0x526709: jz      short loc_526716
0x52670B: mov     ecx, eax
0x52670D: call    NiTexturingProperty__NiTexturingProperty
0x526712: mov     esi, eax
0x526714: jmp     short loc_526718
0x526716: xor     esi, esi
0x526718: mov     eax, [esp+3Ch+arg_0]
0x52671C: push    eax
0x52671D: mov     ecx, esi
0x52671F: mov     byte ptr [esp+40h+var_4], 3
0x526724: call    NiTexturingProperty__SetUnk08
0x526729: push    3
0x52672B: mov     ecx, esi
0x52672D: call    sub_405870
0x526732: push    2; a2
0x526734: mov     ecx, esi; this
0x526736: call    sub_405900
0x52673B: push    6
0x52673D: mov     ecx, ebx
0x52673F: call    NiNode_GetNiPropertyByID
0x526744: test    eax, eax
0x526746: jz      short loc_52677C
0x526748: push    6
0x52674A: lea     ecx, [esp+40h+var_18]
0x52674E: push    ecx
0x52674F: mov     ecx, ebx
0x526751: call    sub_708560
0x526756: mov     eax, [esp+3Ch+var_18]
0x52675A: test    eax, eax
0x52675C: jz      short loc_52677C
0x52675E: mov     edi, eax
0x526760: add     eax, 4
0x526763: push    eax; lpAddend
0x526764: call    dword ptr ds:0A2807Ch
0x52676A: test    eax, eax
0x52676C: jnz     short loc_52677C
0x52676E: test    edi, edi
0x526770: jz      short loc_52677C
0x526772: mov     edx, [edi]
0x526774: mov     eax, [edx]
0x526776: push    1
0x526778: mov     ecx, edi
0x52677A: call    eax
0x52677C: push    esi; a2
0x52677D: mov     ecx, ebx; this
0x52677F: call    sub_405680
0x526784: mov     ebx, [esp+3Ch+var_24]
0x526788: push    6
0x52678A: mov     ecx, ebx
0x52678C: call    NiNode_GetNiPropertyByID
0x526791: test    eax, eax
0x526793: jz      short loc_5267C9
0x526795: push    6
0x526797: lea     ecx, [esp+40h+var_18]
0x52679B: push    ecx
0x52679C: mov     ecx, ebx
0x52679E: call    sub_708560
0x5267A3: mov     eax, [esp+3Ch+var_18]
0x5267A7: test    eax, eax
0x5267A9: jz      short loc_5267C9
0x5267AB: mov     edi, eax
0x5267AD: add     eax, 4
0x5267B0: push    eax; lpAddend
0x5267B1: call    dword ptr ds:0A2807Ch
0x5267B7: test    eax, eax
0x5267B9: jnz     short loc_5267C9
0x5267BB: test    edi, edi
0x5267BD: jz      short loc_5267C9
0x5267BF: mov     edx, [edi]
0x5267C1: mov     eax, [edx]
0x5267C3: push    1
0x5267C5: mov     ecx, edi
0x5267C7: call    eax
0x5267C9: push    esi; a2
0x5267CA: mov     ecx, ebx; this
0x5267CC: call    sub_405680
0x5267D1: mov     eax, [esp+3Ch+arg_0]
0x5267D5: xor     ebp, ebp
0x5267D7: cmp     eax, ebp
0x5267D9: mov     byte ptr [esp+3Ch+var_4], 2
0x5267DE: jz      short loc_5267FE
0x5267E0: mov     esi, eax
0x5267E2: add     eax, 4
0x5267E5: push    eax; lpAddend
0x5267E6: call    dword ptr ds:0A2807Ch
0x5267EC: test    eax, eax
0x5267EE: jnz     short loc_5267FE
0x5267F0: cmp     esi, ebp
0x5267F2: jz      short loc_5267FE
0x5267F4: mov     edx, [esi]
0x5267F6: mov     eax, [edx]
0x5267F8: push    1
0x5267FA: mov     ecx, esi
0x5267FC: call    eax
0x5267FE: mov     ecx, dword ptr [esp+3Ch+ArgList]
0x526802: push    ecx
0x526803: mov     byte ptr [esp+40h+var_4], 1
0x526808: call    FormHeapFree
0x52680D: add     esp, 4
0x526810: mov     edi, [esp+3Ch+var_24]
0x526814: mov     esi, [esp+3Ch+var_20]
0x526818: mov     ebp, [esp+3Ch+var_28]
0x52681C: mov     ecx, [esi+1D4h]
0x526822: mov     edx, [ecx]
0x526824: mov     eax, [edx+58h]
0x526827: push    offset aFacegeneyeleft; "FaceGenEyeLeft"
0x52682C: call    eax
0x52682E: test    eax, eax
0x526830: jz      short loc_526841
0x526832: push    1
0x526834: push    1
0x526836: push    1
0x526838: push    eax
0x526839: call    sub_7B8940
0x52683E: add     esp, 10h
0x526841: mov     ecx, [esi+1D4h]
0x526847: mov     edx, [ecx]
0x526849: mov     eax, [edx+58h]
0x52684C: push    offset aFacegeneyerigh; "FaceGenEyeRight"
0x526851: call    eax
0x526853: test    eax, eax
0x526855: jz      short loc_526866
0x526857: push    1
0x526859: push    1
0x52685B: push    1
0x52685D: push    eax
0x52685E: call    sub_7B8940
0x526863: add     esp, 10h
0x526866: test    edi, edi
0x526868: mov     byte ptr [esp+3Ch+var_4], 0
0x52686D: jz      short loc_526887
0x52686F: lea     ecx, [edi+4]
0x526872: push    ecx; lpAddend
0x526873: call    dword ptr ds:0A2807Ch
0x526879: test    eax, eax
0x52687B: jnz     short loc_526887
0x52687D: mov     edx, [edi]
0x52687F: mov     eax, [edx]
0x526881: push    1
0x526883: mov     ecx, edi
0x526885: call    eax
0x526887: test    ebp, ebp
0x526889: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x526891: jz      short loc_5268AC
0x526893: lea     ecx, [ebp+4]
0x526896: push    ecx; lpAddend
0x526897: call    dword ptr ds:0A2807Ch
0x52689D: test    eax, eax
0x52689F: jnz     short loc_5268AC
0x5268A1: mov     edx, [ebp+0]
0x5268A4: mov     eax, [edx]
0x5268A6: push    1
0x5268A8: mov     ecx, ebp
0x5268AA: call    eax
0x5268AC: mov     ecx, [esp+3Ch+var_C]
0x5268B0: mov     large fs:0, ecx
0x5268B7: pop     ecx
0x5268B8: pop     edi
0x5268B9: pop     esi
0x5268BA: pop     ebp
0x5268BB: pop     ebx
0x5268BC: add     esp, 28h
0x5268BF: retn    4
