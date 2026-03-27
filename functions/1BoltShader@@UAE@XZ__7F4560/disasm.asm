0x7F4560: push    0FFFFFFFFh
0x7F4562: push    offset ??1BoltShader@@UAE@XZ_SEH
0x7F4567: mov     eax, large fs:0
0x7F456D: push    eax
0x7F456E: push    ecx
0x7F456F: push    ebx
0x7F4570: push    ebp
0x7F4571: push    esi
0x7F4572: push    edi
0x7F4573: mov     eax, ds:0B30AACh
0x7F4578: xor     eax, esp
0x7F457A: push    eax
0x7F457B: lea     eax, [esp+24h+var_C]
0x7F457F: mov     large fs:0, eax
0x7F4585: mov     esi, ecx
0x7F4587: mov     [esp+24h+var_10], esi
0x7F458B: mov     dword ptr [esi], offset ??_7BoltShader@@6B@; const BoltShader::`vftable'
0x7F4591: mov     eax, ds:0B4690Ch
0x7F4596: mov     ebp, ds:0A2807Ch
0x7F459C: xor     ebx, ebx
0x7F459E: cmp     eax, ebx
0x7F45A0: mov     [esp+24h+var_4], 3
0x7F45A8: jz      short loc_7F45CA
0x7F45AA: mov     edi, eax
0x7F45AC: add     eax, 4
0x7F45AF: push    eax; lpAddend
0x7F45B0: call    ebp ; InterlockedDecrement
0x7F45B2: test    eax, eax
0x7F45B4: jnz     short loc_7F45C4
0x7F45B6: cmp     edi, ebx
0x7F45B8: jz      short loc_7F45C4
0x7F45BA: mov     eax, [edi]
0x7F45BC: mov     edx, [eax]
0x7F45BE: push    1
0x7F45C0: mov     ecx, edi
0x7F45C2: call    edx
0x7F45C4: mov     ds:0B4690Ch, ebx
0x7F45CA: mov     eax, [esi+80h]
0x7F45D0: push    eax
0x7F45D1: call    FormHeapFree
0x7F45D6: mov     [esi+80h], ebx
0x7F45DC: mov     ecx, [esi+178h]
0x7F45E2: add     esp, 4
0x7F45E5: cmp     ecx, ebx
0x7F45E7: jz      short loc_7F45FA
0x7F45E9: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7F45ED: jnz     short loc_7F45F4
0x7F45EF: call    sub_7604D0
0x7F45F4: mov     [esi+178h], ebx
0x7F45FA: mov     edi, [esi+19Ch]
0x7F4600: cmp     edi, ebx
0x7F4602: jz      short loc_7F4622
0x7F4604: lea     eax, [edi+4]
0x7F4607: push    eax; lpAddend
0x7F4608: call    ebp ; InterlockedDecrement
0x7F460A: test    eax, eax
0x7F460C: jnz     short loc_7F461C
0x7F460E: cmp     edi, ebx
0x7F4610: jz      short loc_7F461C
0x7F4612: mov     edx, [edi]
0x7F4614: mov     eax, [edx]
0x7F4616: push    1
0x7F4618: mov     ecx, edi
0x7F461A: call    eax
0x7F461C: mov     [esi+19Ch], ebx
0x7F4622: mov     edi, [esi+1A0h]
0x7F4628: cmp     edi, ebx
0x7F462A: jz      short loc_7F464A
0x7F462C: lea     ecx, [edi+4]
0x7F462F: push    ecx; lpAddend
0x7F4630: call    ebp ; InterlockedDecrement
0x7F4632: test    eax, eax
0x7F4634: jnz     short loc_7F4644
0x7F4636: cmp     edi, ebx
0x7F4638: jz      short loc_7F4644
0x7F463A: mov     edx, [edi]
0x7F463C: mov     eax, [edx]
0x7F463E: push    1
0x7F4640: mov     ecx, edi
0x7F4642: call    eax
0x7F4644: mov     [esi+1A0h], ebx
0x7F464A: mov     edi, [esi+1A0h]
0x7F4650: cmp     edi, ebx
0x7F4652: mov     byte ptr [esp+24h+var_4], 2
0x7F4657: jz      short loc_7F4671
0x7F4659: lea     ecx, [edi+4]
0x7F465C: push    ecx; lpAddend
0x7F465D: call    ebp ; InterlockedDecrement
0x7F465F: test    eax, eax
0x7F4661: jnz     short loc_7F4671
0x7F4663: cmp     edi, ebx
0x7F4665: jz      short loc_7F4671
0x7F4667: mov     edx, [edi]
0x7F4669: mov     eax, [edx]
0x7F466B: push    1
0x7F466D: mov     ecx, edi
0x7F466F: call    eax
0x7F4671: mov     edi, [esi+19Ch]
0x7F4677: cmp     edi, ebx
0x7F4679: mov     byte ptr [esp+24h+var_4], 1
0x7F467E: jz      short loc_7F4698
0x7F4680: lea     ecx, [edi+4]
0x7F4683: push    ecx; lpAddend
0x7F4684: call    ebp ; InterlockedDecrement
0x7F4686: test    eax, eax
0x7F4688: jnz     short loc_7F4698
0x7F468A: cmp     edi, ebx
0x7F468C: jz      short loc_7F4698
0x7F468E: mov     edx, [edi]
0x7F4690: mov     eax, [edx]
0x7F4692: push    1
0x7F4694: mov     ecx, edi
0x7F4696: call    eax
0x7F4698: mov     ecx, [esi+178h]
0x7F469E: cmp     ecx, ebx
0x7F46A0: mov     byte ptr [esp+24h+var_4], bl
0x7F46A4: jz      short loc_7F46B1
0x7F46A6: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7F46AA: jnz     short loc_7F46B1
0x7F46AC: call    sub_7604D0
0x7F46B1: mov     ecx, esi; this
0x7F46B3: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F46BB: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x7F46C0: mov     ecx, dword ptr [esp+24h+var_C]
0x7F46C4: mov     large fs:0, ecx
0x7F46CB: pop     ecx
0x7F46CC: pop     edi
0x7F46CD: pop     esi
0x7F46CE: pop     ebp
0x7F46CF: pop     ebx
0x7F46D0: add     esp, 10h
0x7F46D3: retn
