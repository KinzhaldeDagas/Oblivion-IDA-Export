0x720900: push    0FFFFFFFFh
0x720902: push    offset SEH_720900
0x720907: mov     eax, large fs:0
0x72090D: push    eax
0x72090E: sub     esp, 1Ch
0x720911: push    ebx
0x720912: push    ebp
0x720913: push    esi
0x720914: push    edi
0x720915: mov     eax, ds:0B30AACh
0x72091A: xor     eax, esp
0x72091C: push    eax
0x72091D: lea     eax, [esp+3Ch+var_C]
0x720921: mov     large fs:0, eax
0x720927: mov     esi, ecx
0x720929: mov     [esp+3Ch+var_28], esi
0x72092D: mov     ebp, [esp+3Ch+arg_0]
0x720931: cmp     dword ptr [ebp+0D8h], 0A030006h
0x72093B: push    ebp
0x72093C: jnb     loc_720A08
0x720942: call    sub_6D7DF0
0x720947: push    offset sub_7016A0; a5
0x72094C: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x720951: push    6; size
0x720953: push    4; a2
0x720955: lea     eax, [esp+4Ch+a1]
0x720959: push    eax; a1
0x72095A: call    ArrayConstructor
0x72095F: xor     ebx, ebx
0x720961: mov     ecx, ebp
0x720963: mov     [esp+3Ch+var_4], ebx
0x720967: call    sub_7124D0
0x72096C: cmp     eax, 6
0x72096F: jnz     short loc_7209C0
0x720971: mov     ecx, ebp
0x720973: call    sub_7124A0
0x720978: mov     esi, [esp+ebx*4+3Ch+a1]
0x72097C: mov     edi, eax
0x72097E: cmp     esi, edi
0x720980: jz      short loc_7209B4
0x720982: test    esi, esi
0x720984: jz      short loc_7209A2
0x720986: lea     ecx, [esi+4]
0x720989: push    ecx; lpAddend
0x72098A: call    dword ptr ds:0A2807Ch
0x720990: test    eax, eax
0x720992: jnz     short loc_7209A2
0x720994: test    esi, esi
0x720996: jz      short loc_7209A2
0x720998: mov     edx, [esi]
0x72099A: mov     eax, [edx]
0x72099C: push    1
0x72099E: mov     ecx, esi
0x7209A0: call    eax
0x7209A2: test    edi, edi
0x7209A4: mov     [esp+ebx*4+3Ch+a1], edi
0x7209A8: jz      short loc_7209B4
0x7209AA: add     edi, 4
0x7209AD: push    edi; lpAddend
0x7209AE: call    dword ptr ds:0A28078h
0x7209B4: add     ebx, 1
0x7209B7: cmp     ebx, 6
0x7209BA: jb      short loc_720971
0x7209BC: mov     esi, [esp+3Ch+var_28]
0x7209C0: cmp     dword ptr [esi+3Ch], 0
0x7209C4: jnz     short loc_7209EB
0x7209C6: mov     ecx, [esp+3Ch+var_10]
0x7209CA: mov     edx, [esp+3Ch+var_14]
0x7209CE: mov     eax, [esp+3Ch+var_18]
0x7209D2: push    ecx
0x7209D3: mov     ecx, [esp+40h+var_1C]
0x7209D7: push    edx
0x7209D8: mov     edx, [esp+44h+var_20]
0x7209DC: push    eax
0x7209DD: mov     eax, [esp+48h+a1]
0x7209E1: push    ecx
0x7209E2: push    edx
0x7209E3: push    eax
0x7209E4: mov     ecx, esi
0x7209E6: call    sub_7205A0
0x7209EB: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7209F0: push    6; int
0x7209F2: push    4; unsigned int
0x7209F4: lea     ecx, [esp+48h+a1]
0x7209F8: push    ecx; void *
0x7209F9: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x720A01: call    $LN21
0x720A06: jmp     short loc_720A0D
0x720A08: call    sub_702260
0x720A0D: mov     ecx, [esp+3Ch+var_C]
0x720A11: mov     large fs:0, ecx
0x720A18: pop     ecx
0x720A19: pop     edi
0x720A1A: pop     esi
0x720A1B: pop     ebp
0x720A1C: pop     ebx
0x720A1D: add     esp, 28h
0x720A20: retn    4
