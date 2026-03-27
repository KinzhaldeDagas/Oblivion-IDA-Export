0x43B5E0: push    0FFFFFFFFh
0x43B5E2: push    offset SEH_43B5E0
0x43B5E7: mov     eax, large fs:0
0x43B5ED: push    eax
0x43B5EE: sub     esp, 8
0x43B5F1: push    ebx
0x43B5F2: push    ebp
0x43B5F3: push    esi
0x43B5F4: push    edi
0x43B5F5: mov     eax, ___security_cookie
0x43B5FA: xor     eax, esp
0x43B5FC: push    eax
0x43B5FD: lea     eax, [esp+28h+var_C]
0x43B601: mov     large fs:0, eax
0x43B607: xor     ebx, ebx
0x43B609: mov     [esp+28h+var_10], ebx
0x43B60D: mov     ecx, [ecx]
0x43B60F: mov     esi, [esp+28h+arg_4]
0x43B613: lea     edx, [esp+28h+var_14]
0x43B617: mov     [esp+28h+var_14], ebx
0x43B61B: mov     eax, [ecx]
0x43B61D: mov     eax, [eax+4]
0x43B620: push    edx
0x43B621: push    esi
0x43B622: call    eax
0x43B624: test    al, al
0x43B626: jz      loc_43B6B9
0x43B62C: cmp     byte ptr [esp+28h+arg_20], bl
0x43B630: jz      short loc_43B640
0x43B632: mov     ecx, [esp+28h+var_14]
0x43B636: add     ecx, 4
0x43B639: push    ecx; lpAddend
0x43B63A: call    ds:InterlockedIncrement
0x43B640: mov     edi, [esp+28h+arg_10]
0x43B644: cmp     edi, ebx
0x43B646: jz      short loc_43B6AE
0x43B648: push    38h ; '8'; Size
0x43B64A: call    FormHeapAlloc
0x43B64F: add     esp, 4
0x43B652: cmp     eax, ebx
0x43B654: jz      short loc_43B66B
0x43B656: mov     edx, [esp+28h+arg_C]
0x43B65A: mov     ecx, [esp+28h+var_14]
0x43B65E: push    edx
0x43B65F: push    ecx
0x43B660: mov     ecx, eax
0x43B662: call    sub_437430
0x43B667: mov     esi, eax
0x43B669: jmp     short loc_43B66D
0x43B66B: xor     esi, esi
0x43B66D: cmp     esi, ebx
0x43B66F: mov     [esp+28h+arg_20], esi
0x43B673: jz      short loc_43B67F
0x43B675: lea     edx, [esi+8]
0x43B678: push    edx; lpAddend
0x43B679: call    ds:InterlockedIncrement
0x43B67F: mov     ebp, 1
0x43B684: push    edi
0x43B685: mov     ecx, esi
0x43B687: mov     [esp+2Ch+var_4], ebp
0x43B68B: call    sub_43AC40
0x43B690: mov     eax, [esi]
0x43B692: mov     edx, [eax+28h]
0x43B695: mov     ecx, esi
0x43B697: call    edx
0x43B699: mov     ebx, [esp+28h+arg_0]
0x43B69D: lea     edi, [esi+8]
0x43B6A0: push    edi; lpAddend
0x43B6A1: mov     [ebx], esi
0x43B6A3: call    ds:InterlockedIncrement
0x43B6A9: jmp     loc_43B741
0x43B6AE: mov     eax, [esp+28h+arg_0]
0x43B6B2: mov     [eax], ebx
0x43B6B4: jmp     loc_43B760
0x43B6B9: push    38h ; '8'; Size
0x43B6BB: call    FormHeapAlloc
0x43B6C0: add     esp, 4
0x43B6C3: mov     [esp+28h+arg_4], eax
0x43B6C7: cmp     eax, ebx
0x43B6C9: mov     [esp+28h+var_4], 2
0x43B6D1: jz      short loc_43B6F8
0x43B6D3: mov     ecx, [esp+28h+arg_20]
0x43B6D7: mov     edx, [esp+28h+arg_1C]
0x43B6DB: push    ecx
0x43B6DC: mov     ecx, [esp+2Ch+arg_18]
0x43B6E0: push    edx
0x43B6E1: mov     edx, [esp+30h+arg_14]
0x43B6E5: push    ecx
0x43B6E6: mov     ecx, [esp+34h+arg_C]
0x43B6EA: push    edx
0x43B6EB: push    ecx
0x43B6EC: push    esi
0x43B6ED: mov     ecx, eax
0x43B6EF: call    sub_437250
0x43B6F4: mov     esi, eax
0x43B6F6: jmp     short loc_43B6FA
0x43B6F8: xor     esi, esi
0x43B6FA: cmp     esi, ebx
0x43B6FC: mov     ebp, ds:InterlockedIncrement
0x43B702: mov     [esp+28h+arg_20], esi
0x43B706: jz      short loc_43B70E
0x43B708: lea     edx, [esi+8]
0x43B70B: push    edx; lpAddend
0x43B70C: call    ebp ; InterlockedIncrement
0x43B70E: mov     eax, [esp+28h+arg_10]
0x43B712: push    eax
0x43B713: mov     ecx, esi
0x43B715: mov     [esp+2Ch+var_4], 3
0x43B71D: call    sub_43AC40
0x43B722: mov     edx, [esi]
0x43B724: mov     eax, [esp+28h+arg_8]
0x43B728: mov     edx, [edx+30h]
0x43B72B: push    eax
0x43B72C: mov     ecx, esi
0x43B72E: call    edx
0x43B730: mov     ebx, [esp+28h+arg_0]
0x43B734: lea     edi, [esi+8]
0x43B737: push    edi; lpAddend
0x43B738: mov     [ebx], esi
0x43B73A: call    ebp ; InterlockedIncrement
0x43B73C: mov     ebp, 1
0x43B741: push    edi; lpAddend
0x43B742: mov     byte ptr [esp+2Ch+var_4], 0
0x43B747: mov     [esp+2Ch+var_10], ebp
0x43B74B: call    ds:InterlockedDecrement
0x43B751: test    eax, eax
0x43B753: jnz     short loc_43B75E
0x43B755: mov     eax, [esi]
0x43B757: mov     edx, [eax]
0x43B759: push    ebp
0x43B75A: mov     ecx, esi
0x43B75C: call    edx
0x43B75E: mov     eax, ebx
0x43B760: mov     ecx, [esp+28h+var_C]
0x43B764: mov     large fs:0, ecx
0x43B76B: pop     ecx
0x43B76C: pop     edi
0x43B76D: pop     esi
0x43B76E: pop     ebp
0x43B76F: pop     ebx
0x43B770: add     esp, 14h
0x43B773: retn    24h ; '$'
