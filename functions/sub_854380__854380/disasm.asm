0x854380: push    0FFFFFFFFh
0x854382: push    offset SEH_854380
0x854387: mov     eax, large fs:0
0x85438D: push    eax
0x85438E: sub     esp, 1Ch
0x854391: push    ebx
0x854392: push    ebp
0x854393: push    esi
0x854394: push    edi
0x854395: mov     eax, ds:0B30AACh
0x85439A: xor     eax, esp
0x85439C: push    eax
0x85439D: lea     eax, [esp+3Ch+var_C]
0x8543A1: mov     large fs:0, eax
0x8543A7: mov     ebx, ecx
0x8543A9: mov     [esp+3Ch+var_1C], ebx
0x8543AD: mov     esi, [esp+3Ch+arg_0]
0x8543B1: push    4
0x8543B3: mov     ecx, esi
0x8543B5: mov     [esp+40h+var_20], 0
0x8543BD: call    NiNode_GetNiPropertyByID
0x8543C2: cmp     dword ptr ds:0B42F48h, 1
0x8543C9: mov     ecx, ds:0B2C674h
0x8543CF: mov     ebp, eax
0x8543D1: movzx   eax, word ptr [ebx+0CCh]
0x8543D8: setle   byte ptr [esp+3Ch+var_28+3]
0x8543DD: add     ecx, 0FFFFFFFFh
0x8543E0: cmp     eax, ecx
0x8543E2: mov     [esp+3Ch+var_14], ebp
0x8543E6: jnb     short loc_8543F0
0x8543E8: mov     edi, eax
0x8543EA: mov     [esp+3Ch+var_18], edi
0x8543EE: jmp     short loc_8543F6
0x8543F0: mov     edi, ecx
0x8543F2: mov     [esp+3Ch+var_18], ecx
0x8543F6: cmp     byte ptr ds:0B42E86h, 0
0x8543FD: mov     eax, [esp+3Ch+arg_8]
0x854401: jz      loc_854538
0x854407: cmp     byte ptr [esp+3Ch+arg_C], 1
0x85440C: mov     ebp, [esp+3Ch+arg_10]
0x854410: jnz     short loc_854460
0x854412: push    10h; Size
0x854414: call    FormHeapAlloc
0x854419: add     esp, 4
0x85441C: mov     [esp+3Ch+arg_14], eax
0x854420: test    eax, eax
0x854422: mov     [esp+3Ch+var_4], 0
0x85442A: jz      short loc_854443
0x85442C: movzx   ecx, byte ptr [ebp+0]
0x854430: push    0
0x854432: push    0
0x854434: push    ecx
0x854435: push    48h ; 'H'
0x854437: push    esi
0x854438: push    eax
0x854439: call    sub_7E2370
0x85443E: add     esp, 18h
0x854441: jmp     short loc_854445
0x854443: xor     eax, eax
0x854445: lea     edx, [esp+3Ch+var_24]
0x854449: push    edx
0x85444A: lea     ecx, [ebx+28h]
0x85444D: mov     [esp+40h+var_4], 0FFFFFFFFh
0x854455: mov     [esp+40h+var_24], eax
0x854459: call    sub_5B1E20
0x85445E: jmp     short loc_854464
0x854460: add     word ptr [eax], 1
0x854464: xor     ebx, ebx
0x854466: test    edi, edi
0x854468: mov     byte ptr [ebp+0], 0
0x85446C: jle     loc_854B51
0x854472: mov     ecx, [esp+3Ch+var_14]
0x854476: mov     edx, [ecx+0BCh]
0x85447C: movzx   eax, bx
0x85447F: cmp     dword ptr [edx+eax*4+4], 0
0x854484: jz      loc_854526
0x85448A: cmp     byte ptr [esp+3Ch+arg_C], 1
0x85448F: jnz     loc_85451E
0x854495: push    10h; Size
0x854497: call    FormHeapAlloc
0x85449C: add     esp, 4
0x85449F: mov     [esp+3Ch+arg_14], eax
0x8544A3: test    eax, eax
0x8544A5: mov     [esp+3Ch+var_4], 1
0x8544AD: jz      short loc_8544CF
0x8544AF: movzx   ecx, byte ptr [ebp+0]
0x8544B3: mov     edx, [esp+3Ch+arg_0]
0x8544B7: push    0
0x8544B9: push    0
0x8544BB: push    ecx
0x8544BC: push    16Eh
0x8544C1: push    edx
0x8544C2: push    eax
0x8544C3: call    sub_7E2370
0x8544C8: add     esp, 18h
0x8544CB: mov     edi, eax
0x8544CD: jmp     short loc_8544D1
0x8544CF: xor     edi, edi
0x8544D1: mov     esi, [esp+3Ch+var_1C]
0x8544D5: mov     al, bl
0x8544D7: add     al, 1
0x8544D9: mov     [edi+9], al
0x8544DC: mov     edx, [esi+28h]
0x8544DF: mov     eax, [edx+4]
0x8544E2: add     esi, 28h ; '('
0x8544E5: mov     ecx, esi
0x8544E7: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x8544EF: call    eax
0x8544F1: mov     [eax+8], edi
0x8544F4: mov     dword ptr [eax], 0
0x8544FA: mov     ecx, [esi+8]
0x8544FD: mov     [eax+4], ecx
0x854500: mov     ecx, [esi+8]
0x854503: test    ecx, ecx
0x854505: jz      short loc_854512
0x854507: mov     [ecx], eax
0x854509: add     dword ptr [esi+0Ch], 1
0x85450D: mov     [esi+8], eax
0x854510: jmp     short loc_854526
0x854512: add     dword ptr [esi+0Ch], 1
0x854516: mov     [esi+4], eax
0x854519: mov     [esi+8], eax
0x85451C: jmp     short loc_854526
0x85451E: mov     eax, [esp+3Ch+arg_8]
0x854522: add     word ptr [eax], 1
0x854526: add     ebx, 1
0x854529: cmp     ebx, [esp+3Ch+var_18]
0x85452D: jl      loc_854472
0x854533: jmp     loc_854B51
0x854538: or      edi, 0FFFFFFFFh
0x85453B: cmp     byte ptr [esp+3Ch+arg_14], 0
0x854540: jnz     short loc_8545B2
0x854542: cmp     byte ptr [esp+3Ch+arg_C], 1
0x854547: jnz     loc_854609
0x85454D: push    10h; Size
0x85454F: call    FormHeapAlloc
0x854554: add     esp, 4
0x854557: mov     [esp+3Ch+var_24], eax
0x85455B: test    eax, eax
0x85455D: mov     [esp+3Ch+var_4], 2
0x854565: jz      short loc_854599
0x854567: mov     edx, [esp+3Ch+arg_4]
0x85456B: mov     ecx, [esp+3Ch+arg_10]
0x85456F: push    edx
0x854570: movzx   edx, byte ptr [ecx]
0x854573: push    1
0x854575: push    edx
0x854576: push    48h ; 'H'
0x854578: push    esi
0x854579: push    eax
0x85457A: call    sub_7E2370
0x85457F: mov     [esp+54h+var_24], eax
0x854583: add     esp, 18h
0x854586: lea     eax, [esp+3Ch+var_24]
0x85458A: push    eax
0x85458B: lea     ecx, [ebx+28h]
0x85458E: mov     [esp+40h+var_4], edi
0x854592: call    sub_5B1E20
0x854597: jmp     short loc_85460D
0x854599: xor     eax, eax
0x85459B: mov     [esp+3Ch+var_24], eax
0x85459F: lea     eax, [esp+3Ch+var_24]
0x8545A3: push    eax
0x8545A4: lea     ecx, [ebx+28h]
0x8545A7: mov     [esp+40h+var_4], edi
0x8545AB: call    sub_5B1E20
0x8545B0: jmp     short loc_85460D
0x8545B2: cmp     byte ptr [esp+3Ch+arg_C], 1
0x8545B7: jnz     short loc_854609
0x8545B9: push    10h; Size
0x8545BB: call    FormHeapAlloc
0x8545C0: add     esp, 4
0x8545C3: mov     [esp+3Ch+var_24], eax
0x8545C7: test    eax, eax
0x8545C9: mov     [esp+3Ch+var_4], 3
0x8545D1: jz      short loc_8545F0
0x8545D3: mov     ecx, [esp+3Ch+arg_4]
0x8545D7: mov     edx, [esp+3Ch+arg_10]
0x8545DB: push    ecx
0x8545DC: movzx   ecx, byte ptr [edx]
0x8545DF: push    1
0x8545E1: push    ecx
0x8545E2: push    49h ; 'I'
0x8545E4: push    esi
0x8545E5: push    eax
0x8545E6: call    sub_7E2370
0x8545EB: add     esp, 18h
0x8545EE: jmp     short loc_8545F2
0x8545F0: xor     eax, eax
0x8545F2: lea     edx, [esp+3Ch+var_24]
0x8545F6: push    edx
0x8545F7: lea     ecx, [ebx+28h]
0x8545FA: mov     [esp+40h+var_24], eax
0x8545FE: mov     [esp+40h+var_4], edi
0x854602: call    sub_5B1E20
0x854607: jmp     short loc_85460D
0x854609: add     word ptr [eax], 1
0x85460D: mov     eax, [esp+3Ch+arg_10]
0x854611: mov     byte ptr [eax], 0
0x854614: mov     edx, [ebp+0]
0x854617: mov     eax, [edx+90h]
0x85461D: push    0
0x85461F: mov     ecx, ebp
0x854621: call    eax
0x854623: test    eax, eax
0x854625: jz      short loc_854686
0x854627: cmp     byte ptr [esp+3Ch+arg_C], 1
0x85462C: jnz     short loc_85467E
0x85462E: push    10h; Size
0x854630: call    FormHeapAlloc
0x854635: add     esp, 4
0x854638: mov     [esp+3Ch+var_24], eax
0x85463C: test    eax, eax
0x85463E: mov     [esp+3Ch+var_4], 4
0x854646: jz      short loc_854665
0x854648: mov     ecx, [esp+3Ch+arg_10]
0x85464C: movzx   edx, byte ptr [ecx]
0x85464F: push    0
0x854651: push    0
0x854653: push    edx
0x854654: push    16Dh
0x854659: push    esi
0x85465A: push    eax
0x85465B: call    sub_7E2370
0x854660: add     esp, 18h
0x854663: jmp     short loc_854667
0x854665: xor     eax, eax
0x854667: mov     [esp+3Ch+var_24], eax
0x85466B: lea     eax, [esp+3Ch+var_24]
0x85466F: push    eax
0x854670: lea     ecx, [ebx+28h]
0x854673: mov     [esp+40h+var_4], edi
0x854677: call    sub_5B1E20
0x85467C: jmp     short loc_854686
0x85467E: mov     eax, [esp+3Ch+arg_8]
0x854682: add     word ptr [eax], 1
0x854686: cmp     byte ptr [esp+3Ch+var_28+3], 0
0x85468B: jz      loc_8547DF
0x854691: mov     ecx, [esp+3Ch+var_1C]
0x854695: call    sub_7ED2A0
0x85469A: mov     edi, eax
0x85469C: test    edi, edi
0x85469E: jz      loc_8547DF
0x8546A4: mov     ebp, [esp+3Ch+var_1C]
0x8546A8: lea     ecx, [esp+3Ch+var_24]
0x8546AC: push    ecx
0x8546AD: mov     ecx, edi
0x8546AF: call    sub_405AD0
0x8546B4: mov     ecx, [eax]
0x8546B6: fld     dword ptr [ecx+0ECh]
0x8546BC: or      [esp+3Ch+var_20], 1
0x8546C1: fld     dword ptr ds:0B3FA90h
0x8546C7: fucompp
0x8546C9: fnstsw  ax
0x8546CB: test    ah, 44h
0x8546CE: jp      short loc_8546FA
0x8546D0: fld     dword ptr [ecx+0F0h]
0x8546D6: fld     dword ptr ds:0B3FA94h
0x8546DC: fucompp
0x8546DE: fnstsw  ax
0x8546E0: test    ah, 44h
0x8546E3: jp      short loc_8546FA
0x8546E5: fld     dword ptr [ecx+0F4h]
0x8546EB: fld     dword ptr ds:0B3FA98h
0x8546F1: fucompp
0x8546F3: fnstsw  ax
0x8546F5: test    ah, 44h
0x8546F8: jnp     short loc_8546FE
0x8546FA: mov     bl, 1
0x8546FC: jmp     short loc_854700
0x8546FE: xor     bl, bl
0x854700: test    byte ptr [esp+3Ch+var_20], 1
0x854705: jz      short loc_854733
0x854707: and     [esp+3Ch+var_20], 0FFFFFFFEh
0x85470C: cmp     [esp+3Ch+var_24], 0
0x854711: jz      short loc_854733
0x854713: mov     esi, [esp+3Ch+var_24]
0x854717: lea     edx, [esi+4]
0x85471A: push    edx; lpAddend
0x85471B: call    dword ptr ds:0A2807Ch
0x854721: test    eax, eax
0x854723: jnz     short loc_854733
0x854725: test    esi, esi
0x854727: jz      short loc_854733
0x854729: mov     eax, [esi]
0x85472B: mov     edx, [eax]
0x85472D: push    1
0x85472F: mov     ecx, esi
0x854731: call    edx
0x854733: test    bl, bl
0x854735: jz      loc_8547CE
0x85473B: cmp     byte ptr [esp+3Ch+arg_C], 1
0x854740: jnz     loc_8547C6
0x854746: push    10h; Size
0x854748: call    FormHeapAlloc
0x85474D: add     esp, 4
0x854750: mov     [esp+3Ch+var_10], eax
0x854754: test    eax, eax
0x854756: mov     [esp+3Ch+var_4], 5
0x85475E: jz      short loc_854782
0x854760: mov     ecx, [esp+3Ch+arg_10]
0x854764: movzx   edx, byte ptr [ecx]
0x854767: mov     ecx, [esp+3Ch+arg_0]
0x85476B: push    edi
0x85476C: push    1
0x85476E: push    edx
0x85476F: push    168h
0x854774: push    ecx
0x854775: push    eax
0x854776: call    sub_7E2370
0x85477B: add     esp, 18h
0x85477E: mov     edi, eax
0x854780: jmp     short loc_854784
0x854782: xor     edi, edi
0x854784: mov     edx, [ebp+28h]
0x854787: mov     eax, [edx+4]
0x85478A: lea     esi, [ebp+28h]
0x85478D: mov     ecx, esi
0x85478F: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x854797: call    eax
0x854799: mov     [eax+8], edi
0x85479C: mov     dword ptr [eax], 0
0x8547A2: mov     ecx, [esi+8]
0x8547A5: mov     [eax+4], ecx
0x8547A8: mov     ecx, [esi+8]
0x8547AB: test    ecx, ecx
0x8547AD: jz      short loc_8547BA
0x8547AF: mov     [ecx], eax
0x8547B1: add     dword ptr [esi+0Ch], 1
0x8547B5: mov     [esi+8], eax
0x8547B8: jmp     short loc_8547CE
0x8547BA: add     dword ptr [esi+0Ch], 1
0x8547BE: mov     [esi+4], eax
0x8547C1: mov     [esi+8], eax
0x8547C4: jmp     short loc_8547CE
0x8547C6: mov     eax, [esp+3Ch+arg_8]
0x8547CA: add     word ptr [eax], 1
0x8547CE: mov     ecx, ebp
0x8547D0: call    sub_7ED4B0
0x8547D5: mov     edi, eax
0x8547D7: test    edi, edi
0x8547D9: jnz     loc_8546A8
0x8547DF: xor     ebx, ebx
0x8547E1: cmp     [esp+3Ch+var_18], ebx
0x8547E5: jle     loc_8548F9
0x8547EB: mov     esi, [esp+3Ch+arg_0]
0x8547EF: mov     eax, [esp+3Ch+arg_8]
0x8547F3: mov     edi, [esp+3Ch+arg_10]
0x8547F7: mov     ebp, [esp+3Ch+arg_4]
0x8547FB: jmp     short loc_854800
0x8547FD: align 10h
0x854800: mov     ecx, [esp+3Ch+var_14]
0x854804: mov     ecx, [ecx+0BCh]
0x85480A: movzx   edx, bx
0x85480D: cmp     dword ptr [ecx+edx*4+4], 0
0x854812: jz      loc_8548EC
0x854818: cmp     byte ptr [esp+3Ch+arg_14], 0
0x85481D: jnz     short loc_854882
0x85481F: cmp     byte ptr [esp+3Ch+arg_C], 1
0x854824: jnz     loc_8548E8
0x85482A: push    10h; Size
0x85482C: call    FormHeapAlloc
0x854831: add     esp, 4
0x854834: mov     [esp+3Ch+arg_4], eax
0x854838: test    eax, eax
0x85483A: mov     [esp+3Ch+var_4], 6
0x854842: jz      short loc_85486D
0x854844: movzx   edx, byte ptr [edi]
0x854847: push    ebp
0x854848: push    1
0x85484A: push    edx
0x85484B: push    16Eh
0x854850: push    esi
0x854851: push    eax
0x854852: call    sub_7E2370
0x854857: add     esp, 18h
0x85485A: mov     cl, bl
0x85485C: add     cl, 1
0x85485F: lea     edx, [esp+3Ch+var_24]
0x854863: mov     [esp+3Ch+var_24], eax
0x854867: mov     [eax+9], cl
0x85486A: push    edx
0x85486B: jmp     short loc_8548CE
0x85486D: xor     eax, eax
0x85486F: mov     cl, bl
0x854871: add     cl, 1
0x854874: lea     edx, [esp+3Ch+var_24]
0x854878: mov     [esp+3Ch+var_24], eax
0x85487C: mov     [eax+9], cl
0x85487F: push    edx
0x854880: jmp     short loc_8548CE
0x854882: cmp     byte ptr [esp+3Ch+arg_C], 1
0x854887: jnz     short loc_8548E8
0x854889: push    10h; Size
0x85488B: call    FormHeapAlloc
0x854890: add     esp, 4
0x854893: mov     [esp+3Ch+arg_4], eax
0x854897: test    eax, eax
0x854899: mov     [esp+3Ch+var_4], 7
0x8548A1: jz      short loc_8548BB
0x8548A3: movzx   ecx, byte ptr [edi]
0x8548A6: push    ebp
0x8548A7: push    1
0x8548A9: push    ecx
0x8548AA: push    16Fh
0x8548AF: push    esi
0x8548B0: push    eax
0x8548B1: call    sub_7E2370
0x8548B6: add     esp, 18h
0x8548B9: jmp     short loc_8548BD
0x8548BB: xor     eax, eax
0x8548BD: mov     dl, bl
0x8548BF: add     dl, 1
0x8548C2: mov     [esp+3Ch+var_24], eax
0x8548C6: mov     [eax+9], dl
0x8548C9: lea     eax, [esp+3Ch+var_24]
0x8548CD: push    eax
0x8548CE: mov     ecx, [esp+40h+var_1C]
0x8548D2: add     ecx, 28h ; '('
0x8548D5: mov     [esp+40h+var_4], 0FFFFFFFFh
0x8548DD: call    sub_5B1E20
0x8548E2: mov     eax, [esp+3Ch+arg_8]
0x8548E6: jmp     short loc_8548EC
0x8548E8: add     word ptr [eax], 1
0x8548EC: add     ebx, 1
0x8548EF: cmp     ebx, [esp+3Ch+var_18]
0x8548F3: jl      loc_854800
0x8548F9: cmp     [esp+3Ch+var_18], 0
0x8548FE: mov     [esp+3Ch+arg_14], 0
0x854906: jle     loc_854B51
0x85490C: mov     ebp, [esp+3Ch+var_1C]
0x854910: movzx   ecx, word ptr [esp+3Ch+arg_14]
0x854915: mov     edx, [esp+3Ch+var_14]
0x854919: mov     eax, [edx+0BCh]
0x85491F: cmp     dword ptr [eax+ecx*4+4], 0
0x854924: jz      loc_854B3C
0x85492A: mov     ebx, [esp+3Ch+arg_14]
0x85492E: mov     ecx, edx
0x854930: mov     edx, [ecx]
0x854932: mov     edx, [edx+90h]
0x854938: lea     eax, [ebx+1]
0x85493B: push    eax
0x85493C: call    edx
0x85493E: test    eax, eax
0x854940: jz      loc_8549DF
0x854946: cmp     byte ptr [esp+3Ch+arg_C], 1
0x85494B: jnz     loc_8549D7
0x854951: push    10h; Size
0x854953: call    FormHeapAlloc
0x854958: add     esp, 4
0x85495B: mov     [esp+3Ch+var_10], eax
0x85495F: test    eax, eax
0x854961: mov     [esp+3Ch+var_4], 8
0x854969: jz      short loc_85498E
0x85496B: mov     ecx, [esp+3Ch+arg_10]
0x85496F: movzx   edx, byte ptr [ecx]
0x854972: mov     ecx, [esp+3Ch+arg_0]
0x854976: push    0
0x854978: push    0
0x85497A: push    edx
0x85497B: push    170h
0x854980: push    ecx
0x854981: push    eax
0x854982: call    sub_7E2370
0x854987: add     esp, 18h
0x85498A: mov     edi, eax
0x85498C: jmp     short loc_854990
0x85498E: xor     edi, edi
0x854990: add     bl, 1
0x854993: lea     esi, [ebp+28h]
0x854996: mov     [edi+9], bl
0x854999: mov     edx, [esi]
0x85499B: mov     eax, [edx+4]
0x85499E: mov     ecx, esi
0x8549A0: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x8549A8: call    eax
0x8549AA: mov     [eax+8], edi
0x8549AD: mov     dword ptr [eax], 0
0x8549B3: mov     ecx, [esi+8]
0x8549B6: mov     [eax+4], ecx
0x8549B9: mov     ecx, [esi+8]
0x8549BC: test    ecx, ecx
0x8549BE: jz      short loc_8549CB
0x8549C0: mov     [ecx], eax
0x8549C2: add     dword ptr [esi+0Ch], 1
0x8549C6: mov     [esi+8], eax
0x8549C9: jmp     short loc_8549DF
0x8549CB: add     dword ptr [esi+0Ch], 1
0x8549CF: mov     [esi+4], eax
0x8549D2: mov     [esi+8], eax
0x8549D5: jmp     short loc_8549DF
0x8549D7: mov     eax, [esp+3Ch+arg_8]
0x8549DB: add     word ptr [eax], 1
0x8549DF: cmp     byte ptr [esp+3Ch+var_28+3], 0
0x8549E4: jz      loc_854B3C
0x8549EA: mov     ecx, ebp
0x8549EC: call    sub_7ED2A0
0x8549F1: mov     edi, eax
0x8549F3: test    edi, edi
0x8549F5: jz      loc_854B3C
0x8549FB: lea     edx, [esp+3Ch+arg_4]
0x8549FF: push    edx
0x854A00: mov     ecx, edi
0x854A02: call    sub_405AD0
0x854A07: mov     ecx, [eax]
0x854A09: fld     dword ptr [ecx+0ECh]
0x854A0F: or      [esp+3Ch+var_20], 2
0x854A14: fld     dword ptr ds:0B3FA90h
0x854A1A: fucompp
0x854A1C: fnstsw  ax
0x854A1E: test    ah, 44h
0x854A21: jp      short loc_854A4D
0x854A23: fld     dword ptr [ecx+0F0h]
0x854A29: fld     dword ptr ds:0B3FA94h
0x854A2F: fucompp
0x854A31: fnstsw  ax
0x854A33: test    ah, 44h
0x854A36: jp      short loc_854A4D
0x854A38: fld     dword ptr [ecx+0F4h]
0x854A3E: fld     dword ptr ds:0B3FA98h
0x854A44: fucompp
0x854A46: fnstsw  ax
0x854A48: test    ah, 44h
0x854A4B: jnp     short loc_854A51
0x854A4D: mov     bl, 1
0x854A4F: jmp     short loc_854A53
0x854A51: xor     bl, bl
0x854A53: test    byte ptr [esp+3Ch+var_20], 2
0x854A58: jz      short loc_854A86
0x854A5A: and     [esp+3Ch+var_20], 0FFFFFFFDh
0x854A5F: cmp     [esp+3Ch+arg_4], 0
0x854A64: jz      short loc_854A86
0x854A66: mov     esi, [esp+3Ch+arg_4]
0x854A6A: lea     eax, [esi+4]
0x854A6D: push    eax; lpAddend
0x854A6E: call    dword ptr ds:0A2807Ch
0x854A74: test    eax, eax
0x854A76: jnz     short loc_854A86
0x854A78: test    esi, esi
0x854A7A: jz      short loc_854A86
0x854A7C: mov     edx, [esi]
0x854A7E: mov     eax, [edx]
0x854A80: push    1
0x854A82: mov     ecx, esi
0x854A84: call    eax
0x854A86: test    bl, bl
0x854A88: jz      loc_854B2B
0x854A8E: cmp     byte ptr [esp+3Ch+arg_C], 1
0x854A93: jnz     loc_854B23
0x854A99: push    10h; Size
0x854A9B: call    FormHeapAlloc
0x854AA0: add     esp, 4
0x854AA3: mov     [esp+3Ch+var_10], eax
0x854AA7: test    eax, eax
0x854AA9: mov     [esp+3Ch+var_4], 9
0x854AB1: jz      short loc_854AD5
0x854AB3: mov     ecx, [esp+3Ch+arg_10]
0x854AB7: movzx   edx, byte ptr [ecx]
0x854ABA: mov     ecx, [esp+3Ch+arg_0]
0x854ABE: push    edi
0x854ABF: push    1
0x854AC1: push    edx
0x854AC2: push    171h
0x854AC7: push    ecx
0x854AC8: push    eax
0x854AC9: call    sub_7E2370
0x854ACE: add     esp, 18h
0x854AD1: mov     edi, eax
0x854AD3: jmp     short loc_854AD7
0x854AD5: xor     edi, edi
0x854AD7: mov     dl, byte ptr [esp+3Ch+arg_14]
0x854ADB: add     dl, 1
0x854ADE: mov     [edi+9], dl
0x854AE1: mov     eax, [ebp+28h]
0x854AE4: mov     edx, [eax+4]
0x854AE7: lea     esi, [ebp+28h]
0x854AEA: mov     ecx, esi
0x854AEC: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x854AF4: call    edx
0x854AF6: mov     [eax+8], edi
0x854AF9: mov     dword ptr [eax], 0
0x854AFF: mov     ecx, [esi+8]
0x854B02: mov     [eax+4], ecx
0x854B05: mov     ecx, [esi+8]
0x854B08: test    ecx, ecx
0x854B0A: jz      short loc_854B17
0x854B0C: mov     [ecx], eax
0x854B0E: add     dword ptr [esi+0Ch], 1
0x854B12: mov     [esi+8], eax
0x854B15: jmp     short loc_854B2B
0x854B17: add     dword ptr [esi+0Ch], 1
0x854B1B: mov     [esi+4], eax
0x854B1E: mov     [esi+8], eax
0x854B21: jmp     short loc_854B2B
0x854B23: mov     eax, [esp+3Ch+arg_8]
0x854B27: add     word ptr [eax], 1
0x854B2B: mov     ecx, ebp
0x854B2D: call    sub_7ED4B0
0x854B32: mov     edi, eax
0x854B34: test    edi, edi
0x854B36: jnz     loc_8549FB
0x854B3C: mov     eax, [esp+3Ch+arg_14]
0x854B40: add     eax, 1
0x854B43: cmp     eax, [esp+3Ch+var_18]
0x854B47: mov     [esp+3Ch+arg_14], eax
0x854B4B: jl      loc_854910
0x854B51: mov     ecx, [esp+3Ch+var_C]
0x854B55: mov     large fs:0, ecx
0x854B5C: pop     ecx
0x854B5D: pop     edi
0x854B5E: pop     esi
0x854B5F: pop     ebp
0x854B60: pop     ebx
0x854B61: add     esp, 28h
0x854B64: retn    18h
