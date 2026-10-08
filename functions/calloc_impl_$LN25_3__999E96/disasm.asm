0x999E96: mov     ebx, [ebp-1Ch]
0x999E99: cmp     ebx, edi
0x999E9B: jz      short loc_999EAE
0x999E9D: push    dword ptr [ebp+8]
0x999EA0: push    edi
0x999EA1: push    ebx
0x999EA2: call    __memset
0x999EA7: add     esp, 0Ch
0x999EAA: cmp     ebx, edi
0x999EAC: jnz     short loc_999F0F
0x999EAE: push    esi; dwBytes
0x999EAF: push    8; dwFlags
0x999EB1: push    dword_BA9E10+49Ch; hHeap
0x999EB7: call    ds:HeapAlloc
0x999EBD: mov     ebx, eax
0x999EBF: cmp     ebx, edi
0x999EC1: jnz     short loc_999F0F
0x999EC3: cmp     dword_BA9E10+7B8h, edi
0x999EC9: jz      short loc_999EFE
0x999ECB: push    esi
0x999ECC: call    __callnewh
0x999ED1: pop     ecx
0x999ED2: test    eax, eax
0x999ED4: jnz     loc_999E4C
0x999EDA: mov     eax, [ebp+10h]
0x999EDD: cmp     eax, edi
0x999EDF: jz      loc_999E35
0x999EE5: mov     dword ptr [eax], 0Ch
0x999EEB: jmp     loc_999E35
0x999EFE: cmp     ebx, edi
0x999F00: jnz     short loc_999F0F
0x999F02: mov     eax, [ebp+10h]
0x999F05: cmp     eax, edi
0x999F07: jz      short loc_999F0F
0x999F09: mov     dword ptr [eax], 0Ch
0x999F0F: mov     eax, ebx
