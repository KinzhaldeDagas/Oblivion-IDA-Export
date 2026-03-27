0x6C9590: sub     esp, 2Ch
0x6C9593: push    esi
0x6C9594: mov     esi, ecx
0x6C9596: mov     eax, [esi+40h]
0x6C9599: push    edi
0x6C959A: mov     edi, [eax+7Ch]
0x6C959D: mov     eax, [esi+5Ch]
0x6C95A0: test    eax, eax
0x6C95A2: mov     [esp+34h+var_28], esi
0x6C95A6: mov     [esp+34h+var_24], edi
0x6C95AA: jz      short loc_6C95B9
0x6C95AC: mov     edx, [edi]
0x6C95AE: push    eax
0x6C95AF: mov     eax, [edx+4Ch]
0x6C95B2: mov     ecx, edi
0x6C95B4: call    eax
0x6C95B6: mov     [esi+60h], eax
0x6C95B9: mov     ecx, [esp+34h+arg_0]
0x6C95BD: push    edi
0x6C95BE: push    ecx
0x6C95BF: mov     ecx, esi
0x6C95C1: call    sub_6C8220
0x6C95C6: cmp     dword ptr [esi+0Ch], 0
0x6C95CA: mov     byte ptr [esp+34h+var_2C+2], al
0x6C95CE: mov     byte ptr [esp+34h+arg_0], 0
0x6C95D3: mov     [esp+34h+var_18], 0
0x6C95DB: jbe     loc_6C9B30
0x6C95E1: push    ebx
0x6C95E2: push    ebp
0x6C95E3: mov     eax, [esp+3Ch+var_18]
0x6C95E7: mov     edx, [esp+3Ch+var_28]
0x6C95EB: mov     ecx, [edx+14h]
0x6C95EE: shl     eax, 4
0x6C95F1: mov     ecx, [eax+ecx]
0x6C95F4: test    ecx, ecx
0x6C95F6: mov     [esp+3Ch+var_1C], eax
0x6C95FA: jz      loc_6C9B16
0x6C9600: mov     ebp, edx
0x6C9602: mov     edx, [ecx]
0x6C9604: mov     ebx, [ebp+18h]
0x6C9607: mov     edx, [edx+8Ch]
0x6C960D: mov     esi, eax
0x6C960F: mov     eax, [esp+3Ch+var_24]
0x6C9613: push    eax
0x6C9614: add     ebx, esi
0x6C9616: call    edx
0x6C9618: test    al, al
0x6C961A: jnz     loc_6C96B0
0x6C9620: movzx   eax, word ptr [ebx+0Ch]
0x6C9624: cmp     ax, 0FFFFh
0x6C9628: jz      short loc_6C9634
0x6C962A: mov     ecx, [ebx]
0x6C962C: movzx   edi, ax
0x6C962F: add     edi, [ecx+8]
0x6C9632: jmp     short loc_6C9636
0x6C9634: xor     edi, edi
0x6C9636: movzx   eax, word ptr [ebx+0Ah]
0x6C963A: cmp     ax, 0FFFFh
0x6C963E: jz      short loc_6C964A
0x6C9640: mov     edx, [ebx]
0x6C9642: movzx   esi, ax
0x6C9645: add     esi, [edx+8]
0x6C9648: jmp     short loc_6C964C
0x6C964A: xor     esi, esi
0x6C964C: movzx   eax, word ptr [ebx+8]
0x6C9650: cmp     ax, 0FFFFh
0x6C9654: jz      short loc_6C9660
0x6C9656: mov     ecx, [ebx]
0x6C9658: movzx   edx, ax
0x6C965B: add     edx, [ecx+8]
0x6C965E: jmp     short loc_6C9662
0x6C9660: xor     edx, edx
0x6C9662: movzx   eax, word ptr [ebx+6]
0x6C9666: cmp     ax, 0FFFFh
0x6C966A: jz      short loc_6C9676
0x6C966C: movzx   ecx, ax
0x6C966F: mov     eax, [ebx]
0x6C9671: add     ecx, [eax+8]
0x6C9674: jmp     short loc_6C9678
0x6C9676: xor     ecx, ecx
0x6C9678: movzx   eax, word ptr [ebx+4]
0x6C967C: cmp     ax, 0FFFFh
0x6C9680: jz      short loc_6C968C
0x6C9682: mov     ebx, [ebx]
0x6C9684: movzx   eax, ax
0x6C9687: add     eax, [ebx+8]
0x6C968A: jmp     short loc_6C968E
0x6C968C: xor     eax, eax
0x6C968E: push    edi
0x6C968F: push    esi
0x6C9690: push    edx
0x6C9691: mov     edx, [ebp+8]
0x6C9694: push    ecx
0x6C9695: push    eax
0x6C9696: push    edx; ArgList
0x6C9697: push    offset aNicontrollerse; "NiControllerSequence::StoreTargets '%s'"...
0x6C969C: lea     eax, [esp+58h+var_10]
0x6C96A0: push    0; int
0x6C96A2: push    eax; int
0x6C96A3: call    sub_748530
0x6C96A8: add     esp, 24h
0x6C96AB: jmp     loc_6C9B16
0x6C96B0: mov     ecx, [ebp+14h]
0x6C96B3: cmp     dword ptr [esi+ecx+8], 0
0x6C96B8: jnz     loc_6C9B16
0x6C96BE: movzx   eax, word ptr [ebx+4]
0x6C96C2: cmp     ax, 0FFFFh
0x6C96C6: jz      short loc_6C96D2
0x6C96C8: mov     edx, [ebx]
0x6C96CA: movzx   eax, ax
0x6C96CD: add     eax, [edx+8]
0x6C96D0: jmp     short loc_6C96D4
0x6C96D2: xor     eax, eax
0x6C96D4: mov     ecx, [esp+3Ch+var_24]
0x6C96D8: mov     edx, [ecx]
0x6C96DA: push    eax
0x6C96DB: mov     eax, [edx+4Ch]
0x6C96DE: call    eax
0x6C96E0: mov     ebp, eax
0x6C96E2: test    ebp, ebp
0x6C96E4: mov     [esp+3Ch+var_20], ebp
0x6C96E8: jz      loc_6C976F
0x6C96EE: movzx   eax, word ptr [ebx+6]
0x6C96F2: cmp     ax, 0FFFFh
0x6C96F6: jz      short loc_6C9767
0x6C96F8: mov     ecx, [ebx]
0x6C96FA: movzx   eax, ax
0x6C96FD: add     eax, [ecx+8]
0x6C9700: jz      short loc_6C9767
0x6C9702: mov     edi, [ebp+9Ch]
0x6C9708: test    edi, edi
0x6C970A: jz      short loc_6C9767
0x6C970C: lea     esp, [esp+0]
0x6C9710: mov     ebp, [edi+8]
0x6C9713: mov     edx, [ebp+0]
0x6C9716: lea     eax, [edi+8]
0x6C9719: mov     eax, [edx+4]
0x6C971C: mov     edi, [edi]
0x6C971E: mov     ecx, ebp
0x6C9720: call    eax
0x6C9722: mov     ecx, ebx
0x6C9724: mov     esi, eax
0x6C9726: call    sub_6C63A0
0x6C972B: mov     ecx, [esi]
0x6C972D: lea     ecx, [ecx+0]
0x6C9730: mov     dl, [ecx]
0x6C9732: cmp     dl, [eax]
0x6C9734: jnz     short loc_6C9750
0x6C9736: test    dl, dl
0x6C9738: jz      short loc_6C974C
0x6C973A: mov     dl, [ecx+1]
0x6C973D: cmp     dl, [eax+1]
0x6C9740: jnz     short loc_6C9750
0x6C9742: add     ecx, 2
0x6C9745: add     eax, 2
0x6C9748: test    dl, dl
0x6C974A: jnz     short loc_6C9730
0x6C974C: xor     eax, eax
0x6C974E: jmp     short loc_6C9755
0x6C9750: sbb     eax, eax
0x6C9752: sbb     eax, 0FFFFFFFFh
0x6C9755: test    eax, eax
0x6C9757: jz      short loc_6C975F
0x6C9759: test    edi, edi
0x6C975B: jnz     short loc_6C9710
0x6C975D: jmp     short loc_6C9763
0x6C975F: mov     [esp+3Ch+var_20], ebp
0x6C9763: mov     ebp, [esp+3Ch+var_20]
0x6C9767: test    ebp, ebp
0x6C9769: jnz     loc_6C9852
0x6C976F: movzx   eax, word ptr [ebx+4]
0x6C9773: cmp     ax, 0FFFFh
0x6C9777: jz      short loc_6C9783
0x6C9779: mov     ecx, [ebx]
0x6C977B: movzx   esi, ax
0x6C977E: add     esi, [ecx+8]
0x6C9781: jmp     short loc_6C9785
0x6C9783: xor     esi, esi
0x6C9785: cmp     byte ptr [esp+3Ch+arg_0], 0
0x6C978A: jnz     loc_6C9B16
0x6C9790: push    offset aBip01; "Bip01"
0x6C9795: push    esi; Str1
0x6C9796: call    __strcmp
0x6C979B: add     esp, 8
0x6C979E: test    eax, eax
0x6C97A0: jnz     short loc_6C97C0
0x6C97A2: mov     ecx, [esp+3Ch+var_24]
0x6C97A6: mov     edx, [ecx]
0x6C97A8: mov     eax, [edx+4Ch]
0x6C97AB: push    offset aBip02; "Bip02"
0x6C97B0: call    eax
0x6C97B2: test    eax, eax
0x6C97B4: jz      short loc_6C97C0
0x6C97B6: mov     byte ptr [esp+3Ch+arg_0], 1
0x6C97BB: jmp     loc_6C9B16
0x6C97C0: push    3; MaxCount
0x6C97C2: push    esi; Str2
0x6C97C3: push    offset aBow; Str1
0x6C97C8: call    __strnicmp
0x6C97CD: add     esp, 0Ch
0x6C97D0: test    eax, eax
0x6C97D2: jz      loc_6C9B16
0x6C97D8: push    5; MaxCount
0x6C97DA: push    esi; Str2
0x6C97DB: push    offset aArrow; "Arrow"
0x6C97E0: call    __strnicmp
0x6C97E5: add     esp, 0Ch
0x6C97E8: test    eax, eax
0x6C97EA: jz      loc_6C9B16
0x6C97F0: push    0Ah; MaxCount
0x6C97F2: push    esi; Str2
0x6C97F3: push    offset aBip01Tail; "Bip01 Tail"
0x6C97F8: call    __strnicmp
0x6C97FD: add     esp, 0Ch
0x6C9800: test    eax, eax
0x6C9802: jz      loc_6C9B16
0x6C9808: push    6; MaxCount
0x6C980A: push    esi; Str2
0x6C980B: push    offset aBridle; "Bridle"
0x6C9810: call    __strnicmp
0x6C9815: add     esp, 0Ch
0x6C9818: test    eax, eax
0x6C981A: jz      loc_6C9B16
0x6C9820: mov     ecx, ebx
0x6C9822: call    sub_6C63A0
0x6C9827: push    eax
0x6C9828: mov     ecx, ebx
0x6C982A: call    sub_6C63C0
0x6C982F: mov     ecx, [esp+40h+var_28]
0x6C9833: mov     edx, [ecx+8]
0x6C9836: push    eax
0x6C9837: push    esi
0x6C9838: push    edx; ArgList
0x6C9839: push    offset aNicontroller_0; "NiControllerSequence::StoreTargets '%s'"...
0x6C983E: lea     eax, [esp+50h+var_C]
0x6C9842: push    0; int
0x6C9844: push    eax; int
0x6C9845: call    sub_748530
0x6C984A: add     esp, 1Ch
0x6C984D: jmp     loc_6C9B16
0x6C9852: mov     esi, [ebp+0Ch]
0x6C9855: test    esi, esi
0x6C9857: jz      loc_6C98F7
0x6C985D: lea     ecx, [ecx+0]
0x6C9860: mov     edx, [esi]
0x6C9862: mov     eax, [edx+4]
0x6C9865: mov     ecx, esi
0x6C9867: call    eax
0x6C9869: mov     ecx, ebx
0x6C986B: mov     edi, eax
0x6C986D: call    sub_6C63C0
0x6C9872: mov     ecx, [edi]
0x6C9874: mov     dl, [ecx]
0x6C9876: cmp     dl, [eax]
0x6C9878: jnz     short loc_6C9894
0x6C987A: test    dl, dl
0x6C987C: jz      short loc_6C9890
0x6C987E: mov     dl, [ecx+1]
0x6C9881: cmp     dl, [eax+1]
0x6C9884: jnz     short loc_6C9894
0x6C9886: add     ecx, 2
0x6C9889: add     eax, 2
0x6C988C: test    dl, dl
0x6C988E: jnz     short loc_6C9874
0x6C9890: xor     eax, eax
0x6C9892: jmp     short loc_6C9899
0x6C9894: sbb     eax, eax
0x6C9896: sbb     eax, 0FFFFFFFFh
0x6C9899: test    eax, eax
0x6C989B: jnz     short loc_6C98EC
0x6C989D: mov     edx, [esi]
0x6C989F: mov     eax, [edx+8Ch]
0x6C98A5: mov     ecx, esi
0x6C98A7: call    eax
0x6C98A9: mov     ecx, ebx
0x6C98AB: mov     edi, eax
0x6C98AD: call    sub_6C63E0
0x6C98B2: test    edi, edi
0x6C98B4: jz      short loc_6C98E8
0x6C98B6: test    eax, eax
0x6C98B8: jz      short loc_6C98EC
0x6C98BA: mov     ecx, ebx
0x6C98BC: call    sub_6C63E0
0x6C98C1: mov     ecx, edi
0x6C98C3: mov     dl, [ecx]
0x6C98C5: cmp     dl, [eax]
0x6C98C7: jnz     short loc_6C98E3
0x6C98C9: test    dl, dl
0x6C98CB: jz      short loc_6C98DF
0x6C98CD: mov     dl, [ecx+1]
0x6C98D0: cmp     dl, [eax+1]
0x6C98D3: jnz     short loc_6C98E3
0x6C98D5: add     ecx, 2
0x6C98D8: add     eax, 2
0x6C98DB: test    dl, dl
0x6C98DD: jnz     short loc_6C98C3
0x6C98DF: xor     eax, eax
0x6C98E1: jmp     short loc_6C98E8
0x6C98E3: sbb     eax, eax
0x6C98E5: sbb     eax, 0FFFFFFFFh
0x6C98E8: test    eax, eax
0x6C98EA: jz      short loc_6C9940
0x6C98EC: mov     esi, [esi+34h]
0x6C98EF: test    esi, esi
0x6C98F1: jnz     loc_6C9860
0x6C98F7: mov     edi, [esp+3Ch+var_28]
0x6C98FB: mov     ecx, [edi+14h]
0x6C98FE: mov     edx, [esp+3Ch+var_1C]
0x6C9902: mov     esi, [edx+ecx+4]
0x6C9906: test    esi, esi
0x6C9908: jz      short loc_6C9958
0x6C990A: mov     eax, [esi]
0x6C990C: mov     edx, [eax+58h]
0x6C990F: push    ebp
0x6C9910: mov     ecx, esi
0x6C9912: call    edx
0x6C9914: mov     eax, [edi+40h]
0x6C9917: cmp     ebp, [eax+30h]
0x6C991A: mov     byte ptr [esp+3Ch+var_2C+2], 1
0x6C991F: jnz     short loc_6C9940
0x6C9921: push    esi
0x6C9922: mov     ecx, ebp
0x6C9924: call    sub_6FFE90
0x6C9929: mov     ecx, [edi+40h]
0x6C992C: mov     edx, [ecx+34h]
0x6C992F: push    edx
0x6C9930: mov     ecx, esi
0x6C9932: call    sub_6C61E0
0x6C9937: mov     ecx, [edi+40h]
0x6C993A: push    esi
0x6C993B: call    sub_6C61E0
0x6C9940: movzx   eax, word ptr [ebx+0Ch]
0x6C9944: cmp     ax, 0FFFFh
0x6C9948: jz      loc_6C99D1
0x6C994E: mov     ecx, [ebx]
0x6C9950: movzx   eax, ax
0x6C9953: add     eax, [ecx+8]
0x6C9956: jmp     short loc_6C99D3
0x6C9958: movzx   eax, word ptr [ebx+0Ah]
0x6C995C: cmp     ax, 0FFFFh
0x6C9960: jz      short loc_6C996C
0x6C9962: mov     ecx, [ebx]
0x6C9964: movzx   esi, ax
0x6C9967: add     esi, [ecx+8]
0x6C996A: jmp     short loc_6C996E
0x6C996C: xor     esi, esi
0x6C996E: movzx   eax, word ptr [ebx+8]
0x6C9972: cmp     ax, 0FFFFh
0x6C9976: jz      short loc_6C9982
0x6C9978: mov     ecx, [ebx]
0x6C997A: movzx   edx, ax
0x6C997D: add     edx, [ecx+8]
0x6C9980: jmp     short loc_6C9984
0x6C9982: xor     edx, edx
0x6C9984: movzx   eax, word ptr [ebx+6]
0x6C9988: cmp     ax, 0FFFFh
0x6C998C: jz      short loc_6C9998
0x6C998E: mov     ebp, [ebx]
0x6C9990: movzx   ecx, ax
0x6C9993: add     ecx, [ebp+8]
0x6C9996: jmp     short loc_6C999A
0x6C9998: xor     ecx, ecx
0x6C999A: movzx   eax, word ptr [ebx+4]
0x6C999E: cmp     ax, 0FFFFh
0x6C99A2: jz      short loc_6C99AE
0x6C99A4: mov     ebx, [ebx]
0x6C99A6: movzx   eax, ax
0x6C99A9: add     eax, [ebx+8]
0x6C99AC: jmp     short loc_6C99B0
0x6C99AE: xor     eax, eax
0x6C99B0: push    esi
0x6C99B1: push    edx
0x6C99B2: mov     edx, [edi+8]
0x6C99B5: push    ecx
0x6C99B6: push    eax
0x6C99B7: push    edx; ArgList
0x6C99B8: push    offset aNicontroller_1; "NiControllerSequence::StoreTargets '%s'"...
0x6C99BD: lea     eax, [esp+54h+var_8]
0x6C99C1: push    0; int
0x6C99C3: push    eax; int
0x6C99C4: call    sub_748530
0x6C99C9: add     esp, 20h
0x6C99CC: jmp     loc_6C9B16
0x6C99D1: xor     eax, eax
0x6C99D3: mov     edx, [esi]
0x6C99D5: push    eax
0x6C99D6: mov     eax, [edx+7Ch]
0x6C99D9: mov     ecx, esi
0x6C99DB: call    eax
0x6C99DD: movzx   ebp, ax
0x6C99E0: cmp     bp, ds:0A7A160h
0x6C99E7: jz      short loc_6C9A64
0x6C99E9: mov     edx, [esi]
0x6C99EB: mov     eax, [edx+80h]
0x6C99F1: push    ebp
0x6C99F2: mov     ecx, esi
0x6C99F4: call    eax
0x6C99F6: push    eax
0x6C99F7: push    offset dword_B3CC5C
0x6C99FC: call    NiRTTI_Cast
0x6C9A01: mov     ecx, [esp+44h+var_20]
0x6C9A05: mov     edx, [esp+44h+var_28]
0x6C9A09: add     esp, 8
0x6C9A0C: cmp     [edx+60h], ecx
0x6C9A0F: mov     edi, eax
0x6C9A11: mov     [esp+3Ch+var_14], 0
0x6C9A16: jnz     short loc_6C9A28
0x6C9A18: mov     eax, edx
0x6C9A1A: mov     ecx, [eax+40h]
0x6C9A1D: cmp     byte ptr [ecx+6Ch], 0
0x6C9A21: jz      short loc_6C9A28
0x6C9A23: mov     [esp+3Ch+var_14], 1
0x6C9A28: test    edi, edi
0x6C9A2A: jnz     loc_6C9AF5
0x6C9A30: fldz
0x6C9A32: mov     eax, dword ptr [esp+3Ch+var_14]
0x6C9A36: mov     edx, [esi]
0x6C9A38: mov     edx, [edx+98h]
0x6C9A3E: push    2
0x6C9A40: push    ecx
0x6C9A41: fstp    [esp+44h+var_44]
0x6C9A44: push    eax
0x6C9A45: push    1
0x6C9A47: push    ebp
0x6C9A48: mov     ecx, esi
0x6C9A4A: call    edx
0x6C9A4C: mov     edi, eax
0x6C9A4E: mov     eax, [esi]
0x6C9A50: mov     edx, [eax+84h]
0x6C9A56: push    ebp
0x6C9A57: push    edi
0x6C9A58: mov     ecx, esi
0x6C9A5A: call    edx
0x6C9A5C: test    edi, edi
0x6C9A5E: jnz     loc_6C9AF5
0x6C9A64: movzx   eax, word ptr [ebx+0Ch]
0x6C9A68: cmp     ax, 0FFFFh
0x6C9A6C: jz      short loc_6C9A78
0x6C9A6E: mov     ecx, [ebx]
0x6C9A70: movzx   edi, ax
0x6C9A73: add     edi, [ecx+8]
0x6C9A76: jmp     short loc_6C9A7A
0x6C9A78: xor     edi, edi
0x6C9A7A: movzx   eax, word ptr [ebx+0Ah]
0x6C9A7E: cmp     ax, 0FFFFh
0x6C9A82: jz      short loc_6C9A8E
0x6C9A84: mov     edx, [ebx]
0x6C9A86: movzx   esi, ax
0x6C9A89: add     esi, [edx+8]
0x6C9A8C: jmp     short loc_6C9A90
0x6C9A8E: xor     esi, esi
0x6C9A90: movzx   eax, word ptr [ebx+8]
0x6C9A94: cmp     ax, 0FFFFh
0x6C9A98: jz      short loc_6C9AA4
0x6C9A9A: mov     ecx, [ebx]
0x6C9A9C: movzx   edx, ax
0x6C9A9F: add     edx, [ecx+8]
0x6C9AA2: jmp     short loc_6C9AA6
0x6C9AA4: xor     edx, edx
0x6C9AA6: movzx   eax, word ptr [ebx+6]
0x6C9AAA: cmp     ax, 0FFFFh
0x6C9AAE: jz      short loc_6C9ABA
0x6C9AB0: mov     ebp, [ebx]
0x6C9AB2: movzx   ecx, ax
0x6C9AB5: add     ecx, [ebp+8]
0x6C9AB8: jmp     short loc_6C9ABC
0x6C9ABA: xor     ecx, ecx
0x6C9ABC: movzx   eax, word ptr [ebx+4]
0x6C9AC0: cmp     ax, 0FFFFh
0x6C9AC4: jz      short loc_6C9AD0
0x6C9AC6: mov     ebx, [ebx]
0x6C9AC8: movzx   eax, ax
0x6C9ACB: add     eax, [ebx+8]
0x6C9ACE: jmp     short loc_6C9AD2
0x6C9AD0: xor     eax, eax
0x6C9AD2: push    edi
0x6C9AD3: push    esi
0x6C9AD4: push    edx
0x6C9AD5: mov     edx, [esp+48h+var_28]
0x6C9AD9: push    ecx
0x6C9ADA: push    eax
0x6C9ADB: mov     eax, [edx+8]
0x6C9ADE: push    eax; ArgList
0x6C9ADF: push    offset aNicontroller_2; "NiControllerSequence::StoreTargets '%s'"...
0x6C9AE4: lea     ecx, [esp+58h+var_4]
0x6C9AE8: push    0; int
0x6C9AEA: push    ecx; int
0x6C9AEB: call    sub_748530
0x6C9AF0: add     esp, 24h
0x6C9AF3: jmp     short loc_6C9B16
0x6C9AF5: or      word ptr [esi+8], 20h
0x6C9AFA: mov     ebx, [esp+3Ch+var_28]
0x6C9AFE: mov     edx, [ebx+14h]
0x6C9B01: push    esi; a2
0x6C9B02: mov     esi, [esp+40h+var_1C]
0x6C9B06: lea     ecx, [esi+edx+4]; this
0x6C9B0A: call    NiSmartPointer_Set??
0x6C9B0F: mov     eax, [ebx+14h]
0x6C9B12: mov     [esi+eax+8], edi
0x6C9B16: mov     eax, [esp+3Ch+var_18]
0x6C9B1A: mov     ecx, [esp+3Ch+var_28]
0x6C9B1E: add     eax, 1
0x6C9B21: cmp     eax, [ecx+0Ch]
0x6C9B24: mov     [esp+3Ch+var_18], eax
0x6C9B28: jb      loc_6C95E3
0x6C9B2E: pop     ebp
0x6C9B2F: pop     ebx
0x6C9B30: cmp     byte ptr [esp+34h+var_2C+2], 0
0x6C9B35: jz      short loc_6C9B54
0x6C9B37: mov     edx, [esp+34h+var_28]
0x6C9B3B: mov     eax, [edx+40h]
0x6C9B3E: mov     ecx, [eax+30h]
0x6C9B41: mov     edx, [ecx]
0x6C9B43: mov     edx, [edx+5Ch]
0x6C9B46: lea     eax, [esp+34h+var_2C+2]
0x6C9B4A: push    eax
0x6C9B4B: push    1
0x6C9B4D: lea     eax, [esp+3Ch+var_2C+3]
0x6C9B51: push    eax
0x6C9B52: call    edx
0x6C9B54: cmp     byte ptr [esp+34h+arg_0], 0
0x6C9B59: mov     esi, [esp+34h+var_24]
0x6C9B5D: jnz     short loc_6C9B71
0x6C9B5F: mov     eax, [esi]
0x6C9B61: mov     edx, [eax+4Ch]
0x6C9B64: push    offset aBip02; "Bip02"
0x6C9B69: mov     ecx, esi
0x6C9B6B: call    edx
0x6C9B6D: test    eax, eax
0x6C9B6F: jz      short loc_6C9B94
0x6C9B71: mov     eax, [esi]
0x6C9B73: mov     edx, [eax+4Ch]
0x6C9B76: push    offset aBip01; "Bip01"
0x6C9B7B: mov     ecx, esi
0x6C9B7D: call    edx
0x6C9B7F: test    eax, eax
0x6C9B81: jz      short loc_6C9B94
0x6C9B83: mov     eax, [eax+1Ch]
0x6C9B86: test    eax, eax
0x6C9B88: jz      short loc_6C9B94
0x6C9B8A: mov     ecx, [esp+34h+var_28]
0x6C9B8E: push    eax
0x6C9B8F: call    sub_6C6910
0x6C9B94: pop     edi
0x6C9B95: mov     al, 1
0x6C9B97: pop     esi
0x6C9B98: add     esp, 2Ch
0x6C9B9B: retn    4
