0x959CA0: push    edi
0x959CA1: mov     edi, ecx
0x959CA3: movzx   eax, word ptr [edi+22h]
0x959CA7: test    ax, ax
0x959CAA: jz      loc_959D5E
0x959CB0: push    ebp
0x959CB1: xor     ebp, ebp
0x959CB3: test    ax, ax
0x959CB6: jbe     loc_959D5D
0x959CBC: push    ebx
0x959CBD: push    esi
0x959CBE: mov     edi, edi
0x959CC0: movzx   eax, word ptr [edi+22h]
0x959CC4: cmp     ebp, eax
0x959CC6: jnb     loc_959D4C
0x959CCC: mov     ecx, [edi+1Ch]
0x959CCF: mov     ebx, [ecx+ebp*4]
0x959CD2: test    ebx, ebx
0x959CD4: lea     eax, [ecx+ebp*4]
0x959CD7: mov     dword ptr [eax], 0
0x959CDD: jz      short loc_959CE5
0x959CDF: add     word ptr [edi+24h], 0FFFFh
0x959CE5: movzx   eax, word ptr [edi+22h]
0x959CE9: movzx   edx, ax
0x959CEC: sub     edx, 1
0x959CEF: cmp     ebp, edx
0x959CF1: jnz     short loc_959CFA
0x959CF3: add     eax, 0FFFFFFFFh
0x959CF6: mov     [edi+22h], ax
0x959CFA: test    ebx, ebx
0x959CFC: jz      short loc_959D4C
0x959CFE: mov     esi, [ebx+4]
0x959D01: test    esi, esi
0x959D03: jz      short loc_959D21
0x959D05: lea     eax, [esi+4]
0x959D08: push    eax; lpAddend
0x959D09: call    dword ptr ds:0A2807Ch
0x959D0F: test    eax, eax
0x959D11: jnz     short loc_959D21
0x959D13: test    esi, esi
0x959D15: jz      short loc_959D21
0x959D17: mov     edx, [esi]
0x959D19: mov     eax, [edx]
0x959D1B: push    1
0x959D1D: mov     ecx, esi
0x959D1F: call    eax
0x959D21: mov     esi, [ebx]
0x959D23: test    esi, esi
0x959D25: jz      short loc_959D43
0x959D27: lea     ecx, [esi+4]
0x959D2A: push    ecx; lpAddend
0x959D2B: call    dword ptr ds:0A2807Ch
0x959D31: test    eax, eax
0x959D33: jnz     short loc_959D43
0x959D35: test    esi, esi
0x959D37: jz      short loc_959D43
0x959D39: mov     edx, [esi]
0x959D3B: mov     eax, [edx]
0x959D3D: push    1
0x959D3F: mov     ecx, esi
0x959D41: call    eax
0x959D43: push    ebx
0x959D44: call    FormHeapFree
0x959D49: add     esp, 4
0x959D4C: movzx   ecx, word ptr [edi+22h]
0x959D50: add     ebp, 1
0x959D53: cmp     ebp, ecx
0x959D55: jb      loc_959CC0
0x959D5B: pop     esi
0x959D5C: pop     ebx
0x959D5D: pop     ebp
0x959D5E: pop     edi
0x959D5F: retn
