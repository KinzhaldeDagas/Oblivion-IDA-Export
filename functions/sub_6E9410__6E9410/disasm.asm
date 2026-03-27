0x6E9410: push    0FFFFFFFFh
0x6E9412: push    offset SEH_6E9BA0
0x6E9417: mov     eax, large fs:0
0x6E941D: push    eax
0x6E941E: sub     esp, 24h
0x6E9421: push    ebx
0x6E9422: push    ebp
0x6E9423: push    esi
0x6E9424: push    edi
0x6E9425: mov     eax, ds:0B30AACh
0x6E942A: xor     eax, esp
0x6E942C: push    eax
0x6E942D: lea     eax, [esp+44h+var_C]
0x6E9431: mov     large fs:0, eax
0x6E9437: mov     esi, ecx
0x6E9439: mov     [esp+44h+var_24], esi
0x6E943D: mov     edi, [esp+44h+arg_0]
0x6E9441: push    edi
0x6E9442: call    sub_715E40
0x6E9447: mov     ecx, [edi]
0x6E9449: lea     eax, [esp+44h+var_20]
0x6E944D: push    eax
0x6E944E: push    esi
0x6E944F: call    NiTMap_GetAt
0x6E9454: cmp     word ptr [esi+4Eh], 0
0x6E9459: mov     [esp+44h+var_28], 0
0x6E9461: jbe     loc_6E95E2
0x6E9467: mov     ecx, [esp+44h+var_20]
0x6E946B: add     ecx, 44h ; 'D'
0x6E946E: mov     [esp+44h+var_14], ecx
0x6E9472: mov     edx, [esp+44h+var_24]
0x6E9476: mov     eax, [edx+48h]
0x6E9479: mov     esi, [esp+44h+var_28]
0x6E947D: mov     ebp, [eax+esi*4]
0x6E9480: xor     ebx, ebx
0x6E9482: cmp     ebp, ebx
0x6E9484: mov     [esp+44h+var_10], ebp
0x6E9488: jz      loc_6E959C
0x6E948E: push    0Ch; Size
0x6E9490: call    FormHeapAlloc
0x6E9495: add     esp, 4
0x6E9498: cmp     eax, ebx
0x6E949A: jz      short loc_6E94A6
0x6E949C: mov     [eax], ebx
0x6E949E: mov     [eax+4], ebx
0x6E94A1: mov     [eax+8], ebx
0x6E94A4: mov     ebx, eax
0x6E94A6: mov     edi, [esp+44h+var_14]
0x6E94AA: movzx   ecx, word ptr [edi+8]
0x6E94AE: cmp     esi, ecx
0x6E94B0: mov     [esp+44h+var_4], 0FFFFFFFFh
0x6E94B8: mov     [esp+44h+var_18], ebx
0x6E94BC: jb      short loc_6E94CC
0x6E94BE: movzx   edx, word ptr [edi+0Eh]
0x6E94C2: add     edx, esi
0x6E94C4: push    edx
0x6E94C5: mov     ecx, edi
0x6E94C7: call    NiTArray_SetSize
0x6E94CC: lea     eax, [esp+44h+var_18]
0x6E94D0: push    eax
0x6E94D1: push    esi
0x6E94D2: mov     ecx, edi
0x6E94D4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E94D9: cmp     dword ptr [ebp+8], 0
0x6E94DD: mov     [esp+44h+var_18], 0
0x6E94E5: jbe     loc_6E95C7
0x6E94EB: jmp     short loc_6E94F0
0x6E94ED: align 10h
0x6E94F0: mov     ecx, [esp+44h+var_10]
0x6E94F4: mov     edx, [ecx]
0x6E94F6: mov     ecx, [esp+44h+arg_0]
0x6E94FA: mov     eax, [esp+44h+var_18]
0x6E94FE: mov     ebp, [edx+eax*4]
0x6E9501: mov     esi, [ecx]
0x6E9503: mov     edx, [esi]
0x6E9505: mov     eax, [edx+4]
0x6E9508: push    ebp
0x6E9509: mov     ecx, esi
0x6E950B: call    eax
0x6E950D: mov     ecx, [esi+8]
0x6E9510: mov     edi, [ecx+eax*4]
0x6E9513: test    edi, edi
0x6E9515: jz      short loc_6E952F
0x6E9517: mov     eax, [edi+4]
0x6E951A: mov     edx, [esi]
0x6E951C: mov     edx, [edx+8]
0x6E951F: push    eax
0x6E9520: push    ebp
0x6E9521: mov     ecx, esi
0x6E9523: call    edx
0x6E9525: test    al, al
0x6E9527: jnz     short loc_6E953F
0x6E9529: mov     edi, [edi]
0x6E952B: test    edi, edi
0x6E952D: jnz     short loc_6E9517
0x6E952F: mov     eax, [ebx+4]
0x6E9532: cmp     [ebx+8], eax
0x6E9535: jnz     short loc_6E9576
0x6E9537: test    eax, eax
0x6E9539: jbe     short loc_6E9569
0x6E953B: add     eax, eax
0x6E953D: jmp     short loc_6E956E
0x6E953F: mov     eax, [ebx+4]
0x6E9542: cmp     [ebx+8], eax
0x6E9545: mov     edi, [edi+8]
0x6E9548: jnz     short loc_6E955F
0x6E954A: test    eax, eax
0x6E954C: jbe     short loc_6E9552
0x6E954E: add     eax, eax
0x6E9550: jmp     short loc_6E9557
0x6E9552: mov     eax, 1
0x6E9557: push    eax
0x6E9558: mov     ecx, ebx
0x6E955A: call    sub_6E8CA0
0x6E955F: mov     eax, [ebx+8]
0x6E9562: mov     ecx, [ebx]
0x6E9564: mov     [ecx+eax*4], edi
0x6E9567: jmp     short loc_6E957E
0x6E9569: mov     eax, 1
0x6E956E: push    eax
0x6E956F: mov     ecx, ebx
0x6E9571: call    sub_6E8CA0
0x6E9576: mov     edx, [ebx+8]
0x6E9579: mov     eax, [ebx]
0x6E957B: mov     [eax+edx*4], ebp
0x6E957E: mov     eax, [esp+44h+var_18]
0x6E9582: mov     ecx, [esp+44h+var_10]
0x6E9586: add     dword ptr [ebx+8], 1
0x6E958A: add     eax, 1
0x6E958D: cmp     eax, [ecx+8]
0x6E9590: mov     [esp+44h+var_18], eax
0x6E9594: jb      loc_6E94F0
0x6E959A: jmp     short loc_6E95C7
0x6E959C: mov     edi, [esp+44h+var_14]
0x6E95A0: movzx   edx, word ptr [edi+8]
0x6E95A4: cmp     esi, edx
0x6E95A6: mov     [esp+44h+var_10], ebx
0x6E95AA: jb      short loc_6E95BA
0x6E95AC: movzx   eax, word ptr [edi+0Eh]
0x6E95B0: add     eax, esi
0x6E95B2: push    eax
0x6E95B3: mov     ecx, edi
0x6E95B5: call    NiTArray_SetSize
0x6E95BA: lea     ecx, [esp+44h+var_10]
0x6E95BE: push    ecx
0x6E95BF: push    esi
0x6E95C0: mov     ecx, edi
0x6E95C2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E95C7: mov     edx, [esp+44h+var_24]
0x6E95CB: mov     eax, [esp+44h+var_28]
0x6E95CF: movzx   ecx, word ptr [edx+4Eh]
0x6E95D3: add     eax, 1
0x6E95D6: cmp     eax, ecx
0x6E95D8: mov     [esp+44h+var_28], eax
0x6E95DC: jb      loc_6E9472
0x6E95E2: mov     edx, [esp+44h+var_24]
0x6E95E6: cmp     word ptr [edx+5Eh], 0
0x6E95EB: mov     [esp+44h+var_28], 0
0x6E95F3: jbe     loc_6E9845
0x6E95F9: lea     esp, [esp+0]
0x6E9600: mov     eax, [esp+44h+var_24]
0x6E9604: mov     ecx, [eax+58h]
0x6E9607: mov     edi, [esp+44h+var_28]
0x6E960B: mov     eax, [ecx+edi*4]
0x6E960E: test    eax, eax
0x6E9610: mov     [esp+44h+var_10], eax
0x6E9614: jz      loc_6E97E3
0x6E961A: push    0Ch; Size
0x6E961C: call    FormHeapAlloc
0x6E9621: add     esp, 4
0x6E9624: test    eax, eax
0x6E9626: jz      short loc_6E9636
0x6E9628: xor     ebx, ebx
0x6E962A: mov     [eax], ebx
0x6E962C: mov     [eax+4], ebx
0x6E962F: mov     [eax+8], ebx
0x6E9632: mov     ebp, eax
0x6E9634: jmp     short loc_6E963A
0x6E9636: xor     ebp, ebp
0x6E9638: xor     ebx, ebx
0x6E963A: mov     esi, [esp+44h+var_20]
0x6E963E: movzx   edx, word ptr [esi+5Ch]
0x6E9642: mov     edi, [esp+44h+var_28]
0x6E9646: add     esi, 54h ; 'T'
0x6E9649: cmp     edi, edx
0x6E964B: mov     [esp+44h+var_4], 0FFFFFFFFh
0x6E9653: jb      short loc_6E9663
0x6E9655: movzx   eax, word ptr [esi+0Eh]
0x6E9659: add     eax, edi
0x6E965B: push    eax
0x6E965C: mov     ecx, esi
0x6E965E: call    NiTArray_SetSize
0x6E9663: movzx   ecx, word ptr [esi+0Ah]
0x6E9667: cmp     edi, ecx
0x6E9669: jb      short loc_6E967D
0x6E966B: cmp     ebp, ebx
0x6E966D: lea     edx, [edi+1]
0x6E9670: mov     [esi+0Ah], dx
0x6E9674: jz      short loc_6E969E
0x6E9676: add     word ptr [esi+0Ch], 1
0x6E967B: jmp     short loc_6E969E
0x6E967D: cmp     ebp, ebx
0x6E967F: jz      short loc_6E9690
0x6E9681: mov     eax, [esi+4]
0x6E9684: cmp     [eax+edi*4], ebx
0x6E9687: jnz     short loc_6E969E
0x6E9689: add     word ptr [esi+0Ch], 1
0x6E968E: jmp     short loc_6E969E
0x6E9690: mov     ecx, [esi+4]
0x6E9693: cmp     [ecx+edi*4], ebx
0x6E9696: jz      short loc_6E969E
0x6E9698: add     word ptr [esi+0Ch], 0FFFFh
0x6E969E: mov     edx, [esi+4]
0x6E96A1: mov     eax, [esp+44h+var_10]
0x6E96A5: mov     [edx+edi*4], ebp
0x6E96A8: cmp     [eax+8], ebx
0x6E96AB: mov     [esp+44h+var_14], ebx
0x6E96AF: jbe     loc_6E982A
0x6E96B5: mov     ecx, [esp+44h+var_10]
0x6E96B9: mov     edx, [ecx]
0x6E96BB: mov     eax, [esp+44h+var_14]
0x6E96BF: mov     ecx, [edx+eax*4]
0x6E96C2: push    8; Size
0x6E96C4: mov     [esp+48h+var_18], ecx
0x6E96C8: call    FormHeapAlloc
0x6E96CD: xor     ecx, ecx
0x6E96CF: add     esp, 4
0x6E96D2: cmp     eax, ecx
0x6E96D4: jz      short loc_6E96DF
0x6E96D6: mov     [eax+4], ecx
0x6E96D9: mov     [esp+44h+var_1C], eax
0x6E96DD: jmp     short loc_6E96E3
0x6E96DF: mov     [esp+44h+var_1C], ecx
0x6E96E3: mov     eax, [ebp+4]
0x6E96E6: cmp     [ebp+8], eax
0x6E96E9: jnz     short loc_6E9700
0x6E96EB: cmp     eax, ecx
0x6E96ED: jbe     short loc_6E96F3
0x6E96EF: add     eax, eax
0x6E96F1: jmp     short loc_6E96F8
0x6E96F3: mov     eax, 1
0x6E96F8: push    eax
0x6E96F9: mov     ecx, ebp
0x6E96FB: call    sub_6E8CA0
0x6E9700: mov     edx, [ebp+8]
0x6E9703: mov     eax, [ebp+0]
0x6E9706: mov     ecx, [esp+44h+var_1C]
0x6E970A: mov     [eax+edx*4], ecx
0x6E970D: add     dword ptr [ebp+8], 1
0x6E9711: mov     eax, [esp+44h+arg_0]
0x6E9715: mov     esi, [eax]
0x6E9717: mov     edx, [esp+44h+var_18]
0x6E971B: mov     ebx, [edx]
0x6E971D: mov     edx, [esi]
0x6E971F: mov     eax, [edx+4]
0x6E9722: push    ebx
0x6E9723: mov     ecx, esi
0x6E9725: call    eax
0x6E9727: mov     ecx, [esi+8]
0x6E972A: mov     edi, [ecx+eax*4]
0x6E972D: test    edi, edi
0x6E972F: jz      short loc_6E974D
0x6E9731: mov     eax, [edi+4]
0x6E9734: mov     edx, [esi]
0x6E9736: mov     edx, [edx+8]
0x6E9739: push    eax
0x6E973A: push    ebx
0x6E973B: mov     ecx, esi
0x6E973D: call    edx
0x6E973F: test    al, al
0x6E9741: jnz     loc_6E97D5
0x6E9747: mov     edi, [edi]
0x6E9749: test    edi, edi
0x6E974B: jnz     short loc_6E9731
0x6E974D: mov     eax, [esp+44h+var_18]
0x6E9751: mov     edx, [esp+44h+var_1C]
0x6E9755: mov     ecx, [eax]
0x6E9757: mov     [edx], ecx
0x6E9759: mov     ebx, edx
0x6E975B: mov     eax, [esp+44h+var_18]
0x6E975F: mov     ecx, [eax+4]
0x6E9762: mov     edx, [ecx]
0x6E9764: mov     eax, [esp+44h+arg_0]
0x6E9768: mov     edx, [edx+18h]
0x6E976B: push    eax
0x6E976C: call    edx
0x6E976E: mov     esi, [ebx+4]
0x6E9771: mov     edi, eax
0x6E9773: cmp     esi, edi
0x6E9775: jz      short loc_6E97A8
0x6E9777: test    esi, esi
0x6E9779: jz      short loc_6E9797
0x6E977B: lea     eax, [esi+4]
0x6E977E: push    eax; lpAddend
0x6E977F: call    dword ptr ds:0A2807Ch
0x6E9785: test    eax, eax
0x6E9787: jnz     short loc_6E9797
0x6E9789: test    esi, esi
0x6E978B: jz      short loc_6E9797
0x6E978D: mov     edx, [esi]
0x6E978F: mov     eax, [edx]
0x6E9791: push    1
0x6E9793: mov     ecx, esi
0x6E9795: call    eax
0x6E9797: test    edi, edi
0x6E9799: mov     [ebx+4], edi
0x6E979C: jz      short loc_6E97A8
0x6E979E: add     edi, 4
0x6E97A1: push    edi; lpAddend
0x6E97A2: call    dword ptr ds:0A28078h
0x6E97A8: mov     ecx, [esp+44h+var_18]
0x6E97AC: mov     ecx, [ecx+4]
0x6E97AF: mov     edx, [ecx]
0x6E97B1: mov     eax, [esp+44h+arg_0]
0x6E97B5: mov     edx, [edx+38h]
0x6E97B8: push    eax
0x6E97B9: call    edx
0x6E97BB: mov     eax, [esp+44h+var_14]
0x6E97BF: mov     ecx, [esp+44h+var_10]
0x6E97C3: add     eax, 1
0x6E97C6: cmp     eax, [ecx+8]
0x6E97C9: mov     [esp+44h+var_14], eax
0x6E97CD: jb      loc_6E96B5
0x6E97D3: jmp     short loc_6E982A
0x6E97D5: mov     edi, [edi+8]
0x6E97D8: mov     ebx, [esp+44h+var_1C]
0x6E97DC: mov     [ebx], edi
0x6E97DE: jmp     loc_6E975B
0x6E97E3: mov     esi, [esp+44h+var_20]
0x6E97E7: movzx   edx, word ptr [esi+5Ch]
0x6E97EB: add     esi, 54h ; 'T'
0x6E97EE: cmp     edi, edx
0x6E97F0: jb      short loc_6E9800
0x6E97F2: movzx   eax, word ptr [esi+0Eh]
0x6E97F6: add     eax, edi
0x6E97F8: push    eax
0x6E97F9: mov     ecx, esi
0x6E97FB: call    NiTArray_SetSize
0x6E9800: movzx   ecx, word ptr [esi+0Ah]
0x6E9804: cmp     edi, ecx
0x6E9806: jb      short loc_6E9811
0x6E9808: lea     edx, [edi+1]
0x6E980B: mov     [esi+0Ah], dx
0x6E980F: jmp     short loc_6E9820
0x6E9811: mov     eax, [esi+4]
0x6E9814: cmp     dword ptr [eax+edi*4], 0
0x6E9818: jz      short loc_6E9820
0x6E981A: add     word ptr [esi+0Ch], 0FFFFh
0x6E9820: mov     ecx, [esi+4]
0x6E9823: mov     dword ptr [ecx+edi*4], 0
0x6E982A: mov     edx, [esp+44h+var_24]
0x6E982E: mov     eax, [esp+44h+var_28]
0x6E9832: movzx   ecx, word ptr [edx+5Eh]
0x6E9836: add     eax, 1
0x6E9839: cmp     eax, ecx
0x6E983B: mov     [esp+44h+var_28], eax
0x6E983F: jb      loc_6E9600
0x6E9845: mov     edx, [esp+44h+var_24]
0x6E9849: cmp     dword ptr [edx+6Ch], 0
0x6E984D: mov     [esp+44h+var_28], 0
0x6E9855: jbe     loc_6E9913
0x6E985B: mov     ebx, [esp+44h+var_20]
0x6E985F: add     ebx, 64h ; 'd'
0x6E9862: mov     eax, [esp+44h+var_24]
0x6E9866: mov     ecx, [eax+64h]
0x6E9869: mov     eax, [esp+44h+arg_0]
0x6E986D: mov     esi, [eax]
0x6E986F: mov     edx, [esp+44h+var_28]
0x6E9873: mov     ebp, [ecx+edx*4]
0x6E9876: mov     edx, [esi]
0x6E9878: mov     eax, [edx+4]
0x6E987B: push    ebp
0x6E987C: mov     ecx, esi
0x6E987E: call    eax
0x6E9880: mov     ecx, [esi+8]
0x6E9883: mov     edi, [ecx+eax*4]
0x6E9886: test    edi, edi
0x6E9888: jz      short loc_6E98A8
0x6E988A: lea     ebx, [ebx+0]
0x6E9890: mov     eax, [edi+4]
0x6E9893: mov     edx, [esi]
0x6E9895: mov     edx, [edx+8]
0x6E9898: push    eax
0x6E9899: push    ebp
0x6E989A: mov     ecx, esi
0x6E989C: call    edx
0x6E989E: test    al, al
0x6E98A0: jnz     short loc_6E98B8
0x6E98A2: mov     edi, [edi]
0x6E98A4: test    edi, edi
0x6E98A6: jnz     short loc_6E9890
0x6E98A8: mov     eax, [ebx+4]
0x6E98AB: cmp     [ebx+8], eax
0x6E98AE: jnz     short loc_6E98EF
0x6E98B0: test    eax, eax
0x6E98B2: jbe     short loc_6E98E2
0x6E98B4: add     eax, eax
0x6E98B6: jmp     short loc_6E98E7
0x6E98B8: mov     eax, [ebx+4]
0x6E98BB: cmp     [ebx+8], eax
0x6E98BE: mov     edi, [edi+8]
0x6E98C1: jnz     short loc_6E98D8
0x6E98C3: test    eax, eax
0x6E98C5: jbe     short loc_6E98CB
0x6E98C7: add     eax, eax
0x6E98C9: jmp     short loc_6E98D0
0x6E98CB: mov     eax, 1
0x6E98D0: push    eax
0x6E98D1: mov     ecx, ebx
0x6E98D3: call    sub_6E8CA0
0x6E98D8: mov     eax, [ebx+8]
0x6E98DB: mov     ecx, [ebx]
0x6E98DD: mov     [ecx+eax*4], edi
0x6E98E0: jmp     short loc_6E98F7
0x6E98E2: mov     eax, 1
0x6E98E7: push    eax
0x6E98E8: mov     ecx, ebx
0x6E98EA: call    sub_6E8CA0
0x6E98EF: mov     edx, [ebx+8]
0x6E98F2: mov     eax, [ebx]
0x6E98F4: mov     [eax+edx*4], ebp
0x6E98F7: mov     eax, [esp+44h+var_28]
0x6E98FB: mov     ecx, [esp+44h+var_24]
0x6E98FF: add     dword ptr [ebx+8], 1
0x6E9903: add     eax, 1
0x6E9906: cmp     eax, [ecx+6Ch]
0x6E9909: mov     [esp+44h+var_28], eax
0x6E990D: jb      loc_6E9862
0x6E9913: mov     ecx, [esp+44h+var_20]
0x6E9917: mov     eax, [ecx+3Ch]
0x6E991A: push    eax
0x6E991B: mov     dword ptr [ecx+3Ch], 0FFFFFFFFh
0x6E9922: call    sub_6E8DD0
0x6E9927: mov     ecx, dword ptr [esp+44h+var_C]
0x6E992B: mov     large fs:0, ecx
0x6E9932: pop     ecx
0x6E9933: pop     edi
0x6E9934: pop     esi
0x6E9935: pop     ebp
0x6E9936: pop     ebx
0x6E9937: add     esp, 30h
0x6E993A: retn    4
