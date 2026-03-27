0x7B8530: push    ebx
0x7B8531: push    ebp
0x7B8532: mov     ebp, ds:0A2807Ch
0x7B8538: xor     ebx, ebx
0x7B853A: cmp     [esp+8+arg_0], bl
0x7B853E: push    esi
0x7B853F: jz      loc_7B88D9
0x7B8545: mov     ds:0B42EBCh, ebx
0x7B854B: call    sub_7C4D90
0x7B8550: call    sub_7B3E60
0x7B8555: xor     esi, esi
0x7B8557: push    edi
0x7B8558: jmp     short loc_7B8560
0x7B855A: align 10h
0x7B8560: mov     eax, ds:0B42EC0h[esi*4]
0x7B8567: cmp     eax, ebx
0x7B8569: jz      short loc_7B85A7
0x7B856B: mov     eax, [eax+4]
0x7B856E: mov     eax, [eax+4]
0x7B8571: cmp     eax, 1
0x7B8574: jbe     short loc_7B8585
0x7B8576: push    eax
0x7B8577: push    esi; ArgList
0x7B8578: push    offset aShaderIIsLeaki; "Shader %i is leaking.  There are %i ref"...
0x7B857D: call    PrintError
0x7B8582: add     esp, 0Ch
0x7B8585: mov     edi, ds:0B42EC0h[esi*4]
0x7B858C: cmp     edi, ebx
0x7B858E: jz      short loc_7B85A0
0x7B8590: mov     ecx, edi
0x7B8592: call    sub_7B7170
0x7B8597: push    edi
0x7B8598: call    FormHeapFree
0x7B859D: add     esp, 4
0x7B85A0: mov     ds:0B42EC0h[esi*4], ebx
0x7B85A7: add     esi, 1
0x7B85AA: cmp     esi, 1Ch
0x7B85AD: jl      short loc_7B8560
0x7B85AF: call    sub_7E30F0
0x7B85B4: call    sub_7F3BA0
0x7B85B9: mov     esi, ds:0B430ECh
0x7B85BF: cmp     esi, ebx
0x7B85C1: pop     edi
0x7B85C2: jz      short loc_7B85E2
0x7B85C4: lea     ecx, [esi+4]
0x7B85C7: push    ecx; lpAddend
0x7B85C8: call    ebp ; InterlockedDecrement
0x7B85CA: test    eax, eax
0x7B85CC: jnz     short loc_7B85DC
0x7B85CE: cmp     esi, ebx
0x7B85D0: jz      short loc_7B85DC
0x7B85D2: mov     edx, [esi]
0x7B85D4: mov     eax, [edx]
0x7B85D6: push    1
0x7B85D8: mov     ecx, esi
0x7B85DA: call    eax
0x7B85DC: mov     ds:0B430ECh, ebx
0x7B85E2: mov     esi, ds:0B430DCh
0x7B85E8: cmp     esi, ebx
0x7B85EA: jz      short loc_7B860A
0x7B85EC: lea     ecx, [esi+4]
0x7B85EF: push    ecx; lpAddend
0x7B85F0: call    ebp ; InterlockedDecrement
0x7B85F2: test    eax, eax
0x7B85F4: jnz     short loc_7B8604
0x7B85F6: cmp     esi, ebx
0x7B85F8: jz      short loc_7B8604
0x7B85FA: mov     edx, [esi]
0x7B85FC: mov     eax, [edx]
0x7B85FE: push    1
0x7B8600: mov     ecx, esi
0x7B8602: call    eax
0x7B8604: mov     ds:0B430DCh, ebx
0x7B860A: mov     esi, ds:0B430F0h
0x7B8610: cmp     esi, ebx
0x7B8612: jz      short loc_7B8632
0x7B8614: lea     ecx, [esi+4]
0x7B8617: push    ecx; lpAddend
0x7B8618: call    ebp ; InterlockedDecrement
0x7B861A: test    eax, eax
0x7B861C: jnz     short loc_7B862C
0x7B861E: cmp     esi, ebx
0x7B8620: jz      short loc_7B862C
0x7B8622: mov     edx, [esi]
0x7B8624: mov     eax, [edx]
0x7B8626: push    1
0x7B8628: mov     ecx, esi
0x7B862A: call    eax
0x7B862C: mov     ds:0B430F0h, ebx
0x7B8632: mov     esi, ds:0B430E0h
0x7B8638: cmp     esi, ebx
0x7B863A: jz      short loc_7B865A
0x7B863C: lea     ecx, [esi+4]
0x7B863F: push    ecx; lpAddend
0x7B8640: call    ebp ; InterlockedDecrement
0x7B8642: test    eax, eax
0x7B8644: jnz     short loc_7B8654
0x7B8646: cmp     esi, ebx
0x7B8648: jz      short loc_7B8654
0x7B864A: mov     edx, [esi]
0x7B864C: mov     eax, [edx]
0x7B864E: push    1
0x7B8650: mov     ecx, esi
0x7B8652: call    eax
0x7B8654: mov     ds:0B430E0h, ebx
0x7B865A: mov     esi, ds:0B43100h
0x7B8660: cmp     esi, ebx
0x7B8662: jz      short loc_7B8682
0x7B8664: lea     ecx, [esi+4]
0x7B8667: push    ecx; lpAddend
0x7B8668: call    ebp ; InterlockedDecrement
0x7B866A: test    eax, eax
0x7B866C: jnz     short loc_7B867C
0x7B866E: cmp     esi, ebx
0x7B8670: jz      short loc_7B867C
0x7B8672: mov     edx, [esi]
0x7B8674: mov     eax, [edx]
0x7B8676: push    1
0x7B8678: mov     ecx, esi
0x7B867A: call    eax
0x7B867C: mov     ds:0B43100h, ebx
0x7B8682: mov     esi, ds:0B430E4h
0x7B8688: cmp     esi, ebx
0x7B868A: jz      short loc_7B86AA
0x7B868C: lea     ecx, [esi+4]
0x7B868F: push    ecx; lpAddend
0x7B8690: call    ebp ; InterlockedDecrement
0x7B8692: test    eax, eax
0x7B8694: jnz     short loc_7B86A4
0x7B8696: cmp     esi, ebx
0x7B8698: jz      short loc_7B86A4
0x7B869A: mov     edx, [esi]
0x7B869C: mov     eax, [edx]
0x7B869E: push    1
0x7B86A0: mov     ecx, esi
0x7B86A2: call    eax
0x7B86A4: mov     ds:0B430E4h, ebx
0x7B86AA: mov     esi, ds:0B4311Ch
0x7B86B0: cmp     esi, ebx
0x7B86B2: jz      short loc_7B86D2
0x7B86B4: lea     ecx, [esi+4]
0x7B86B7: push    ecx; lpAddend
0x7B86B8: call    ebp ; InterlockedDecrement
0x7B86BA: test    eax, eax
0x7B86BC: jnz     short loc_7B86CC
0x7B86BE: cmp     esi, ebx
0x7B86C0: jz      short loc_7B86CC
0x7B86C2: mov     edx, [esi]
0x7B86C4: mov     eax, [edx]
0x7B86C6: push    1
0x7B86C8: mov     ecx, esi
0x7B86CA: call    eax
0x7B86CC: mov     ds:0B4311Ch, ebx
0x7B86D2: mov     esi, ds:0B43120h
0x7B86D8: cmp     esi, ebx
0x7B86DA: jz      short loc_7B86FA
0x7B86DC: lea     ecx, [esi+4]
0x7B86DF: push    ecx; lpAddend
0x7B86E0: call    ebp ; InterlockedDecrement
0x7B86E2: test    eax, eax
0x7B86E4: jnz     short loc_7B86F4
0x7B86E6: cmp     esi, ebx
0x7B86E8: jz      short loc_7B86F4
0x7B86EA: mov     edx, [esi]
0x7B86EC: mov     eax, [edx]
0x7B86EE: push    1
0x7B86F0: mov     ecx, esi
0x7B86F2: call    eax
0x7B86F4: mov     ds:0B43120h, ebx
0x7B86FA: mov     esi, ds:0B430F8h
0x7B8700: cmp     esi, ebx
0x7B8702: jz      short loc_7B8722
0x7B8704: lea     ecx, [esi+4]
0x7B8707: push    ecx; lpAddend
0x7B8708: call    ebp ; InterlockedDecrement
0x7B870A: test    eax, eax
0x7B870C: jnz     short loc_7B871C
0x7B870E: cmp     esi, ebx
0x7B8710: jz      short loc_7B871C
0x7B8712: mov     edx, [esi]
0x7B8714: mov     eax, [edx]
0x7B8716: push    1
0x7B8718: mov     ecx, esi
0x7B871A: call    eax
0x7B871C: mov     ds:0B430F8h, ebx
0x7B8722: mov     esi, ds:0B43110h
0x7B8728: cmp     esi, ebx
0x7B872A: jz      short loc_7B874A
0x7B872C: lea     ecx, [esi+4]
0x7B872F: push    ecx; lpAddend
0x7B8730: call    ebp ; InterlockedDecrement
0x7B8732: test    eax, eax
0x7B8734: jnz     short loc_7B8744
0x7B8736: cmp     esi, ebx
0x7B8738: jz      short loc_7B8744
0x7B873A: mov     edx, [esi]
0x7B873C: mov     eax, [edx]
0x7B873E: push    1
0x7B8740: mov     ecx, esi
0x7B8742: call    eax
0x7B8744: mov     ds:0B43110h, ebx
0x7B874A: mov     esi, ds:0B430D4h
0x7B8750: cmp     esi, ebx
0x7B8752: jz      short loc_7B8772
0x7B8754: lea     ecx, [esi+4]
0x7B8757: push    ecx; lpAddend
0x7B8758: call    ebp ; InterlockedDecrement
0x7B875A: test    eax, eax
0x7B875C: jnz     short loc_7B876C
0x7B875E: cmp     esi, ebx
0x7B8760: jz      short loc_7B876C
0x7B8762: mov     edx, [esi]
0x7B8764: mov     eax, [edx]
0x7B8766: push    1
0x7B8768: mov     ecx, esi
0x7B876A: call    eax
0x7B876C: mov     ds:0B430D4h, ebx
0x7B8772: mov     esi, ds:0B43128h
0x7B8778: cmp     esi, ebx
0x7B877A: jz      short loc_7B879A
0x7B877C: lea     ecx, [esi+4]
0x7B877F: push    ecx; lpAddend
0x7B8780: call    ebp ; InterlockedDecrement
0x7B8782: test    eax, eax
0x7B8784: jnz     short loc_7B8794
0x7B8786: cmp     esi, ebx
0x7B8788: jz      short loc_7B8794
0x7B878A: mov     edx, [esi]
0x7B878C: mov     eax, [edx]
0x7B878E: push    1
0x7B8790: mov     ecx, esi
0x7B8792: call    eax
0x7B8794: mov     ds:0B43128h, ebx
0x7B879A: mov     esi, ds:0B43114h
0x7B87A0: cmp     esi, ebx
0x7B87A2: jz      short loc_7B87C2
0x7B87A4: lea     ecx, [esi+4]
0x7B87A7: push    ecx; lpAddend
0x7B87A8: call    ebp ; InterlockedDecrement
0x7B87AA: test    eax, eax
0x7B87AC: jnz     short loc_7B87BC
0x7B87AE: cmp     esi, ebx
0x7B87B0: jz      short loc_7B87BC
0x7B87B2: mov     edx, [esi]
0x7B87B4: mov     eax, [edx]
0x7B87B6: push    1
0x7B87B8: mov     ecx, esi
0x7B87BA: call    eax
0x7B87BC: mov     ds:0B43114h, ebx
0x7B87C2: mov     esi, ds:0B430F4h
0x7B87C8: cmp     esi, ebx
0x7B87CA: jz      short loc_7B87EA
0x7B87CC: lea     ecx, [esi+4]
0x7B87CF: push    ecx; lpAddend
0x7B87D0: call    ebp ; InterlockedDecrement
0x7B87D2: test    eax, eax
0x7B87D4: jnz     short loc_7B87E4
0x7B87D6: cmp     esi, ebx
0x7B87D8: jz      short loc_7B87E4
0x7B87DA: mov     edx, [esi]
0x7B87DC: mov     eax, [edx]
0x7B87DE: push    1
0x7B87E0: mov     ecx, esi
0x7B87E2: call    eax
0x7B87E4: mov     ds:0B430F4h, ebx
0x7B87EA: mov     esi, ds:0B430E8h
0x7B87F0: cmp     esi, ebx
0x7B87F2: jz      short loc_7B8812
0x7B87F4: lea     ecx, [esi+4]
0x7B87F7: push    ecx; lpAddend
0x7B87F8: call    ebp ; InterlockedDecrement
0x7B87FA: test    eax, eax
0x7B87FC: jnz     short loc_7B880C
0x7B87FE: cmp     esi, ebx
0x7B8800: jz      short loc_7B880C
0x7B8802: mov     edx, [esi]
0x7B8804: mov     eax, [edx]
0x7B8806: push    1
0x7B8808: mov     ecx, esi
0x7B880A: call    eax
0x7B880C: mov     ds:0B430E8h, ebx
0x7B8812: mov     esi, ds:0B43118h
0x7B8818: cmp     esi, ebx
0x7B881A: jz      short loc_7B883A
0x7B881C: lea     ecx, [esi+4]
0x7B881F: push    ecx; lpAddend
0x7B8820: call    ebp ; InterlockedDecrement
0x7B8822: test    eax, eax
0x7B8824: jnz     short loc_7B8834
0x7B8826: cmp     esi, ebx
0x7B8828: jz      short loc_7B8834
0x7B882A: mov     edx, [esi]
0x7B882C: mov     eax, [edx]
0x7B882E: push    1
0x7B8830: mov     ecx, esi
0x7B8832: call    eax
0x7B8834: mov     ds:0B43118h, ebx
0x7B883A: mov     esi, ds:0B43124h
0x7B8840: cmp     esi, ebx
0x7B8842: jz      short loc_7B8862
0x7B8844: lea     ecx, [esi+4]
0x7B8847: push    ecx; lpAddend
0x7B8848: call    ebp ; InterlockedDecrement
0x7B884A: test    eax, eax
0x7B884C: jnz     short loc_7B885C
0x7B884E: cmp     esi, ebx
0x7B8850: jz      short loc_7B885C
0x7B8852: mov     edx, [esi]
0x7B8854: mov     eax, [edx]
0x7B8856: push    1
0x7B8858: mov     ecx, esi
0x7B885A: call    eax
0x7B885C: mov     ds:0B43124h, ebx
0x7B8862: mov     ecx, ds:0B42D7Ch
0x7B8868: cmp     ecx, ebx
0x7B886A: jz      short loc_7B8882
0x7B886C: mov     esi, ecx
0x7B886E: call    ImageSpaceShaderList__Destroy
0x7B8873: push    esi
0x7B8874: call    FormHeapFree
0x7B8879: add     esp, 4
0x7B887C: mov     ds:0B42D7Ch, ebx
0x7B8882: mov     ecx, ds:0B42F50h; this
0x7B8888: cmp     ecx, ebx
0x7B888A: jz      short loc_7B88A2
0x7B888C: mov     esi, ecx
0x7B888E: call    BSTextureManager_Delete
0x7B8893: push    esi
0x7B8894: call    FormHeapFree
0x7B8899: add     esp, 4
0x7B889C: mov     ds:0B42F50h, ebx
0x7B88A2: mov     esi, ds:0B430FCh
0x7B88A8: cmp     esi, ebx
0x7B88AA: jz      short loc_7B88CA
0x7B88AC: lea     ecx, [esi+4]
0x7B88AF: push    ecx; lpAddend
0x7B88B0: call    ebp ; InterlockedDecrement
0x7B88B2: test    eax, eax
0x7B88B4: jnz     short loc_7B88C4
0x7B88B6: cmp     esi, ebx
0x7B88B8: jz      short loc_7B88C4
0x7B88BA: mov     edx, [esi]
0x7B88BC: mov     eax, [edx]
0x7B88BE: push    1
0x7B88C0: mov     ecx, esi
0x7B88C2: call    eax
0x7B88C4: mov     ds:0B430FCh, ebx
0x7B88CA: push    ebx
0x7B88CB: call    sub_7AB1D0
0x7B88D0: add     esp, 4
0x7B88D3: mov     ds:0B42F31h, bl
0x7B88D9: mov     esi, ds:0B43104h
0x7B88DF: cmp     esi, ebx
0x7B88E1: jz      short loc_7B8901
0x7B88E3: lea     ecx, [esi+4]
0x7B88E6: push    ecx; lpAddend
0x7B88E7: call    ebp ; InterlockedDecrement
0x7B88E9: test    eax, eax
0x7B88EB: jnz     short loc_7B88FB
0x7B88ED: cmp     esi, ebx
0x7B88EF: jz      short loc_7B88FB
0x7B88F1: mov     edx, [esi]
0x7B88F3: mov     eax, [edx]
0x7B88F5: push    1
0x7B88F7: mov     ecx, esi
0x7B88F9: call    eax
0x7B88FB: mov     ds:0B43104h, ebx
0x7B8901: pop     esi
0x7B8902: pop     ebp
0x7B8903: mov     ds:0B42EB8h, ebx
0x7B8909: pop     ebx
0x7B890A: retn
