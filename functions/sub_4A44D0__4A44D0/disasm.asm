0x4A44D0: push    ecx
0x4A44D1: push    esi
0x4A44D2: mov     esi, [esp+8+arg_0]
0x4A44D6: test    esi, esi
0x4A44D8: push    edi
0x4A44D9: mov     edi, ecx
0x4A44DB: mov     [esp+0Ch+var_4], edi
0x4A44DF: jnz     short loc_4A4500
0x4A44E1: push    0Ch; Size
0x4A44E3: call    FormHeapAlloc
0x4A44E8: add     esp, 4
0x4A44EB: test    eax, eax
0x4A44ED: jz      short loc_4A44FC
0x4A44EF: mov     cl, [edi+8]
0x4A44F2: mov     [eax], esi
0x4A44F4: mov     [eax+4], esi
0x4A44F7: mov     [eax+8], cl
0x4A44FA: jmp     short loc_4A44FE
0x4A44FC: xor     eax, eax
0x4A44FE: mov     esi, eax
0x4A4500: test    edi, edi
0x4A4502: jz      loc_4A45DA
0x4A4508: push    ebx
0x4A4509: push    ebp
0x4A450A: lea     ebx, [ebx+0]
0x4A4510: cmp     byte ptr [esi+8], 0
0x4A4514: mov     eax, [esp+14h+var_4]
0x4A4518: jz      short loc_4A4567
0x4A451A: mov     ecx, [eax]
0x4A451C: mov     edx, [ecx]
0x4A451E: mov     eax, [edx+10h]
0x4A4521: call    eax
0x4A4523: mov     ebp, eax
0x4A4525: test    ebp, ebp
0x4A4527: jz      loc_4A45C5
0x4A452D: mov     edx, [ebp+0]
0x4A4530: mov     eax, [edx+0Ch]
0x4A4533: mov     ecx, ebp
0x4A4535: call    eax
0x4A4537: mov     ebx, eax
0x4A4539: mov     edi, esi
0x4A453B: jmp     short loc_4A4540
0x4A453D: align 10h
0x4A4540: mov     ecx, [edi]
0x4A4542: test    ecx, ecx
0x4A4544: jz      short loc_4A4551
0x4A4546: mov     edx, [ecx]
0x4A4548: mov     eax, [edx+0Ch]
0x4A454B: call    eax
0x4A454D: cmp     eax, ebx
0x4A454F: jz      short loc_4A455A
0x4A4551: mov     edi, [edi+4]
0x4A4554: test    edi, edi
0x4A4556: jnz     short loc_4A4540
0x4A4558: jmp     short loc_4A4598
0x4A455A: mov     eax, [ebp+0]
0x4A455D: mov     edx, [eax]
0x4A455F: push    1
0x4A4561: mov     ecx, ebp
0x4A4563: call    edx
0x4A4565: jmp     short loc_4A45C5
0x4A4567: mov     ebp, [eax]
0x4A4569: test    ebp, ebp
0x4A456B: jz      short loc_4A45C5
0x4A456D: mov     edx, [ebp+0]
0x4A4570: mov     eax, [edx+0Ch]
0x4A4573: mov     ecx, ebp
0x4A4575: call    eax
0x4A4577: mov     ebx, eax
0x4A4579: mov     edi, esi
0x4A457B: jmp     short loc_4A4580
0x4A457D: align 10h
0x4A4580: mov     ecx, [edi]
0x4A4582: test    ecx, ecx
0x4A4584: jz      short loc_4A4591
0x4A4586: mov     edx, [ecx]
0x4A4588: mov     eax, [edx+0Ch]
0x4A458B: call    eax
0x4A458D: cmp     eax, ebx
0x4A458F: jz      short loc_4A45C5
0x4A4591: mov     edi, [edi+4]
0x4A4594: test    edi, edi
0x4A4596: jnz     short loc_4A4580
0x4A4598: cmp     dword ptr [esi], 0
0x4A459B: jz      short loc_4A45C3
0x4A459D: push    8; Size
0x4A459F: call    FormHeapAlloc
0x4A45A4: add     esp, 4
0x4A45A7: test    eax, eax
0x4A45A9: jz      short loc_4A45B8
0x4A45AB: mov     ecx, [esi]
0x4A45AD: mov     [eax], ecx
0x4A45AF: mov     dword ptr [eax+4], 0
0x4A45B6: jmp     short loc_4A45BA
0x4A45B8: xor     eax, eax
0x4A45BA: mov     edx, [esi+4]
0x4A45BD: mov     [eax+4], edx
0x4A45C0: mov     [esi+4], eax
0x4A45C3: mov     [esi], ebp
0x4A45C5: mov     eax, [esp+14h+var_4]
0x4A45C9: mov     eax, [eax+4]
0x4A45CC: test    eax, eax
0x4A45CE: mov     [esp+14h+var_4], eax
0x4A45D2: jnz     loc_4A4510
0x4A45D8: pop     ebp
0x4A45D9: pop     ebx
0x4A45DA: pop     edi
0x4A45DB: mov     eax, esi
0x4A45DD: pop     esi
0x4A45DE: pop     ecx
0x4A45DF: retn    4
