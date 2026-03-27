0x863540: mov     eax, [esp+arg_4]
0x863544: push    ebx
0x863545: mov     ebx, [esp+4+arg_0]
0x863549: push    esi
0x86354A: push    edi
0x86354B: push    eax
0x86354C: push    ebx
0x86354D: mov     esi, ecx
0x86354F: call    sub_7D7AD0
0x863554: mov     ecx, [esi+0F0h]
0x86355A: mov     [ebx+0F0h], ecx
0x863560: mov     edx, [esi+0F4h]
0x863566: mov     [ebx+0F4h], edx
0x86356C: mov     eax, [esi+0F8h]
0x863572: mov     [ebx+0F8h], eax
0x863578: mov     ecx, [esi+0FCh]
0x86357E: mov     [ebx+0FCh], ecx
0x863584: mov     edi, [ebx+104h]
0x86358A: cmp     edi, [esi+104h]
0x863590: jz      short loc_8635CC
0x863592: test    edi, edi
0x863594: jz      short loc_8635B2
0x863596: lea     edx, [edi+4]
0x863599: push    edx; lpAddend
0x86359A: call    dword ptr ds:0A2807Ch
0x8635A0: test    eax, eax
0x8635A2: jnz     short loc_8635B2
0x8635A4: test    edi, edi
0x8635A6: jz      short loc_8635B2
0x8635A8: mov     eax, [edi]
0x8635AA: mov     edx, [eax]
0x8635AC: push    1
0x8635AE: mov     ecx, edi
0x8635B0: call    edx
0x8635B2: mov     esi, [esi+104h]
0x8635B8: test    esi, esi
0x8635BA: mov     [ebx+104h], esi
0x8635C0: jz      short loc_8635CC
0x8635C2: add     esi, 4
0x8635C5: push    esi; lpAddend
0x8635C6: call    dword ptr ds:0A28078h
0x8635CC: pop     edi
0x8635CD: pop     esi
0x8635CE: pop     ebx
0x8635CF: retn    8
