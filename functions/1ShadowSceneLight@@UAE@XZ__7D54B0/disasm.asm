0x7D54B0: push    0FFFFFFFFh
0x7D54B2: push    offset ??0ShadowSceneLight@@QAE@XZ_SEH
0x7D54B7: mov     eax, large fs:0
0x7D54BD: push    eax
0x7D54BE: push    ecx
0x7D54BF: push    ebx
0x7D54C0: push    ebp
0x7D54C1: push    esi
0x7D54C2: push    edi
0x7D54C3: mov     eax, ds:0B30AACh
0x7D54C8: xor     eax, esp
0x7D54CA: push    eax
0x7D54CB: lea     eax, [esp+24h+var_C]
0x7D54CF: mov     large fs:0, eax
0x7D54D5: mov     esi, ecx
0x7D54D7: mov     [esp+24h+var_10], esi
0x7D54DB: mov     dword ptr [esi], offset ??_7ShadowSceneLight@@6B@; const ShadowSceneLight::`vftable'
0x7D54E1: mov     [esp+24h+var_4], 9
0x7D54E9: call    sub_7D21F0
0x7D54EE: mov     edi, [esi+0F8h]
0x7D54F4: mov     ebp, ds:0A2807Ch
0x7D54FA: xor     ebx, ebx
0x7D54FC: cmp     edi, ebx
0x7D54FE: jz      short loc_7D551E
0x7D5500: lea     eax, [edi+4]
0x7D5503: push    eax; lpAddend
0x7D5504: call    ebp ; InterlockedDecrement
0x7D5506: test    eax, eax
0x7D5508: jnz     short loc_7D5518
0x7D550A: cmp     edi, ebx
0x7D550C: jz      short loc_7D5518
0x7D550E: mov     edx, [edi]
0x7D5510: mov     eax, [edx]
0x7D5512: push    1
0x7D5514: mov     ecx, edi
0x7D5516: call    eax
0x7D5518: mov     [esi+0F8h], ebx
0x7D551E: mov     edi, [esi+100h]
0x7D5524: cmp     edi, ebx
0x7D5526: jz      short loc_7D5546
0x7D5528: lea     ecx, [edi+4]
0x7D552B: push    ecx; lpAddend
0x7D552C: call    ebp ; InterlockedDecrement
0x7D552E: test    eax, eax
0x7D5530: jnz     short loc_7D5540
0x7D5532: cmp     edi, ebx
0x7D5534: jz      short loc_7D5540
0x7D5536: mov     edx, [edi]
0x7D5538: mov     eax, [edx]
0x7D553A: push    1
0x7D553C: mov     ecx, edi
0x7D553E: call    eax
0x7D5540: mov     [esi+100h], ebx
0x7D5546: mov     eax, [esi+114h]
0x7D554C: cmp     eax, ebx
0x7D554E: jz      short loc_7D555C
0x7D5550: mov     ecx, ds:0B42F50h; this
0x7D5556: push    eax; a2
0x7D5557: call    BSTextureManager_DiscardShadowMap
0x7D555C: mov     edi, [esi+114h]
0x7D5562: cmp     edi, ebx
0x7D5564: jz      short loc_7D5584
0x7D5566: lea     ecx, [edi+4]
0x7D5569: push    ecx; lpAddend
0x7D556A: call    ebp ; InterlockedDecrement
0x7D556C: test    eax, eax
0x7D556E: jnz     short loc_7D557E
0x7D5570: cmp     edi, ebx
0x7D5572: jz      short loc_7D557E
0x7D5574: mov     edx, [edi]
0x7D5576: mov     eax, [edx]
0x7D5578: push    1
0x7D557A: mov     ecx, edi
0x7D557C: call    eax
0x7D557E: mov     [esi+114h], ebx
0x7D5584: mov     [esi+118h], bx
0x7D558B: mov     edi, [esi+11Ch]
0x7D5591: cmp     edi, ebx
0x7D5593: jz      short loc_7D55B3
0x7D5595: lea     ecx, [edi+4]
0x7D5598: push    ecx; lpAddend
0x7D5599: call    ebp ; InterlockedDecrement
0x7D559B: test    eax, eax
0x7D559D: jnz     short loc_7D55AD
0x7D559F: cmp     edi, ebx
0x7D55A1: jz      short loc_7D55AD
0x7D55A3: mov     edx, [edi]
0x7D55A5: mov     eax, [edx]
0x7D55A7: push    1
0x7D55A9: mov     ecx, edi
0x7D55AB: call    eax
0x7D55AD: mov     [esi+11Ch], ebx
0x7D55B3: mov     edi, [esi+14Ch]
0x7D55B9: cmp     edi, ebx
0x7D55BB: jz      short loc_7D55DB
0x7D55BD: lea     ecx, [edi+4]
0x7D55C0: push    ecx; lpAddend
0x7D55C1: call    ebp ; InterlockedDecrement
0x7D55C3: test    eax, eax
0x7D55C5: jnz     short loc_7D55D5
0x7D55C7: cmp     edi, ebx
0x7D55C9: jz      short loc_7D55D5
0x7D55CB: mov     edx, [edi]
0x7D55CD: mov     eax, [edx]
0x7D55CF: push    1
0x7D55D1: mov     ecx, edi
0x7D55D3: call    eax
0x7D55D5: mov     [esi+14Ch], ebx
0x7D55DB: mov     edi, [esi+130h]
0x7D55E1: cmp     edi, ebx
0x7D55E3: jz      short loc_7D5603
0x7D55E5: lea     ecx, [edi+4]
0x7D55E8: push    ecx; lpAddend
0x7D55E9: call    ebp ; InterlockedDecrement
0x7D55EB: test    eax, eax
0x7D55ED: jnz     short loc_7D55FD
0x7D55EF: cmp     edi, ebx
0x7D55F1: jz      short loc_7D55FD
0x7D55F3: mov     edx, [edi]
0x7D55F5: mov     eax, [edx]
0x7D55F7: push    1
0x7D55F9: mov     ecx, edi
0x7D55FB: call    eax
0x7D55FD: mov     [esi+130h], ebx
0x7D5603: mov     [esi+144h], ebx
0x7D5609: mov     edi, [esi+148h]
0x7D560F: cmp     edi, ebx
0x7D5611: jz      short loc_7D5631
0x7D5613: lea     ecx, [edi+4]
0x7D5616: push    ecx; lpAddend
0x7D5617: call    ebp ; InterlockedDecrement
0x7D5619: test    eax, eax
0x7D561B: jnz     short loc_7D562B
0x7D561D: cmp     edi, ebx
0x7D561F: jz      short loc_7D562B
0x7D5621: mov     edx, [edi]
0x7D5623: mov     eax, [edx]
0x7D5625: push    1
0x7D5627: mov     ecx, edi
0x7D5629: call    eax
0x7D562B: mov     [esi+148h], ebx
0x7D5631: mov     edi, [esi+14Ch]
0x7D5637: cmp     edi, ebx
0x7D5639: mov     byte ptr [esp+24h+var_4], 8
0x7D563E: jz      short loc_7D5658
0x7D5640: lea     ecx, [edi+4]
0x7D5643: push    ecx; lpAddend
0x7D5644: call    ebp ; InterlockedDecrement
0x7D5646: test    eax, eax
0x7D5648: jnz     short loc_7D5658
0x7D564A: cmp     edi, ebx
0x7D564C: jz      short loc_7D5658
0x7D564E: mov     edx, [edi]
0x7D5650: mov     eax, [edx]
0x7D5652: push    1
0x7D5654: mov     ecx, edi
0x7D5656: call    eax
0x7D5658: mov     edi, [esi+148h]
0x7D565E: cmp     edi, ebx
0x7D5660: mov     byte ptr [esp+24h+var_4], 7
0x7D5665: jz      short loc_7D567F
0x7D5667: lea     ecx, [edi+4]
0x7D566A: push    ecx; lpAddend
0x7D566B: call    ebp ; InterlockedDecrement
0x7D566D: test    eax, eax
0x7D566F: jnz     short loc_7D567F
0x7D5671: cmp     edi, ebx
0x7D5673: jz      short loc_7D567F
0x7D5675: mov     edx, [edi]
0x7D5677: mov     eax, [edx]
0x7D5679: push    1
0x7D567B: mov     ecx, edi
0x7D567D: call    eax
0x7D567F: lea     ecx, [esi+134h]
0x7D5685: mov     byte ptr [esp+24h+var_4], 6
0x7D568A: call    ??1?$NiTPointerList@V?$NiPointer@VNiAVObject@@@@@@UAE@XZ; NiTPointerList<NiPointer<NiAVObject>>::~NiTPointerList<NiPointer<NiAVObject>>(void)
0x7D568F: mov     edi, [esi+130h]
0x7D5695: cmp     edi, ebx
0x7D5697: mov     byte ptr [esp+24h+var_4], 5
0x7D569C: jz      short loc_7D56B6
0x7D569E: lea     ecx, [edi+4]
0x7D56A1: push    ecx; lpAddend
0x7D56A2: call    ebp ; InterlockedDecrement
0x7D56A4: test    eax, eax
0x7D56A6: jnz     short loc_7D56B6
0x7D56A8: cmp     edi, ebx
0x7D56AA: jz      short loc_7D56B6
0x7D56AC: mov     edx, [edi]
0x7D56AE: mov     eax, [edx]
0x7D56B0: push    1
0x7D56B2: mov     ecx, edi
0x7D56B4: call    eax
0x7D56B6: mov     edi, [esi+11Ch]
0x7D56BC: cmp     edi, ebx
0x7D56BE: mov     byte ptr [esp+24h+var_4], 4
0x7D56C3: jz      short loc_7D56DD
0x7D56C5: lea     ecx, [edi+4]
0x7D56C8: push    ecx; lpAddend
0x7D56C9: call    ebp ; InterlockedDecrement
0x7D56CB: test    eax, eax
0x7D56CD: jnz     short loc_7D56DD
0x7D56CF: cmp     edi, ebx
0x7D56D1: jz      short loc_7D56DD
0x7D56D3: mov     edx, [edi]
0x7D56D5: mov     eax, [edx]
0x7D56D7: push    1
0x7D56D9: mov     ecx, edi
0x7D56DB: call    eax
0x7D56DD: mov     edi, [esi+114h]
0x7D56E3: cmp     edi, ebx
0x7D56E5: mov     byte ptr [esp+24h+var_4], 3
0x7D56EA: jz      short loc_7D5704
0x7D56EC: lea     ecx, [edi+4]
0x7D56EF: push    ecx; lpAddend
0x7D56F0: call    ebp ; InterlockedDecrement
0x7D56F2: test    eax, eax
0x7D56F4: jnz     short loc_7D5704
0x7D56F6: cmp     edi, ebx
0x7D56F8: jz      short loc_7D5704
0x7D56FA: mov     edx, [edi]
0x7D56FC: mov     eax, [edx]
0x7D56FE: push    1
0x7D5700: mov     ecx, edi
0x7D5702: call    eax
0x7D5704: mov     edi, [esi+100h]
0x7D570A: cmp     edi, ebx
0x7D570C: mov     byte ptr [esp+24h+var_4], 2
0x7D5711: jz      short loc_7D572B
0x7D5713: lea     ecx, [edi+4]
0x7D5716: push    ecx; lpAddend
0x7D5717: call    ebp ; InterlockedDecrement
0x7D5719: test    eax, eax
0x7D571B: jnz     short loc_7D572B
0x7D571D: cmp     edi, ebx
0x7D571F: jz      short loc_7D572B
0x7D5721: mov     edx, [edi]
0x7D5723: mov     eax, [edx]
0x7D5725: push    1
0x7D5727: mov     ecx, edi
0x7D5729: call    eax
0x7D572B: mov     edi, [esi+0F8h]
0x7D5731: cmp     edi, ebx
0x7D5733: mov     byte ptr [esp+24h+var_4], 1
0x7D5738: jz      short loc_7D5752
0x7D573A: lea     ecx, [edi+4]
0x7D573D: push    ecx; lpAddend
0x7D573E: call    ebp ; InterlockedDecrement
0x7D5740: test    eax, eax
0x7D5742: jnz     short loc_7D5752
0x7D5744: cmp     edi, ebx
0x7D5746: jz      short loc_7D5752
0x7D5748: mov     edx, [edi]
0x7D574A: mov     eax, [edx]
0x7D574C: push    1
0x7D574E: mov     ecx, edi
0x7D5750: call    eax
0x7D5752: lea     ecx, [esi+0E4h]
0x7D5758: mov     byte ptr [esp+24h+var_4], bl
0x7D575C: call    ??1?$NiTPointerList@V?$NiPointer@VNiTriBasedGeom@@@@@@UAE@XZ; NiTPointerList<NiPointer<NiTriBasedGeom>>::~NiTPointerList<NiPointer<NiTriBasedGeom>>(void)
0x7D5761: push    offset NiRefObject_objcount; lpAddend
0x7D5766: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7D576C: call    ebp ; InterlockedDecrement
0x7D576E: mov     ecx, dword ptr [esp+24h+var_C]
0x7D5772: mov     large fs:0, ecx
0x7D5779: pop     ecx
0x7D577A: pop     edi
0x7D577B: pop     esi
0x7D577C: pop     ebp
0x7D577D: pop     ebx
0x7D577E: add     esp, 10h
0x7D5781: retn
