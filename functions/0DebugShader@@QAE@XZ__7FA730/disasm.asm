0x7FA730: push    0FFFFFFFFh
0x7FA732: push    offset ??0DebugShader@@QAE@XZ_SEH
0x7FA737: mov     eax, large fs:0
0x7FA73D: push    eax
0x7FA73E: sub     esp, 8
0x7FA741: push    ebx
0x7FA742: push    ebp
0x7FA743: push    esi
0x7FA744: push    edi
0x7FA745: mov     eax, ds:0B30AACh
0x7FA74A: xor     eax, esp
0x7FA74C: push    eax
0x7FA74D: lea     eax, [esp+28h+var_C]
0x7FA751: mov     large fs:0, eax
0x7FA757: mov     esi, ecx
0x7FA759: mov     [esp+28h+var_10], esi
0x7FA75D: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x7FA762: push    offset sub_7016A0; a5
0x7FA767: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7FA76C: push    10h; size
0x7FA76E: push    4; a2
0x7FA770: lea     ebx, [esi+7Ch]
0x7FA773: xor     ebp, ebp
0x7FA775: push    ebx; a1
0x7FA776: mov     [esp+3Ch+var_4], ebp
0x7FA77A: mov     dword ptr [esi], offset ??_7DebugShader@@6B@; const DebugShader::`vftable'
0x7FA780: call    ArrayConstructor
0x7FA785: mov     [esi+0BCh], ebp
0x7FA78B: mov     [esi+0C0h], ebp
0x7FA791: mov     [esi+0C4h], ebp
0x7FA797: mov     edi, [esi+0C0h]
0x7FA79D: cmp     edi, ebp
0x7FA79F: mov     byte ptr [esp+28h+var_4], 4
0x7FA7A4: jz      short loc_7FA7C8
0x7FA7A6: lea     eax, [edi+4]
0x7FA7A9: push    eax; lpAddend
0x7FA7AA: call    dword ptr ds:0A2807Ch
0x7FA7B0: test    eax, eax
0x7FA7B2: jnz     short loc_7FA7C2
0x7FA7B4: cmp     edi, ebp
0x7FA7B6: jz      short loc_7FA7C2
0x7FA7B8: mov     edx, [edi]
0x7FA7BA: mov     eax, [edx]
0x7FA7BC: push    1
0x7FA7BE: mov     ecx, edi
0x7FA7C0: call    eax
0x7FA7C2: mov     [esi+0C0h], ebp
0x7FA7C8: mov     edi, [esi+0C4h]
0x7FA7CE: cmp     edi, ebp
0x7FA7D0: jz      short loc_7FA7F4
0x7FA7D2: lea     ecx, [edi+4]
0x7FA7D5: push    ecx; lpAddend
0x7FA7D6: call    dword ptr ds:0A2807Ch
0x7FA7DC: test    eax, eax
0x7FA7DE: jnz     short loc_7FA7EE
0x7FA7E0: cmp     edi, ebp
0x7FA7E2: jz      short loc_7FA7EE
0x7FA7E4: mov     edx, [edi]
0x7FA7E6: mov     eax, [edx]
0x7FA7E8: push    1
0x7FA7EA: mov     ecx, edi
0x7FA7EC: call    eax
0x7FA7EE: mov     [esi+0C4h], ebp
0x7FA7F4: mov     edi, [esi+0BCh]
0x7FA7FA: cmp     edi, ebp
0x7FA7FC: jz      short loc_7FA820
0x7FA7FE: lea     ecx, [edi+4]
0x7FA801: push    ecx; lpAddend
0x7FA802: call    dword ptr ds:0A2807Ch
0x7FA808: test    eax, eax
0x7FA80A: jnz     short loc_7FA81A
0x7FA80C: cmp     edi, ebp
0x7FA80E: jz      short loc_7FA81A
0x7FA810: mov     edx, [edi]
0x7FA812: mov     eax, [edx]
0x7FA814: push    1
0x7FA816: mov     ecx, edi
0x7FA818: call    eax
0x7FA81A: mov     [esi+0BCh], ebp
0x7FA820: mov     [esp+28h+var_14], 10h
0x7FA828: mov     edi, [ebx]
0x7FA82A: cmp     edi, ebp
0x7FA82C: jz      short loc_7FA84C
0x7FA82E: lea     ecx, [edi+4]
0x7FA831: push    ecx; lpAddend
0x7FA832: call    dword ptr ds:0A2807Ch
0x7FA838: test    eax, eax
0x7FA83A: jnz     short loc_7FA84A
0x7FA83C: cmp     edi, ebp
0x7FA83E: jz      short loc_7FA84A
0x7FA840: mov     edx, [edi]
0x7FA842: mov     eax, [edx]
0x7FA844: push    1
0x7FA846: mov     ecx, edi
0x7FA848: call    eax
0x7FA84A: mov     [ebx], ebp
0x7FA84C: add     ebx, 4
0x7FA84F: sub     [esp+28h+var_14], 1
0x7FA854: jnz     short loc_7FA828
0x7FA856: mov     byte ptr [esi+20h], 1
0x7FA85A: mov     eax, esi
0x7FA85C: mov     ecx, dword ptr [esp+28h+var_C]
0x7FA860: mov     large fs:0, ecx
0x7FA867: pop     ecx
0x7FA868: pop     edi
0x7FA869: pop     esi
0x7FA86A: pop     ebp
0x7FA86B: pop     ebx
0x7FA86C: add     esp, 14h
0x7FA86F: retn
