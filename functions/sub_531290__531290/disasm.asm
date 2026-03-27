0x531290: push    ebp
0x531291: mov     ebp, esp
0x531293: push    0FFFFFFFFh
0x531295: push    offset SEH_531290
0x53129A: mov     eax, large fs:0
0x5312A0: push    eax
0x5312A1: sub     esp, 5Ch
0x5312A4: mov     eax, ds:0B30AACh
0x5312A9: xor     eax, ebp
0x5312AB: mov     [ebp+var_10], eax
0x5312AE: push    ebx
0x5312AF: push    esi
0x5312B0: push    edi
0x5312B1: push    eax
0x5312B2: lea     eax, [ebp+var_C]
0x5312B5: mov     large fs:0, eax
0x5312BB: mov     esi, ecx
0x5312BD: mov     [ebp+var_14], esi
0x5312C0: cmp     esi, ds:0B3652Ch
0x5312C6: jz      loc_531440
0x5312CC: lea     ecx, [ebp+var_68]
0x5312CF: mov     ds:0B3652Ch, esi
0x5312D5: call    Script_Constructor
0x5312DA: lea     eax, [ebp+var_68]
0x5312DD: xor     edi, edi
0x5312DF: push    eax
0x5312E0: mov     ecx, offset stru_B36530
0x5312E5: mov     [ebp+var_4], edi
0x5312E8: call    sub_4FC7A0
0x5312ED: push    edi; a2
0x5312EE: mov     ecx, offset stru_B36530; this
0x5312F3: call    TESForm_SetIsLinked
0x5312F8: mov     ecx, offset stru_B36530; this
0x5312FD: call    TESForm_MakeTemporary
0x531302: push    0FFFFFFFFh; a2
0x531304: mov     ecx, esi; this
0x531306: call    TESForm_GetOverrideFile
0x53130B: cmp     eax, edi
0x53130D: jz      loc_531431
0x531313: cmp     [esi+34h], edi
0x531316: jz      loc_531431
0x53131C: mov     ecx, eax
0x53131E: call    sub_4520F0
0x531323: mov     ecx, [esi+34h]
0x531326: mov     ebx, eax
0x531328: push    ecx; Buffer
0x531329: mov     ecx, ebx
0x53132B: call    TESFIle_JumpToRecord
0x531330: test    al, al
0x531332: jz      loc_531431
0x531338: mov     ecx, ebx
0x53133A: call    TESFile_GetRecordType
0x53133F: movzx   ecx, byte ptr [esi+4]
0x531343: lea     edx, [ecx+ecx*2]
0x531346: cmp     al, ds:0B05E00h[edx*4]
0x53134D: jnz     loc_531431
0x531353: mov     ecx, ebx
0x531355: call    TESFile_GetChunkType
0x53135A: cmp     eax, edi
0x53135C: jz      loc_531426
0x531362: cmp     eax, 41444353h
0x531367: jz      short loc_5313D6
0x531369: cmp     eax, 4F524353h
0x53136E: jz      short loc_531394
0x531370: cmp     eax, 52484353h
0x531375: jnz     loc_53140C
0x53137B: push    edi; a4
0x53137C: push    offset byte_B36548; Dst
0x531381: mov     ecx, ebx; a1
0x531383: call    TESFile_GetChunkData
0x531388: mov     ecx, offset byte_B36548; void *
0x53138D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x531392: jmp     short loc_53140C
0x531394: push    10h; Size
0x531396: call    FormHeapAlloc
0x53139B: add     esp, 4
0x53139E: cmp     eax, edi
0x5313A0: jz      short loc_5313B6
0x5313A2: mov     [eax], edi
0x5313A4: mov     [eax+4], di
0x5313A8: mov     [eax+6], di
0x5313AC: mov     [eax+8], edi
0x5313AF: mov     [eax+0Ch], edi
0x5313B2: mov     esi, eax
0x5313B4: jmp     short loc_5313B8
0x5313B6: xor     esi, esi
0x5313B8: lea     eax, [ebp+var_18]
0x5313BB: push    eax
0x5313BC: mov     ecx, ebx
0x5313BE: call    TESFile_GetChunkData4
0x5313C3: mov     ecx, [ebp+var_18]
0x5313C6: mov     [esi+8], ecx
0x5313C9: push    esi
0x5313CA: mov     ecx, offset dword_B36570
0x5313CF: call    BSSimpleList_PushBack
0x5313D4: jmp     short loc_531409
0x5313D6: mov     esi, [ebx+254h]
0x5313DC: mov     eax, esi
0x5313DE: call    __alloca?
0x5313E3: mov     edi, esp
0x5313E5: push    esi
0x5313E6: push    0
0x5313E8: push    edi
0x5313E9: call    __memset
0x5313EE: add     esp, 0Ch
0x5313F1: push    0; a4
0x5313F3: push    edi; Dst
0x5313F4: mov     ecx, ebx; a1
0x5313F6: call    TESFile_GetChunkData
0x5313FB: push    edi; Src
0x5313FC: push    esi; int
0x5313FD: mov     ecx, offset stru_B36530
0x531402: call    sub_4F9DF0
0x531407: xor     edi, edi
0x531409: mov     esi, [ebp+var_14]
0x53140C: mov     ecx, ebx
0x53140E: call    TESFile_GetNextChunk
0x531413: test    al, al
0x531415: jz      short loc_531426
0x531417: mov     ecx, ebx
0x531419: call    TESFile_GetChunkType
0x53141E: cmp     eax, edi
0x531420: jnz     loc_531362
0x531426: push    esi
0x531427: mov     ecx, offset stru_B36530
0x53142C: call    sub_4FBB60
0x531431: lea     ecx, [ebp+var_68]
0x531434: mov     [ebp+var_4], 0FFFFFFFFh
0x53143B: call    Script_StaticDestructor
0x531440: mov     eax, offset stru_B36530
0x531445: lea     esp, [ebp-78h]
0x531448: mov     ecx, [ebp+var_C]
0x53144B: mov     large fs:0, ecx
0x531452: pop     ecx
0x531453: pop     edi
0x531454: pop     esi
0x531455: pop     ebx
0x531456: mov     ecx, [ebp+var_10]
0x531459: xor     ecx, ebp
0x53145B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x531460: mov     esp, ebp
0x531462: pop     ebp
0x531463: retn
