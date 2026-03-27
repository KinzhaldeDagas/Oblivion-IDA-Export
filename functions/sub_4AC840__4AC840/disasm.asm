0x4AC840: push    ebp
0x4AC841: mov     ebp, esp
0x4AC843: push    ecx
0x4AC844: mov     eax, ds:0B30AACh
0x4AC849: xor     eax, ebp
0x4AC84B: mov     [ebp+var_4], eax
0x4AC84E: push    ebx
0x4AC84F: push    esi
0x4AC850: push    edi
0x4AC851: mov     edi, [ebp+a2]
0x4AC854: mov     esi, ecx
0x4AC856: mov     ecx, edi
0x4AC858: call    TESFile_GetRecordType
0x4AC85D: cmp     al, 43h ; 'C'
0x4AC85F: jz      short loc_4AC868
0x4AC861: xor     al, al
0x4AC863: jmp     loc_4AC91F
0x4AC868: mov     eax, [esi]
0x4AC86A: mov     edx, [eax+18h]
0x4AC86D: mov     ecx, esi
0x4AC86F: call    edx
0x4AC871: push    esi
0x4AC872: mov     ecx, edi
0x4AC874: call    TESFile_InitializeFormFromRecord
0x4AC879: push    0; a2
0x4AC87B: mov     ecx, esi; this
0x4AC87D: call    TESForm_SetIsLinked
0x4AC882: mov     ecx, edi
0x4AC884: call    TESFile_GetChunkType
0x4AC889: test    eax, eax
0x4AC88B: jz      loc_4AC91D
0x4AC891: cmp     eax, 44494445h
0x4AC896: jg      short loc_4AC8EC
0x4AC898: jz      short loc_4AC8C3
0x4AC89A: cmp     eax, 324F4349h
0x4AC89F: jz      short loc_4AC8BB
0x4AC8A1: cmp     eax, 41544144h
0x4AC8A6: jnz     short loc_4AC903
0x4AC8A8: push    0E0h ; 'à'; a4
0x4AC8AD: lea     eax, [esi+18h]
0x4AC8B0: push    eax; Dst
0x4AC8B1: push    edi; a2
0x4AC8B2: mov     ecx, esi; this
0x4AC8B4: call    TESForm_LoadGenericComponents
0x4AC8B9: jmp     short loc_4AC903
0x4AC8BB: lea     ecx, [esi+104h]
0x4AC8C1: jmp     short loc_4AC8F9
0x4AC8C3: mov     eax, [edi+254h]
0x4AC8C9: call    __alloca?
0x4AC8CE: mov     ebx, esp
0x4AC8D0: push    200h; a4
0x4AC8D5: push    ebx; Dst
0x4AC8D6: mov     ecx, edi; a1
0x4AC8D8: call    TESFile_GetChunkData
0x4AC8DD: mov     edx, [esi]
0x4AC8DF: mov     eax, [edx+0D8h]
0x4AC8E5: push    ebx
0x4AC8E6: mov     ecx, esi
0x4AC8E8: call    eax
0x4AC8EA: jmp     short loc_4AC903
0x4AC8EC: cmp     eax, 4E4F4349h
0x4AC8F1: jnz     short loc_4AC903
0x4AC8F3: lea     ecx, [esi+0F8h]
0x4AC8F9: push    edi
0x4AC8FA: push    ecx
0x4AC8FB: call    TESTexture_Load
0x4AC900: add     esp, 8
0x4AC903: mov     ecx, edi
0x4AC905: call    TESFile_GetNextChunk
0x4AC90A: test    al, al
0x4AC90C: jz      short loc_4AC91D
0x4AC90E: mov     ecx, edi
0x4AC910: call    TESFile_GetChunkType
0x4AC915: test    eax, eax
0x4AC917: jnz     loc_4AC891
0x4AC91D: mov     al, 1
0x4AC91F: lea     esp, [ebp-10h]
0x4AC922: pop     edi
0x4AC923: pop     esi
0x4AC924: pop     ebx
0x4AC925: mov     ecx, [ebp+var_4]
0x4AC928: xor     ecx, ebp
0x4AC92A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4AC92F: mov     esp, ebp
0x4AC931: pop     ebp
0x4AC932: retn    4
