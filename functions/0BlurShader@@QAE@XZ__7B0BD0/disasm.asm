0x7B0BD0: push    0FFFFFFFFh
0x7B0BD2: push    offset ??0BlurShader@@QAE@XZ_SEH
0x7B0BD7: mov     eax, large fs:0
0x7B0BDD: push    eax
0x7B0BDE: sub     esp, 8
0x7B0BE1: push    ebx
0x7B0BE2: push    ebp
0x7B0BE3: push    esi
0x7B0BE4: push    edi
0x7B0BE5: mov     eax, ds:0B30AACh
0x7B0BEA: xor     eax, esp
0x7B0BEC: push    eax
0x7B0BED: lea     eax, [esp+28h+var_C]
0x7B0BF1: mov     large fs:0, eax
0x7B0BF7: mov     esi, ecx
0x7B0BF9: mov     [esp+28h+var_10], esi
0x7B0BFD: call    ??0BSImageSpaceShader@@QAE@XZ; BSImageSpaceShader::BSImageSpaceShader(void)
0x7B0C02: push    offset sub_7016A0; a5
0x7B0C07: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7B0C0C: push    3; size
0x7B0C0E: push    4; a2
0x7B0C10: lea     eax, [esi+94h]
0x7B0C16: xor     ebp, ebp
0x7B0C18: push    eax; a1
0x7B0C19: mov     [esp+3Ch+var_4], ebp
0x7B0C1D: mov     dword ptr [esi], offset ??_7BlurShader@@6B@; const BlurShader::`vftable'
0x7B0C23: call    ArrayConstructor
0x7B0C28: push    offset sub_7016A0; a5
0x7B0C2D: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7B0C32: push    3; size
0x7B0C34: push    4; a2
0x7B0C36: lea     ebx, [esi+0A0h]
0x7B0C3C: push    ebx; a1
0x7B0C3D: mov     byte ptr [esp+3Ch+var_4], 1
0x7B0C42: call    ArrayConstructor
0x7B0C47: mov     [esi+0E0h], ebp
0x7B0C4D: mov     [esi+0ACh], ebp
0x7B0C53: mov     [esi+90h], ebp
0x7B0C59: mov     edi, [esi+0E0h]
0x7B0C5F: cmp     edi, ebp
0x7B0C61: mov     byte ptr [esp+28h+var_4], 3
0x7B0C66: jz      short loc_7B0C8A
0x7B0C68: lea     ecx, [edi+4]
0x7B0C6B: push    ecx; lpAddend
0x7B0C6C: call    dword ptr ds:0A2807Ch
0x7B0C72: test    eax, eax
0x7B0C74: jnz     short loc_7B0C84
0x7B0C76: cmp     edi, ebp
0x7B0C78: jz      short loc_7B0C84
0x7B0C7A: mov     edx, [edi]
0x7B0C7C: mov     eax, [edx]
0x7B0C7E: push    1
0x7B0C80: mov     ecx, edi
0x7B0C82: call    eax
0x7B0C84: mov     [esi+0E0h], ebp
0x7B0C8A: mov     [esp+28h+var_14], 3
0x7B0C92: mov     edi, [ebx-0Ch]
0x7B0C95: cmp     edi, ebp
0x7B0C97: jz      short loc_7B0CB8
0x7B0C99: lea     ecx, [edi+4]
0x7B0C9C: push    ecx; lpAddend
0x7B0C9D: call    dword ptr ds:0A2807Ch
0x7B0CA3: test    eax, eax
0x7B0CA5: jnz     short loc_7B0CB5
0x7B0CA7: cmp     edi, ebp
0x7B0CA9: jz      short loc_7B0CB5
0x7B0CAB: mov     edx, [edi]
0x7B0CAD: mov     eax, [edx]
0x7B0CAF: push    1
0x7B0CB1: mov     ecx, edi
0x7B0CB3: call    eax
0x7B0CB5: mov     [ebx-0Ch], ebp
0x7B0CB8: mov     edi, [ebx]
0x7B0CBA: cmp     edi, ebp
0x7B0CBC: jz      short loc_7B0CDC
0x7B0CBE: lea     ecx, [edi+4]
0x7B0CC1: push    ecx; lpAddend
0x7B0CC2: call    dword ptr ds:0A2807Ch
0x7B0CC8: test    eax, eax
0x7B0CCA: jnz     short loc_7B0CDA
0x7B0CCC: cmp     edi, ebp
0x7B0CCE: jz      short loc_7B0CDA
0x7B0CD0: mov     edx, [edi]
0x7B0CD2: mov     eax, [edx]
0x7B0CD4: push    1
0x7B0CD6: mov     ecx, edi
0x7B0CD8: call    eax
0x7B0CDA: mov     [ebx], ebp
0x7B0CDC: add     ebx, 4
0x7B0CDF: sub     [esp+28h+var_14], 1
0x7B0CE4: jnz     short loc_7B0C92
0x7B0CE6: mov     eax, esi
0x7B0CE8: mov     ecx, dword ptr [esp+28h+var_C]
0x7B0CEC: mov     large fs:0, ecx
0x7B0CF3: pop     ecx
0x7B0CF4: pop     edi
0x7B0CF5: pop     esi
0x7B0CF6: pop     ebp
0x7B0CF7: pop     ebx
0x7B0CF8: add     esp, 14h
0x7B0CFB: retn
