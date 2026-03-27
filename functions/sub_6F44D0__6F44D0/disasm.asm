0x6F44D0: push    ebp
0x6F44D1: mov     ebp, esp
0x6F44D3: push    0FFFFFFFFh
0x6F44D5: push    offset SEH_6F44D0
0x6F44DA: mov     eax, large fs:0
0x6F44E0: push    eax
0x6F44E1: sub     esp, 48h
0x6F44E4: mov     eax, ds:0B30AACh
0x6F44E9: xor     eax, ebp
0x6F44EB: mov     [ebp+var_14], eax
0x6F44EE: push    ebx
0x6F44EF: push    esi
0x6F44F0: push    edi
0x6F44F1: push    eax
0x6F44F2: lea     eax, [ebp+var_C]
0x6F44F5: mov     large fs:0, eax
0x6F44FB: mov     [ebp+var_10], esp
0x6F44FE: mov     eax, [ebp+arg_C]
0x6F4501: mov     esi, ecx
0x6F4503: push    eax
0x6F4504: lea     ecx, [ebp+var_44]
0x6F4507: mov     [ebp+var_4C], esi
0x6F450A: call    sub_6F2DB0
0x6F450F: mov     ecx, [esi+4]
0x6F4512: xor     ebx, ebx
0x6F4514: cmp     ecx, ebx
0x6F4516: mov     [ebp+var_4], ebx
0x6F4519: jz      short loc_6F4531
0x6F451B: mov     edx, [esi+0Ch]
0x6F451E: sub     edx, ecx
0x6F4520: mov     eax, 2AAAAAABh
0x6F4525: imul    edx
0x6F4527: sar     edx, 3
0x6F452A: mov     ebx, edx
0x6F452C: shr     ebx, 1Fh
0x6F452F: add     ebx, edx
0x6F4531: mov     edi, [ebp+arg_8]
0x6F4534: test    edi, edi
0x6F4536: jz      loc_6F47A2
0x6F453C: test    ecx, ecx
0x6F453E: jnz     short loc_6F4544
0x6F4540: xor     eax, eax
0x6F4542: jmp     short loc_6F455A
0x6F4544: mov     edx, [esi+8]
0x6F4547: sub     edx, ecx
0x6F4549: mov     eax, 2AAAAAABh
0x6F454E: imul    edx
0x6F4550: sar     edx, 3
0x6F4553: mov     eax, edx
0x6F4555: shr     eax, 1Fh
0x6F4558: add     eax, edx
0x6F455A: mov     edx, 5555555h
0x6F455F: sub     edx, eax
0x6F4561: cmp     edx, edi
0x6F4563: jnb     short loc_6F456A
0x6F4565: call    sub_790B90
0x6F456A: test    ecx, ecx
0x6F456C: jnz     short loc_6F4572
0x6F456E: xor     eax, eax
0x6F4570: jmp     short loc_6F4588
0x6F4572: mov     edx, [esi+8]
0x6F4575: sub     edx, ecx
0x6F4577: mov     eax, 2AAAAAABh
0x6F457C: imul    edx
0x6F457E: sar     edx, 3
0x6F4581: mov     eax, edx
0x6F4583: shr     eax, 1Fh
0x6F4586: add     eax, edx
0x6F4588: add     eax, edi
0x6F458A: cmp     ebx, eax
0x6F458C: jnb     loc_6F46BC
0x6F4592: mov     eax, ebx
0x6F4594: shr     eax, 1
0x6F4596: mov     edx, 5555555h
0x6F459B: sub     edx, eax
0x6F459D: cmp     edx, ebx
0x6F459F: jnb     short loc_6F45A5
0x6F45A1: xor     ebx, ebx
0x6F45A3: jmp     short loc_6F45A7
0x6F45A5: add     ebx, eax
0x6F45A7: test    ecx, ecx
0x6F45A9: jnz     short loc_6F45AF
0x6F45AB: xor     eax, eax
0x6F45AD: jmp     short loc_6F45C5
0x6F45AF: mov     edx, [esi+8]
0x6F45B2: sub     edx, ecx
0x6F45B4: mov     eax, 2AAAAAABh
0x6F45B9: imul    edx
0x6F45BB: sar     edx, 3
0x6F45BE: mov     eax, edx
0x6F45C0: shr     eax, 1Fh
0x6F45C3: add     eax, edx
0x6F45C5: add     eax, edi
0x6F45C7: cmp     ebx, eax
0x6F45C9: jnb     short loc_6F45D6
0x6F45CB: mov     ecx, esi
0x6F45CD: call    sub_799F10
0x6F45D2: mov     ebx, eax
0x6F45D4: add     ebx, edi
0x6F45D6: push    0
0x6F45D8: push    ebx; char *
0x6F45D9: call    sub_799FA0
0x6F45DE: mov     ecx, [esi+4]
0x6F45E1: mov     byte ptr [ebp+var_48], 0
0x6F45E5: mov     edx, [ebp+var_48]
0x6F45E8: push    edx
0x6F45E9: mov     edx, [ebp+var_48]
0x6F45EC: push    edx
0x6F45ED: push    esi
0x6F45EE: push    eax
0x6F45EF: mov     [ebp+var_54], eax
0x6F45F2: mov     [ebp+var_50], eax
0x6F45F5: mov     eax, [ebp+arg_4]
0x6F45F8: push    eax
0x6F45F9: push    ecx
0x6F45FA: mov     byte ptr [ebp+var_4], 1
0x6F45FE: call    sub_6F33C0
0x6F4603: add     esp, 20h
0x6F4606: lea     ecx, [ebp+var_44]
0x6F4609: push    ecx
0x6F460A: push    edi
0x6F460B: push    eax
0x6F460C: mov     ecx, esi
0x6F460E: mov     [ebp+var_50], eax
0x6F4611: call    sub_6F4120
0x6F4616: mov     ecx, [esi+8]
0x6F4619: mov     byte ptr [ebp+var_48], 0
0x6F461D: mov     edx, [ebp+var_48]
0x6F4620: push    edx
0x6F4621: mov     edx, [ebp+var_48]
0x6F4624: push    edx
0x6F4625: push    esi
0x6F4626: push    eax
0x6F4627: mov     [ebp+var_50], eax
0x6F462A: mov     eax, [ebp+arg_4]
0x6F462D: push    ecx
0x6F462E: push    eax
0x6F462F: call    sub_6F33C0
0x6F4634: mov     ecx, [esi+4]
0x6F4637: add     esp, 18h
0x6F463A: test    ecx, ecx
0x6F463C: jnz     short loc_6F4642
0x6F463E: xor     eax, eax
0x6F4640: jmp     short loc_6F4658
0x6F4642: mov     edx, [esi+8]
0x6F4645: sub     edx, ecx
0x6F4647: mov     eax, 2AAAAAABh
0x6F464C: imul    edx
0x6F464E: sar     edx, 3
0x6F4651: mov     eax, edx
0x6F4653: shr     eax, 1Fh
0x6F4656: add     eax, edx
0x6F4658: add     edi, eax
0x6F465A: test    ecx, ecx
0x6F465C: jz      short loc_6F4679
0x6F465E: mov     edx, [ebp+var_48]
0x6F4661: mov     eax, [esi+8]
0x6F4664: push    edx
0x6F4665: push    esi
0x6F4666: push    eax
0x6F4667: push    ecx
0x6F4668: call    sub_5570D0
0x6F466D: mov     ecx, [esi+4]
0x6F4670: push    ecx
0x6F4671: call    FormHeapFree
0x6F4676: add     esp, 14h
0x6F4679: mov     eax, [ebp+var_54]
0x6F467C: lea     edx, [ebx+ebx*2]
0x6F467F: shl     edx, 4
0x6F4682: lea     ecx, [edi+edi*2]
0x6F4685: add     edx, eax
0x6F4687: shl     ecx, 4
0x6F468A: add     ecx, eax
0x6F468C: mov     [esi+0Ch], edx
0x6F468F: mov     [esi+8], ecx
0x6F4692: mov     [esi+4], eax
0x6F4695: jmp     loc_6F47A2
0x6F469A: mov     edx, [ebp+var_50]
0x6F469D: mov     esi, [ebp+var_54]
0x6F46A0: mov     ecx, [ebp+var_4C]
0x6F46A3: push    edx
0x6F46A4: push    esi
0x6F46A5: call    sub_557720
0x6F46AA: push    esi
0x6F46AB: call    FormHeapFree
0x6F46B0: add     esp, 4
0x6F46B3: push    0
0x6F46B5: push    0
0x6F46B7: call    ThrowException??
0x6F46BC: mov     ecx, [esi+8]
0x6F46BF: mov     ebx, [ebp+arg_4]
0x6F46C2: mov     edx, ecx
0x6F46C4: sub     edx, ebx
0x6F46C6: mov     eax, 2AAAAAABh
0x6F46CB: imul    edx
0x6F46CD: sar     edx, 3
0x6F46D0: mov     eax, edx
0x6F46D2: shr     eax, 1Fh
0x6F46D5: add     eax, edx
0x6F46D7: cmp     eax, edi
0x6F46D9: mov     [ebp+var_48], ecx
0x6F46DC: jnb     loc_6F476A
0x6F46E2: lea     eax, [edi+edi*2]
0x6F46E5: shl     eax, 4
0x6F46E8: mov     [ebp+var_48], eax
0x6F46EB: add     eax, ebx
0x6F46ED: push    eax
0x6F46EE: push    ecx
0x6F46EF: push    ebx
0x6F46F0: mov     ecx, esi
0x6F46F2: call    sub_6F4190
0x6F46F7: mov     ecx, [esi+8]
0x6F46FA: lea     edx, [ebp+var_44]
0x6F46FD: push    edx
0x6F46FE: mov     edx, ecx
0x6F4700: sub     edx, ebx
0x6F4702: mov     eax, 2AAAAAABh
0x6F4707: imul    edx
0x6F4709: sar     edx, 3
0x6F470C: mov     eax, edx
0x6F470E: shr     eax, 1Fh
0x6F4711: add     eax, edx
0x6F4713: sub     edi, eax
0x6F4715: push    edi
0x6F4716: push    ecx
0x6F4717: mov     ecx, esi
0x6F4719: mov     byte ptr [ebp+var_4], 3
0x6F471D: call    sub_6F4120
0x6F4722: mov     eax, [ebp+var_48]
0x6F4725: add     [esi+8], eax
0x6F4728: mov     esi, [esi+8]
0x6F472B: lea     ecx, [ebp+var_44]
0x6F472E: push    ecx
0x6F472F: sub     esi, eax
0x6F4731: push    esi
0x6F4732: push    ebx
0x6F4733: mov     [ebp+var_4], 0
0x6F473A: call    sub_6F3210
0x6F473F: add     esp, 0Ch
0x6F4742: jmp     short loc_6F47A2
0x6F4744: mov     eax, [ebp+arg_8]
0x6F4747: mov     ecx, [ebp+var_4C]
0x6F474A: mov     edx, [ecx+8]
0x6F474D: lea     eax, [eax+eax*2]
0x6F4750: shl     eax, 4
0x6F4753: add     edx, eax
0x6F4755: push    edx
0x6F4756: mov     edx, [ebp+arg_4]
0x6F4759: add     eax, edx
0x6F475B: push    eax
0x6F475C: call    sub_557720
0x6F4761: push    0
0x6F4763: push    0
0x6F4765: call    ThrowException??
0x6F476A: push    ecx
0x6F476B: lea     edi, [edi+edi*2]
0x6F476E: mov     eax, ecx
0x6F4770: shl     edi, 4
0x6F4773: sub     eax, edi
0x6F4775: push    ecx
0x6F4776: push    eax
0x6F4777: mov     ecx, esi
0x6F4779: mov     [ebp+var_4C], eax
0x6F477C: call    sub_6F4190
0x6F4781: mov     ecx, [ebp+var_4C]
0x6F4784: mov     [esi+8], eax
0x6F4787: mov     eax, [ebp+var_48]
0x6F478A: push    eax
0x6F478B: push    ecx
0x6F478C: push    ebx
0x6F478D: call    sub_6F3EA0
0x6F4792: lea     edx, [ebp+var_44]
0x6F4795: push    edx
0x6F4796: add     edi, ebx
0x6F4798: push    edi
0x6F4799: push    ebx
0x6F479A: call    sub_6F3210
0x6F479F: add     esp, 18h
0x6F47A2: mov     eax, [ebp+var_20]
0x6F47A5: test    eax, eax
0x6F47A7: jz      short loc_6F47B2
0x6F47A9: push    eax
0x6F47AA: call    FormHeapFree
0x6F47AF: add     esp, 4
0x6F47B2: xor     eax, eax
0x6F47B4: cmp     [ebp+var_2C], 10h
0x6F47B8: mov     [ebp+var_20], eax
0x6F47BB: mov     [ebp+var_1C], eax
0x6F47BE: mov     [ebp+var_18], eax
0x6F47C1: jb      short loc_6F47CF
0x6F47C3: mov     eax, [ebp+var_40]
0x6F47C6: push    eax
0x6F47C7: call    FormHeapFree
0x6F47CC: add     esp, 4
0x6F47CF: mov     ecx, [ebp+var_C]
0x6F47D2: mov     large fs:0, ecx
0x6F47D9: pop     ecx
0x6F47DA: pop     edi
0x6F47DB: pop     esi
0x6F47DC: pop     ebx
0x6F47DD: mov     ecx, [ebp+var_14]
0x6F47E0: xor     ecx, ebp
0x6F47E2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6F47E7: mov     esp, ebp
0x6F47E9: pop     ebp
0x6F47EA: retn    10h
