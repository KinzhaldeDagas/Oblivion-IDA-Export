0x7F9410: push    0FFFFFFFFh
0x7F9412: push    offset SEH_7F9410
0x7F9417: mov     eax, large fs:0
0x7F941D: push    eax
0x7F941E: sub     esp, 78h
0x7F9421: push    ebx
0x7F9422: push    ebp
0x7F9423: push    esi
0x7F9424: push    edi
0x7F9425: mov     eax, ds:0B30AACh
0x7F942A: xor     eax, esp
0x7F942C: push    eax
0x7F942D: lea     eax, [esp+98h+var_C]
0x7F9434: mov     large fs:0, eax
0x7F943A: mov     [esp+98h+var_78], ecx
0x7F943E: mov     eax, ds:0B3F928h
0x7F9443: mov     ecx, [esp+98h+arg_0]
0x7F944A: mov     [esp+98h+var_64], eax
0x7F944E: mov     eax, [ecx+4]
0x7F9451: mov     esi, [eax]
0x7F9453: lea     ecx, [eax+8]
0x7F9456: mov     ecx, [ecx]
0x7F9458: mov     ebx, [ecx]
0x7F945A: mov     edx, [ebx+0B4h]
0x7F9460: lea     eax, [esp+98h+var_68]
0x7F9464: mov     [esp+98h+var_74], ecx
0x7F9468: push    eax
0x7F9469: mov     ecx, ebx
0x7F946B: mov     [esp+9Ch+var_84], esi
0x7F946F: mov     [esp+9Ch+var_7C], edx
0x7F9473: call    sub_405760
0x7F9478: mov     edi, [eax]
0x7F947A: mov     eax, [esp+98h+var_68]
0x7F947E: test    eax, eax
0x7F9480: mov     [esp+98h+var_80], edi
0x7F9484: jz      short loc_7F94A5
0x7F9486: mov     ebp, eax
0x7F9488: add     eax, 4
0x7F948B: push    eax; lpAddend
0x7F948C: call    dword ptr ds:0A2807Ch
0x7F9492: test    eax, eax
0x7F9494: jnz     short loc_7F94A5
0x7F9496: test    ebp, ebp
0x7F9498: jz      short loc_7F94A5
0x7F949A: mov     edx, [ebp+0]
0x7F949D: mov     eax, [edx]
0x7F949F: push    1
0x7F94A1: mov     ecx, ebp
0x7F94A3: call    eax
0x7F94A5: mov     ecx, [esp+98h+var_64]
0x7F94A9: mov     eax, [ecx+280h]
0x7F94AF: mov     ecx, ds:0B430A4h
0x7F94B5: mov     edx, [eax]
0x7F94B7: mov     edi, [edi+18h]
0x7F94BA: mov     edx, [edx+114h]
0x7F94C0: mov     ebp, [ebx+0BCh]
0x7F94C6: push    ecx
0x7F94C7: push    8
0x7F94C9: push    0
0x7F94CB: push    eax
0x7F94CC: mov     [esp+0A8h+var_70], edi
0x7F94D0: call    edx
0x7F94D2: mov     eax, [edi+9Ch]
0x7F94D8: movzx   eax, word ptr [eax+0Eh]
0x7F94DC: xor     edi, edi
0x7F94DE: cmp     ax, di
0x7F94E1: jz      loc_7F97D4
0x7F94E7: lea     esi, [ebx+64h]
0x7F94EA: mov     ecx, 0Dh
0x7F94EF: lea     edi, [esp+98h+var_40]
0x7F94F3: rep movsd
0x7F94F5: mov     edx, [ebx+20h]
0x7F94F8: mov     esi, [esp+98h+arg_4]
0x7F94FF: mov     edi, [esp+98h+var_74]
0x7F9503: mov     [esp+98h+var_50], edx
0x7F9507: mov     eax, [ebx+24h]
0x7F950A: mov     [esp+98h+var_4C], eax
0x7F950E: mov     ecx, [ebx+28h]
0x7F9511: movzx   eax, si
0x7F9514: mov     [esp+98h+var_48], ecx
0x7F9518: mov     edx, [ebx+2Ch]
0x7F951B: mov     [esp+98h+var_44], edx
0x7F951F: mov     [esp+98h+var_5C], eax
0x7F9523: mov     ds:0B42E90h, eax
0x7F9528: mov     ds:0B42EB8h, edi
0x7F952E: call    sub_7ECB20
0x7F9533: mov     eax, [esp+98h+var_70]
0x7F9537: push    0
0x7F9539: push    eax
0x7F953A: push    edi
0x7F953B: push    esi
0x7F953C: mov     esi, [esp+0A8h+var_78]
0x7F9540: mov     ecx, esi
0x7F9542: call    sub_7F60F0
0x7F9547: push    ebx
0x7F9548: mov     ecx, esi
0x7F954A: call    sub_7F6A30
0x7F954F: mov     ecx, [esp+98h+var_7C]
0x7F9553: mov     esi, [ecx+38h]
0x7F9556: lea     edx, [esp+98h+var_6C]
0x7F955A: push    edx
0x7F955B: mov     ecx, ebx
0x7F955D: call    sub_7016D0
0x7F9562: mov     eax, [eax]
0x7F9564: mov     edi, [esp+98h+var_80]
0x7F9568: mov     edx, [ebp+0]
0x7F956B: mov     edx, [edx+28h]
0x7F956E: lea     ecx, [esp+98h+var_50]
0x7F9572: push    ecx
0x7F9573: lea     ecx, [esp+9Ch+var_40]
0x7F9577: push    ecx
0x7F9578: push    eax
0x7F9579: push    edi
0x7F957A: push    esi
0x7F957B: push    0
0x7F957D: push    ebx
0x7F957E: mov     ecx, ebp
0x7F9580: mov     [esp+0B4h+var_4], 0
0x7F958B: call    edx
0x7F958D: mov     eax, [esp+98h+var_6C]
0x7F9591: test    eax, eax
0x7F9593: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F959E: jz      short loc_7F95C2
0x7F95A0: mov     [esp+98h+var_70], eax
0x7F95A4: add     eax, 4
0x7F95A7: push    eax; lpAddend
0x7F95A8: call    dword ptr ds:0A2807Ch
0x7F95AE: test    eax, eax
0x7F95B0: jnz     short loc_7F95C2
0x7F95B2: mov     ecx, [esp+98h+var_70]
0x7F95B6: test    ecx, ecx
0x7F95B8: jz      short loc_7F95C2
0x7F95BA: mov     eax, [ecx]
0x7F95BC: mov     edx, [eax]
0x7F95BE: push    1
0x7F95C0: call    edx
0x7F95C2: lea     eax, [esp+98h+var_6C]
0x7F95C6: push    eax
0x7F95C7: mov     ecx, ebx
0x7F95C9: call    sub_7016D0
0x7F95CE: mov     eax, [eax]
0x7F95D0: mov     edx, [ebp+0]
0x7F95D3: mov     edx, [edx+2Ch]
0x7F95D6: lea     ecx, [esp+98h+var_50]
0x7F95DA: push    ecx
0x7F95DB: lea     ecx, [esp+9Ch+var_40]
0x7F95DF: push    ecx
0x7F95E0: push    eax
0x7F95E1: push    edi
0x7F95E2: push    esi
0x7F95E3: push    0
0x7F95E5: push    ebx
0x7F95E6: mov     ecx, ebp
0x7F95E8: mov     [esp+0B4h+var_4], 1
0x7F95F3: call    edx
0x7F95F5: mov     eax, [esp+98h+var_6C]
0x7F95F9: test    eax, eax
0x7F95FB: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F9606: jz      short loc_7F962A
0x7F9608: mov     [esp+98h+var_70], eax
0x7F960C: add     eax, 4
0x7F960F: push    eax; lpAddend
0x7F9610: call    dword ptr ds:0A2807Ch
0x7F9616: test    eax, eax
0x7F9618: jnz     short loc_7F962A
0x7F961A: mov     ecx, [esp+98h+var_70]
0x7F961E: test    ecx, ecx
0x7F9620: jz      short loc_7F962A
0x7F9622: mov     eax, [ecx]
0x7F9624: mov     edx, [eax]
0x7F9626: push    1
0x7F9628: call    edx
0x7F962A: mov     eax, [ebp+0]
0x7F962D: mov     edx, [eax+48h]
0x7F9630: mov     ecx, ebp
0x7F9632: call    edx
0x7F9634: mov     eax, [ebp+3Ch]
0x7F9637: lea     ecx, [esp+98h+var_70]
0x7F963B: push    ecx
0x7F963C: mov     ecx, ebx
0x7F963E: mov     [esp+9Ch+var_6C], eax
0x7F9642: call    sub_7016D0
0x7F9647: mov     eax, [eax]
0x7F9649: mov     edx, [ebp+0]
0x7F964C: mov     edx, [edx+30h]
0x7F964F: lea     ecx, [esp+98h+var_50]
0x7F9653: push    ecx
0x7F9654: lea     ecx, [esp+9Ch+var_40]
0x7F9658: push    ecx
0x7F9659: push    eax
0x7F965A: push    edi
0x7F965B: push    esi
0x7F965C: push    0
0x7F965E: push    ebx
0x7F965F: mov     ecx, ebp
0x7F9661: mov     [esp+0B4h+var_4], 2
0x7F966C: call    edx
0x7F966E: mov     eax, [esp+98h+var_70]
0x7F9672: test    eax, eax
0x7F9674: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F967F: jz      short loc_7F96A3
0x7F9681: mov     [esp+98h+var_74], eax
0x7F9685: add     eax, 4
0x7F9688: push    eax; lpAddend
0x7F9689: call    dword ptr ds:0A2807Ch
0x7F968F: test    eax, eax
0x7F9691: jnz     short loc_7F96A3
0x7F9693: mov     ecx, [esp+98h+var_74]
0x7F9697: test    ecx, ecx
0x7F9699: jz      short loc_7F96A3
0x7F969B: mov     eax, [ecx]
0x7F969D: mov     edx, [eax]
0x7F969F: push    1
0x7F96A1: call    edx
0x7F96A3: lea     eax, [esp+98h+var_70]
0x7F96A7: push    eax
0x7F96A8: mov     ecx, ebx
0x7F96AA: call    sub_7016D0
0x7F96AF: mov     eax, [eax]
0x7F96B1: mov     edx, [ebp+0]
0x7F96B4: mov     edx, [edx+34h]
0x7F96B7: lea     ecx, [esp+98h+var_50]
0x7F96BB: push    ecx
0x7F96BC: lea     ecx, [esp+9Ch+var_40]
0x7F96C0: push    ecx
0x7F96C1: push    eax
0x7F96C2: push    edi
0x7F96C3: push    esi
0x7F96C4: push    0
0x7F96C6: push    0
0x7F96C8: push    ebx
0x7F96C9: mov     ecx, ebp
0x7F96CB: mov     [esp+0B8h+var_4], 3
0x7F96D6: call    edx
0x7F96D8: mov     eax, [esp+98h+var_70]
0x7F96DC: test    eax, eax
0x7F96DE: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F96E9: jz      short loc_7F970D
0x7F96EB: mov     [esp+98h+var_74], eax
0x7F96EF: add     eax, 4
0x7F96F2: push    eax; lpAddend
0x7F96F3: call    dword ptr ds:0A2807Ch
0x7F96F9: test    eax, eax
0x7F96FB: jnz     short loc_7F970D
0x7F96FD: mov     ecx, [esp+98h+var_74]
0x7F9701: test    ecx, ecx
0x7F9703: jz      short loc_7F970D
0x7F9705: mov     eax, [ecx]
0x7F9707: mov     edx, [eax]
0x7F9709: push    1
0x7F970B: call    edx
0x7F970D: mov     eax, [ebp+0]
0x7F9710: mov     edx, [eax+3Ch]
0x7F9713: push    edi
0x7F9714: push    esi
0x7F9715: push    0
0x7F9717: push    ebx
0x7F9718: mov     ecx, ebp
0x7F971A: call    edx
0x7F971C: lea     eax, [esp+98h+var_70]
0x7F9720: push    eax
0x7F9721: mov     ecx, ebx
0x7F9723: call    sub_7016D0
0x7F9728: mov     eax, [eax]
0x7F972A: mov     edx, [ebp+0]
0x7F972D: mov     edx, [edx+38h]
0x7F9730: lea     ecx, [esp+98h+var_50]
0x7F9734: push    ecx
0x7F9735: lea     ecx, [esp+9Ch+var_40]
0x7F9739: push    ecx
0x7F973A: push    eax
0x7F973B: push    edi
0x7F973C: push    esi
0x7F973D: push    0
0x7F973F: push    0
0x7F9741: push    ebx
0x7F9742: mov     ecx, ebp
0x7F9744: mov     [esp+0B8h+var_4], 4
0x7F974F: call    edx
0x7F9751: mov     eax, [esp+98h+var_70]
0x7F9755: test    eax, eax
0x7F9757: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F9762: jz      short loc_7F9782
0x7F9764: mov     edi, eax
0x7F9766: add     eax, 4
0x7F9769: push    eax; lpAddend
0x7F976A: call    dword ptr ds:0A2807Ch
0x7F9770: test    eax, eax
0x7F9772: jnz     short loc_7F9782
0x7F9774: test    edi, edi
0x7F9776: jz      short loc_7F9782
0x7F9778: mov     eax, [edi]
0x7F977A: mov     edx, [eax]
0x7F977C: push    1
0x7F977E: mov     ecx, edi
0x7F9780: call    edx
0x7F9782: mov     ecx, ds:0B3F928h
0x7F9788: mov     eax, [ebx]
0x7F978A: mov     edx, [eax+88h]
0x7F9790: push    ecx
0x7F9791: mov     ecx, ebx
0x7F9793: call    edx
0x7F9795: mov     ecx, ds:0B28CB0h
0x7F979B: mov     eax, [esp+98h+var_7C]
0x7F979F: lea     edx, ds:0[ecx*4]
0x7F97A6: mov     [esp+98h+var_68], eax
0x7F97AA: mov     eax, [esp+98h+var_78]
0x7F97AE: mov     ecx, [eax]
0x7F97B0: push    edx
0x7F97B1: push    0
0x7F97B3: push    ecx
0x7F97B4: call    __memset
0x7F97B9: mov     eax, [esp+0A4h+var_84]
0x7F97BD: add     esp, 0Ch
0x7F97C0: test    eax, eax
0x7F97C2: jz      loc_7F9ACB
0x7F97C8: jmp     loc_7F9874
0x7F97CD: align 10h
0x7F97D0: mov     esi, [esp+98h+var_84]
0x7F97D4: cmp     esi, edi
0x7F97D6: jz      short loc_7F984D
0x7F97D8: mov     ecx, [esi]
0x7F97DA: lea     eax, [esi+8]
0x7F97DD: mov     eax, [eax]
0x7F97DF: mov     ebx, [eax]
0x7F97E1: mov     edx, [ebx+0B4h]
0x7F97E7: mov     [esp+98h+var_74], eax
0x7F97EB: lea     eax, [esp+98h+var_60]
0x7F97EF: mov     [esp+98h+var_84], ecx
0x7F97F3: push    eax
0x7F97F4: mov     ecx, ebx
0x7F97F6: mov     [esp+9Ch+var_7C], edx
0x7F97FA: call    sub_405760
0x7F97FF: mov     esi, [eax]
0x7F9801: mov     eax, [esp+98h+var_60]
0x7F9805: cmp     eax, edi
0x7F9807: mov     [esp+98h+var_80], esi
0x7F980B: jz      short loc_7F982C
0x7F980D: mov     ebp, eax
0x7F980F: add     eax, 4
0x7F9812: push    eax; lpAddend
0x7F9813: call    dword ptr ds:0A2807Ch
0x7F9819: test    eax, eax
0x7F981B: jnz     short loc_7F982C
0x7F981D: cmp     ebp, edi
0x7F981F: jz      short loc_7F982C
0x7F9821: mov     edx, [ebp+0]
0x7F9824: mov     eax, [edx]
0x7F9826: push    1
0x7F9828: mov     ecx, ebp
0x7F982A: call    eax
0x7F982C: mov     eax, [esi+18h]
0x7F982F: mov     ebp, [ebx+0BCh]
0x7F9835: mov     [esp+98h+var_70], eax
0x7F9839: mov     eax, [eax+9Ch]
0x7F983F: movzx   eax, word ptr [eax+0Eh]
0x7F9843: cmp     ax, di
0x7F9846: jz      short loc_7F97D0
0x7F9848: jmp     loc_7F94E7
0x7F984D: mov     esi, [esp+98h+arg_0]
0x7F9854: mov     ecx, esi
0x7F9856: call    sub_7A9C30
0x7F985B: mov     ecx, [esi+4]
0x7F985E: mov     [esi+0Ch], ecx
0x7F9861: mov     [esi+4], edi
0x7F9864: mov     [esi+8], edi
0x7F9867: mov     [esi+10h], edi
0x7F986A: jmp     loc_7F9B1E
0x7F986F: align 10h
0x7F9870: mov     eax, [esp+98h+var_84]
0x7F9874: mov     edx, [eax]
0x7F9876: lea     ecx, [eax+8]
0x7F9879: mov     eax, [ecx]
0x7F987B: mov     ebx, [eax]
0x7F987D: mov     edi, [ebx+0B4h]
0x7F9883: mov     [esp+98h+var_74], eax
0x7F9887: lea     eax, [esp+98h+var_60]
0x7F988B: push    eax
0x7F988C: mov     ecx, ebx
0x7F988E: mov     [esp+9Ch+var_84], edx
0x7F9892: mov     [esp+9Ch+var_7C], edi
0x7F9896: call    sub_405760
0x7F989B: mov     ecx, [eax]
0x7F989D: mov     eax, [esp+98h+var_60]
0x7F98A1: test    eax, eax
0x7F98A3: mov     [esp+98h+var_80], ecx
0x7F98A7: jz      short loc_7F98CB
0x7F98A9: mov     [esp+98h+var_70], eax
0x7F98AD: add     eax, 4
0x7F98B0: push    eax; lpAddend
0x7F98B1: call    dword ptr ds:0A2807Ch
0x7F98B7: test    eax, eax
0x7F98B9: jnz     short loc_7F98CB
0x7F98BB: mov     ecx, [esp+98h+var_70]
0x7F98BF: test    ecx, ecx
0x7F98C1: jz      short loc_7F98CB
0x7F98C3: mov     edx, [ecx]
0x7F98C5: mov     eax, [edx]
0x7F98C7: push    1
0x7F98C9: call    eax
0x7F98CB: mov     ecx, [esp+98h+var_80]
0x7F98CF: mov     eax, [ecx+18h]
0x7F98D2: mov     ecx, [eax+9Ch]
0x7F98D8: movzx   ecx, word ptr [ecx+0Eh]
0x7F98DC: test    cx, cx
0x7F98DF: mov     [esp+98h+var_70], eax
0x7F98E3: jbe     loc_7F9AC0
0x7F98E9: cmp     [esp+98h+var_68], edi
0x7F98ED: mov     edx, [esp+98h+var_5C]
0x7F98F1: mov     ecx, [esp+98h+var_74]
0x7F98F5: mov     ds:0B42E90h, edx
0x7F98FB: mov     ds:0B42EB8h, ecx
0x7F9901: jz      loc_7F9A58
0x7F9907: mov     ecx, [esp+98h+var_78]
0x7F990B: push    ebx
0x7F990C: call    sub_7F6A30
0x7F9911: mov     edx, [edi+38h]
0x7F9914: lea     esi, [ebx+64h]
0x7F9917: mov     ecx, 0Dh
0x7F991C: lea     edi, [esp+98h+var_40]
0x7F9920: rep movsd
0x7F9922: mov     eax, [ebx+20h]
0x7F9925: mov     [esp+98h+var_50], eax
0x7F9929: mov     ecx, [ebx+24h]
0x7F992C: mov     [esp+98h+var_4C], ecx
0x7F9930: mov     [esp+98h+var_70], edx
0x7F9934: mov     edx, [ebx+28h]
0x7F9937: lea     ecx, [esp+98h+var_58]
0x7F993B: mov     [esp+98h+var_48], edx
0x7F993F: mov     eax, [ebx+2Ch]
0x7F9942: push    ecx
0x7F9943: mov     ecx, ebx
0x7F9945: mov     [esp+9Ch+var_44], eax
0x7F9949: call    sub_7016D0
0x7F994E: mov     eax, [eax]
0x7F9950: mov     edi, [esp+98h+var_80]
0x7F9954: mov     esi, [esp+98h+var_70]
0x7F9958: mov     edx, [ebp+0]
0x7F995B: mov     edx, [edx+2Ch]
0x7F995E: lea     ecx, [esp+98h+var_50]
0x7F9962: push    ecx
0x7F9963: lea     ecx, [esp+9Ch+var_40]
0x7F9967: push    ecx
0x7F9968: push    eax
0x7F9969: push    edi
0x7F996A: push    esi
0x7F996B: push    0
0x7F996D: push    ebx
0x7F996E: mov     ecx, ebp
0x7F9970: mov     [esp+0B4h+var_4], 5
0x7F997B: call    edx
0x7F997D: mov     eax, [esp+98h+var_58]
0x7F9981: test    eax, eax
0x7F9983: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F998E: jz      short loc_7F99B2
0x7F9990: mov     [esp+98h+var_68], eax
0x7F9994: add     eax, 4
0x7F9997: push    eax; lpAddend
0x7F9998: call    dword ptr ds:0A2807Ch
0x7F999E: test    eax, eax
0x7F99A0: jnz     short loc_7F99B2
0x7F99A2: mov     ecx, [esp+98h+var_68]
0x7F99A6: test    ecx, ecx
0x7F99A8: jz      short loc_7F99B2
0x7F99AA: mov     eax, [ecx]
0x7F99AC: mov     edx, [eax]
0x7F99AE: push    1
0x7F99B0: call    edx
0x7F99B2: mov     eax, [ebp+0]
0x7F99B5: mov     edx, [eax+48h]
0x7F99B8: mov     ecx, ebp
0x7F99BA: call    edx
0x7F99BC: mov     eax, [ebp+3Ch]
0x7F99BF: lea     ecx, [esp+98h+var_54]
0x7F99C3: push    ecx
0x7F99C4: mov     ecx, ebx
0x7F99C6: mov     [esp+9Ch+var_6C], eax
0x7F99CA: call    sub_7016D0
0x7F99CF: mov     eax, [eax]
0x7F99D1: mov     edx, [ebp+0]
0x7F99D4: mov     edx, [edx+34h]
0x7F99D7: lea     ecx, [esp+98h+var_50]
0x7F99DB: push    ecx
0x7F99DC: lea     ecx, [esp+9Ch+var_40]
0x7F99E0: push    ecx
0x7F99E1: push    eax
0x7F99E2: push    edi
0x7F99E3: push    esi
0x7F99E4: push    0
0x7F99E6: push    0
0x7F99E8: push    ebx
0x7F99E9: mov     ecx, ebp
0x7F99EB: mov     [esp+0B8h+var_4], 6
0x7F99F6: call    edx
0x7F99F8: mov     eax, [esp+98h+var_54]
0x7F99FC: test    eax, eax
0x7F99FE: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F9A09: jz      short loc_7F9A2D
0x7F9A0B: mov     [esp+98h+var_68], eax
0x7F9A0F: add     eax, 4
0x7F9A12: push    eax; lpAddend
0x7F9A13: call    dword ptr ds:0A2807Ch
0x7F9A19: test    eax, eax
0x7F9A1B: jnz     short loc_7F9A2D
0x7F9A1D: mov     ecx, [esp+98h+var_68]
0x7F9A21: test    ecx, ecx
0x7F9A23: jz      short loc_7F9A2D
0x7F9A25: mov     eax, [ecx]
0x7F9A27: mov     edx, [eax]
0x7F9A29: push    1
0x7F9A2B: call    edx
0x7F9A2D: mov     eax, [ebp+0]
0x7F9A30: mov     edx, [eax+3Ch]
0x7F9A33: push    edi
0x7F9A34: push    esi
0x7F9A35: push    0
0x7F9A37: push    ebx
0x7F9A38: mov     ecx, ebp
0x7F9A3A: call    edx
0x7F9A3C: mov     eax, [esp+98h+var_6C]
0x7F9A40: mov     ecx, [esp+98h+var_78]
0x7F9A44: push    0
0x7F9A46: push    eax
0x7F9A47: push    ebp
0x7F9A48: push    ebx
0x7F9A49: call    sub_7F6BF0
0x7F9A4E: mov     esi, [esp+98h+var_70]
0x7F9A52: mov     edi, [esp+98h+var_7C]
0x7F9A56: jmp     short loc_7F9ABC
0x7F9A58: push    eax
0x7F9A59: mov     ecx, ebp
0x7F9A5B: call    sub_8115C0
0x7F9A60: mov     ecx, [esp+98h+var_70]
0x7F9A64: mov     edx, [ecx+9Ch]
0x7F9A6A: mov     eax, [edx+4]
0x7F9A6D: mov     edx, [edi]
0x7F9A6F: cmp     byte ptr [eax+0Ch], 0
0x7F9A73: mov     eax, [edx+5Ch]
0x7F9A76: mov     ecx, edi
0x7F9A78: jz      short loc_7F9A81
0x7F9A7A: call    eax
0x7F9A7C: mov     edx, [edi+4Ch]
0x7F9A7F: jmp     short loc_7F9A86
0x7F9A81: call    eax
0x7F9A83: mov     edx, [edi+48h]
0x7F9A86: movzx   ecx, word ptr [edi+40h]
0x7F9A8A: push    0
0x7F9A8C: movzx   eax, ax
0x7F9A8F: mov     [esi+4Ch], edx
0x7F9A92: mov     edx, [esp+9Ch+var_6C]
0x7F9A96: movzx   ecx, cx
0x7F9A99: push    edx
0x7F9A9A: movzx   eax, ax
0x7F9A9D: push    ebp
0x7F9A9E: mov     [esi+40h], ecx
0x7F9AA1: mov     ecx, [esp+0A4h+var_78]
0x7F9AA5: push    ebx
0x7F9AA6: mov     [esi+3Ch], eax
0x7F9AA9: mov     dword ptr [esi+48h], 0
0x7F9AB0: mov     dword ptr [esi+44h], 1
0x7F9AB7: call    sub_7F6BF0
0x7F9ABC: mov     [esp+98h+var_68], edi
0x7F9AC0: cmp     [esp+98h+var_84], 0
0x7F9AC5: jnz     loc_7F9870
0x7F9ACB: mov     esi, [esp+98h+arg_0]
0x7F9AD2: mov     ecx, esi
0x7F9AD4: call    sub_7A9C30
0x7F9AD9: mov     eax, [esi+4]
0x7F9ADC: xor     edi, edi
0x7F9ADE: mov     [esi+0Ch], eax
0x7F9AE1: mov     [esi+4], edi
0x7F9AE4: mov     [esi+8], edi
0x7F9AE7: mov     [esi+10h], edi
0x7F9AEA: mov     edx, [ebp+0]
0x7F9AED: mov     eax, [edx+4Ch]
0x7F9AF0: mov     ecx, ebp
0x7F9AF2: call    eax
0x7F9AF4: mov     esi, [esp+98h+var_64]
0x7F9AF8: mov     ecx, [esi+8ACh]
0x7F9AFE: mov     edx, [ecx]
0x7F9B00: mov     eax, [edx+0FCh]
0x7F9B06: push    edi
0x7F9B07: call    eax
0x7F9B09: mov     eax, [esi+280h]
0x7F9B0F: mov     ecx, [eax]
0x7F9B11: mov     edx, [ecx+114h]
0x7F9B17: push    edi
0x7F9B18: push    8
0x7F9B1A: push    edi
0x7F9B1B: push    eax
0x7F9B1C: call    edx
0x7F9B1E: mov     ecx, [esp+98h+var_C]
0x7F9B25: mov     large fs:0, ecx
0x7F9B2C: pop     ecx
0x7F9B2D: pop     edi
0x7F9B2E: pop     esi
0x7F9B2F: pop     ebp
0x7F9B30: pop     ebx
0x7F9B31: add     esp, 84h
0x7F9B37: retn    8
