0x77C9C0: sub     esp, 8
0x77C9C3: push    ebx
0x77C9C4: mov     ebx, ecx
0x77C9C6: mov     ecx, [ebx+20h]
0x77C9C9: xor     eax, eax
0x77C9CB: test    ecx, ecx
0x77C9CD: jz      short loc_77CA44
0x77C9CF: push    esi
0x77C9D0: mov     esi, [ecx+4]
0x77C9D3: test    esi, esi
0x77C9D5: push    edi
0x77C9D6: jbe     short loc_77C9EF
0x77C9D8: mov     edi, [ecx+8]
0x77C9DB: mov     edx, edi
0x77C9DD: lea     ecx, [ecx+0]
0x77C9E0: cmp     dword ptr [edx], 0
0x77C9E3: jnz     short loc_77CA3B
0x77C9E5: add     eax, 1
0x77C9E8: add     edx, 4
0x77C9EB: cmp     eax, esi
0x77C9ED: jb      short loc_77C9E0
0x77C9EF: xor     eax, eax
0x77C9F1: test    eax, eax
0x77C9F3: lea     edx, [ebx+1Ch]
0x77C9F6: mov     [edx], eax
0x77C9F8: jz      short loc_77CA40
0x77C9FA: lea     eax, [esp+14h+var_8]
0x77C9FE: push    eax
0x77C9FF: lea     eax, [esp+18h+var_4]
0x77CA03: push    eax
0x77CA04: push    edx
0x77CA05: mov     [esp+20h+var_8], 0
0x77CA0D: call    sub_7B2600
0x77CA12: mov     esi, [esp+14h+var_8]
0x77CA16: test    esi, esi
0x77CA18: jz      short loc_77CA32
0x77CA1A: lea     ecx, [esi+4]
0x77CA1D: push    ecx; lpAddend
0x77CA1E: call    dword ptr ds:0A2807Ch
0x77CA24: test    eax, eax
0x77CA26: jnz     short loc_77CA32
0x77CA28: mov     edx, [esi]
0x77CA2A: mov     eax, [edx]
0x77CA2C: push    1
0x77CA2E: mov     ecx, esi
0x77CA30: call    eax
0x77CA32: pop     edi
0x77CA33: mov     eax, esi
0x77CA35: pop     esi
0x77CA36: pop     ebx
0x77CA37: add     esp, 8
0x77CA3A: retn
0x77CA3B: mov     eax, [edi+eax*4]
0x77CA3E: jmp     short loc_77C9F1
0x77CA40: pop     edi
0x77CA41: xor     eax, eax
0x77CA43: pop     esi
0x77CA44: pop     ebx
0x77CA45: add     esp, 8
0x77CA48: retn
