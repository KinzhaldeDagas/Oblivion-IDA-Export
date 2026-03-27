0x40FE00: mov     ecx, [esp+arg_0]
0x40FE04: cmp     ecx, 5; switch 6 cases
0x40FE07: ja      BSThread_SetPriority___def_40FE0D; jumptable 0040FE0D default case, case 2
0x40FE0D: jmp     ds:jpt_40FE0D[ecx*4]; switch jump
0x40FE14: mov     eax, 0FFFFFFFEh; jumptable 0040FE0D case 0
0x40FE19: push    eax; nPriority
0x40FE1A: mov     eax, hHandle
0x40FE1F: push    eax; hThread
0x40FE20: mov     dword_B33438, ecx
0x40FE26: call    ds:SetThreadPriority
0x40FE2C: retn
0x40FE2D: or      eax, 0FFFFFFFFh; jumptable 0040FE0D case 1
0x40FE30: push    eax; nPriority
0x40FE31: mov     eax, hHandle
0x40FE36: push    eax; hThread
0x40FE37: mov     dword_B33438, ecx
0x40FE3D: call    ds:SetThreadPriority
0x40FE43: retn
0x40FE44: mov     eax, 1; jumptable 0040FE0D case 3
0x40FE49: push    eax; nPriority
0x40FE4A: mov     eax, hHandle
0x40FE4F: push    eax; hThread
0x40FE50: mov     dword_B33438, ecx
0x40FE56: call    ds:SetThreadPriority
0x40FE5C: retn
0x40FE5D: mov     eax, 2; jumptable 0040FE0D case 4
0x40FE62: push    eax; nPriority
0x40FE63: mov     eax, hHandle
0x40FE68: push    eax; hThread
0x40FE69: mov     dword_B33438, ecx
0x40FE6F: call    ds:SetThreadPriority
0x40FE75: retn
0x40FE76: mov     eax, 0Fh; jumptable 0040FE0D case 5
0x40FE7B: push    eax; nPriority
0x40FE7C: mov     eax, hHandle
0x40FE81: push    eax; hThread
0x40FE82: mov     dword_B33438, ecx
0x40FE88: call    ds:SetThreadPriority
0x40FE8E: retn
0x40FE8F: xor     eax, eax; jumptable 0040FE0D default case, case 2
0x40FE91: push    eax; nPriority
0x40FE92: mov     eax, hHandle
0x40FE97: push    eax; hThread
0x40FE98: mov     dword_B33438, ecx
0x40FE9E: call    ds:SetThreadPriority
0x40FEA4: retn
