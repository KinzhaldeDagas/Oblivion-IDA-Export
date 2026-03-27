0x4EDF20: push    ebp
0x4EDF21: mov     ebp, esp
0x4EDF23: push    ecx
0x4EDF24: mov     eax, ds:0B30AACh
0x4EDF29: xor     eax, ebp
0x4EDF2B: mov     [ebp+var_4], eax
0x4EDF2E: push    ebx
0x4EDF2F: push    esi
0x4EDF30: mov     esi, [ebp+a2]
0x4EDF33: push    edi
0x4EDF34: mov     edi, ecx
0x4EDF36: mov     ecx, esi
0x4EDF38: call    TESFile_GetRecordType
0x4EDF3D: cmp     al, 2Dh ; '-'
0x4EDF3F: jz      short loc_4EDF48
0x4EDF41: xor     al, al
0x4EDF43: jmp     loc_4EE106
0x4EDF48: push    edi
0x4EDF49: mov     ecx, esi
0x4EDF4B: call    TESFile_InitializeFormFromRecord
0x4EDF50: push    0; a2
0x4EDF52: mov     ecx, edi; this
0x4EDF54: call    TESForm_SetIsLinked
0x4EDF59: mov     ecx, esi
0x4EDF5B: call    TESFile_GetChunkType
0x4EDF60: test    eax, eax
0x4EDF62: jz      loc_4EE104
0x4EDF68: jmp     short loc_4EDF70
0x4EDF6A: align 10h
0x4EDF70: cmp     eax, 4D414E43h
0x4EDF75: jg      loc_4EE067
0x4EDF7B: jz      loc_4EE055
0x4EDF81: cmp     eax, 42444F4Dh
0x4EDF86: jg      short loc_4EE005
0x4EDF88: jz      loc_4EE017
0x4EDF8E: cmp     eax, 304D414Eh
0x4EDF93: jz      short loc_4EDFE0
0x4EDF95: cmp     eax, 41544144h
0x4EDF9A: jnz     def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EDFA0: mov     eax, [esi+254h]
0x4EDFA6: cmp     eax, 0Fh
0x4EDFA9: jnz     short loc_4EDFBC
0x4EDFAB: push    eax; a4
0x4EDFAC: lea     eax, [edi+48h]
0x4EDFAF: push    eax; Dst
0x4EDFB0: mov     ecx, esi; a1
0x4EDFB2: call    TESFile_GetChunkData
0x4EDFB7: jmp     def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EDFBC: cmp     eax, 0Ch
0x4EDFBF: jnz     def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EDFC5: push    eax; a4
0x4EDFC6: lea     ecx, [edi+48h]
0x4EDFC9: push    ecx; Dst
0x4EDFCA: mov     ecx, esi; a1
0x4EDFCC: call    TESFile_GetChunkData
0x4EDFD1: or      eax, 0FFFFFFFFh
0x4EDFD4: mov     [edi+54h], ax
0x4EDFD8: mov     [edi+56h], al
0x4EDFDB: jmp     def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EDFE0: cmp     dword ptr [esi+254h], 0A0h ; ' '
0x4EDFEA: jnz     def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EDFF0: push    0A0h ; ' '; a4
0x4EDFF5: lea     edx, [edi+68h]
0x4EDFF8: push    edx; Dst
0x4EDFF9: mov     ecx, esi; a1
0x4EDFFB: call    TESFile_GetChunkData
0x4EE000: jmp     def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EE005: cmp     eax, 44494445h
0x4EE00A: jz      short loc_4EE029
0x4EE00C: cmp     eax, 4C444F4Dh
0x4EE011: jnz     def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EE017: lea     eax, [edi+30h]
0x4EE01A: push    esi
0x4EE01B: push    eax
0x4EE01C: call    TESModel_Load
0x4EE021: add     esp, 8
0x4EE024: jmp     def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EE029: mov     eax, [esi+254h]
0x4EE02F: call    __alloca?
0x4EE034: mov     ebx, esp
0x4EE036: push    200h; a4
0x4EE03B: push    ebx; Dst
0x4EE03C: mov     ecx, esi; a1
0x4EE03E: call    TESFile_GetChunkData
0x4EE043: mov     edx, [edi]
0x4EE045: mov     eax, [edx+0D8h]
0x4EE04B: push    ebx
0x4EE04C: mov     ecx, edi
0x4EE04E: call    eax
0x4EE050: jmp     def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EE055: lea     ecx, [edi+24h]
0x4EE058: push    esi
0x4EE059: push    ecx
0x4EE05A: call    TESTexture_Load
0x4EE05F: add     esp, 8
0x4EE062: jmp     def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EE067: add     eax, 0B2BEB1BCh; switch 16 cases
0x4EE06C: cmp     eax, 0Fh
0x4EE06F: ja      short def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EE071: movzx   edx, ds:byte_4EE130[eax]
0x4EE078: jmp     ds:jpt_4EE078[edx*4]; switch jump
0x4EE07F: lea     eax, [edi+18h]; jumptable 004EE078 case 1296125508
0x4EE082: push    esi
0x4EE083: push    eax
0x4EE084: call    TESTexture_Load
0x4EE089: add     esp, 8
0x4EE08C: jmp     short def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EE08E: push    10h; jumptable 004EE078 case 1296125510
0x4EE090: lea     ecx, [edi+58h]
0x4EE093: push    ecx; Dst
0x4EE094: mov     ecx, esi; a1
0x4EE096: call    TESFile_GetChunkData
0x4EE09B: jmp     short def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EE09D: push    38h ; '8'; jumptable 004EE078 case 1296125512
0x4EE09F: lea     edx, [edi+110h]
0x4EE0A5: push    edx; Dst
0x4EE0A6: mov     ecx, esi; a1
0x4EE0A8: call    TESFile_GetChunkData
0x4EE0AD: jmp     short def_4EE078; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EE0AF: push    8; jumptable 004EE078 case 1296125523
0x4EE0B1: call    FormHeapAlloc
0x4EE0B6: add     esp, 4
0x4EE0B9: test    eax, eax
0x4EE0BB: jz      short loc_4EE0C8
0x4EE0BD: xor     ecx, ecx
0x4EE0BF: mov     [eax], ecx
0x4EE0C1: mov     [eax+4], ecx
0x4EE0C4: mov     ebx, eax
0x4EE0C6: jmp     short loc_4EE0CA
0x4EE0C8: xor     ebx, ebx
0x4EE0CA: push    8; a4
0x4EE0CC: push    ebx; Dst
0x4EE0CD: mov     ecx, esi; a1
0x4EE0CF: call    TESFile_GetChunkData
0x4EE0D4: push    esi; a2
0x4EE0D5: push    ebx; a1
0x4EE0D6: call    TESForm_ResolveFormID
0x4EE0DB: add     esp, 8
0x4EE0DE: push    ebx
0x4EE0DF: lea     ecx, [edi+108h]
0x4EE0E5: call    BSSimpleList_PushBack
0x4EE0EA: mov     ecx, esi; jumptable 004EE078 default case, cases 1296125509,1296125511,1296125513-1296125522
0x4EE0EC: call    TESFile_GetNextChunk
0x4EE0F1: test    al, al
0x4EE0F3: jz      short loc_4EE104
0x4EE0F5: mov     ecx, esi
0x4EE0F7: call    TESFile_GetChunkType
0x4EE0FC: test    eax, eax
0x4EE0FE: jnz     loc_4EDF70
0x4EE104: mov     al, 1
0x4EE106: lea     esp, [ebp-10h]
0x4EE109: pop     edi
0x4EE10A: pop     esi
0x4EE10B: pop     ebx
0x4EE10C: mov     ecx, [ebp+var_4]
0x4EE10F: xor     ecx, ebp
0x4EE111: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4EE116: mov     esp, ebp
0x4EE118: pop     ebp
0x4EE119: retn    4
