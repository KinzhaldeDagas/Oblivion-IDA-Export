0x521BE0: push    esi
0x521BE1: mov     esi, ecx
0x521BE3: movzx   eax, word ptr [esi+0Ch]
0x521BE7: movzx   ecx, word ptr [esi+0Ah]
0x521BEB: cmp     ax, cx
0x521BEE: jz      loc_521CA8
0x521BF4: test    ax, ax
0x521BF7: push    ebx
0x521BF8: push    edi
0x521BF9: jz      short loc_521C30
0x521BFB: xor     edi, edi
0x521BFD: xor     ebx, ebx
0x521BFF: test    cx, cx
0x521C02: jbe     short loc_521C30
0x521C04: push    ebp
0x521C05: mov     eax, [esi+4]
0x521C08: movzx   ecx, di
0x521C0B: lea     edx, [eax+ecx*4]
0x521C0E: mov     ecx, [edx]
0x521C10: test    ecx, ecx
0x521C12: jz      short loc_521C26
0x521C14: movzx   ebp, bx
0x521C17: cmp     [eax+ebp*4], ecx
0x521C1A: lea     eax, [eax+ebp*4]
0x521C1D: jz      short loc_521C23
0x521C1F: mov     edx, ecx
0x521C21: mov     [eax], edx
0x521C23: add     ebx, 1
0x521C26: add     edi, 1
0x521C29: cmp     di, [esi+0Ah]
0x521C2D: jb      short loc_521C05
0x521C2F: pop     ebp
0x521C30: movzx   eax, word ptr [esi+0Ch]
0x521C34: test    ax, ax
0x521C37: mov     edi, [esi+4]
0x521C3A: mov     [esi+0Ah], ax
0x521C3E: mov     [esi+8], ax
0x521C42: jbe     short loc_521C96
0x521C44: movzx   eax, ax
0x521C47: xor     ecx, ecx
0x521C49: mov     edx, 4
0x521C4E: mul     edx
0x521C50: seto    cl
0x521C53: neg     ecx
0x521C55: or      ecx, eax
0x521C57: push    ecx; Size
0x521C58: call    FormHeapAlloc
0x521C5D: xor     ecx, ecx
0x521C5F: add     esp, 4
0x521C62: cmp     [esi+0Ah], cx
0x521C66: mov     [esi+4], eax
0x521C69: jbe     short loc_521C9D
0x521C6B: jmp     short loc_521C70
0x521C6D: align 10h
0x521C70: mov     edx, [esi+4]
0x521C73: movzx   eax, cx
0x521C76: add     eax, eax
0x521C78: add     eax, eax
0x521C7A: mov     ebx, [eax+edi]
0x521C7D: add     ecx, 1
0x521C80: mov     [eax+edx], ebx
0x521C83: cmp     cx, [esi+0Ah]
0x521C87: jb      short loc_521C70
0x521C89: push    edi
0x521C8A: call    FormHeapFree
0x521C8F: add     esp, 4
0x521C92: pop     edi
0x521C93: pop     ebx
0x521C94: pop     esi
0x521C95: retn
0x521C96: mov     dword ptr [esi+4], 0
0x521C9D: push    edi
0x521C9E: call    FormHeapFree
0x521CA3: add     esp, 4
0x521CA6: pop     edi
0x521CA7: pop     ebx
0x521CA8: pop     esi
0x521CA9: retn
