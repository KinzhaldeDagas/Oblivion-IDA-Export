0x4478B0: sub     esp, 1Ch
0x4478B3: mov     eax, [esp+1Ch+arg_4]
0x4478B7: mov     edx, [esp+1Ch+arg_8]
0x4478BB: push    edi
0x4478BC: mov     edi, ecx
0x4478BE: xor     ecx, ecx
0x4478C0: mov     [eax], ecx
0x4478C2: mov     eax, [esp+20h+Str2]
0x4478C6: test    eax, eax
0x4478C8: mov     [esp+20h+var_C], edi
0x4478CC: mov     [esp+20h+var_18], ecx
0x4478D0: mov     [edx], ecx
0x4478D2: jz      loc_447B76
0x4478D8: cmp     [eax], cl
0x4478DA: jz      loc_447B76
0x4478E0: cmp     [edi+8D0h], ecx
0x4478E6: mov     [esp+20h+var_10], ecx
0x4478EA: jbe     loc_447B76
0x4478F0: push    ebx
0x4478F1: lea     eax, [edi+8D4h]
0x4478F7: push    ebp
0x4478F8: mov     [esp+28h+var_14], eax
0x4478FC: push    esi
0x4478FD: lea     ecx, [ecx+0]
0x447900: mov     ecx, [esp+2Ch+var_14]
0x447904: mov     esi, [ecx]
0x447906: test    esi, esi
0x447908: jz      loc_447B1E
0x44790E: push    0
0x447910: push    0
0x447912: mov     ecx, esi
0x447914: call    TESFile_OpenBSFileWrapper??
0x447919: test    al, al
0x44791B: jz      loc_447B1E
0x447921: lea     edi, [esi+23Ch]
0x447927: mov     eax, edi
0x447929: test    eax, eax
0x44792B: mov     [esp+2Ch+var_19], 0
0x447930: jz      def_447AEC; jumptable 00447AEC default case, cases 2,3
0x447936: cmp     [esp+2Ch+var_19], 0
0x44793B: jnz     short loc_447983
0x44793D: mov     edx, [eax]
0x44793F: cmp     edx, ds:0B05E20h
0x447945: jnz     short loc_447965
0x447947: cmp     dword ptr [eax+0Ch], 0
0x44794B: jnz     loc_447A00
0x447951: mov     eax, [eax+8]
0x447954: cmp     eax, ds:0B06084h
0x44795A: jnz     loc_447A00
0x447960: mov     [esp+2Ch+var_19], 1
0x447965: push    1
0x447967: mov     ecx, esi
0x447969: call    TESFile_NextRecordEx; NextForm?
0x44796E: test    al, al
0x447970: jz      short loc_447978
0x447972: mov     eax, edi
0x447974: test    eax, eax
0x447976: jnz     short loc_447936
0x447978: cmp     [esp+2Ch+var_19], 0
0x44797D: jz      def_447AEC; jumptable 00447AEC default case, cases 2,3
0x447983: mov     eax, edi
0x447985: test    eax, eax
0x447987: mov     [esp+2Ch+var_19], 0
0x44798C: jz      def_447AEC; jumptable 00447AEC default case, cases 2,3
0x447992: cmp     [esp+2Ch+var_19], 0
0x447997: jnz     def_447AEC; jumptable 00447AEC default case, cases 2,3
0x44799D: mov     ecx, [eax]
0x44799F: mov     edx, ds:0B06084h
0x4479A5: cmp     ecx, edx
0x4479A7: jnz     short loc_447A0C
0x4479A9: mov     edi, [eax+0Ch]
0x4479AC: mov     ecx, edi
0x4479AE: shr     ecx, 18h
0x4479B1: add     ecx, 1
0x4479B4: push    ecx
0x4479B5: mov     ecx, esi
0x4479B7: call    TESFile_GetMasterByIndex
0x4479BC: test    eax, eax
0x4479BE: jnz     short loc_4479C2
0x4479C0: mov     eax, esi
0x4479C2: mov     ecx, eax
0x4479C4: call    TESFile_GetFileIndex
0x4479C9: push    0; int
0x4479CB: movzx   eax, al
0x4479CE: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x4479D3: shl     eax, 18h
0x4479D6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4479DB: and     edi, 0FFFFFFh
0x4479E1: or      eax, edi
0x4479E3: push    0; int
0x4479E5: push    eax; a1
0x4479E6: call    TESForm_LookupByFormID
0x4479EB: add     esp, 4
0x4479EE: push    eax; void *
0x4479EF: call    OblivionDynamicCast
0x4479F4: add     esp, 14h
0x4479F7: mov     [esp+2Ch+var_18], eax
0x4479FB: jmp     loc_447B59; jumptable 00447AEC cases 1,4,5
0x447A00: mov     ecx, esi
0x447A02: call    TESFile__NextGroup
0x447A07: jmp     loc_44796E
0x447A0C: cmp     ecx, ds:0B06048h
0x447A12: jnz     loc_447ADC
0x447A18: mov     ecx, esi
0x447A1A: call    TESFile_GetChunkType
0x447A1F: mov     ebx, eax
0x447A21: cmp     ebx, 44494445h
0x447A27: jnz     loc_447B59; jumptable 00447AEC cases 1,4,5
0x447A2D: mov     edi, [esi+254h]
0x447A33: push    1
0x447A35: add     edi, 1
0x447A38: push    edi
0x447A39: mov     ecx, offset FormHeap
0x447A3E: call    j_MemoryHeap_Alloc
0x447A43: push    edi
0x447A44: mov     ebp, eax
0x447A46: push    0
0x447A48: push    ebp
0x447A49: call    __memset
0x447A4E: add     esp, 0Ch
0x447A51: push    0; a4
0x447A53: push    ebp; Dst
0x447A54: mov     ecx, esi; a1
0x447A56: call    TESFile_GetChunkData
0x447A5B: mov     edx, [esp+2Ch+Str2]
0x447A5F: push    edx; Str2
0x447A60: push    ebp; Str1
0x447A61: call    __strcmp
0x447A66: add     esp, 8
0x447A69: test    eax, eax
0x447A6B: jnz     short loc_447ACC
0x447A6D: mov     [esp+2Ch+var_19], 1
0x447A72: cmp     ebx, 434C4358h
0x447A78: mov     ecx, esi; a1
0x447A7A: jz      short loc_447AA2
0x447A7C: call    TESFile_GetNextChunk
0x447A81: test    al, al
0x447A83: jz      short loc_447ACC
0x447A85: mov     ecx, esi
0x447A87: call    TESFile_GetChunkType
0x447A8C: mov     ebx, eax
0x447A8E: test    ebx, ebx
0x447A90: jnz     short loc_447A72
0x447A92: push    ebp; void *
0x447A93: mov     ecx, offset FormHeap
0x447A98: call    MemoryHeap_Free_checked
0x447A9D: jmp     loc_447B59; jumptable 00447AEC cases 1,4,5
0x447AA2: xor     eax, eax
0x447AA4: mov     dword ptr [esp+2Ch+Dst], eax
0x447AA8: mov     [esp+2Ch+var_4], eax
0x447AAC: push    8; a4
0x447AAE: lea     eax, [esp+30h+Dst]
0x447AB2: push    eax; Dst
0x447AB3: call    TESFile_GetChunkData
0x447AB8: mov     ecx, dword ptr [esp+2Ch+Dst]
0x447ABC: mov     edx, [esp+2Ch+arg_4]
0x447AC0: mov     eax, [esp+2Ch+var_4]
0x447AC4: mov     [edx], ecx
0x447AC6: mov     ecx, [esp+2Ch+arg_8]
0x447ACA: mov     [ecx], eax
0x447ACC: push    ebp; void *
0x447ACD: mov     ecx, offset FormHeap
0x447AD2: call    MemoryHeap_Free_checked
0x447AD7: jmp     loc_447B59; jumptable 00447AEC cases 1,4,5
0x447ADC: cmp     ecx, ds:0B05E20h
0x447AE2: jnz     short loc_447B51
0x447AE4: mov     ecx, [eax+0Ch]
0x447AE7: cmp     ecx, 6; switch 7 cases
0x447AEA: ja      short def_447AEC; jumptable 00447AEC default case, cases 2,3
0x447AEC: jmp     ds:jpt_447AEC[ecx*4]; switch jump
0x447AF3: cmp     [eax+8], edx; jumptable 00447AEC case 0
0x447AF6: jz      short loc_447B59; jumptable 00447AEC cases 1,4,5
0x447AF8: mov     edx, [eax+8]
0x447AFB: push    edx
0x447AFC: call    TESForm_GetFormTypeFromChunkType
0x447B01: add     esp, 4
0x447B04: mov     ecx, esi; jumptable 00447AEC default case, cases 2,3
0x447B06: call    TESFile_Close
0x447B0B: cmp     [esp+2Ch+var_19], 0
0x447B10: jnz     short loc_447B3A
0x447B12: mov     edi, [esp+2Ch+var_C]
0x447B16: mov     [esp+2Ch+var_18], 0
0x447B1E: mov     eax, [esp+2Ch+var_10]
0x447B22: add     [esp+2Ch+var_14], 4
0x447B27: add     eax, 1
0x447B2A: cmp     eax, [edi+8D0h]
0x447B30: mov     [esp+2Ch+var_10], eax
0x447B34: jb      loc_447900
0x447B3A: mov     eax, [esp+2Ch+var_18]
0x447B3E: pop     esi
0x447B3F: pop     ebp
0x447B40: pop     ebx
0x447B41: pop     edi
0x447B42: add     esp, 1Ch
0x447B45: retn    0Ch
0x447B48: mov     ecx, esi; jumptable 00447AEC case 6
0x447B4A: call    TESFile__NextGroup
0x447B4F: jmp     short loc_447B62
0x447B51: cmp     ecx, ds:0B060A8h
0x447B57: jnz     short def_447AEC; jumptable 00447AEC default case, cases 2,3
0x447B59: push    1; jumptable 00447AEC cases 1,4,5
0x447B5B: mov     ecx, esi
0x447B5D: call    TESFile_NextRecordEx; NextForm?
0x447B62: test    al, al
0x447B64: jz      short def_447AEC; jumptable 00447AEC default case, cases 2,3
0x447B66: lea     eax, [esi+23Ch]
0x447B6C: test    eax, eax
0x447B6E: jnz     loc_447992
0x447B74: jmp     short def_447AEC; jumptable 00447AEC default case, cases 2,3
0x447B76: mov     eax, ecx
0x447B78: pop     edi
0x447B79: add     esp, 1Ch
0x447B7C: retn    0Ch
