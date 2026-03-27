0x4ED6A0: push    ebp
0x4ED6A1: mov     ebp, esp
0x4ED6A3: sub     esp, 8
0x4ED6A6: mov     eax, ds:0B30AACh
0x4ED6AB: xor     eax, ebp
0x4ED6AD: mov     [ebp+var_4], eax
0x4ED6B0: push    ebx
0x4ED6B1: push    esi
0x4ED6B2: mov     esi, [ebp+a2]
0x4ED6B5: push    edi
0x4ED6B6: mov     edi, ecx
0x4ED6B8: mov     ecx, esi
0x4ED6BA: call    TESFile_GetRecordType
0x4ED6BF: cmp     al, 42h ; 'B'
0x4ED6C1: jz      short loc_4ED6CA
0x4ED6C3: xor     al, al
0x4ED6C5: jmp     loc_4ED80D
0x4ED6CA: push    edi
0x4ED6CB: mov     ecx, esi
0x4ED6CD: call    TESFile_InitializeFormFromRecord
0x4ED6D2: push    0; a2
0x4ED6D4: mov     ecx, edi; this
0x4ED6D6: call    TESForm_SetIsLinked
0x4ED6DB: mov     ecx, esi
0x4ED6DD: call    TESFile_GetChunkType
0x4ED6E2: test    eax, eax
0x4ED6E4: jz      loc_4ED80B
0x4ED6EA: lea     ebx, [ebx+0]
0x4ED6F0: cmp     eax, 4D414E47h
0x4ED6F5: jg      loc_4ED795
0x4ED6FB: jz      loc_4ED783
0x4ED701: cmp     eax, 4D414E41h
0x4ED706: jg      short loc_4ED76D
0x4ED708: jz      short loc_4ED75B
0x4ED70A: cmp     eax, 41544144h
0x4ED70F: jz      short loc_4ED748
0x4ED711: cmp     eax, 44494445h
0x4ED716: jnz     loc_4ED7F1
0x4ED71C: mov     eax, [esi+254h]
0x4ED722: call    __alloca?
0x4ED727: mov     ebx, esp
0x4ED729: push    200h; a4
0x4ED72E: push    ebx; Dst
0x4ED72F: mov     ecx, esi; a1
0x4ED731: call    TESFile_GetChunkData
0x4ED736: mov     eax, [edi]
0x4ED738: mov     edx, [eax+0D8h]
0x4ED73E: push    ebx
0x4ED73F: mov     ecx, edi
0x4ED741: call    edx
0x4ED743: jmp     loc_4ED7F1
0x4ED748: push    64h ; 'd'; a4
0x4ED74A: lea     eax, [edi+3Ch]
0x4ED74D: push    eax; Dst
0x4ED74E: push    esi; a2
0x4ED74F: mov     ecx, edi; this
0x4ED751: call    TESForm_LoadGenericComponents
0x4ED756: jmp     loc_4ED7F1
0x4ED75B: push    1; a4
0x4ED75D: lea     ecx, [edi+2Ch]
0x4ED760: push    ecx; Dst
0x4ED761: mov     ecx, esi; a1
0x4ED763: call    TESFile_GetChunkData
0x4ED768: jmp     loc_4ED7F1
0x4ED76D: cmp     eax, 4D414E46h
0x4ED772: jnz     short loc_4ED7F1
0x4ED774: push    1; a4
0x4ED776: lea     edx, [edi+2Dh]
0x4ED779: push    edx; Dst
0x4ED77A: mov     ecx, esi; a1
0x4ED77C: call    TESFile_GetChunkData
0x4ED781: jmp     short loc_4ED7F1
0x4ED783: push    0Ch; a4
0x4ED785: lea     eax, [edi+0A0h]
0x4ED78B: push    eax; Dst
0x4ED78C: mov     ecx, esi; a1
0x4ED78E: call    TESFile_GetChunkData
0x4ED793: jmp     short loc_4ED7F1
0x4ED795: sub     eax, 4D414E4Dh
0x4ED79A: jz      short loc_4ED7CF
0x4ED79C: sub     eax, 6
0x4ED79F: jz      short loc_4ED7B5
0x4ED7A1: sub     eax, 1
0x4ED7A4: jnz     short loc_4ED7F1
0x4ED7A6: lea     ecx, [edi+20h]
0x4ED7A9: push    esi
0x4ED7AA: push    ecx
0x4ED7AB: call    TESTexture_Load
0x4ED7B0: add     esp, 8
0x4ED7B3: jmp     short loc_4ED7F1
0x4ED7B5: lea     edx, [ebp+var_8]
0x4ED7B8: push    edx
0x4ED7B9: mov     ecx, esi
0x4ED7BB: mov     [ebp+var_8], 0
0x4ED7C2: call    TESFile_GetChunkData4
0x4ED7C7: mov     eax, [ebp+var_8]
0x4ED7CA: mov     [edi+38h], eax
0x4ED7CD: jmp     short loc_4ED7F1
0x4ED7CF: mov     eax, [esi+254h]
0x4ED7D5: call    __alloca?
0x4ED7DA: mov     ebx, esp
0x4ED7DC: push    0; a4
0x4ED7DE: push    ebx; Dst
0x4ED7DF: mov     ecx, esi; a1
0x4ED7E1: call    TESFile_GetChunkData
0x4ED7E6: push    0; a3
0x4ED7E8: push    ebx; a2
0x4ED7E9: lea     ecx, [edi+30h]; this
0x4ED7EC: call    BSStringT_Set
0x4ED7F1: mov     ecx, esi
0x4ED7F3: call    TESFile_GetNextChunk
0x4ED7F8: test    al, al
0x4ED7FA: jz      short loc_4ED80B
0x4ED7FC: mov     ecx, esi
0x4ED7FE: call    TESFile_GetChunkType
0x4ED803: test    eax, eax
0x4ED805: jnz     loc_4ED6F0
0x4ED80B: mov     al, 1
0x4ED80D: lea     esp, [ebp-14h]
0x4ED810: pop     edi
0x4ED811: pop     esi
0x4ED812: pop     ebx
0x4ED813: mov     ecx, [ebp+var_4]
0x4ED816: xor     ecx, ebp
0x4ED818: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4ED81D: mov     esp, ebp
0x4ED81F: pop     ebp
0x4ED820: retn    4
