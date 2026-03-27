0x9A4370: sub     esp, 18h
0x9A4373: mov     eax, [esp+18h+arg_4]
0x9A4377: push    ebx
0x9A4378: push    ebp
0x9A4379: push    esi
0x9A437A: mov     esi, ecx
0x9A437C: push    edi; ArgList
0x9A437D: mov     edi, [eax+18h]
0x9A4380: mov     ecx, edi
0x9A4382: shr     ecx, 19h
0x9A4385: and     cl, 1
0x9A4388: mov     [esp+28h+var_18], cl
0x9A438C: mov     eax, edi
0x9A438E: and     eax, 0F0000000h
0x9A4393: mov     edx, edi
0x9A4395: shr     edx, 18h
0x9A4398: and     dl, 1
0x9A439B: mov     ecx, edi
0x9A439D: and     ecx, 0FFFh
0x9A43A3: mov     [esp+28h+var_4], eax
0x9A43A7: mov     eax, [esi]
0x9A43A9: mov     byte ptr [esp+28h+var_14], dl
0x9A43AD: mov     edx, [eax+3Ch]
0x9A43B0: push    ecx
0x9A43B1: mov     ecx, esi
0x9A43B3: call    edx
0x9A43B5: mov     ebx, eax
0x9A43B7: mov     eax, [esi]
0x9A43B9: mov     edx, [eax+3Ch]
0x9A43BC: shr     edi, 0Ch
0x9A43BF: and     edi, 0FFFh
0x9A43C5: push    edi
0x9A43C6: mov     ecx, esi
0x9A43C8: call    edx
0x9A43CA: test    ebx, ebx
0x9A43CC: mov     ebp, eax
0x9A43CE: mov     [esp+28h+var_8], ebp
0x9A43D2: jz      loc_9A4642
0x9A43D8: test    ebp, ebp
0x9A43DA: jz      loc_9A4642
0x9A43E0: cmp     byte_B4295B, 0
0x9A43E7: mov     edi, [ebx+14h]
0x9A43EA: jnz     short loc_9A43F1
0x9A43EC: call    sub_783C70
0x9A43F1: and     edi, 0FFh
0x9A43F7: cmp     byte_B4295B, 0
0x9A43FE: mov     eax, dword_B428D8[edi*4]
0x9A4405: mov     edi, [ebp+14h]
0x9A4408: mov     [esp+28h+var_10], eax
0x9A440C: jnz     short loc_9A4413
0x9A440E: call    sub_783C70
0x9A4413: mov     eax, [ebx+14h]
0x9A4416: mov     ebp, [esp+28h+arg_18]
0x9A441A: and     edi, 0FFh
0x9A4420: mov     ecx, dword_B428D8[edi*4]
0x9A4427: mov     edi, [esp+28h+arg_1C]
0x9A442B: and     eax, 0F0000000h
0x9A4430: cmp     eax, 20000000h
0x9A4435: mov     [esp+28h+var_C], ecx
0x9A4439: jnz     short loc_9A446D
0x9A443B: mov     eax, [ebx+0Ch]
0x9A443E: push    eax; Src
0x9A443F: call    sub_9A2690
0x9A4444: mov     edx, [esp+2Ch+arg_14]
0x9A4448: mov     ecx, [esp+2Ch+arg_C]
0x9A444C: add     esp, 4
0x9A444F: push    edi
0x9A4450: push    ebp
0x9A4451: push    edx
0x9A4452: mov     edx, [esp+34h+arg_8]
0x9A4456: mov     [esp+34h+var_10], eax
0x9A445A: mov     eax, [esp+34h+arg_10]
0x9A445E: push    eax
0x9A445F: push    ecx
0x9A4460: push    edx
0x9A4461: push    ebx
0x9A4462: push    0
0x9A4464: mov     ecx, esi
0x9A4466: call    sub_9A3A60
0x9A446B: jmp     short loc_9A44CB
0x9A446D: cmp     eax, 40000000h
0x9A4472: jnz     short loc_9A4485
0x9A4474: mov     eax, [esp+28h+arg_20]
0x9A4478: push    eax
0x9A4479: push    ebx
0x9A447A: push    0
0x9A447C: mov     ecx, esi
0x9A447E: call    sub_9A3D20
0x9A4483: jmp     short loc_9A44CB
0x9A4485: cmp     eax, 30000000h
0x9A448A: jnz     short loc_9A44A4
0x9A448C: mov     ecx, [esp+28h+arg_20]
0x9A4490: mov     edx, [esp+28h+arg_10]
0x9A4494: mov     eax, [esp+28h+arg_C]
0x9A4498: push    ecx
0x9A4499: mov     ecx, [esp+2Ch+arg_8]
0x9A449D: push    edi
0x9A449E: push    ebp
0x9A449F: push    edx
0x9A44A0: push    eax
0x9A44A1: push    ecx
0x9A44A2: jmp     short loc_9A44C1
0x9A44A4: cmp     eax, 10000000h
0x9A44A9: jnz     short loc_9A44CB
0x9A44AB: mov     edx, [esp+28h+arg_20]
0x9A44AF: mov     eax, [esp+28h+arg_10]
0x9A44B3: mov     ecx, [esp+28h+arg_C]
0x9A44B7: push    edx
0x9A44B8: mov     edx, [esp+2Ch+arg_8]
0x9A44BC: push    edi
0x9A44BD: push    ebp
0x9A44BE: push    eax
0x9A44BF: push    ecx
0x9A44C0: push    edx
0x9A44C1: push    ebx
0x9A44C2: push    0
0x9A44C4: mov     ecx, esi
0x9A44C6: call    sub_9A4010
0x9A44CB: mov     ebx, [esp+28h+var_8]
0x9A44CF: mov     eax, [ebx+14h]
0x9A44D2: and     eax, 0F0000000h
0x9A44D7: cmp     eax, 20000000h
0x9A44DC: jnz     short loc_9A4510
0x9A44DE: mov     eax, [ebx+0Ch]
0x9A44E1: push    eax; Src
0x9A44E2: call    sub_9A2690
0x9A44E7: mov     ecx, [esp+2Ch+arg_10]
0x9A44EB: mov     edx, [esp+2Ch+arg_C]
0x9A44EF: add     esp, 4
0x9A44F2: push    edi
0x9A44F3: push    ebp
0x9A44F4: mov     [esp+30h+var_C], eax
0x9A44F8: mov     eax, [esp+30h+arg_14]
0x9A44FC: push    eax
0x9A44FD: mov     eax, [esp+34h+arg_8]
0x9A4501: push    ecx
0x9A4502: push    edx
0x9A4503: push    eax
0x9A4504: push    ebx
0x9A4505: push    1
0x9A4507: mov     ecx, esi
0x9A4509: call    sub_9A3A60
0x9A450E: jmp     short loc_9A455D
0x9A4510: cmp     eax, 30000000h
0x9A4515: jnz     short loc_9A4539
0x9A4517: mov     ecx, [esp+28h+arg_20]
0x9A451B: mov     edx, [esp+28h+arg_10]
0x9A451F: mov     eax, [esp+28h+arg_C]
0x9A4523: push    ecx
0x9A4524: mov     ecx, [esp+2Ch+arg_8]
0x9A4528: push    edi
0x9A4529: push    ebp
0x9A452A: push    edx
0x9A452B: push    eax
0x9A452C: push    ecx
0x9A452D: push    ebx
0x9A452E: push    1
0x9A4530: mov     ecx, esi
0x9A4532: call    sub_9A4010
0x9A4537: jmp     short loc_9A455D
0x9A4539: cmp     eax, 40000000h
0x9A453E: jnz     short loc_9A4547
0x9A4540: mov     edx, [esp+28h+arg_20]
0x9A4544: push    edx
0x9A4545: jmp     short loc_9A4553
0x9A4547: cmp     eax, 10000000h
0x9A454C: jnz     short loc_9A455D
0x9A454E: mov     eax, [esp+28h+arg_20]
0x9A4552: push    eax
0x9A4553: push    ebx
0x9A4554: push    1
0x9A4556: mov     ecx, esi
0x9A4558: call    sub_9A3D20
0x9A455D: mov     ecx, [esp+28h+var_10]
0x9A4561: test    ecx, ecx
0x9A4563: jz      loc_9A463B
0x9A4569: mov     edx, [esp+28h+var_C]
0x9A456D: test    edx, edx
0x9A456F: jz      loc_9A463B
0x9A4575: mov     eax, [esp+28h+var_4]
0x9A4579: cmp     eax, 30000000h
0x9A457E: ja      loc_9A460D
0x9A4584: jz      short loc_9A45E6
0x9A4586: cmp     eax, 10000000h
0x9A458B: jz      short loc_9A45BF
0x9A458D: cmp     eax, 20000000h
0x9A4592: jnz     loc_9A4653
0x9A4598: mov     eax, dword ptr [esp+28h+var_18]
0x9A459C: push    eax; char
0x9A459D: mov     eax, [esp+2Ch+var_14]
0x9A45A1: push    eax; float
0x9A45A2: push    edx; int
0x9A45A3: mov     edx, [esp+34h+arg_0]
0x9A45A7: push    ecx; int
0x9A45A8: mov     ecx, [esp+38h+arg_4]
0x9A45AC: push    ecx; int
0x9A45AD: push    edx; int
0x9A45AE: mov     ecx, esi
0x9A45B0: call    sub_9A2BD0
0x9A45B5: pop     edi
0x9A45B6: pop     esi
0x9A45B7: pop     ebp
0x9A45B8: pop     ebx
0x9A45B9: add     esp, 18h
0x9A45BC: retn    24h ; '$'
0x9A45BF: mov     eax, dword ptr [esp+28h+var_18]
0x9A45C3: push    eax
0x9A45C4: mov     eax, [esp+2Ch+var_14]
0x9A45C8: push    eax
0x9A45C9: push    edx
0x9A45CA: mov     edx, [esp+34h+arg_0]
0x9A45CE: push    ecx
0x9A45CF: mov     ecx, [esp+38h+arg_4]
0x9A45D3: push    ecx
0x9A45D4: push    edx
0x9A45D5: mov     ecx, esi
0x9A45D7: call    sub_9A28A0
0x9A45DC: pop     edi
0x9A45DD: pop     esi
0x9A45DE: pop     ebp
0x9A45DF: pop     ebx
0x9A45E0: add     esp, 18h
0x9A45E3: retn    24h ; '$'
0x9A45E6: mov     eax, dword ptr [esp+28h+var_18]
0x9A45EA: push    eax
0x9A45EB: mov     eax, [esp+2Ch+var_14]
0x9A45EF: push    eax
0x9A45F0: push    edx
0x9A45F1: mov     edx, [esp+34h+arg_0]
0x9A45F5: push    ecx
0x9A45F6: mov     ecx, [esp+38h+arg_4]
0x9A45FA: push    ecx
0x9A45FB: push    edx
0x9A45FC: mov     ecx, esi
0x9A45FE: call    sub_9A2E50
0x9A4603: pop     edi
0x9A4604: pop     esi
0x9A4605: pop     ebp
0x9A4606: pop     ebx
0x9A4607: add     esp, 18h
0x9A460A: retn    24h ; '$'
0x9A460D: cmp     eax, 40000000h
0x9A4612: jnz     short loc_9A4653
0x9A4614: mov     eax, dword ptr [esp+28h+var_18]
0x9A4618: push    eax
0x9A4619: mov     eax, [esp+2Ch+var_14]
0x9A461D: push    eax
0x9A461E: push    edx
0x9A461F: mov     edx, [esp+34h+arg_0]
0x9A4623: push    ecx
0x9A4624: mov     ecx, [esp+38h+arg_4]
0x9A4628: push    ecx
0x9A4629: push    edx
0x9A462A: mov     ecx, esi
0x9A462C: call    sub_9A3080
0x9A4631: pop     edi
0x9A4632: pop     esi
0x9A4633: pop     ebp
0x9A4634: pop     ebx
0x9A4635: add     esp, 18h
0x9A4638: retn    24h ; '$'
0x9A463B: push    offset aInvalidOperand; "Invalid operands in OperatorConstant\n"
0x9A4640: jmp     short loc_9A4647
0x9A4642: push    offset aInvalidEntries; "Invalid entries in OperatorConstant\n"
0x9A4647: push    0; int
0x9A4649: push    1; int
0x9A464B: call    sub_738460
0x9A4650: add     esp, 0Ch
0x9A4653: pop     edi
0x9A4654: pop     esi
0x9A4655: pop     ebp
0x9A4656: mov     eax, 1
0x9A465B: pop     ebx
0x9A465C: add     esp, 18h
0x9A465F: retn    24h ; '$'
