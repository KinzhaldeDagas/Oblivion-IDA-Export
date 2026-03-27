0x4AE0A0: push    ebp
0x4AE0A1: mov     ebp, esp
0x4AE0A3: sub     esp, 0Ch
0x4AE0A6: mov     eax, ds:0B30AACh
0x4AE0AB: xor     eax, ebp
0x4AE0AD: mov     [ebp+var_4], eax
0x4AE0B0: push    ebx
0x4AE0B1: push    esi
0x4AE0B2: push    edi
0x4AE0B3: mov     edi, [ebp+a1]
0x4AE0B6: mov     esi, ecx
0x4AE0B8: push    esi
0x4AE0B9: mov     ecx, edi
0x4AE0BB: call    TESFile_InitializeFormFromRecord
0x4AE0C0: xor     ebx, ebx
0x4AE0C2: push    ebx; a2
0x4AE0C3: mov     ecx, esi; this
0x4AE0C5: call    TESForm_SetIsLinked
0x4AE0CA: mov     ecx, edi
0x4AE0CC: call    TESFile_GetChunkType
0x4AE0D1: cmp     eax, ebx
0x4AE0D3: jz      loc_4AE204
0x4AE0D9: lea     esp, [esp+0]
0x4AE0E0: cmp     eax, 49524353h
0x4AE0E5: jg      loc_4AE19F
0x4AE0EB: jz      loc_4AE177
0x4AE0F1: cmp     eax, 44494445h
0x4AE0F6: jg      short loc_4AE156
0x4AE0F8: jz      short loc_4AE128
0x4AE0FA: cmp     eax, 42444F4Dh
0x4AE0FF: jz      loc_4AE1B4
0x4AE105: cmp     eax, 43504650h
0x4AE10A: jnz     loc_4AE1EA
0x4AE110: push    4; a4
0x4AE112: lea     eax, [ebp+Dst]
0x4AE115: push    eax; Dst
0x4AE116: mov     ecx, edi; a1
0x4AE118: call    TESFile_GetChunkData
0x4AE11D: mov     ecx, dword ptr [ebp+Dst]
0x4AE120: mov     [esi-4], ecx
0x4AE123: jmp     loc_4AE1EA
0x4AE128: mov     eax, [edi+254h]
0x4AE12E: call    __alloca?
0x4AE133: mov     ebx, esp
0x4AE135: push    200h; a4
0x4AE13A: push    ebx; Dst
0x4AE13B: mov     ecx, edi; a1
0x4AE13D: call    TESFile_GetChunkData
0x4AE142: mov     edx, [esi]
0x4AE144: mov     eax, [edx+0D8h]
0x4AE14A: push    ebx
0x4AE14B: mov     ecx, esi
0x4AE14D: call    eax
0x4AE14F: xor     ebx, ebx
0x4AE151: jmp     loc_4AE1EA
0x4AE156: cmp     eax, 47494650h
0x4AE15B: jnz     loc_4AE1EA
0x4AE161: lea     ecx, [ebp+var_8]
0x4AE164: push    ecx
0x4AE165: mov     ecx, edi
0x4AE167: mov     [ebp+var_8], ebx
0x4AE16A: call    TESFile_GetChunkData4
0x4AE16F: mov     edx, [ebp+var_8]
0x4AE172: mov     [esi-8], edx
0x4AE175: jmp     short loc_4AE1EA
0x4AE177: lea     eax, [ebp+var_8]
0x4AE17A: push    eax
0x4AE17B: mov     ecx, edi
0x4AE17D: mov     [ebp+var_8], ebx
0x4AE180: call    TESFile_GetChunkData4
0x4AE185: mov     ecx, [ebp+var_8]
0x4AE188: lea     eax, [esi-0Ch]
0x4AE18B: neg     eax
0x4AE18D: sbb     eax, eax
0x4AE18F: and     eax, esi
0x4AE191: mov     [esi+4Ch], ecx
0x4AE194: push    eax
0x4AE195: lea     ecx, [esi+48h]
0x4AE198: call    TESScriptableForm_Link
0x4AE19D: jmp     short loc_4AE1EA
0x4AE19F: cmp     eax, 4C444F4Dh
0x4AE1A4: jz      short loc_4AE1B4
0x4AE1A6: cmp     eax, 4C4C5546h
0x4AE1AB: jz      short loc_4AE1C0
0x4AE1AD: cmp     eax, 54444F4Dh
0x4AE1B2: jnz     short loc_4AE1EA
0x4AE1B4: lea     eax, [esi-0Ch]
0x4AE1B7: test    eax, eax
0x4AE1B9: jz      short loc_4AE1DE
0x4AE1BB: lea     eax, [esi+30h]
0x4AE1BE: jmp     short loc_4AE1E0
0x4AE1C0: lea     edx, [esi-0Ch]
0x4AE1C3: test    edx, edx
0x4AE1C5: jz      short loc_4AE1D3
0x4AE1C7: lea     eax, [esi+24h]
0x4AE1CA: push    edi
0x4AE1CB: push    eax
0x4AE1CC: call    TESFullname_Load
0x4AE1D1: jmp     short loc_4AE1E7
0x4AE1D3: xor     eax, eax
0x4AE1D5: push    edi
0x4AE1D6: push    eax
0x4AE1D7: call    TESFullname_Load
0x4AE1DC: jmp     short loc_4AE1E7
0x4AE1DE: xor     eax, eax
0x4AE1E0: push    edi
0x4AE1E1: push    eax
0x4AE1E2: call    TESModel_Load
0x4AE1E7: add     esp, 8
0x4AE1EA: mov     ecx, edi
0x4AE1EC: call    TESFile_GetNextChunk
0x4AE1F1: test    al, al
0x4AE1F3: jz      short loc_4AE204
0x4AE1F5: mov     ecx, edi
0x4AE1F7: call    TESFile_GetChunkType
0x4AE1FC: cmp     eax, ebx
0x4AE1FE: jnz     loc_4AE0E0
0x4AE204: mov     al, 1
0x4AE206: lea     esp, [ebp-18h]
0x4AE209: pop     edi
0x4AE20A: pop     esi
0x4AE20B: pop     ebx
0x4AE20C: mov     ecx, [ebp+var_4]
0x4AE20F: xor     ecx, ebp
0x4AE211: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4AE216: mov     esp, ebp
0x4AE218: pop     ebp
0x4AE219: retn    4
