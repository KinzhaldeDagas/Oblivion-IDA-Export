0x450C20: sub     esp, 18h
0x450C23: mov     eax, ds:0B30AACh
0x450C28: xor     eax, esp
0x450C2A: mov     [esp+18h+var_4], eax
0x450C2E: push    ebp
0x450C2F: mov     ebp, [esp+1Ch+Dst]
0x450C33: push    esi
0x450C34: mov     esi, ecx
0x450C36: cmp     dword ptr [esi+254h], 0
0x450C3D: jnz     short TESFile_GetChunkData___CheckField264
0x450C3F: pop     esi
0x450C40: mov     al, 1
0x450C42: pop     ebp
0x450C43: mov     ecx, [esp+18h+var_4]
0x450C47: xor     ecx, esp
0x450C49: call    @__security_check_cookie@4; __security_check_cookie(x)
0x450C4E: add     esp, 18h
0x450C51: retn    8
0x450C54: cmp     dword ptr [esi+264h], 0
0x450C5B: push    ebx
0x450C5C: push    edi
0x450C5D: mov     ebx, 40000h
0x450C62: jbe     short TESFile_GetChunkData___CheckSize
0x450C64: mov     eax, [esi+23Ch]
0x450C6A: cmp     eax, ds:0B05E20h
0x450C70: jz      short loc_450C7A
0x450C72: test    [esi+244h], ebx
0x450C78: jnz     short TESFile_GetChunkData___ClearField264
0x450C7A: mov     eax, ds:0A853D0h
0x450C7F: mov     ecx, [esi+10h]
0x450C82: mov     edi, [esi+25Ch]
0x450C88: mov     edx, [ecx]
0x450C8A: mov     edx, [edx+0Ch]
0x450C8D: push    eax
0x450C8E: mov     eax, [esi+260h]
0x450C94: lea     eax, [eax+edi+1Ah]
0x450C98: push    eax
0x450C99: call    edx
0x450C9B: mov     dword ptr [esi+264h], 0
0x450CA5: mov     edi, [esp+28h+a4]
0x450CA9: test    edi, edi
0x450CAB: jz      loc_450E0A
0x450CB1: cmp     [esi+254h], edi
0x450CB7: jbe     loc_450E0A
0x450CBD: mov     byte ptr [edi+ebp-1], 0
0x450CC2: mov     eax, [esi+23Ch]
0x450CC8: cmp     eax, ds:0B05E20h
0x450CCE: jz      short TESFile_GetChunkData___FirstReadFile
0x450CD0: test    [esi+244h], ebx
0x450CD6: jnz     short loc_450D49
0x450CD8: mov     ecx, [esi+10h]
0x450CDB: lea     ebx, [edi-1]
0x450CDE: push    ebx
0x450CDF: push    ebp
0x450CE0: call    ReadFile??
0x450CE5: cmp     eax, ebx
0x450CE7: mov     [esi+264h], eax
0x450CED: jz      TESFile_GetChunkData___Error_ChunkSizeTooBig
0x450CF3: push    0
0x450CF5: push    0
0x450CF7: lea     ecx, [esp+30h+var_18]
0x450CFB: push    ecx
0x450CFC: push    400h
0x450D01: call    dword ptr ds:0A281ECh
0x450D07: push    eax
0x450D08: push    0
0x450D0A: push    1300h
0x450D0F: call    dword ptr ds:0A28170h
0x450D15: mov     edx, [esp+28h+var_18]
0x450D19: push    edx
0x450D1A: push    offset aFirstReadfileI; "First ReadFile() in GetChunkData failed"...
0x450D1F: call    PrintError
0x450D24: mov     eax, [esp+30h+var_18]
0x450D28: add     esp, 8
0x450D2B: push    eax
0x450D2C: call    dword ptr ds:0A2816Ch
0x450D32: pop     edi
0x450D33: pop     ebx
0x450D34: pop     esi
0x450D35: xor     al, al
0x450D37: pop     ebp
0x450D38: mov     ecx, [esp+18h+var_4]
0x450D3C: xor     ecx, esp
0x450D3E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x450D43: add     esp, 18h
0x450D46: retn    8
0x450D49: mov     eax, [esi+260h]
0x450D4F: add     eax, 6
0x450D52: cmp     dword ptr [esi+414h], 0
0x450D59: mov     [esp+28h+var_18], eax
0x450D5D: jnz     short loc_450D66
0x450D5F: mov     ecx, esi
0x450D61: call    TESFile_GetDecompressedRecordData
0x450D66: mov     ecx, [esi+414h]
0x450D6C: add     ecx, [esp+28h+var_18]
0x450D70: lea     ebx, [edi-1]
0x450D73: push    ebx; Size
0x450D74: push    ecx; Src
0x450D75: push    ebp; Dst
0x450D76: call    _memcpy
0x450D7B: add     esp, 0Ch
0x450D7E: mov     [esi+264h], ebx
0x450D84: movzx   edx, byte ptr [esi+250h]
0x450D8B: mov     eax, [esi+250h]
0x450D91: mov     ecx, eax
0x450D93: sar     eax, 10h
0x450D96: mov     byte ptr [esp+28h+var_C], dl
0x450D9A: movzx   edx, byte ptr [esi+253h]
0x450DA1: mov     byte ptr [esp+28h+var_C+2], al
0x450DA5: movzx   eax, byte ptr [esi+23Ch]
0x450DAC: sar     ecx, 8
0x450DAF: mov     byte ptr [esp+28h+var_C+1], cl
0x450DB3: mov     cl, [esi+23Dh]
0x450DB9: mov     byte ptr [esp+28h+var_C+3], dl
0x450DBD: movzx   edx, byte ptr [esi+23Eh]
0x450DC4: push    ebp
0x450DC5: mov     [esp+2Ch+var_14], al
0x450DC9: movzx   eax, byte ptr [esi+23Fh]
0x450DD0: push    edi
0x450DD1: mov     [esp+30h+var_13], cl
0x450DD5: lea     ecx, [esp+30h+var_14]
0x450DD9: push    ecx
0x450DDA: mov     [esp+34h+var_12], dl
0x450DDE: lea     edx, [esp+34h+var_C]
0x450DE2: mov     [esp+34h+var_11], al
0x450DE6: mov     eax, [esi+254h]
0x450DEC: push    edx
0x450DED: push    eax
0x450DEE: push    offset aChunkSizeDTooB; "Chunk size %d too big in chunk %s_ID in"...
0x450DF3: mov     [esp+40h+var_8], 0
0x450DF8: mov     [esp+40h+var_10], 0
0x450DFD: call    PrintError
0x450E02: add     esp, 18h
0x450E05: jmp     loc_450EED
0x450E0A: mov     ecx, [esi+23Ch]
0x450E10: cmp     ecx, ds:0B05E20h
0x450E16: jz      short loc_450E24
0x450E18: test    [esi+244h], ebx
0x450E1E: jnz     loc_450EAF
0x450E24: mov     ecx, [esi+254h]
0x450E2A: mov     eax, [esi+10h]
0x450E2D: push    1
0x450E2F: lea     edx, [esp+2Ch+var_18]
0x450E33: push    edx
0x450E34: push    ecx
0x450E35: push    ebp
0x450E36: push    eax
0x450E37: mov     eax, [eax+4]
0x450E3A: mov     [esp+3Ch+var_18], 1
0x450E42: call    eax
0x450E44: add     esp, 14h
0x450E47: cmp     eax, [esi+254h]
0x450E4D: mov     [esi+264h], eax
0x450E53: jz      loc_450EED
0x450E59: push    0
0x450E5B: push    0
0x450E5D: lea     ecx, [esp+30h+var_18]
0x450E61: push    ecx
0x450E62: push    400h
0x450E67: call    dword ptr ds:0A281ECh
0x450E6D: push    eax
0x450E6E: push    0
0x450E70: push    1300h
0x450E75: call    dword ptr ds:0A28170h
0x450E7B: mov     edx, [esp+28h+var_18]
0x450E7F: push    edx
0x450E80: push    offset aSecondReadfile; "Second ReadFile() in GetChunkData faile"...
0x450E85: call    PrintError
0x450E8A: mov     eax, [esp+30h+var_18]
0x450E8E: add     esp, 8
0x450E91: push    eax
0x450E92: call    dword ptr ds:0A2816Ch
0x450E98: pop     edi
0x450E99: pop     ebx
0x450E9A: pop     esi
0x450E9B: xor     al, al
0x450E9D: pop     ebp
0x450E9E: mov     ecx, [esp+18h+var_4]
0x450EA2: xor     ecx, esp
0x450EA4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x450EA9: add     esp, 18h
0x450EAC: retn    8
0x450EAF: mov     edi, [esi+260h]
0x450EB5: add     edi, 6
0x450EB8: cmp     dword ptr [esi+414h], 0
0x450EBF: jnz     short loc_450EC8
0x450EC1: mov     ecx, esi
0x450EC3: call    TESFile_GetDecompressedRecordData
0x450EC8: mov     ecx, [esi+254h]
0x450ECE: mov     edx, [esi+414h]
0x450ED4: push    ecx; Size
0x450ED5: add     edx, edi
0x450ED7: push    edx; Src
0x450ED8: push    ebp; Dst
0x450ED9: call    _memcpy
0x450EDE: mov     eax, [esi+254h]
0x450EE4: add     esp, 0Ch
0x450EE7: mov     [esi+264h], eax
0x450EED: mov     ecx, [esp+28h+var_4]
0x450EF1: pop     edi
0x450EF2: pop     ebx
0x450EF3: pop     esi
0x450EF4: pop     ebp
0x450EF5: xor     ecx, esp
0x450EF7: mov     al, 1
0x450EF9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x450EFE: add     esp, 18h
0x450F01: retn    8
