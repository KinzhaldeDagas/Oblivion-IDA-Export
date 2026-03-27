0x4EE140: push    esi
0x4EE141: push    edi
0x4EE142: mov     edi, ecx
0x4EE144: call    TESForm_InitializeFormRecord
0x4EE149: push    4D414E43h
0x4EE14E: lea     ecx, [edi+24h]
0x4EE151: call    TESTexture_Save
0x4EE156: push    4D414E44h
0x4EE15B: lea     ecx, [edi+18h]
0x4EE15E: call    TESTexture_Save
0x4EE163: push    54444F4Dh
0x4EE168: push    42444F4Dh
0x4EE16D: push    4C444F4Dh
0x4EE172: lea     ecx, [edi+30h]
0x4EE175: call    TESModel_Save
0x4EE17A: push    0A0h ; ' '; Size
0x4EE17F: lea     eax, [edi+68h]
0x4EE182: push    eax; Src
0x4EE183: push    304D414Eh; int
0x4EE188: call    TESForm_PutFormRecordChunkData
0x4EE18D: push    10h; Size
0x4EE18F: lea     ecx, [edi+58h]
0x4EE192: push    ecx; Src
0x4EE193: push    4D414E46h; int
0x4EE198: call    TESForm_PutFormRecordChunkData
0x4EE19D: push    38h ; '8'; Size
0x4EE19F: lea     edx, [edi+110h]
0x4EE1A5: push    edx; Src
0x4EE1A6: push    4D414E48h; int
0x4EE1AB: call    TESForm_PutFormRecordChunkData
0x4EE1B0: push    0Fh; Size
0x4EE1B2: lea     eax, [edi+48h]
0x4EE1B5: push    eax; Src
0x4EE1B6: push    41544144h; int
0x4EE1BB: call    TESForm_PutFormRecordChunkData
0x4EE1C0: lea     esi, [edi+108h]
0x4EE1C6: add     esp, 30h
0x4EE1C9: test    esi, esi
0x4EE1CB: jz      short loc_4EE1ED
0x4EE1CD: lea     ecx, [ecx+0]
0x4EE1D0: mov     eax, [esi]
0x4EE1D2: test    eax, eax
0x4EE1D4: jz      short loc_4EE1ED
0x4EE1D6: push    8; Size
0x4EE1D8: push    eax; Src
0x4EE1D9: push    4D414E53h; int
0x4EE1DE: call    TESForm_PutFormRecordChunkData
0x4EE1E3: mov     esi, [esi+4]
0x4EE1E6: add     esp, 0Ch
0x4EE1E9: test    esi, esi
0x4EE1EB: jnz     short loc_4EE1D0
0x4EE1ED: mov     ecx, edi
0x4EE1EF: pop     edi
0x4EE1F0: pop     esi
0x4EE1F1: jmp     TESForm_FinalizeFormRecord
