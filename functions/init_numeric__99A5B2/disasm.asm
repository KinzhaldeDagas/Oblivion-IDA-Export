0x99A5B2: push    ebp
0x99A5B3: mov     ebp, esp
0x99A5B5: sub     esp, 18h
0x99A5B8: push    ebx
0x99A5B9: mov     ebx, [ebp+Memory]
0x99A5BC: push    esi
0x99A5BD: xor     esi, esi
0x99A5BF: cmp     [ebx+1Ch], esi
0x99A5C2: push    edi
0x99A5C3: mov     [ebp+var_18], ebx
0x99A5C6: mov     [ebp+var_14], esi
0x99A5C9: jnz     short loc_99A5E2
0x99A5CB: cmp     [ebx+18h], esi
0x99A5CE: jnz     short loc_99A5E2
0x99A5D0: mov     [ebp+var_4], esi
0x99A5D3: mov     [ebp+var_8], esi
0x99A5D6: mov     [ebp+Memory], offset off_B30DB4
0x99A5DD: jmp     loc_99A71C
0x99A5E2: push    30h ; '0'
0x99A5E4: push    1
0x99A5E6: call    unknown_libname_74
0x99A5EB: mov     edi, eax
0x99A5ED: cmp     edi, esi
0x99A5EF: pop     ecx
0x99A5F0: pop     ecx
0x99A5F1: mov     [ebp+Memory], edi
0x99A5F4: jnz     short loc_99A5FE
0x99A5F6: xor     eax, eax
0x99A5F8: inc     eax
0x99A5F9: jmp     loc_99A775
0x99A5FE: mov     esi, [ebx+0BCh]
0x99A604: push    0Ch
0x99A606: pop     ecx
0x99A607: push    4
0x99A609: rep movsd
0x99A60B: call    unknown_libname_72
0x99A610: xor     esi, esi
0x99A612: cmp     eax, esi
0x99A614: pop     ecx
0x99A615: mov     [ebp+var_8], eax
0x99A618: jnz     short loc_99A625
0x99A61A: push    [ebp+Memory]; Memory
0x99A61D: call    _free
0x99A622: pop     ecx
0x99A623: jmp     short loc_99A5F6
0x99A625: mov     [eax], esi
0x99A627: cmp     [ebx+1Ch], esi
0x99A62A: jz      loc_99A6EB
0x99A630: push    4
0x99A632: call    unknown_libname_72
0x99A637: cmp     eax, esi
0x99A639: pop     ecx
0x99A63A: mov     [ebp+var_4], eax
0x99A63D: jnz     short loc_99A65B
0x99A63F: xor     esi, esi
0x99A641: inc     esi
0x99A642: push    [ebp+Memory]; Memory
0x99A645: call    _free
0x99A64A: push    [ebp+var_8]; Memory
0x99A64D: call    _free
0x99A652: pop     ecx
0x99A653: pop     ecx
0x99A654: mov     eax, esi
0x99A656: jmp     loc_99A775
0x99A65B: mov     [eax], esi
0x99A65D: mov     esi, [ebp+Memory]
0x99A660: movzx   edi, word ptr [ebx+3Eh]
0x99A664: push    esi
0x99A665: push    0Eh
0x99A667: push    edi
0x99A668: lea     eax, [ebp+var_18]
0x99A66B: push    1
0x99A66D: push    eax
0x99A66E: call    unknown_libname_90
0x99A673: mov     [ebp+var_C], eax
0x99A676: lea     eax, [esi+4]
0x99A679: push    eax
0x99A67A: push    0Fh
0x99A67C: push    edi
0x99A67D: lea     eax, [ebp+var_18]
0x99A680: push    1
0x99A682: push    eax
0x99A683: call    unknown_libname_90
0x99A688: or      [ebp+var_C], eax
0x99A68B: lea     eax, [esi+8]
0x99A68E: push    eax
0x99A68F: push    10h
0x99A691: push    edi
0x99A692: mov     [ebp+var_10], eax
0x99A695: lea     eax, [ebp+var_18]
0x99A698: push    1
0x99A69A: push    eax
0x99A69B: call    unknown_libname_90
0x99A6A0: add     esp, 3Ch
0x99A6A3: or      eax, [ebp+var_C]
0x99A6A6: jz      short loc_99A6B4
0x99A6A8: push    esi
0x99A6A9: call    ___free_lconv_num
0x99A6AE: pop     ecx
0x99A6AF: or      esi, 0FFFFFFFFh
0x99A6B2: jmp     short loc_99A642
0x99A6B4: mov     eax, [ebp+var_10]
0x99A6B7: mov     eax, [eax]
0x99A6B9: jmp     short loc_99A6CD
0x99A6BB: mov     cl, [eax]
0x99A6BD: cmp     cl, 30h ; '0'
0x99A6C0: jl      short loc_99A6D4
0x99A6C2: cmp     cl, 39h ; '9'
0x99A6C5: jg      short loc_99A6D4
0x99A6C7: sub     cl, 30h ; '0'
0x99A6CA: mov     [eax], cl
0x99A6CC: inc     eax
0x99A6CD: cmp     byte ptr [eax], 0
0x99A6D0: jnz     short loc_99A6BB
0x99A6D2: jmp     short loc_99A70B
0x99A6D4: cmp     cl, 3Bh ; ';'
0x99A6D7: jnz     short loc_99A6CC
0x99A6D9: mov     esi, eax
0x99A6DB: lea     edi, [esi+1]
0x99A6DE: mov     cl, [edi]
0x99A6E0: mov     [esi], cl
0x99A6E2: mov     esi, edi
0x99A6E4: cmp     byte ptr [esi], 0
0x99A6E7: jnz     short loc_99A6DB
0x99A6E9: jmp     short loc_99A6CD
0x99A6EB: mov     ecx, off_B30DB4
0x99A6F1: mov     eax, [ebp+Memory]
0x99A6F4: mov     [eax], ecx
0x99A6F6: mov     ecx, off_B30DB8
0x99A6FC: mov     [eax+4], ecx
0x99A6FF: mov     ecx, off_B30DBC
0x99A705: mov     [ebp+var_4], esi
0x99A708: mov     [eax+8], ecx
0x99A70B: mov     eax, [ebp+var_8]
0x99A70E: xor     ecx, ecx
0x99A710: inc     ecx
0x99A711: mov     [eax], ecx
0x99A713: mov     eax, [ebp+var_4]
0x99A716: test    eax, eax
0x99A718: jz      short loc_99A71C
0x99A71A: mov     [eax], ecx
0x99A71C: mov     eax, [ebx+0B4h]
0x99A722: test    eax, eax
0x99A724: mov     esi, ds:InterlockedDecrement
0x99A72A: jz      short loc_99A72F
0x99A72C: push    eax; lpAddend
0x99A72D: call    esi ; InterlockedDecrement
0x99A72F: mov     eax, [ebx+0B0h]
0x99A735: test    eax, eax
0x99A737: jz      short loc_99A758
0x99A739: push    eax; lpAddend
0x99A73A: call    esi ; InterlockedDecrement
0x99A73C: test    eax, eax
0x99A73E: jnz     short loc_99A758
0x99A740: push    dword ptr [ebx+0B0h]; Memory
0x99A746: call    _free
0x99A74B: push    dword ptr [ebx+0BCh]; Memory
0x99A751: call    _free
0x99A756: pop     ecx
0x99A757: pop     ecx
0x99A758: mov     eax, [ebp+var_4]
0x99A75B: mov     [ebx+0B4h], eax
0x99A761: mov     eax, [ebp+var_8]
0x99A764: mov     [ebx+0B0h], eax
0x99A76A: mov     eax, [ebp+Memory]
0x99A76D: mov     [ebx+0BCh], eax
0x99A773: xor     eax, eax
0x99A775: pop     edi
0x99A776: pop     esi
0x99A777: pop     ebx
0x99A778: leave
0x99A779: retn
