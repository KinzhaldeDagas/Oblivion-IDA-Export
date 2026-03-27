0x416A80: mov     ecx, SaveLoad_CurrentSavegame
0x416A86: push    ebx
0x416A87: push    esi
0x416A88: xor     ebx, ebx
0x416A8A: call    sub_45A170
0x416A8F: test    al, al
0x416A91: jz      short loc_416A98
0x416A93: mov     ebx, 6
0x416A98: mov     ecx, dword_B3350C
0x416A9E: add     ebx, 4
0x416AA1: xor     eax, eax
0x416AA3: test    ecx, ecx
0x416AA5: jbe     short loc_416ABD
0x416AA7: mov     edx, dword_B33510
0x416AAD: lea     ecx, [ecx+0]
0x416AB0: cmp     dword ptr [edx+eax*4], 0
0x416AB4: jnz     short loc_416AD1
0x416AB6: add     eax, 1
0x416AB9: cmp     eax, ecx
0x416ABB: jb      short loc_416AB0
0x416ABD: xor     eax, eax
0x416ABF: test    eax, eax
0x416AC1: jz      short loc_416B27
0x416AC3: push    edi
0x416AC4: mov     ecx, [eax]
0x416AC6: test    ecx, ecx
0x416AC8: mov     edi, [eax+8]
0x416ACB: jz      short loc_416AD6
0x416ACD: mov     eax, ecx
0x416ACF: jmp     short loc_416B10
0x416AD1: mov     eax, [edx+eax*4]
0x416AD4: jmp     short loc_416ABF
0x416AD6: mov     eax, [eax+4]
0x416AD9: mov     edx, EffectSettingCollection
0x416ADF: push    eax
0x416AE0: mov     eax, [edx+4]
0x416AE3: mov     ecx, offset EffectSettingCollection
0x416AE8: call    eax
0x416AEA: mov     edx, dword_B3350C
0x416AF0: add     eax, 1
0x416AF3: cmp     eax, edx
0x416AF5: jnb     short loc_416B0E
0x416AF7: mov     esi, dword_B33510
0x416AFD: lea     ecx, [ecx+0]
0x416B00: mov     ecx, [esi+eax*4]
0x416B03: test    ecx, ecx
0x416B05: jnz     short loc_416ACD
0x416B07: add     eax, 1
0x416B0A: cmp     eax, edx
0x416B0C: jb      short loc_416B00
0x416B0E: xor     eax, eax
0x416B10: test    edi, edi
0x416B12: jz      short loc_416B22
0x416B14: mov     ecx, [edi+58h]
0x416B17: shr     ecx, 15h
0x416B1A: test    cl, 1
0x416B1D: jz      short loc_416B22
0x416B1F: add     ebx, 4
0x416B22: test    eax, eax
0x416B24: jnz     short loc_416AC4
0x416B26: pop     edi
0x416B27: cmp     Global_DebugSaveBuffer, 0
0x416B2E: jz      short loc_416B8E
0x416B30: mov     edx, SaveLoad_CurrentSavegame
0x416B36: mov     esi, [edx+84h]
0x416B3C: test    esi, esi
0x416B3E: jz      short loc_416B79
0x416B40: mov     eax, [esi]
0x416B42: push    eax; a1
0x416B43: call    TESForm_LookupByFormID
0x416B48: mov     ecx, [esi+5]
0x416B4B: mov     edx, [eax]
0x416B4D: add     esp, 4
0x416B50: push    offset a__TesSharedMag; "..\\TES Shared\\Magic\\EffectSettingCol"...
0x416B55: push    6Dh ; 'm'
0x416B57: push    ecx
0x416B58: mov     ecx, eax
0x416B5A: mov     eax, [edx+0D4h]
0x416B60: call    eax
0x416B62: mov     ecx, [esi]
0x416B64: push    eax
0x416B65: push    ecx
0x416B66: push    ebx; ArgList
0x416B67: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x416B6C: call    sub_40FEC0
0x416B71: add     esp, 1Ch
0x416B74: pop     esi
0x416B75: mov     eax, ebx
0x416B77: pop     ebx
0x416B78: retn
0x416B79: push    offset a__TesSharedMag; "..\\TES Shared\\Magic\\EffectSettingCol"...
0x416B7E: push    6Dh ; 'm'
0x416B80: push    ebx; ArgList
0x416B81: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x416B86: call    sub_40FEC0
0x416B8B: add     esp, 10h
0x416B8E: pop     esi
0x416B8F: mov     eax, ebx
0x416B91: pop     ebx
0x416B92: retn
