0x7C3AB0: mov     ecx, ds:0B2CBC8h
0x7C3AB6: sub     esp, 1Ch
0x7C3AB9: xor     eax, eax
0x7C3ABB: test    ecx, ecx
0x7C3ABD: jbe     short loc_7C3AD2
0x7C3ABF: mov     edx, ds:0B2CBCCh
0x7C3AC5: cmp     dword ptr [edx+eax*4], 0
0x7C3AC9: jnz     short loc_7C3B32
0x7C3ACB: add     eax, 1
0x7C3ACE: cmp     eax, ecx
0x7C3AD0: jb      short loc_7C3AC5
0x7C3AD2: xor     eax, eax
0x7C3AD4: cmp     dword ptr ds:0B2CBD0h, 0
0x7C3ADB: mov     [esp+1Ch+var_14], eax
0x7C3ADF: mov     [esp+1Ch+var_1C], 0
0x7C3AE6: jbe     loc_7C3C04
0x7C3AEC: test    eax, eax
0x7C3AEE: jz      loc_7C3C04
0x7C3AF4: push    ebx
0x7C3AF5: push    ebp
0x7C3AF6: push    esi
0x7C3AF7: push    edi
0x7C3AF8: jmp     short loc_7C3B00
0x7C3AFA: align 10h
0x7C3B00: lea     eax, [esp+2Ch+var_1C]
0x7C3B04: push    eax
0x7C3B05: lea     ecx, [esp+30h+var_4]
0x7C3B09: push    ecx
0x7C3B0A: lea     edx, [esp+34h+var_14]
0x7C3B0E: push    edx
0x7C3B0F: mov     ecx, offset off_B2CBC4
0x7C3B14: call    sub_452600
0x7C3B19: mov     ebp, [esp+2Ch+var_1C]
0x7C3B1D: test    ebp, ebp
0x7C3B1F: jz      loc_7C3BF5
0x7C3B25: mov     ecx, [ebp+24h]
0x7C3B28: test    ecx, ecx
0x7C3B2A: jz      loc_7C3BF5
0x7C3B30: jmp     short loc_7C3B3B
0x7C3B32: mov     eax, [edx+eax*4]
0x7C3B35: jmp     short loc_7C3AD4
0x7C3B37: mov     ecx, [esp+2Ch+var_18]
0x7C3B3B: mov     ebx, [ecx+8]
0x7C3B3E: test    ebx, ebx
0x7C3B40: lea     eax, [ecx+8]
0x7C3B43: mov     [esp+2Ch+var_4], ecx
0x7C3B47: mov     ecx, [ecx]
0x7C3B49: mov     [esp+2Ch+var_18], ecx
0x7C3B4D: jz      loc_7C3BEA
0x7C3B53: mov     edx, [esp+2Ch+arg_0]
0x7C3B57: cmp     edx, [ebx+38h]
0x7C3B5A: jnz     loc_7C3BEA
0x7C3B60: mov     eax, [esp+2Ch+arg_4]
0x7C3B64: cmp     eax, [ebx+3Ch]
0x7C3B67: jnz     loc_7C3BEA
0x7C3B6D: movzx   eax, word ptr [ebx+0Eh]
0x7C3B71: mov     ecx, [ebx+14h]
0x7C3B74: xor     edi, edi
0x7C3B76: test    eax, eax
0x7C3B78: mov     [esp+2Ch+var_10], ecx
0x7C3B7C: mov     [esp+2Ch+var_8], eax
0x7C3B80: jle     short loc_7C3BC6
0x7C3B82: add     ebp, 34h ; '4'
0x7C3B85: mov     eax, [ebp+4]
0x7C3B88: test    eax, eax
0x7C3B8A: mov     edx, [esp+2Ch+var_10]
0x7C3B8E: mov     edx, [edx+edi*4]
0x7C3B91: jz      short loc_7C3BA3
0x7C3B93: cmp     edx, [eax+8]
0x7C3B96: lea     ecx, [eax+8]
0x7C3B99: mov     esi, eax
0x7C3B9B: mov     eax, [eax]
0x7C3B9D: jz      short loc_7C3BA5
0x7C3B9F: test    eax, eax
0x7C3BA1: jnz     short loc_7C3B93
0x7C3BA3: xor     esi, esi
0x7C3BA5: test    esi, esi
0x7C3BA7: mov     [esp+2Ch+var_C], esi
0x7C3BAB: jz      short loc_7C3BB9
0x7C3BAD: lea     eax, [esp+2Ch+var_C]
0x7C3BB1: push    eax
0x7C3BB2: mov     ecx, ebp
0x7C3BB4: call    sub_7AA860
0x7C3BB9: add     edi, 1
0x7C3BBC: cmp     edi, [esp+2Ch+var_8]
0x7C3BC0: jl      short loc_7C3B85
0x7C3BC2: mov     ebp, [esp+2Ch+var_1C]
0x7C3BC6: lea     ecx, [esp+2Ch+var_4]
0x7C3BCA: push    ecx
0x7C3BCB: lea     ecx, [ebp+20h]
0x7C3BCE: call    sub_7AA860
0x7C3BD3: mov     ecx, ebx
0x7C3BD5: call    sub_812D60
0x7C3BDA: push    ebx
0x7C3BDB: call    FormHeapFree
0x7C3BE0: add     esp, 4
0x7C3BE3: sub     dword ptr ds:0B43348h, 1
0x7C3BEA: cmp     [esp+2Ch+var_18], 0
0x7C3BEF: jnz     loc_7C3B37
0x7C3BF5: cmp     [esp+2Ch+var_14], 0
0x7C3BFA: jnz     loc_7C3B00
0x7C3C00: pop     edi
0x7C3C01: pop     esi
0x7C3C02: pop     ebp
0x7C3C03: pop     ebx
0x7C3C04: add     esp, 1Ch
0x7C3C07: retn
