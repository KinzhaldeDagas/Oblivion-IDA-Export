0x6C4510: push    0FFFFFFFFh
0x6C4512: push    offset SEH_6C4510
0x6C4517: mov     eax, large fs:0
0x6C451D: push    eax
0x6C451E: push    ecx
0x6C451F: push    ebx
0x6C4520: push    ebp
0x6C4521: push    esi
0x6C4522: push    edi
0x6C4523: mov     eax, ds:0B30AACh
0x6C4528: xor     eax, esp
0x6C452A: push    eax
0x6C452B: lea     eax, [esp+24h+var_C]
0x6C452F: mov     large fs:0, eax
0x6C4535: mov     esi, ecx
0x6C4537: movzx   eax, word ptr [esi+8]
0x6C453B: mov     ebp, [esp+24h+arg_0]
0x6C453F: cmp     ebp, eax
0x6C4541: jz      loc_6C4735
0x6C4547: movzx   eax, word ptr [esi+0Ah]
0x6C454B: movzx   ecx, ax
0x6C454E: cmp     ebp, ecx
0x6C4550: jnb     short loc_6C45C7
0x6C4552: cmp     bp, ax
0x6C4555: movzx   ecx, bp
0x6C4558: mov     [esp+24h+arg_0], ecx
0x6C455C: jnb     short loc_6C45C3
0x6C455E: mov     edi, edi
0x6C4560: mov     eax, [esi+4]
0x6C4563: movzx   edx, cx
0x6C4566: lea     ebx, [eax+edx*4]
0x6C4569: xor     edx, edx
0x6C456B: cmp     [ebx], edx
0x6C456D: setnz   al
0x6C4570: test    al, al
0x6C4572: jz      short loc_6C45B6
0x6C4574: mov     [esp+24h+var_10], edx
0x6C4578: mov     edi, [ebx]
0x6C457A: cmp     edi, edx
0x6C457C: mov     [esp+24h+var_4], edx
0x6C4580: jz      short loc_6C45A8
0x6C4582: lea     ecx, [edi+4]
0x6C4585: push    ecx; lpAddend
0x6C4586: call    dword ptr ds:0A2807Ch
0x6C458C: test    eax, eax
0x6C458E: jnz     short loc_6C459E
0x6C4590: test    edi, edi
0x6C4592: jz      short loc_6C459E
0x6C4594: mov     edx, [edi]
0x6C4596: mov     eax, [edx]
0x6C4598: push    1
0x6C459A: mov     ecx, edi
0x6C459C: call    eax
0x6C459E: mov     ecx, [esp+24h+arg_0]
0x6C45A2: mov     dword ptr [ebx], 0
0x6C45A8: add     word ptr [esi+0Ch], 0FFFFh
0x6C45AE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6C45B6: add     ecx, 1
0x6C45B9: cmp     cx, [esi+0Ah]
0x6C45BD: mov     [esp+24h+arg_0], ecx
0x6C45C1: jb      short loc_6C4560
0x6C45C3: mov     [esi+0Ah], bp
0x6C45C7: test    ebp, ebp
0x6C45C9: mov     eax, [esi+4]
0x6C45CC: mov     [esp+24h+var_10], eax
0x6C45D0: mov     [esi+8], bp
0x6C45D4: jbe     loc_6C474B
0x6C45DA: movzx   edi, bp
0x6C45DD: xor     ecx, ecx
0x6C45DF: mov     eax, edi
0x6C45E1: mov     edx, 4
0x6C45E6: mul     edx
0x6C45E8: seto    cl
0x6C45EB: neg     ecx
0x6C45ED: or      ecx, eax
0x6C45EF: xor     eax, eax
0x6C45F1: add     ecx, 4
0x6C45F4: setb    al
0x6C45F7: neg     eax
0x6C45F9: or      eax, ecx
0x6C45FB: push    eax; Size
0x6C45FC: call    FormHeapAlloc
0x6C4601: add     esp, 4
0x6C4604: mov     [esp+24h+arg_0], eax
0x6C4608: test    eax, eax
0x6C460A: mov     [esp+24h+var_4], 1
0x6C4612: jz      short loc_6C462E
0x6C4614: push    offset sub_7016A0; a5
0x6C4619: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x6C461E: push    edi; size
0x6C461F: lea     ebx, [eax+4]
0x6C4622: push    4; a2
0x6C4624: push    ebx; a1
0x6C4625: mov     [eax], edi
0x6C4627: call    ArrayConstructor
0x6C462C: jmp     short loc_6C4630
0x6C462E: xor     ebx, ebx
0x6C4630: xor     eax, eax
0x6C4632: cmp     [esi+0Ah], ax
0x6C4636: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6C463E: mov     [esi+4], ebx
0x6C4641: mov     [esp+24h+arg_0], eax
0x6C4645: jbe     short loc_6C46B2
0x6C4647: jmp     short loc_6C4650
0x6C4649: align 10h
0x6C4650: mov     ebp, [esi+4]
0x6C4653: mov     ecx, [esp+24h+var_10]
0x6C4657: movzx   edi, ax
0x6C465A: add     edi, edi
0x6C465C: add     edi, edi
0x6C465E: mov     ebx, [ebp+edi+0]
0x6C4662: add     ebp, edi
0x6C4664: cmp     ebx, [edi+ecx]
0x6C4667: jz      short loc_6C46A1
0x6C4669: test    ebx, ebx
0x6C466B: jz      short loc_6C4689
0x6C466D: lea     edx, [ebx+4]
0x6C4670: push    edx; lpAddend
0x6C4671: call    dword ptr ds:0A2807Ch
0x6C4677: test    eax, eax
0x6C4679: jnz     short loc_6C4689
0x6C467B: test    ebx, ebx
0x6C467D: jz      short loc_6C4689
0x6C467F: mov     eax, [ebx]
0x6C4681: mov     edx, [eax]
0x6C4683: push    1
0x6C4685: mov     ecx, ebx
0x6C4687: call    edx
0x6C4689: mov     eax, [esp+24h+var_10]
0x6C468D: mov     edi, [edi+eax]
0x6C4690: test    edi, edi
0x6C4692: mov     [ebp+0], edi
0x6C4695: jz      short loc_6C46A1
0x6C4697: add     edi, 4
0x6C469A: push    edi; lpAddend
0x6C469B: call    dword ptr ds:0A28078h
0x6C46A1: mov     eax, [esp+24h+arg_0]
0x6C46A5: add     eax, 1
0x6C46A8: cmp     ax, [esi+0Ah]
0x6C46AC: mov     [esp+24h+arg_0], eax
0x6C46B0: jb      short loc_6C4650
0x6C46B2: movzx   ebx, word ptr [esi+0Ah]
0x6C46B6: cmp     bx, [esi+8]
0x6C46BA: jnb     short loc_6C4710
0x6C46BC: mov     [esp+24h+arg_0], 0
0x6C46C4: mov     edx, [esi+4]
0x6C46C7: movzx   ecx, bx
0x6C46CA: mov     edi, [edx+ecx*4]
0x6C46CD: test    edi, edi
0x6C46CF: lea     ebp, [edx+ecx*4]
0x6C46D2: mov     [esp+24h+var_4], 2
0x6C46DA: jz      short loc_6C46FF
0x6C46DC: lea     eax, [edi+4]
0x6C46DF: push    eax; lpAddend
0x6C46E0: call    dword ptr ds:0A2807Ch
0x6C46E6: test    eax, eax
0x6C46E8: jnz     short loc_6C46F8
0x6C46EA: test    edi, edi
0x6C46EC: jz      short loc_6C46F8
0x6C46EE: mov     edx, [edi]
0x6C46F0: mov     eax, [edx]
0x6C46F2: push    1
0x6C46F4: mov     ecx, edi
0x6C46F6: call    eax
0x6C46F8: mov     dword ptr [ebp+0], 0
0x6C46FF: add     ebx, 1
0x6C4702: cmp     bx, [esi+8]
0x6C4706: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6C470E: jb      short loc_6C46C4
0x6C4710: mov     eax, [esp+24h+var_10]
0x6C4714: test    eax, eax
0x6C4716: jz      short loc_6C4735
0x6C4718: mov     ecx, [eax-4]
0x6C471B: lea     esi, [eax-4]
0x6C471E: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6C4723: push    ecx; int
0x6C4724: push    4; unsigned int
0x6C4726: push    eax; void *
0x6C4727: call    $LN21
0x6C472C: push    esi
0x6C472D: call    FormHeapFree
0x6C4732: add     esp, 4
0x6C4735: mov     ecx, [esp+24h+var_C]
0x6C4739: mov     large fs:0, ecx
0x6C4740: pop     ecx
0x6C4741: pop     edi
0x6C4742: pop     esi
0x6C4743: pop     ebp
0x6C4744: pop     ebx
0x6C4745: add     esp, 10h
0x6C4748: retn    4
0x6C474B: mov     dword ptr [esi+4], 0
0x6C4752: jmp     short loc_6C4714
