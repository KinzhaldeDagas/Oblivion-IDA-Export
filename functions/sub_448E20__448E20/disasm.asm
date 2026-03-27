0x448E20: push    ecx
0x448E21: mov     eax, [esp+4+lpFileName]
0x448E25: push    ebp
0x448E26: push    0; hTemplateFile
0x448E28: push    8000001h; dwFlagsAndAttributes
0x448E2D: push    3; dwCreationDisposition
0x448E2F: push    0; lpSecurityAttributes
0x448E31: push    1; dwShareMode
0x448E33: push    80000000h; dwDesiredAccess
0x448E38: push    eax; lpFileName
0x448E39: call    dword ptr ds:0A28090h
0x448E3F: mov     ebp, eax
0x448E41: cmp     ebp, 0FFFFFFFFh
0x448E44: jz      loc_448F2D
0x448E4A: push    edi
0x448E4B: push    0; lpFileSizeHigh
0x448E4D: push    ebp; hFile
0x448E4E: call    dword ptr ds:0A280A0h
0x448E54: mov     edi, eax
0x448E56: test    edi, edi
0x448E58: jz      loc_448F25
0x448E5E: push    esi
0x448E5F: push    edi; Size
0x448E60: call    FormHeapAlloc
0x448E65: add     esp, 4
0x448E68: push    0; lpOverlapped
0x448E6A: lea     ecx, [esp+14h+NumberOfBytesRead]
0x448E6E: push    ecx; lpNumberOfBytesRead
0x448E6F: push    edi; nNumberOfBytesToRead
0x448E70: mov     esi, eax
0x448E72: push    esi; lpBuffer
0x448E73: push    ebp; hFile
0x448E74: call    dword ptr ds:0A2809Ch
0x448E7A: cmp     [esp+10h+NumberOfBytesRead], edi
0x448E7E: jnz     loc_448F24
0x448E84: cmp     edi, 0Fh
0x448E87: jbe     loc_448F24
0x448E8D: lea     edx, [edi-0Fh]
0x448E90: xor     eax, eax
0x448E92: test    edx, edx
0x448E94: jbe     loc_448F24
0x448E9A: mov     cl, 61h ; 'a'
0x448E9C: lea     esp, [esp+0]
0x448EA0: cmp     byte ptr [eax+esi], 4Eh ; 'N'
0x448EA4: jnz     short loc_448EFD
0x448EA6: cmp     byte ptr [eax+esi+1], 69h ; 'i'
0x448EAB: jnz     short loc_448EFD
0x448EAD: cmp     byte ptr [eax+esi+2], 52h ; 'R'
0x448EB2: jnz     short loc_448EFD
0x448EB4: cmp     [eax+esi+3], cl
0x448EB8: jnz     short loc_448EFD
0x448EBA: cmp     byte ptr [eax+esi+4], 77h ; 'w'
0x448EBF: jnz     short loc_448EFD
0x448EC1: cmp     byte ptr [eax+esi+5], 49h ; 'I'
0x448EC6: jnz     short loc_448EFD
0x448EC8: cmp     byte ptr [eax+esi+6], 6Dh ; 'm'
0x448ECD: jnz     short loc_448EFD
0x448ECF: cmp     [eax+esi+7], cl
0x448ED3: jnz     short loc_448EFD
0x448ED5: cmp     byte ptr [eax+esi+8], 67h ; 'g'
0x448EDA: jnz     short loc_448EFD
0x448EDC: cmp     byte ptr [eax+esi+9], 65h ; 'e'
0x448EE1: jnz     short loc_448EFD
0x448EE3: cmp     byte ptr [eax+esi+0Ah], 44h ; 'D'
0x448EE8: jnz     short loc_448EFD
0x448EEA: cmp     [eax+esi+0Bh], cl
0x448EEE: jnz     short loc_448EFD
0x448EF0: cmp     byte ptr [eax+esi+0Ch], 74h ; 't'
0x448EF5: jnz     short loc_448EFD
0x448EF7: cmp     [eax+esi+0Dh], cl
0x448EFB: jz      short loc_448F12
0x448EFD: add     eax, 1
0x448F00: cmp     eax, edx
0x448F02: jb      short loc_448EA0
0x448F04: pop     esi
0x448F05: push    ebp; hObject
0x448F06: call    dword ptr ds:0A28094h
0x448F0C: pop     edi
0x448F0D: pop     ebp
0x448F0E: pop     ecx
0x448F0F: retn    4
0x448F12: mov     edx, [esp+10h+lpFileName]
0x448F16: push    edx; ArgList
0x448F17: push    offset aExportSAgainWi; "Export \"%s\" again without textures em"...
0x448F1C: call    PrintError
0x448F21: add     esp, 8
0x448F24: pop     esi
0x448F25: push    ebp; hObject
0x448F26: call    dword ptr ds:0A28094h
0x448F2C: pop     edi
0x448F2D: pop     ebp
0x448F2E: pop     ecx
0x448F2F: retn    4
