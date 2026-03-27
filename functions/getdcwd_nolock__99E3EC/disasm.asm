0x99E3EC: push    ebp
0x99E3ED: mov     ebp, esp
0x99E3EF: push    ecx
0x99E3F0: push    ecx
0x99E3F1: push    ebx
0x99E3F2: xor     ebx, ebx
0x99E3F4: cmp     [ebp+nBufferLength], ebx
0x99E3F7: jz      short loc_99E430
0x99E3F9: push    [ebp+nBufferLength]; RootPathName
0x99E3FC: call    __validdrive
0x99E401: test    eax, eax
0x99E403: pop     ecx
0x99E404: jnz     short loc_99E437
0x99E406: call    ___doserrno
0x99E40B: mov     dword ptr [eax], 0Fh
0x99E411: call    __errno
0x99E416: push    ebx
0x99E417: push    ebx
0x99E418: push    ebx
0x99E419: push    ebx
0x99E41A: push    ebx
0x99E41B: mov     dword ptr [eax], 0Dh
0x99E421: call    __invalid_parameter
0x99E426: add     esp, 14h
0x99E429: xor     eax, eax
0x99E42B: jmp     loc_99E51E
0x99E430: call    __getdrive
0x99E435: jmp     short loc_99E43A
0x99E437: mov     eax, [ebp+nBufferLength]
0x99E43A: push    edi
0x99E43B: mov     edi, [ebp+lpBuffer]
0x99E43E: cmp     edi, ebx
0x99E440: jz      short loc_99E46F
0x99E442: mov     ecx, [ebp+NumOfElements]
0x99E445: cmp     ecx, ebx
0x99E447: jg      short loc_99E468
0x99E449: call    __errno
0x99E44E: push    ebx
0x99E44F: push    ebx
0x99E450: push    ebx
0x99E451: push    ebx
0x99E452: push    ebx
0x99E453: mov     dword ptr [eax], 16h
0x99E459: call    __invalid_parameter
0x99E45E: add     esp, 14h
0x99E461: xor     eax, eax
0x99E463: jmp     loc_99E51D
0x99E468: mov     [ebp+nBufferLength], ecx
0x99E46B: mov     [edi], bl
0x99E46D: jmp     short loc_99E472
0x99E46F: mov     [ebp+nBufferLength], ebx
0x99E472: cmp     eax, ebx
0x99E474: jz      short loc_99E488
0x99E476: add     al, 40h ; '@'
0x99E478: mov     [ebp+FileName], al
0x99E47B: mov     [ebp+var_3], 3Ah ; ':'
0x99E47F: mov     [ebp+var_2], 2Eh ; '.'
0x99E483: mov     [ebp+var_1], bl
0x99E486: jmp     short loc_99E48F
0x99E488: mov     [ebp+FileName], 2Eh ; '.'
0x99E48C: mov     [ebp+var_3], bl
0x99E48F: push    esi; SizeOfElements
0x99E490: mov     esi, ds:GetFullPathNameA
0x99E496: lea     eax, [ebp+FilePart]
0x99E499: push    eax; lpFilePart
0x99E49A: push    edi; lpBuffer
0x99E49B: push    [ebp+nBufferLength]; nBufferLength
0x99E49E: lea     eax, [ebp+FileName]
0x99E4A1: push    eax; lpFileName
0x99E4A2: call    esi ; GetFullPathNameA
0x99E4A4: cmp     eax, ebx
0x99E4A6: jz      short loc_99E50D
0x99E4A8: cmp     edi, ebx
0x99E4AA: jz      short loc_99E4C0
0x99E4AC: cmp     eax, [ebp+nBufferLength]
0x99E4AF: jl      short loc_99E509
0x99E4B1: call    __errno
0x99E4B6: mov     dword ptr [eax], 22h ; '"'
0x99E4BC: mov     [edi], bl
0x99E4BE: jmp     short loc_99E51A
0x99E4C0: cmp     eax, [ebp+NumOfElements]
0x99E4C3: jle     short loc_99E4C8
0x99E4C5: mov     [ebp+NumOfElements], eax
0x99E4C8: push    1; SizeOfElements
0x99E4CA: push    [ebp+NumOfElements]; NumOfElements
0x99E4CD: call    _calloc
0x99E4D2: mov     edi, eax
0x99E4D4: cmp     edi, ebx
0x99E4D6: pop     ecx
0x99E4D7: pop     ecx
0x99E4D8: jnz     short loc_99E4F2
0x99E4DA: call    __errno
0x99E4DF: mov     dword ptr [eax], 0Ch
0x99E4E5: call    ___doserrno
0x99E4EA: mov     dword ptr [eax], 8
0x99E4F0: jmp     short loc_99E51A
0x99E4F2: lea     eax, [ebp+FilePart]
0x99E4F5: push    eax; lpFilePart
0x99E4F6: push    edi; lpBuffer
0x99E4F7: push    [ebp+NumOfElements]; nBufferLength
0x99E4FA: lea     eax, [ebp+FileName]
0x99E4FD: push    eax; lpFileName
0x99E4FE: call    esi ; GetFullPathNameA
0x99E500: cmp     eax, ebx
0x99E502: jz      short loc_99E50D
0x99E504: cmp     eax, [ebp+NumOfElements]
0x99E507: jge     short loc_99E50D
0x99E509: mov     eax, edi
0x99E50B: jmp     short loc_99E51C
0x99E50D: call    ds:GetLastError
0x99E513: push    eax
0x99E514: call    __dosmaperr
0x99E519: pop     ecx
0x99E51A: xor     eax, eax
0x99E51C: pop     esi
0x99E51D: pop     edi
0x99E51E: pop     ebx
0x99E51F: leave
0x99E520: retn
