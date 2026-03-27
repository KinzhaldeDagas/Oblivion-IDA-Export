0x983FD0: push    ebp
0x983FD1: mov     ebp, esp
0x983FD3: push    edi
0x983FD4: mov     edi, [ebp+Str]
0x983FD7: xor     eax, eax
0x983FD9: or      ecx, 0FFFFFFFFh
0x983FDC: repne scasb
0x983FDE: add     ecx, 1
0x983FE1: neg     ecx
0x983FE3: sub     edi, 1
0x983FE6: mov     al, byte ptr [ebp+arg_4]
0x983FE9: std
0x983FEA: repne scasb
0x983FEC: add     edi, 1
0x983FEF: cmp     [edi], al
0x983FF1: jz      short _strrchr___returndi
0x983FF3: xor     eax, eax
0x983FF5: jmp     short _strrchr___toend
