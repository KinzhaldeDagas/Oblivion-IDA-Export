0x7205A0: push    0FFFFFFFFh
0x7205A2: push    offset SEH_7205A0
0x7205A7: mov     eax, large fs:0
0x7205AD: push    eax
0x7205AE: sub     esp, 1Ch
0x7205B1: push    ebx
0x7205B2: push    ebp
0x7205B3: push    esi
0x7205B4: push    edi
0x7205B5: mov     eax, ds:0B30AACh
0x7205BA: xor     eax, esp
0x7205BC: push    eax
0x7205BD: lea     eax, [esp+3Ch+var_C]
0x7205C1: mov     large fs:0, eax
0x7205C7: mov     ebp, ecx
0x7205C9: push    70h ; 'p'; Size
0x7205CB: call    FormHeapAlloc
0x7205D0: add     esp, 4
0x7205D3: mov     [esp+3Ch+var_28], eax
0x7205D7: mov     esi, [esp+3Ch+arg_0]
0x7205DB: xor     ebx, ebx
0x7205DD: cmp     eax, ebx
0x7205DF: mov     [esp+3Ch+var_4], ebx
0x7205E3: jz      short loc_720604
0x7205E5: mov     ecx, [esi+60h]
0x7205E8: mov     edx, [esi+58h]
0x7205EB: mov     edx, [edx]
0x7205ED: mov     edi, [esi+54h]
0x7205F0: mov     edi, [edi]
0x7205F2: push    6
0x7205F4: push    ecx
0x7205F5: lea     ecx, [esi+8]
0x7205F8: push    ecx
0x7205F9: push    edx
0x7205FA: push    edi
0x7205FB: mov     ecx, eax
0x7205FD: call    NiPixelData__NiPixelData
0x720602: mov     ebx, eax
0x720604: mov     edi, [ebp+3Ch]
0x720607: cmp     edi, ebx
0x720609: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x720611: jz      short loc_720644
0x720613: test    edi, edi
0x720615: jz      short loc_720633
0x720617: lea     edx, [edi+4]
0x72061A: push    edx; lpAddend
0x72061B: call    dword ptr ds:0A2807Ch
0x720621: test    eax, eax
0x720623: jnz     short loc_720633
0x720625: test    edi, edi
0x720627: jz      short loc_720633
0x720629: mov     eax, [edi]
0x72062B: mov     edx, [eax]
0x72062D: push    1
0x72062F: mov     ecx, edi
0x720631: call    edx
0x720633: test    ebx, ebx
0x720635: mov     [ebp+3Ch], ebx
0x720638: jz      short loc_720644
0x72063A: add     ebx, 4
0x72063D: push    ebx; lpAddend
0x72063E: call    dword ptr ds:0A28078h
0x720644: push    offset sub_7016A0; a5
0x720649: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x72064E: push    6; size
0x720650: push    4; a2
0x720652: lea     eax, [esp+4Ch+a1]
0x720656: push    eax; a1
0x720657: call    ArrayConstructor
0x72065C: mov     eax, [esp+3Ch+a1]
0x720660: cmp     eax, esi
0x720662: mov     ebx, ds:0A2807Ch
0x720668: mov     [esp+3Ch+var_4], 1
0x720670: jz      short loc_7206A2
0x720672: test    eax, eax
0x720674: jz      short loc_720690
0x720676: mov     edi, eax
0x720678: add     eax, 4
0x72067B: push    eax; lpAddend
0x72067C: call    ebx ; InterlockedDecrement
0x72067E: test    eax, eax
0x720680: jnz     short loc_720690
0x720682: test    edi, edi
0x720684: jz      short loc_720690
0x720686: mov     edx, [edi]
0x720688: mov     eax, [edx]
0x72068A: push    1
0x72068C: mov     ecx, edi
0x72068E: call    eax
0x720690: test    esi, esi
0x720692: mov     [esp+3Ch+a1], esi
0x720696: jz      short loc_7206A2
0x720698: add     esi, 4
0x72069B: push    esi; lpAddend
0x72069C: call    dword ptr ds:0A28078h
0x7206A2: mov     eax, [esp+3Ch+var_20]
0x7206A6: mov     edi, [esp+3Ch+arg_4]
0x7206AA: cmp     eax, edi
0x7206AC: jz      short loc_7206DE
0x7206AE: test    eax, eax
0x7206B0: jz      short loc_7206CC
0x7206B2: mov     esi, eax
0x7206B4: add     eax, 4
0x7206B7: push    eax; lpAddend
0x7206B8: call    ebx ; InterlockedDecrement
0x7206BA: test    eax, eax
0x7206BC: jnz     short loc_7206CC
0x7206BE: test    esi, esi
0x7206C0: jz      short loc_7206CC
0x7206C2: mov     edx, [esi]
0x7206C4: mov     eax, [edx]
0x7206C6: push    1
0x7206C8: mov     ecx, esi
0x7206CA: call    eax
0x7206CC: test    edi, edi
0x7206CE: mov     [esp+3Ch+var_20], edi
0x7206D2: jz      short loc_7206DE
0x7206D4: add     edi, 4
0x7206D7: push    edi; lpAddend
0x7206D8: call    dword ptr ds:0A28078h
0x7206DE: mov     eax, [esp+3Ch+var_1C]
0x7206E2: mov     edi, [esp+3Ch+arg_8]
0x7206E6: cmp     eax, edi
0x7206E8: jz      short loc_72071A
0x7206EA: test    eax, eax
0x7206EC: jz      short loc_720708
0x7206EE: mov     esi, eax
0x7206F0: add     eax, 4
0x7206F3: push    eax; lpAddend
0x7206F4: call    ebx ; InterlockedDecrement
0x7206F6: test    eax, eax
0x7206F8: jnz     short loc_720708
0x7206FA: test    esi, esi
0x7206FC: jz      short loc_720708
0x7206FE: mov     edx, [esi]
0x720700: mov     eax, [edx]
0x720702: push    1
0x720704: mov     ecx, esi
0x720706: call    eax
0x720708: test    edi, edi
0x72070A: mov     [esp+3Ch+var_1C], edi
0x72070E: jz      short loc_72071A
0x720710: add     edi, 4
0x720713: push    edi; lpAddend
0x720714: call    dword ptr ds:0A28078h
0x72071A: mov     eax, [esp+3Ch+var_18]
0x72071E: mov     edi, [esp+3Ch+arg_C]
0x720722: cmp     eax, edi
0x720724: jz      short loc_720756
0x720726: test    eax, eax
0x720728: jz      short loc_720744
0x72072A: mov     esi, eax
0x72072C: add     eax, 4
0x72072F: push    eax; lpAddend
0x720730: call    ebx ; InterlockedDecrement
0x720732: test    eax, eax
0x720734: jnz     short loc_720744
0x720736: test    esi, esi
0x720738: jz      short loc_720744
0x72073A: mov     edx, [esi]
0x72073C: mov     eax, [edx]
0x72073E: push    1
0x720740: mov     ecx, esi
0x720742: call    eax
0x720744: test    edi, edi
0x720746: mov     [esp+3Ch+var_18], edi
0x72074A: jz      short loc_720756
0x72074C: add     edi, 4
0x72074F: push    edi; lpAddend
0x720750: call    dword ptr ds:0A28078h
0x720756: mov     eax, [esp+3Ch+var_14]
0x72075A: mov     edi, [esp+3Ch+arg_10]
0x72075E: cmp     eax, edi
0x720760: jz      short loc_720792
0x720762: test    eax, eax
0x720764: jz      short loc_720780
0x720766: mov     esi, eax
0x720768: add     eax, 4
0x72076B: push    eax; lpAddend
0x72076C: call    ebx ; InterlockedDecrement
0x72076E: test    eax, eax
0x720770: jnz     short loc_720780
0x720772: test    esi, esi
0x720774: jz      short loc_720780
0x720776: mov     edx, [esi]
0x720778: mov     eax, [edx]
0x72077A: push    1
0x72077C: mov     ecx, esi
0x72077E: call    eax
0x720780: test    edi, edi
0x720782: mov     [esp+3Ch+var_14], edi
0x720786: jz      short loc_720792
0x720788: add     edi, 4
0x72078B: push    edi; lpAddend
0x72078C: call    dword ptr ds:0A28078h
0x720792: mov     eax, [esp+3Ch+var_10]
0x720796: mov     edi, [esp+3Ch+arg_14]
0x72079A: cmp     eax, edi
0x72079C: jz      short loc_7207CE
0x72079E: test    eax, eax
0x7207A0: jz      short loc_7207BC
0x7207A2: mov     esi, eax
0x7207A4: add     eax, 4
0x7207A7: push    eax; lpAddend
0x7207A8: call    ebx ; InterlockedDecrement
0x7207AA: test    eax, eax
0x7207AC: jnz     short loc_7207BC
0x7207AE: test    esi, esi
0x7207B0: jz      short loc_7207BC
0x7207B2: mov     edx, [esi]
0x7207B4: mov     eax, [edx]
0x7207B6: push    1
0x7207B8: mov     ecx, esi
0x7207BA: call    eax
0x7207BC: test    edi, edi
0x7207BE: mov     [esp+3Ch+var_10], edi
0x7207C2: jz      short loc_7207CE
0x7207C4: add     edi, 4
0x7207C7: push    edi; lpAddend
0x7207C8: call    dword ptr ds:0A28078h
0x7207CE: mov     [esp+3Ch+arg_0], 0
0x7207D6: lea     ebx, [esp+3Ch+a1]
0x7207DA: lea     ebx, [ebx+0]
0x7207E0: mov     ecx, [ebx]
0x7207E2: xor     esi, esi
0x7207E4: cmp     [ecx+60h], esi
0x7207E7: jbe     short loc_720830
0x7207E9: lea     esp, [esp+0]
0x7207F0: mov     edx, [ebp+3Ch]
0x7207F3: mov     edi, [edx+5Ch]
0x7207F6: mov     eax, [edx+60h]
0x7207F9: mov     eax, [edi+eax*4]
0x7207FC: imul    eax, [esp+3Ch+arg_0]
0x720801: add     eax, [edi+esi*4]
0x720804: add     eax, [edx+50h]
0x720807: mov     edx, [ecx+5Ch]
0x72080A: mov     edx, [edx+esi*4]
0x72080D: add     edx, [ecx+50h]
0x720810: mov     ecx, [ecx+5Ch]
0x720813: lea     edi, [ecx+esi*4]
0x720816: mov     ecx, [edi+4]
0x720819: sub     ecx, [edi]
0x72081B: push    ecx; Size
0x72081C: push    edx; Src
0x72081D: push    eax; Dst
0x72081E: call    _memcpy
0x720823: mov     ecx, [ebx]
0x720825: add     esi, 1
0x720828: add     esp, 0Ch
0x72082B: cmp     esi, [ecx+60h]
0x72082E: jb      short loc_7207F0
0x720830: mov     eax, [esp+3Ch+arg_0]
0x720834: add     eax, 1
0x720837: add     ebx, 4
0x72083A: cmp     eax, 6
0x72083D: mov     [esp+3Ch+arg_0], eax
0x720841: jb      short loc_7207E0
0x720843: push    offset sub_7016A0; void (__thiscall *)(void *)
0x720848: push    6; int
0x72084A: push    4; unsigned int
0x72084C: lea     edx, [esp+48h+a1]
0x720850: push    edx; void *
0x720851: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x720859: call    $LN21
0x72085E: mov     ecx, dword ptr [esp+3Ch+var_C]
0x720862: mov     large fs:0, ecx
0x720869: pop     ecx
0x72086A: pop     edi
0x72086B: pop     esi
0x72086C: pop     ebp
0x72086D: pop     ebx
0x72086E: add     esp, 28h
0x720871: retn    18h
