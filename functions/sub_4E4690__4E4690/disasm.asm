0x4E4690: push    edi
0x4E4691: mov     edi, ecx
0x4E4693: mov     eax, [edi+8]
0x4E4696: shr     eax, 0Bh
0x4E4699: test    al, 1
0x4E469B: jnz     loc_4E48A0
0x4E46A1: push    ebx; int
0x4E46A2: push    esi
0x4E46A3: call    TESOjectREFR_stuffsWithPArentCell
0x4E46A8: mov     edx, [edi]
0x4E46AA: mov     eax, [edx+90h]
0x4E46B0: push    1
0x4E46B2: mov     ecx, edi
0x4E46B4: call    eax
0x4E46B6: mov     edx, [edi]
0x4E46B8: mov     eax, [edx+40h]
0x4E46BB: push    40000000h
0x4E46C0: mov     ecx, edi
0x4E46C2: call    eax
0x4E46C4: push    1; a2
0x4E46C6: mov     ecx, edi; this
0x4E46C8: call    TESForm_SetEnabled?
0x4E46CD: mov     edx, [edi]
0x4E46CF: mov     eax, [edx+188h]
0x4E46D5: mov     ecx, edi
0x4E46D7: call    eax
0x4E46D9: test    al, al
0x4E46DB: jz      loc_4E47BF
0x4E46E1: xor     ebx, ebx
0x4E46E3: cmp     [edi+58h], ebx
0x4E46E6: jz      loc_4E47BF
0x4E46EC: mov     edx, [edi]
0x4E46EE: mov     eax, [edx+190h]
0x4E46F4: mov     ecx, edi
0x4E46F6: call    eax
0x4E46F8: test    al, al
0x4E46FA: jz      short loc_4E4731
0x4E46FC: mov     eax, ds:0B333C4h
0x4E4701: cmp     edi, [eax+1E0h]
0x4E4707: jnz     short loc_4E470F
0x4E4709: mov     [eax+1E0h], ebx
0x4E470F: mov     ecx, edi
0x4E4711: call    sub_5E4B00
0x4E4716: lea     ecx, [edi+68h]
0x4E4719: call    MagicTarget_RemoveAllEffects
0x4E471E: cmp     ds:0B3B7D0h, ebx
0x4E4724: jle     short loc_4E4731
0x4E4726: push    1
0x4E4728: push    edi
0x4E4729: call    sub_607B90
0x4E472E: add     esp, 8
0x4E4731: mov     ecx, edi; this
0x4E4733: call    Actor__GetProcessLevel
0x4E4738: push    eax
0x4E4739: push    edi
0x4E473A: mov     ecx, offset ActorProcessManager_ptr
0x4E473F: call    sub_674550
0x4E4744: mov     eax, [edi+58h]
0x4E4747: cmp     eax, ebx
0x4E4749: jz      short loc_4E4774
0x4E474B: mov     eax, [eax+8]
0x4E474E: cmp     eax, ebx
0x4E4750: jz      short loc_4E4774
0x4E4752: mov     ecx, eax
0x4E4754: call    sub_567770
0x4E4759: test    al, al
0x4E475B: jz      short loc_4E4774
0x4E475D: mov     edx, [edi]
0x4E475F: mov     eax, [edx+190h]
0x4E4765: mov     ecx, edi
0x4E4767: call    eax
0x4E4769: test    al, al
0x4E476B: jz      short loc_4E4774
0x4E476D: mov     ecx, edi; int
0x4E476F: call    sub_5EAE70
0x4E4774: mov     ecx, [edi+58h]
0x4E4777: cmp     ecx, ebx
0x4E4779: jz      short loc_4E47BF
0x4E477B: mov     edx, [ecx]
0x4E477D: mov     eax, [edx+378h]
0x4E4783: call    eax
0x4E4785: test    eax, eax
0x4E4787: jz      short loc_4E47AD
0x4E4789: mov     esi, [edi+58h]
0x4E478C: mov     edx, [esi]
0x4E478E: mov     eax, [edx+37Ch]
0x4E4794: push    ebx
0x4E4795: mov     ecx, esi
0x4E4797: call    eax
0x4E4799: mov     edx, [esi]
0x4E479B: push    eax
0x4E479C: mov     eax, [edx+378h]
0x4E47A2: mov     ecx, esi
0x4E47A4: call    eax
0x4E47A6: mov     ecx, eax
0x4E47A8: call    sub_4D7300
0x4E47AD: mov     ecx, [edi+58h]
0x4E47B0: cmp     ecx, ebx
0x4E47B2: jz      short loc_4E47BC
0x4E47B4: mov     edx, [ecx]
0x4E47B6: mov     eax, [edx]
0x4E47B8: push    1
0x4E47BA: call    eax
0x4E47BC: mov     [edi+58h], ebx
0x4E47BF: mov     edx, [edi]
0x4E47C1: mov     eax, [edx+150h]
0x4E47C7: push    ebp
0x4E47C8: push    0
0x4E47CA: mov     ecx, edi
0x4E47CC: call    eax
0x4E47CE: mov     ecx, ds:0B333C4h
0x4E47D4: push    edi
0x4E47D5: call    sub_665260
0x4E47DA: lea     ebp, [edi+44h]
0x4E47DD: mov     ecx, ebp
0x4E47DF: call    sub_4203A0
0x4E47E4: mov     esi, eax
0x4E47E6: test    esi, esi
0x4E47E8: jz      short loc_4E481E
0x4E47EA: lea     ebx, [ebx+0]
0x4E47F0: cmp     dword ptr [esi+4], 0
0x4E47F4: jnz     short loc_4E47FB
0x4E47F6: cmp     dword ptr [esi], 0
0x4E47F9: jz      short loc_4E481E
0x4E47FB: mov     ebx, [esi]
0x4E47FD: lea     ecx, [ebx+44h]
0x4E4800: call    sub_420340
0x4E4805: test    al, al
0x4E4807: mov     ecx, ebx
0x4E4809: jz      short loc_4E4812
0x4E480B: call    sub_4DD850
0x4E4810: jmp     short loc_4E4817
0x4E4812: call    sub_4E4690
0x4E4817: mov     esi, [esi+4]
0x4E481A: test    esi, esi
0x4E481C: jnz     short loc_4E47F0
0x4E481E: mov     ecx, ebp
0x4E4820: call    sub_420480
0x4E4825: mov     ebx, eax
0x4E4827: test    ebx, ebx
0x4E4829: pop     ebp
0x4E482A: jz      short loc_4E4895
0x4E482C: lea     esp, [esp+0]
0x4E4830: mov     ecx, ebx
0x4E4832: call    BSSimpleList_IsEmpty
0x4E4837: test    al, al
0x4E4839: jnz     short loc_4E4895
0x4E483B: mov     esi, [ebx]
0x4E483D: push    0
0x4E483F: lea     ecx, [esi+44h]
0x4E4842: call    sub_4203E0
0x4E4847: mov     edx, [esi]
0x4E4849: mov     eax, [edx+8Ch]
0x4E484F: push    1
0x4E4851: mov     ecx, esi
0x4E4853: call    eax
0x4E4855: mov     edx, [esi]
0x4E4857: mov     eax, [edx+90h]
0x4E485D: push    1
0x4E485F: mov     ecx, esi
0x4E4861: call    eax
0x4E4863: mov     edx, [esi]
0x4E4865: mov     eax, [edx+150h]
0x4E486B: push    0
0x4E486D: mov     ecx, esi
0x4E486F: call    eax
0x4E4871: mov     eax, [ebx+4]
0x4E4874: test    eax, eax
0x4E4876: jz      short loc_4E488D
0x4E4878: mov     ecx, [eax+4]
0x4E487B: mov     [ebx+4], ecx
0x4E487E: mov     edx, [eax]
0x4E4880: push    eax
0x4E4881: mov     [ebx], edx
0x4E4883: call    FormHeapFree
0x4E4888: add     esp, 4
0x4E488B: jmp     short loc_4E4830
0x4E488D: mov     dword ptr [ebx], 0
0x4E4893: jmp     short loc_4E4830
0x4E4895: push    0
0x4E4897: mov     ecx, edi
0x4E4899: call    sub_4D9310
0x4E489E: pop     esi
0x4E489F: pop     ebx
0x4E48A0: pop     edi
0x4E48A1: retn
