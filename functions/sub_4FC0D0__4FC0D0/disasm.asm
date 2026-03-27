0x4FC0D0: push    ebp
0x4FC0D1: mov     ebp, esp
0x4FC0D3: push    0FFFFFFFFh
0x4FC0D5: push    offset SEH_4FC0D0
0x4FC0DA: mov     eax, large fs:0
0x4FC0E0: push    eax
0x4FC0E1: sub     esp, 14h
0x4FC0E4: mov     eax, ds:0B30AACh
0x4FC0E9: xor     eax, ebp
0x4FC0EB: mov     [ebp+var_10], eax
0x4FC0EE: push    ebx
0x4FC0EF: push    esi
0x4FC0F0: push    edi
0x4FC0F1: push    eax
0x4FC0F2: lea     eax, [ebp+var_C]
0x4FC0F5: mov     large fs:0, eax
0x4FC0FB: mov     ebx, ecx
0x4FC0FD: mov     [ebp+var_14], ebx
0x4FC100: mov     esi, [ebp+a1]
0x4FC103: mov     ecx, esi
0x4FC105: mov     [ebp+var_18], 0
0x4FC10C: call    TESFile_GetRecordType
0x4FC111: cmp     eax, 0Dh
0x4FC114: jz      short loc_4FC11D
0x4FC116: xor     al, al
0x4FC118: jmp     loc_4FC33F
0x4FC11D: push    ebx
0x4FC11E: mov     ecx, esi
0x4FC120: call    TESFile_InitializeFormFromRecord
0x4FC125: mov     ecx, esi
0x4FC127: call    TESFile_GetChunkType
0x4FC12C: mov     edi, eax
0x4FC12E: test    edi, edi
0x4FC130: jz      loc_4FC319
0x4FC136: cmp     edi, 4F524353h
0x4FC13C: jg      loc_4FC23D
0x4FC142: jz      loc_4FC25D
0x4FC148: cmp     edi, 44534C53h
0x4FC14E: jg      loc_4FC221
0x4FC154: jz      loc_4FC1E2
0x4FC15A: cmp     edi, 41444353h
0x4FC160: jz      short loc_4FC19A
0x4FC162: cmp     edi, 44494445h
0x4FC168: jnz     loc_4FC2FD
0x4FC16E: mov     eax, [esi+254h]
0x4FC174: call    __alloca?
0x4FC179: mov     edi, esp
0x4FC17B: push    200h; a4
0x4FC180: push    edi; Dst
0x4FC181: mov     ecx, esi; a1
0x4FC183: call    TESFile_GetChunkData
0x4FC188: mov     eax, [ebx]
0x4FC18A: mov     edx, [eax+0D8h]
0x4FC190: push    edi
0x4FC191: mov     ecx, ebx
0x4FC193: call    edx
0x4FC195: jmp     loc_4FC2FD
0x4FC19A: mov     edi, [esi+254h]
0x4FC1A0: push    1
0x4FC1A2: push    edi
0x4FC1A3: mov     ecx, offset FormHeap
0x4FC1A8: call    j_MemoryHeap_Alloc
0x4FC1AD: push    edi
0x4FC1AE: mov     ebx, eax
0x4FC1B0: push    0
0x4FC1B2: push    ebx
0x4FC1B3: call    __memset
0x4FC1B8: mov     eax, [ebp+var_14]
0x4FC1BB: push    edi
0x4FC1BC: push    0
0x4FC1BE: push    ebx
0x4FC1BF: mov     [eax+30h], ebx
0x4FC1C2: call    __memset
0x4FC1C7: mov     ecx, [ebp+var_14]
0x4FC1CA: mov     edx, [ecx+30h]
0x4FC1CD: add     esp, 18h
0x4FC1D0: push    0; a4
0x4FC1D2: push    edx; Dst
0x4FC1D3: mov     ecx, esi; a1
0x4FC1D5: call    TESFile_GetChunkData
0x4FC1DA: mov     ebx, [ebp+var_14]
0x4FC1DD: jmp     loc_4FC2FD
0x4FC1E2: push    20h ; ' '; Size
0x4FC1E4: call    FormHeapAlloc
0x4FC1E9: add     esp, 4
0x4FC1EC: mov     [ebp+var_18], eax
0x4FC1EF: xor     edi, edi
0x4FC1F1: cmp     eax, edi
0x4FC1F3: mov     [ebp+var_4], edi
0x4FC1F6: jz      short loc_4FC201
0x4FC1F8: mov     ecx, eax
0x4FC1FA: call    sub_517A80
0x4FC1FF: mov     edi, eax
0x4FC201: push    esi
0x4FC202: mov     ecx, edi
0x4FC204: mov     [ebp+var_4], 0FFFFFFFFh
0x4FC20B: mov     [ebp+var_18], edi
0x4FC20E: call    sub_517A50
0x4FC213: push    edi
0x4FC214: lea     ecx, [ebx+48h]
0x4FC217: call    BSSimpleList_PushBack
0x4FC21C: jmp     loc_4FC2FD
0x4FC221: cmp     edi, 4D414E52h
0x4FC227: jnz     loc_4FC2FD
0x4FC22D: lea     eax, [ebp+var_20]
0x4FC230: push    eax
0x4FC231: mov     ecx, esi
0x4FC233: call    TESFile_GetChunkData4
0x4FC238: jmp     loc_4FC2FD
0x4FC23D: cmp     edi, 52484353h
0x4FC243: jz      loc_4FC2F0
0x4FC249: cmp     edi, 52564353h
0x4FC24F: jz      short loc_4FC2C0
0x4FC251: cmp     edi, 56524353h
0x4FC257: jnz     loc_4FC2FD
0x4FC25D: push    10h; Size
0x4FC25F: call    FormHeapAlloc
0x4FC264: xor     ebx, ebx
0x4FC266: add     esp, 4
0x4FC269: cmp     eax, ebx
0x4FC26B: jz      short loc_4FC27F
0x4FC26D: mov     [eax], ebx
0x4FC26F: mov     [eax+4], bx
0x4FC273: mov     [eax+6], bx
0x4FC277: mov     [eax+8], ebx
0x4FC27A: mov     [eax+0Ch], ebx
0x4FC27D: mov     ebx, eax
0x4FC27F: lea     ecx, [ebp+var_1C]
0x4FC282: push    ecx
0x4FC283: mov     ecx, esi
0x4FC285: call    TESFile_GetChunkData4
0x4FC28A: cmp     edi, 4F524353h
0x4FC290: jnz     short loc_4FC2A9
0x4FC292: mov     edx, [ebp+var_1C]
0x4FC295: mov     ecx, [ebp+var_14]
0x4FC298: push    ebx
0x4FC299: add     ecx, 40h ; '@'
0x4FC29C: mov     [ebx+8], edx
0x4FC29F: call    BSSimpleList_PushBack
0x4FC2A4: mov     ebx, [ebp+var_14]
0x4FC2A7: jmp     short loc_4FC2FD
0x4FC2A9: mov     eax, [ebp+var_1C]
0x4FC2AC: mov     ecx, [ebp+var_14]
0x4FC2AF: push    ebx
0x4FC2B0: add     ecx, 40h ; '@'
0x4FC2B3: mov     [ebx+0Ch], eax
0x4FC2B6: call    BSSimpleList_PushBack
0x4FC2BB: mov     ebx, [ebp+var_14]
0x4FC2BE: jmp     short loc_4FC2FD
0x4FC2C0: cmp     [ebp+var_18], 0
0x4FC2C4: jz      short loc_4FC2FD
0x4FC2C6: mov     eax, [esi+254h]
0x4FC2CC: call    __alloca?
0x4FC2D1: mov     edi, esp
0x4FC2D3: push    200h; a4
0x4FC2D8: push    edi; Dst
0x4FC2D9: mov     ecx, esi; a1
0x4FC2DB: call    TESFile_GetChunkData
0x4FC2E0: mov     ecx, [ebp+var_18]
0x4FC2E3: push    0; a3
0x4FC2E5: push    edi; a2
0x4FC2E6: add     ecx, 18h; this
0x4FC2E9: call    BSStringT_Set
0x4FC2EE: jmp     short loc_4FC2FD
0x4FC2F0: push    0; a4
0x4FC2F2: lea     ecx, [ebx+18h]
0x4FC2F5: push    ecx; Dst
0x4FC2F6: mov     ecx, esi; a1
0x4FC2F8: call    TESFile_GetChunkData
0x4FC2FD: mov     ecx, esi
0x4FC2FF: call    TESFile_GetNextChunk
0x4FC304: test    al, al
0x4FC306: jz      short loc_4FC319
0x4FC308: mov     ecx, esi
0x4FC30A: call    TESFile_GetChunkType
0x4FC30F: mov     edi, eax
0x4FC311: test    edi, edi
0x4FC313: jnz     loc_4FC136
0x4FC319: cmp     dword ptr [ebx+30h], 0
0x4FC31D: jnz     short loc_4FC33D
0x4FC31F: mov     edx, [ebx]
0x4FC321: mov     eax, [edx+0D4h]
0x4FC327: add     esi, 1Ch
0x4FC32A: push    esi
0x4FC32B: mov     ecx, ebx
0x4FC32D: call    eax
0x4FC32F: push    eax; ArgList
0x4FC330: push    offset aScriptSInFileS; "Script '%s' in file '%s' has not been c"...
0x4FC335: call    PrintError
0x4FC33A: add     esp, 0Ch
0x4FC33D: mov     al, 1
0x4FC33F: lea     esp, [ebp-30h]
0x4FC342: mov     ecx, [ebp+var_C]
0x4FC345: mov     large fs:0, ecx
0x4FC34C: pop     ecx
0x4FC34D: pop     edi
0x4FC34E: pop     esi
0x4FC34F: pop     ebx
0x4FC350: mov     ecx, [ebp+var_10]
0x4FC353: xor     ecx, ebp
0x4FC355: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FC35A: mov     esp, ebp
0x4FC35C: pop     ebp
0x4FC35D: retn    4
