0x616CA0: push    esi
0x616CA1: mov     esi, ecx
0x616CA3: mov     eax, [esi+0A4h]
0x616CA9: test    eax, eax
0x616CAB: jz      loc_616DA0
0x616CB1: cmp     dword ptr [eax], 0
0x616CB4: jz      loc_616DA0
0x616CBA: mov     eax, [esi+3Ch]
0x616CBD: mov     ecx, [eax+58h]
0x616CC0: mov     edx, [ecx]
0x616CC2: mov     eax, [edx+0ECh]
0x616CC8: push    ebx
0x616CC9: push    edi
0x616CCA: push    1
0x616CCC: call    eax
0x616CCE: mov     ebx, eax
0x616CD0: test    ebx, ebx
0x616CD2: jz      short loc_616CD9
0x616CD4: mov     edi, [ebx+8]
0x616CD7: jmp     short loc_616CDB
0x616CD9: xor     edi, edi
0x616CDB: test    edi, edi
0x616CDD: jz      loc_616D9E
0x616CE3: mov     ecx, ebx
0x616CE5: call    sub_484DF0
0x616CEA: test    eax, eax
0x616CEC: jnz     loc_616D9E
0x616CF2: cmp     [edi+64h], eax
0x616CF5: jnz     loc_616D9E
0x616CFB: mov     ecx, [esi+0A4h]
0x616D01: mov     eax, [ecx]
0x616D03: test    eax, eax
0x616D05: jz      short loc_616D0C
0x616D07: lea     edi, [eax-24h]
0x616D0A: jmp     short loc_616D0E
0x616D0C: xor     edi, edi
0x616D0E: cmp     byte ptr ds:0B3B908h, 0
0x616D15: jz      short loc_616D3A
0x616D17: mov     eax, [edi+28h]
0x616D1A: test    eax, eax
0x616D1C: jnz     short loc_616D23
0x616D1E: mov     eax, offset EmptyString
0x616D23: mov     ecx, [esi+3Ch]; this
0x616D26: push    eax
0x616D27: call    TESObjectREFR_GetName
0x616D2C: push    eax
0x616D2D: push    offset a_20sPoisonsCur; "%.20s poisons current weapon with %s!"
0x616D32: call    Interface_ConsolePrint
0x616D37: add     esp, 0Ch
0x616D3A: mov     edx, [esi+0A4h]
0x616D40: mov     eax, [edx]
0x616D42: test    eax, eax
0x616D44: jz      short loc_616D4B
0x616D46: add     eax, 0FFFFFFDCh
0x616D49: jmp     short loc_616D4D
0x616D4B: xor     eax, eax
0x616D4D: push    eax
0x616D4E: mov     ecx, ebx
0x616D50: call    sub_484E20
0x616D55: mov     ecx, [esi+0A4h]
0x616D5B: call    sub_67F100
0x616D60: mov     ecx, [esi+3Ch]
0x616D63: mov     eax, [ecx]
0x616D65: mov     edx, [eax+100h]
0x616D6B: push    0
0x616D6D: push    1
0x616D6F: push    0
0x616D71: push    0
0x616D73: push    0
0x616D75: push    0
0x616D77: push    0
0x616D79: push    1
0x616D7B: push    0
0x616D7D: push    edi
0x616D7E: call    edx
0x616D80: mov     eax, [esi+0A4h]
0x616D86: cmp     dword ptr [eax], 0
0x616D89: jnz     short loc_616D9E
0x616D8B: push    eax
0x616D8C: call    FormHeapFree
0x616D91: add     esp, 4
0x616D94: mov     dword ptr [esi+0A4h], 0
0x616D9E: pop     edi
0x616D9F: pop     ebx
0x616DA0: pop     esi
0x616DA1: retn
