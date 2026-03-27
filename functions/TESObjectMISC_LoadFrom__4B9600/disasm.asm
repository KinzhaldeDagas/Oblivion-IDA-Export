0x4B9600: push    ebp
0x4B9601: mov     ebp, esp
0x4B9603: sub     esp, 8
0x4B9606: mov     eax, ds:0B30AACh
0x4B960B: xor     eax, ebp
0x4B960D: mov     [ebp+var_4], eax
0x4B9610: push    ebx
0x4B9611: mov     ebx, [ebp+a2]
0x4B9614: push    esi
0x4B9615: mov     esi, ecx
0x4B9617: push    edi
0x4B9618: push    esi
0x4B9619: mov     ecx, ebx
0x4B961B: call    TESFile_InitializeFormFromRecord
0x4B9620: push    0; a2
0x4B9622: mov     ecx, esi; this
0x4B9624: call    TESForm_SetIsLinked
0x4B9629: mov     ecx, ebx
0x4B962B: call    TESFile_GetChunkType
0x4B9630: test    eax, eax
0x4B9632: jz      loc_4B9756
0x4B9638: jmp     short loc_4B9640
0x4B963A: align 10h
0x4B9640: cmp     eax, 4C444F4Dh
0x4B9645: jg      loc_4B96DC
0x4B964B: jz      loc_4B96F1
0x4B9651: cmp     eax, 44494445h
0x4B9656: jg      short loc_4B96AE
0x4B9658: jz      short loc_4B9682
0x4B965A: cmp     eax, 41544144h
0x4B965F: jz      short loc_4B9671
0x4B9661: cmp     eax, 42444F4Dh
0x4B9666: jz      loc_4B96F1
0x4B966C: jmp     loc_4B973C
0x4B9671: push    0; a4
0x4B9673: push    0; Dst
0x4B9675: push    ebx; a2
0x4B9676: mov     ecx, esi; this
0x4B9678: call    TESForm_LoadGenericComponents
0x4B967D: jmp     loc_4B973C
0x4B9682: mov     eax, [ebx+254h]
0x4B9688: call    __alloca?
0x4B968D: mov     edi, esp
0x4B968F: push    200h; a4
0x4B9694: push    edi; Dst
0x4B9695: mov     ecx, ebx; a1
0x4B9697: call    TESFile_GetChunkData
0x4B969C: mov     eax, [esi]
0x4B969E: mov     edx, [eax+0D8h]
0x4B96A4: push    edi
0x4B96A5: mov     ecx, esi
0x4B96A7: call    edx
0x4B96A9: jmp     loc_4B973C
0x4B96AE: cmp     eax, 49524353h
0x4B96B3: jnz     loc_4B973C
0x4B96B9: lea     eax, [ebp+var_8]
0x4B96BC: push    eax
0x4B96BD: mov     ecx, ebx
0x4B96BF: mov     [ebp+var_8], 0
0x4B96C6: call    TESFile_GetChunkData4
0x4B96CB: mov     ecx, [ebp+var_8]
0x4B96CE: mov     [esi+58h], ecx
0x4B96D1: push    esi
0x4B96D2: lea     ecx, [esi+54h]
0x4B96D5: call    TESScriptableForm_Link
0x4B96DA: jmp     short loc_4B973C
0x4B96DC: cmp     eax, 4C4C5546h
0x4B96E1: jz      short loc_4B9727
0x4B96E3: cmp     eax, 4E4F4349h
0x4B96E8: jz      short loc_4B970C
0x4B96EA: cmp     eax, 54444F4Dh
0x4B96EF: jnz     short loc_4B973C
0x4B96F1: test    esi, esi
0x4B96F3: jz      short loc_4B9701
0x4B96F5: lea     eax, [esi+30h]
0x4B96F8: push    ebx
0x4B96F9: push    eax
0x4B96FA: call    TESModel_Load
0x4B96FF: jmp     short loc_4B9739
0x4B9701: xor     eax, eax
0x4B9703: push    ebx
0x4B9704: push    eax
0x4B9705: call    TESModel_Load
0x4B970A: jmp     short loc_4B9739
0x4B970C: test    esi, esi
0x4B970E: jz      short loc_4B971C
0x4B9710: lea     eax, [esi+48h]
0x4B9713: push    ebx
0x4B9714: push    eax
0x4B9715: call    TESTexture_Load
0x4B971A: jmp     short loc_4B9739
0x4B971C: xor     eax, eax
0x4B971E: push    ebx
0x4B971F: push    eax
0x4B9720: call    TESTexture_Load
0x4B9725: jmp     short loc_4B9739
0x4B9727: test    esi, esi
0x4B9729: jz      short loc_4B9730
0x4B972B: lea     eax, [esi+24h]
0x4B972E: jmp     short loc_4B9732
0x4B9730: xor     eax, eax
0x4B9732: push    ebx
0x4B9733: push    eax
0x4B9734: call    TESFullname_Load
0x4B9739: add     esp, 8
0x4B973C: mov     ecx, ebx
0x4B973E: call    TESFile_GetNextChunk
0x4B9743: test    al, al
0x4B9745: jz      short loc_4B9756
0x4B9747: mov     ecx, ebx
0x4B9749: call    TESFile_GetChunkType
0x4B974E: test    eax, eax
0x4B9750: jnz     loc_4B9640
0x4B9756: mov     al, 1
0x4B9758: lea     esp, [ebp-14h]
0x4B975B: pop     edi
0x4B975C: pop     esi
0x4B975D: pop     ebx
0x4B975E: mov     ecx, [ebp+var_4]
0x4B9761: xor     ecx, ebp
0x4B9763: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B9768: mov     esp, ebp
0x4B976A: pop     ebp
0x4B976B: retn    4
