0x80F1C0: push    ebx
0x80F1C1: push    ebp
0x80F1C2: push    esi
0x80F1C3: push    edi
0x80F1C4: mov     ebp, ecx
0x80F1C6: call    sub_8025F0
0x80F1CB: lea     edi, [ebp+9Ch]
0x80F1D1: mov     ebx, 1Ch
0x80F1D6: mov     esi, [edi]
0x80F1D8: test    esi, esi
0x80F1DA: jz      short loc_80F1FE
0x80F1DC: lea     eax, [esi+4]
0x80F1DF: push    eax; lpAddend
0x80F1E0: call    dword ptr ds:0A2807Ch
0x80F1E6: test    eax, eax
0x80F1E8: jnz     short loc_80F1F8
0x80F1EA: test    esi, esi
0x80F1EC: jz      short loc_80F1F8
0x80F1EE: mov     edx, [esi]
0x80F1F0: mov     eax, [edx]
0x80F1F2: push    1
0x80F1F4: mov     ecx, esi
0x80F1F6: call    eax
0x80F1F8: mov     dword ptr [edi], 0
0x80F1FE: add     edi, 4
0x80F201: sub     ebx, 1
0x80F204: jnz     short loc_80F1D6
0x80F206: lea     edi, [ebp+10Ch]
0x80F20C: mov     ebx, 0Ah
0x80F211: mov     esi, [edi]
0x80F213: test    esi, esi
0x80F215: jz      short loc_80F239
0x80F217: lea     ecx, [esi+4]
0x80F21A: push    ecx; lpAddend
0x80F21B: call    dword ptr ds:0A2807Ch
0x80F221: test    eax, eax
0x80F223: jnz     short loc_80F233
0x80F225: test    esi, esi
0x80F227: jz      short loc_80F233
0x80F229: mov     edx, [esi]
0x80F22B: mov     eax, [edx]
0x80F22D: push    1
0x80F22F: mov     ecx, esi
0x80F231: call    eax
0x80F233: mov     dword ptr [edi], 0
0x80F239: add     edi, 4
0x80F23C: sub     ebx, 1
0x80F23F: jnz     short loc_80F211
0x80F241: mov     esi, offset dword_B47790
0x80F246: or      edi, 0FFFFFFFFh
0x80F249: lea     esp, [esp+0]
0x80F250: mov     ecx, [esi]
0x80F252: test    ecx, ecx
0x80F254: jz      short loc_80F266
0x80F256: add     [ecx+60h], edi
0x80F259: jnz     short loc_80F260
0x80F25B: call    sub_7604D0
0x80F260: mov     dword ptr [esi], 0
0x80F266: add     esi, 4
0x80F269: cmp     esi, offset unk_B47800
0x80F26F: jl      short loc_80F250
0x80F271: pop     edi
0x80F272: pop     esi
0x80F273: pop     ebp
0x80F274: mov     al, 1
0x80F276: pop     ebx
0x80F277: retn
