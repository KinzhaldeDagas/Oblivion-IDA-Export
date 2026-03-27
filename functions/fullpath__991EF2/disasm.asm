0x991EF2: push    ebp
0x991EF3: mov     ebp, esp
0x991EF5: push    ecx
0x991EF6: push    ecx
0x991EF7: mov     eax, [ebp+Path]
0x991EFA: push    ebx
0x991EFB: xor     ebx, ebx
0x991EFD: cmp     eax, ebx
0x991EFF: push    esi
0x991F00: push    edi; SizeOfElements
0x991F01: jz      loc_991FE8
0x991F07: cmp     [eax], bl
0x991F09: jz      loc_991FE8
0x991F0F: cmp     [ebp+FullPath], ebx
0x991F12: mov     esi, ds:GetFullPathNameA
0x991F18: jnz     short loc_991F75
0x991F1A: push    ebx; lpFilePart
0x991F1B: push    ebx; lpBuffer
0x991F1C: push    ebx; nBufferLength
0x991F1D: push    eax; lpFileName
0x991F1E: call    esi ; GetFullPathNameA
0x991F20: cmp     eax, ebx
0x991F22: jnz     short loc_991F37
0x991F24: call    ds:GetLastError
0x991F2A: push    eax
0x991F2B: call    __dosmaperr
0x991F30: xor     eax, eax
0x991F32: jmp     loc_991FF4
0x991F37: mov     edi, [ebp+SizeInBytes]
0x991F3A: cmp     edi, eax
0x991F3C: ja      short loc_991F40
0x991F3E: mov     edi, eax
0x991F40: cmp     edi, 0FFFFFFFFh
0x991F43: jbe     short loc_991F57
0x991F45: call    __errno
0x991F4A: mov     dword ptr [eax], 16h
0x991F50: xor     eax, eax
0x991F52: jmp     loc_991FF5
0x991F57: push    1; SizeOfElements
0x991F59: push    edi; NumOfElements
0x991F5A: call    _calloc
0x991F5F: cmp     eax, ebx
0x991F61: pop     ecx
0x991F62: pop     ecx
0x991F63: mov     [ebp+lpBuffer], eax
0x991F66: jnz     short loc_991F9C
0x991F68: call    __errno
0x991F6D: mov     dword ptr [eax], 0Ch
0x991F73: jmp     short loc_991F50
0x991F75: mov     edi, [ebp+SizeInBytes]
0x991F78: cmp     edi, ebx
0x991F7A: ja      short loc_991F96
0x991F7C: call    __errno
0x991F81: push    ebx
0x991F82: push    ebx
0x991F83: push    ebx
0x991F84: push    ebx
0x991F85: push    ebx
0x991F86: mov     dword ptr [eax], 16h
0x991F8C: call    __invalid_parameter
0x991F91: add     esp, 14h
0x991F94: jmp     short loc_991F50
0x991F96: mov     eax, [ebp+FullPath]
0x991F99: mov     [ebp+lpBuffer], eax
0x991F9C: lea     eax, [ebp+FilePart]
0x991F9F: push    eax; lpFilePart
0x991FA0: push    [ebp+lpBuffer]; lpBuffer
0x991FA3: push    edi; nBufferLength
0x991FA4: push    [ebp+Path]; lpFileName
0x991FA7: call    esi ; GetFullPathNameA
0x991FA9: cmp     eax, edi
0x991FAB: jb      short loc_991FC8
0x991FAD: cmp     [ebp+FullPath], ebx
0x991FB0: jnz     short loc_991FBB
0x991FB2: push    [ebp+lpBuffer]; Memory
0x991FB5: call    _free
0x991FBA: pop     ecx
0x991FBB: call    __errno
0x991FC0: mov     dword ptr [eax], 22h ; '"'
0x991FC6: jmp     short loc_991F50
0x991FC8: cmp     eax, ebx
0x991FCA: jnz     short loc_991FE3
0x991FCC: cmp     [ebp+FullPath], ebx
0x991FCF: jnz     loc_991F24
0x991FD5: push    [ebp+lpBuffer]; Memory
0x991FD8: call    _free
0x991FDD: pop     ecx
0x991FDE: jmp     loc_991F24
0x991FE3: mov     eax, [ebp+lpBuffer]
0x991FE6: jmp     short loc_991FF5
0x991FE8: push    [ebp+SizeInBytes]; int
0x991FEB: push    [ebp+FullPath]; char *
0x991FEE: call    __getcwd
0x991FF3: pop     ecx
0x991FF4: pop     ecx
0x991FF5: pop     edi
0x991FF6: pop     esi
0x991FF7: pop     ebx
0x991FF8: leave
0x991FF9: retn
