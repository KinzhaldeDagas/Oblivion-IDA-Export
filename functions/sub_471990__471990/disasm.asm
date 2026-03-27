0x471990: sub     esp, 10h
0x471993: push    ebx
0x471994: push    ebp
0x471995: push    esi
0x471996: push    edi
0x471997: mov     ebx, ecx
0x471999: mov     [esp+20h+var_8], 0
0x4719A1: jmp     short loc_4719B0
0x4719A3: align 10h
0x4719B0: mov     [esp+20h+var_C], 0
0x4719B8: jmp     short loc_4719C0
0x4719BA: align 10h
0x4719C0: mov     [esp+20h+var_10], 16h
0x4719C8: jmp     short loc_4719D0
0x4719CA: align 10h
0x4719D0: mov     eax, [esp+20h+var_10]
0x4719D4: mov     ecx, [esp+20h+var_C]
0x4719D8: mov     edx, [esp+20h+var_8]
0x4719DC: push    eax
0x4719DD: push    ecx
0x4719DE: push    edx
0x4719DF: call    sub_51A9B0
0x4719E4: mov     esi, [ebx+9Ch]
0x4719EA: movzx   ebp, ax
0x4719ED: mov     eax, [esi]
0x4719EF: mov     edx, [eax+4]
0x4719F2: add     esp, 0Ch
0x4719F5: push    ebp
0x4719F6: mov     ecx, esi
0x4719F8: call    edx
0x4719FA: mov     ecx, [esi+8]
0x4719FD: mov     edi, [ecx+eax*4]
0x471A00: test    edi, edi
0x471A02: jz      loc_471B35
0x471A08: jmp     short loc_471A10
0x471A0A: align 10h
0x471A10: movzx   eax, word ptr [edi+4]
0x471A14: mov     edx, [esi]
0x471A16: mov     edx, [edx+8]
0x471A19: push    eax
0x471A1A: push    ebp
0x471A1B: mov     ecx, esi
0x471A1D: call    edx
0x471A1F: test    al, al
0x471A21: jnz     short loc_471A2E
0x471A23: mov     edi, [edi]
0x471A25: test    edi, edi
0x471A27: jnz     short loc_471A10
0x471A29: jmp     loc_471B35
0x471A2E: mov     edi, [edi+8]
0x471A31: mov     eax, [edi]
0x471A33: mov     edx, [eax+10h]
0x471A36: push    0FFFFFFFFh
0x471A38: mov     ecx, edi
0x471A3A: call    edx
0x471A3C: mov     esi, eax
0x471A3E: cmp     [ebx+0ACh], esi
0x471A44: jnz     short loc_471AC3
0x471A46: cmp     dword ptr [ebx+98h], 0
0x471A4D: jz      short loc_471AA5
0x471A4F: mov     eax, [ebx+0ACh]
0x471A55: test    eax, eax
0x471A57: jz      short loc_471AA5
0x471A59: cmp     dword ptr [eax+44h], 0
0x471A5D: jz      short loc_471AA5
0x471A5F: mov     eax, [eax+58h]
0x471A62: test    eax, eax
0x471A64: jz      short loc_471A75
0x471A66: fldz
0x471A68: push    0; char
0x471A6A: push    ecx
0x471A6B: fstp    [esp+28h+var_28]; float
0x471A6E: mov     ecx, eax
0x471A70: call    sub_6C9CB0
0x471A75: mov     eax, [ebx+0ACh]
0x471A7B: cmp     dword ptr [eax+44h], 5
0x471A7F: jnz     short loc_471A92
0x471A81: fldz
0x471A83: push    ecx
0x471A84: mov     ecx, [ebx+98h]
0x471A8A: fstp    [esp+24h+var_24]; float
0x471A8D: call    sub_6C4480
0x471A92: fldz
0x471A94: push    0; char
0x471A96: push    ecx
0x471A97: fstp    [esp+28h+var_28]; float
0x471A9A: mov     ecx, [ebx+0ACh]
0x471AA0: call    sub_6C9CB0
0x471AA5: mov     eax, 0FFh
0x471AAA: mov     dword ptr [ebx+0ACh], 0
0x471AB4: mov     [ebx+42h], ax
0x471AB8: mov     [ebx+76h], ax
0x471ABC: mov     dword ptr [ebx+54h], 0FFFFFFFFh
0x471AC3: mov     ecx, ds:0B33A1Ch
0x471AC9: push    esi
0x471ACA: call    sub_4359D0
0x471ACF: test    eax, eax
0x471AD1: jz      short loc_471ADD
0x471AD3: add     eax, 0Ch
0x471AD6: push    eax; lpAddend
0x471AD7: call    dword ptr ds:0A2807Ch
0x471ADD: mov     ecx, [ebx+9Ch]
0x471AE3: push    ebp
0x471AE4: call    sub_4708B0
0x471AE9: push    esi
0x471AEA: lea     ecx, [esp+24h+var_4]
0x471AEE: push    ecx
0x471AEF: mov     ecx, [ebx+98h]
0x471AF5: call    sub_6C4A10
0x471AFA: mov     eax, [esp+20h+var_4]
0x471AFE: test    eax, eax
0x471B00: jz      short loc_471B20
0x471B02: mov     esi, eax
0x471B04: add     eax, 4
0x471B07: push    eax; lpAddend
0x471B08: call    dword ptr ds:0A2807Ch
0x471B0E: test    eax, eax
0x471B10: jnz     short loc_471B20
0x471B12: test    esi, esi
0x471B14: jz      short loc_471B20
0x471B16: mov     edx, [esi]
0x471B18: mov     eax, [edx]
0x471B1A: push    1
0x471B1C: mov     ecx, esi
0x471B1E: call    eax
0x471B20: mov     edx, [edi]
0x471B22: mov     eax, [edx+4]
0x471B25: push    0
0x471B27: mov     ecx, edi
0x471B29: call    eax
0x471B2B: mov     edx, [edi]
0x471B2D: mov     eax, [edx]
0x471B2F: push    1
0x471B31: mov     ecx, edi
0x471B33: call    eax
0x471B35: mov     eax, [esp+20h+var_10]
0x471B39: add     eax, 1
0x471B3C: cmp     eax, 1Ah
0x471B3F: mov     [esp+20h+var_10], eax
0x471B43: jle     loc_4719D0
0x471B49: mov     eax, [esp+20h+var_C]
0x471B4D: add     eax, 1
0x471B50: cmp     eax, 6
0x471B53: mov     [esp+20h+var_C], eax
0x471B57: jl      loc_4719C0
0x471B5D: mov     eax, [esp+20h+var_8]
0x471B61: add     eax, 1
0x471B64: cmp     eax, 4
0x471B67: mov     [esp+20h+var_8], eax
0x471B6B: jl      loc_4719B0
0x471B71: pop     edi
0x471B72: pop     esi
0x471B73: pop     ebp
0x471B74: pop     ebx
0x471B75: add     esp, 10h
0x471B78: retn
