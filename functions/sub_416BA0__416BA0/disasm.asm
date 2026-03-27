0x416BA0: sub     esp, 14h
0x416BA3: cmp     Global_DebugSaveBuffer, 0
0x416BAA: mov     ecx, SaveLoad_CurrentSavegame
0x416BB0: mov     [esp+14h+var_4], 0
0x416BB8: mov     eax, [ecx+14h]
0x416BBB: mov     [esp+14h+var_8], 0
0x416BC3: mov     [esp+14h+var_10], eax
0x416BC7: jz      short loc_416BCD
0x416BC9: mov     [esp+14h+var_10], eax
0x416BCD: call    sub_45A170
0x416BD2: test    al, al
0x416BD4: jz      short loc_416C09
0x416BD6: mov     ecx, SaveLoad_CurrentSavegame
0x416BDC: push    4; Size
0x416BDE: lea     eax, [esp+18h+Src]
0x416BE2: push    eax; Src
0x416BE3: mov     [esp+1Ch+Src], 4B4F4C42h
0x416BEB: call    SaveLoad_SaveData
0x416BF0: mov     ecx, SaveLoad_CurrentSavegame
0x416BF6: mov     edx, [ecx+14h]
0x416BF9: push    2; Size
0x416BFB: lea     eax, [esp+18h+var_4]
0x416BFF: push    eax; Src
0x416C00: mov     [esp+1Ch+var_8], edx
0x416C04: call    SaveLoad_SaveData
0x416C09: mov     edx, dword_B33510
0x416C0F: mov     ecx, dword_B3350C
0x416C15: push    ebx
0x416C16: push    ebp
0x416C17: push    esi
0x416C18: xor     ebp, ebp
0x416C1A: push    edi
0x416C1B: mov     [esp+24h+var_14], 0
0x416C23: or      ebx, 0FFFFFFFFh
0x416C26: xor     eax, eax
0x416C28: test    ecx, ecx
0x416C2A: jbe     short loc_416C3D
0x416C2C: lea     esp, [esp+0]
0x416C30: cmp     dword ptr [edx+eax*4], 0
0x416C34: jnz     short loc_416C68
0x416C36: add     eax, 1
0x416C39: cmp     eax, ecx
0x416C3B: jb      short loc_416C30
0x416C3D: xor     eax, eax
0x416C3F: test    eax, eax
0x416C41: mov     esi, eax
0x416C43: jz      loc_416CE3
0x416C49: lea     esp, [esp+0]
0x416C50: mov     [esp+24h+Src], ebx
0x416C54: mov     eax, [esi+4]
0x416C57: mov     [esp+24h+Src], eax
0x416C5B: mov     eax, [esi]
0x416C5D: test    eax, eax
0x416C5F: mov     edi, [esi+8]
0x416C62: jz      short loc_416C6D
0x416C64: mov     esi, eax
0x416C66: jmp     short loc_416CA4
0x416C68: mov     eax, [edx+eax*4]
0x416C6B: jmp     short loc_416C3F
0x416C6D: mov     ecx, [esi+4]
0x416C70: mov     edx, EffectSettingCollection
0x416C76: mov     eax, [edx+4]
0x416C79: push    ecx
0x416C7A: mov     ecx, offset EffectSettingCollection
0x416C7F: call    eax
0x416C81: mov     ecx, dword_B3350C
0x416C87: mov     edx, dword_B33510
0x416C8D: add     eax, 1
0x416C90: cmp     eax, ecx
0x416C92: jnb     short loc_416CA2
0x416C94: mov     esi, [edx+eax*4]
0x416C97: test    esi, esi
0x416C99: jnz     short loc_416CA4
0x416C9B: add     eax, 1
0x416C9E: cmp     eax, ecx
0x416CA0: jb      short loc_416C94
0x416CA2: xor     esi, esi
0x416CA4: test    edi, edi
0x416CA6: jz      short loc_416CDB
0x416CA8: mov     eax, [edi+58h]
0x416CAB: shr     eax, 15h
0x416CAE: test    al, 1
0x416CB0: jz      short loc_416CDB
0x416CB2: test    ebp, ebp
0x416CB4: jnz     short loc_416CBD
0x416CB6: add     [esp+24h+var_14], 1
0x416CBB: jmp     short loc_416CDB
0x416CBD: push    4; Size
0x416CBF: lea     ecx, [esp+28h+Src]
0x416CC3: push    ecx; Src
0x416CC4: mov     ecx, SaveLoad_CurrentSavegame
0x416CCA: call    SaveLoad_SaveData
0x416CCF: mov     edx, dword_B33510
0x416CD5: mov     ecx, dword_B3350C
0x416CDB: test    esi, esi
0x416CDD: jnz     loc_416C50
0x416CE3: test    ebp, ebp
0x416CE5: jnz     short loc_416D0B
0x416CE7: mov     ecx, SaveLoad_CurrentSavegame
0x416CED: push    4; Size
0x416CEF: lea     edx, [esp+28h+var_14]
0x416CF3: push    edx; Src
0x416CF4: call    SaveLoad_SaveData
0x416CF9: cmp     [esp+24h+var_14], ebp
0x416CFD: jz      short loc_416D17
0x416CFF: mov     edx, dword_B33510
0x416D05: mov     ecx, dword_B3350C
0x416D0B: add     ebp, 1
0x416D0E: cmp     ebp, 2
0x416D11: jl      loc_416C26
0x416D17: cmp     Global_DebugSaveBuffer, 0
0x416D1E: jz      short loc_416D8B
0x416D20: mov     eax, SaveLoad_CurrentSavegame
0x416D25: mov     edi, [eax+84h]
0x416D2B: test    edi, edi
0x416D2D: mov     esi, [eax+14h]
0x416D30: jz      short loc_416D6F
0x416D32: mov     eax, [edi]
0x416D34: push    eax; a1
0x416D35: call    TESForm_LookupByFormID
0x416D3A: mov     ecx, [edi+5]
0x416D3D: mov     edx, [eax]
0x416D3F: add     esp, 4
0x416D42: push    offset a__TesSharedMag; "..\\TES Shared\\Magic\\EffectSettingCol"...
0x416D47: push    9Dh
0x416D4C: push    ecx
0x416D4D: mov     ecx, eax
0x416D4F: mov     eax, [edx+0D4h]
0x416D55: call    eax
0x416D57: mov     ecx, [edi]
0x416D59: sub     esi, [esp+30h+var_10]
0x416D5D: push    eax
0x416D5E: push    ecx
0x416D5F: push    esi; ArgList
0x416D60: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x416D65: call    sub_40FEC0
0x416D6A: add     esp, 1Ch
0x416D6D: jmp     short loc_416D8B
0x416D6F: sub     esi, [esp+24h+var_10]
0x416D73: push    offset a__TesSharedMag; "..\\TES Shared\\Magic\\EffectSettingCol"...
0x416D78: push    9Dh
0x416D7D: push    esi; ArgList
0x416D7E: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x416D83: call    sub_40FEC0
0x416D88: add     esp, 10h
0x416D8B: mov     ecx, SaveLoad_CurrentSavegame
0x416D91: call    sub_45A170
0x416D96: test    al, al
0x416D98: jz      short loc_416DCD
0x416D9A: mov     edx, SaveLoad_CurrentSavegame
0x416DA0: mov     edi, [esp+24h+var_8]
0x416DA4: mov     esi, [edx+14h]
0x416DA7: lea     eax, [edi+0FFFFh]
0x416DAD: cmp     esi, eax
0x416DAF: jbe     short loc_416DC8
0x416DB1: push    9Dh
0x416DB6: push    offset a__TesSharedMag; "..\\TES Shared\\Magic\\EffectSettingCol"...
0x416DBB: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x416DC0: call    PrintError
0x416DC5: add     esp, 0Ch
0x416DC8: sub     esi, edi
0x416DCA: mov     [edi], si
0x416DCD: pop     edi
0x416DCE: pop     esi
0x416DCF: pop     ebp
0x416DD0: pop     ebx
0x416DD1: add     esp, 14h
0x416DD4: retn
