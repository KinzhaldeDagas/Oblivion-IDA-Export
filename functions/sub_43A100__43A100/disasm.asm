0x43A100: push    ecx
0x43A101: push    ebx
0x43A102: mov     ebx, [esp+8+arg_0]
0x43A106: test    ebx, ebx
0x43A108: push    ebp
0x43A109: mov     ebp, ecx
0x43A10B: jz      loc_43A24C
0x43A111: push    esi
0x43A112: mov     esi, [ebx+8]
0x43A115: test    esi, esi
0x43A117: push    edi
0x43A118: jz      loc_43A201
0x43A11E: push    9; MaxCount
0x43A120: push    offset aFlamenode; "FlameNode"
0x43A125: push    esi; Str1
0x43A126: call    __strnicmp
0x43A12B: add     esp, 0Ch
0x43A12E: test    eax, eax
0x43A130: jnz     loc_43A201
0x43A136: movsx   eax, byte ptr [esi+9]
0x43A13A: push    eax; C
0x43A13B: xor     ebx, ebx
0x43A13D: call    _isdigit
0x43A142: add     esp, 4
0x43A145: test    eax, eax
0x43A147: jz      short loc_43A15B
0x43A149: movsx   ecx, byte ptr [esi+9]
0x43A14D: sub     ecx, 12h
0x43A150: push    ecx; a1
0x43A151: call    TESForm_LookupByFormID
0x43A156: add     esp, 4
0x43A159: jmp     short loc_43A182
0x43A15B: movsx   edx, byte ptr [esi+9]
0x43A15F: push    edx; C
0x43A160: call    _isalpha
0x43A165: add     esp, 4
0x43A168: test    eax, eax
0x43A16A: jz      short loc_43A184
0x43A16C: movsx   eax, byte ptr [esi+9]
0x43A170: push    eax; C
0x43A171: call    _tolower
0x43A176: sub     eax, 39h ; '9'
0x43A179: push    eax; a1
0x43A17A: call    TESForm_LookupByFormID
0x43A17F: add     esp, 8
0x43A182: mov     ebx, eax
0x43A184: mov     ecx, [ebp+0]
0x43A187: mov     [esp+14h+var_4], 0
0x43A18F: mov     edi, [ecx]
0x43A191: mov     eax, [ebx+24h]
0x43A194: lea     esi, [ebx+24h]
0x43A197: lea     edx, [esp+14h+var_4]
0x43A19B: push    edx
0x43A19C: mov     edx, [eax+14h]
0x43A19F: mov     ecx, esi
0x43A1A1: add     edi, 4
0x43A1A4: call    edx
0x43A1A6: mov     ecx, [ebp+0]
0x43A1A9: push    eax
0x43A1AA: mov     eax, [edi]
0x43A1AC: call    eax
0x43A1AE: test    al, al
0x43A1B0: jnz     short loc_43A1FD
0x43A1B2: mov     edx, [esi]
0x43A1B4: mov     eax, [edx+14h]
0x43A1B7: push    1
0x43A1B9: push    0
0x43A1BB: push    0
0x43A1BD: mov     ecx, esi
0x43A1BF: call    eax
0x43A1C1: push    eax
0x43A1C2: mov     ecx, ebp
0x43A1C4: call    sub_439EB0
0x43A1C9: test    eax, eax
0x43A1CB: jz      short loc_43A1FD
0x43A1CD: mov     ecx, [ebp+0]
0x43A1D0: mov     edi, [ecx]
0x43A1D2: mov     eax, [esi]
0x43A1D4: lea     edx, [esp+14h+var_4]
0x43A1D8: push    edx
0x43A1D9: mov     edx, [eax+14h]
0x43A1DC: mov     ecx, esi
0x43A1DE: add     edi, 4
0x43A1E1: call    edx
0x43A1E3: mov     ecx, [ebp+0]
0x43A1E6: push    eax
0x43A1E7: mov     eax, [edi]
0x43A1E9: call    eax
0x43A1EB: test    al, al
0x43A1ED: jz      short loc_43A1FD
0x43A1EF: mov     ecx, [esp+14h+var_4]
0x43A1F3: add     ecx, 4
0x43A1F6: push    ecx; lpAddend
0x43A1F7: call    ds:InterlockedDecrement
0x43A1FD: mov     ebx, [esp+14h+arg_0]
0x43A201: movzx   eax, word ptr [ebx+0B6h]
0x43A208: xor     edi, edi
0x43A20A: test    eax, eax
0x43A20C: jbe     short loc_43A24A
0x43A20E: cmp     eax, edi
0x43A210: jbe     short loc_43A23C
0x43A212: mov     edx, [ebx+0B0h]
0x43A218: mov     esi, [edx+edi*4]
0x43A21B: test    esi, esi
0x43A21D: jz      short loc_43A23C
0x43A21F: mov     eax, [esi]
0x43A221: mov     edx, [eax+4]
0x43A224: mov     ecx, esi
0x43A226: call    edx
0x43A228: cmp     eax, offset dword_B3FAB0
0x43A22D: setz    al
0x43A230: test    al, al
0x43A232: jz      short loc_43A23C
0x43A234: push    esi
0x43A235: mov     ecx, ebp
0x43A237: call    sub_43A100
0x43A23C: movzx   eax, word ptr [ebx+0B6h]
0x43A243: add     edi, 1
0x43A246: cmp     eax, edi
0x43A248: ja      short loc_43A212
0x43A24A: pop     edi
0x43A24B: pop     esi
0x43A24C: pop     ebp
0x43A24D: pop     ebx
0x43A24E: pop     ecx
0x43A24F: retn    4
