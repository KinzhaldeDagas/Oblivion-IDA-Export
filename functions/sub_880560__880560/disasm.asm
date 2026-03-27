0x880560: push    0FFFFFFFFh
0x880562: push    offset SEH_880560
0x880567: mov     eax, large fs:0
0x88056D: push    eax
0x88056E: push    ebx
0x88056F: push    ebp
0x880570: push    esi
0x880571: push    edi
0x880572: mov     eax, ds:0B30AACh
0x880577: xor     eax, esp
0x880579: push    eax
0x88057A: lea     eax, [esp+20h+var_C]
0x88057E: mov     large fs:0, eax
0x880584: mov     esi, ecx
0x880586: mov     ebx, [esp+20h+arg_8]
0x88058A: mov     eax, [ebx+10h]
0x88058D: mov     edi, ds:0B47730h
0x880593: push    eax
0x880594: call    sub_848C40
0x880599: mov     ebx, [ebx+0Ch]
0x88059C: push    ebx
0x88059D: mov     ecx, esi
0x88059F: call    sub_848E50
0x8805A4: mov     ecx, [esp+20h+arg_0]
0x8805A8: mov     eax, [esi]
0x8805AA: mov     edx, [eax+0BCh]
0x8805B0: push    0
0x8805B2: push    ebx
0x8805B3: push    ecx
0x8805B4: mov     ecx, esi
0x8805B6: call    edx
0x8805B8: mov     eax, [edi+24h]
0x8805BB: mov     ecx, [esp+20h+arg_C]
0x8805BF: mov     ebx, [eax]
0x8805C1: mov     edx, [ecx]
0x8805C3: mov     eax, [edx+88h]
0x8805C9: push    0
0x8805CB: mov     [esp+24h+arg_8], ebx
0x8805CF: call    eax
0x8805D1: mov     ebx, [ebx+4]
0x8805D4: mov     ebp, eax
0x8805D6: cmp     ebx, ebp
0x8805D8: jz      short loc_88060F
0x8805DA: test    ebx, ebx
0x8805DC: jz      short loc_8805FA
0x8805DE: lea     ecx, [ebx+4]
0x8805E1: push    ecx; lpAddend
0x8805E2: call    dword ptr ds:0A2807Ch
0x8805E8: test    eax, eax
0x8805EA: jnz     short loc_8805FA
0x8805EC: test    ebx, ebx
0x8805EE: jz      short loc_8805FA
0x8805F0: mov     edx, [ebx]
0x8805F2: mov     eax, [edx]
0x8805F4: push    1
0x8805F6: mov     ecx, ebx
0x8805F8: call    eax
0x8805FA: test    ebp, ebp
0x8805FC: mov     ecx, [esp+20h+arg_8]
0x880600: mov     [ecx+4], ebp
0x880603: jz      short loc_88060F
0x880605: add     ebp, 4
0x880608: push    ebp; lpAddend
0x880609: call    dword ptr ds:0A28078h
0x88060F: mov     edx, [edi+24h]
0x880612: mov     eax, [esp+20h+arg_C]
0x880616: mov     ebx, [edx+4]
0x880619: push    0
0x88061B: push    eax
0x88061C: mov     ecx, esi
0x88061E: mov     [esp+28h+arg_8], ebx
0x880622: call    sub_848FD0
0x880627: mov     ebx, [ebx+4]
0x88062A: mov     ebp, eax
0x88062C: cmp     ebx, ebp
0x88062E: jz      short loc_880665
0x880630: test    ebx, ebx
0x880632: jz      short loc_880650
0x880634: lea     ecx, [ebx+4]
0x880637: push    ecx; lpAddend
0x880638: call    dword ptr ds:0A2807Ch
0x88063E: test    eax, eax
0x880640: jnz     short loc_880650
0x880642: test    ebx, ebx
0x880644: jz      short loc_880650
0x880646: mov     edx, [ebx]
0x880648: mov     eax, [edx]
0x88064A: push    1
0x88064C: mov     ecx, ebx
0x88064E: call    eax
0x880650: test    ebp, ebp
0x880652: mov     ecx, [esp+20h+arg_8]
0x880656: mov     [ecx+4], ebp
0x880659: jz      short loc_880665
0x88065B: add     ebp, 4
0x88065E: push    ebp; lpAddend
0x88065F: call    dword ptr ds:0A28078h
0x880665: mov     edx, [edi+24h]
0x880668: mov     ebx, [edx+10h]
0x88066B: mov     eax, ds:0B43110h
0x880670: mov     ebp, [ebx+4]
0x880673: add     ebx, 4
0x880676: cmp     ebp, eax
0x880678: mov     [esp+20h+arg_C], eax
0x88067C: jz      short loc_8806B3
0x88067E: test    ebp, ebp
0x880680: jz      short loc_8806A3
0x880682: lea     eax, [ebp+4]
0x880685: push    eax; lpAddend
0x880686: call    dword ptr ds:0A2807Ch
0x88068C: test    eax, eax
0x88068E: jnz     short loc_88069F
0x880690: test    ebp, ebp
0x880692: jz      short loc_88069F
0x880694: mov     edx, [ebp+0]
0x880697: mov     eax, [edx]
0x880699: push    1
0x88069B: mov     ecx, ebp
0x88069D: call    eax
0x88069F: mov     eax, [esp+20h+arg_C]
0x8806A3: test    eax, eax
0x8806A5: mov     [ebx], eax
0x8806A7: jz      short loc_8806B3
0x8806A9: add     eax, 4
0x8806AC: push    eax; lpAddend
0x8806AD: call    dword ptr ds:0A28078h
0x8806B3: mov     ecx, [edi+24h]
0x8806B6: mov     ebx, [ecx+14h]
0x8806B9: mov     eax, ds:0B43108h
0x8806BE: mov     ebp, [ebx+4]
0x8806C1: add     ebx, 4
0x8806C4: cmp     ebp, eax
0x8806C6: mov     [esp+20h+arg_C], eax
0x8806CA: jz      short loc_880701
0x8806CC: test    ebp, ebp
0x8806CE: jz      short loc_8806F1
0x8806D0: lea     edx, [ebp+4]
0x8806D3: push    edx; lpAddend
0x8806D4: call    dword ptr ds:0A2807Ch
0x8806DA: test    eax, eax
0x8806DC: jnz     short loc_8806ED
0x8806DE: test    ebp, ebp
0x8806E0: jz      short loc_8806ED
0x8806E2: mov     eax, [ebp+0]
0x8806E5: mov     edx, [eax]
0x8806E7: push    1
0x8806E9: mov     ecx, ebp
0x8806EB: call    edx
0x8806ED: mov     eax, [esp+20h+arg_C]
0x8806F1: test    eax, eax
0x8806F3: mov     [ebx], eax
0x8806F5: jz      short loc_880701
0x8806F7: add     eax, 4
0x8806FA: push    eax; lpAddend
0x8806FB: call    dword ptr ds:0A28078h
0x880701: mov     eax, [edi+24h]
0x880704: mov     ebp, [eax+18h]
0x880707: mov     eax, ds:0B4310Ch
0x88070C: mov     ebx, [ebp+4]
0x88070F: cmp     ebx, eax
0x880711: mov     ecx, eax
0x880713: mov     [esp+20h+arg_C], ecx
0x880717: jz      short loc_88074E
0x880719: test    ebx, ebx
0x88071B: jz      short loc_88073D
0x88071D: lea     ecx, [ebx+4]
0x880720: push    ecx; lpAddend
0x880721: call    dword ptr ds:0A2807Ch
0x880727: test    eax, eax
0x880729: jnz     short loc_880739
0x88072B: test    ebx, ebx
0x88072D: jz      short loc_880739
0x88072F: mov     edx, [ebx]
0x880731: mov     eax, [edx]
0x880733: push    1
0x880735: mov     ecx, ebx
0x880737: call    eax
0x880739: mov     ecx, [esp+20h+arg_C]
0x88073D: test    ecx, ecx
0x88073F: mov     [ebp+4], ecx
0x880742: jz      short loc_88074E
0x880744: add     ecx, 4
0x880747: push    ecx; lpAddend
0x880748: call    dword ptr ds:0A28078h
0x88074E: mov     ebx, 1
0x880753: add     [edi+60h], ebx
0x880756: mov     [esp+20h+arg_C], edi
0x88075A: mov     edx, [esi+38h]
0x88075D: lea     ecx, [esp+20h+arg_C]
0x880761: push    ecx
0x880762: push    edx
0x880763: lea     ecx, [esi+40h]
0x880766: mov     [esp+28h+var_4], 0
0x88076E: call    sub_76CE40
0x880773: or      eax, 0FFFFFFFFh
0x880776: add     [edi+60h], eax
0x880779: mov     [esp+20h+var_4], eax
0x88077D: jnz     short loc_880786
0x88077F: mov     ecx, edi
0x880781: call    sub_7604D0
0x880786: add     [esi+38h], ebx
0x880789: mov     ecx, [esp+20h+var_C]
0x88078D: mov     large fs:0, ecx
0x880794: pop     ecx
0x880795: pop     edi
0x880796: pop     esi
0x880797: pop     ebp
0x880798: pop     ebx
0x880799: add     esp, 0Ch
0x88079C: retn    10h
