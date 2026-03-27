0x4AE700: push    ebp
0x4AE701: mov     ebp, esp
0x4AE703: sub     esp, 8
0x4AE706: mov     eax, ds:0B30AACh
0x4AE70B: xor     eax, ebp
0x4AE70D: mov     [ebp+var_4], eax
0x4AE710: push    ebx
0x4AE711: mov     ebx, [ebp+a1]
0x4AE714: push    esi
0x4AE715: mov     esi, ecx
0x4AE717: push    edi
0x4AE718: push    esi
0x4AE719: mov     ecx, ebx
0x4AE71B: call    TESFile_InitializeFormFromRecord
0x4AE720: push    0; a2
0x4AE722: mov     ecx, esi; this
0x4AE724: call    TESForm_SetIsLinked
0x4AE729: mov     ecx, ebx
0x4AE72B: call    TESFile_GetChunkType
0x4AE730: test    eax, eax
0x4AE732: jz      loc_4AE812
0x4AE738: cmp     eax, 4C444F4Dh
0x4AE73D: jg      short loc_4AE7A6
0x4AE73F: jz      short loc_4AE7BB
0x4AE741: cmp     eax, 42444F4Dh
0x4AE746: jz      short loc_4AE7BB
0x4AE748: cmp     eax, 44494445h
0x4AE74D: jz      short loc_4AE77D
0x4AE74F: cmp     eax, 49524353h
0x4AE754: jnz     loc_4AE7F8
0x4AE75A: lea     eax, [ebp+var_8]
0x4AE75D: push    eax
0x4AE75E: mov     ecx, ebx
0x4AE760: mov     [ebp+var_8], 0
0x4AE767: call    TESFile_GetChunkData4
0x4AE76C: mov     ecx, [ebp+var_8]
0x4AE76F: mov     [esi+4Ch], ecx
0x4AE772: push    esi
0x4AE773: lea     ecx, [esi+48h]
0x4AE776: call    TESScriptableForm_Link
0x4AE77B: jmp     short loc_4AE7F8
0x4AE77D: mov     eax, [ebx+254h]
0x4AE783: call    __alloca?
0x4AE788: mov     edi, esp
0x4AE78A: push    200h; a4
0x4AE78F: push    edi; Dst
0x4AE790: mov     ecx, ebx; a1
0x4AE792: call    TESFile_GetChunkData
0x4AE797: mov     edx, [esi]
0x4AE799: mov     eax, [edx+0D8h]
0x4AE79F: push    edi
0x4AE7A0: mov     ecx, esi
0x4AE7A2: call    eax
0x4AE7A4: jmp     short loc_4AE7F8
0x4AE7A6: cmp     eax, 4C4C5546h
0x4AE7AB: jz      short loc_4AE7E3
0x4AE7AD: cmp     eax, 4D414E4Dh
0x4AE7B2: jz      short loc_4AE7D6
0x4AE7B4: cmp     eax, 54444F4Dh
0x4AE7B9: jnz     short loc_4AE7F8
0x4AE7BB: test    esi, esi
0x4AE7BD: jz      short loc_4AE7CB
0x4AE7BF: lea     eax, [esi+30h]
0x4AE7C2: push    ebx
0x4AE7C3: push    eax
0x4AE7C4: call    TESModel_Load
0x4AE7C9: jmp     short loc_4AE7F5
0x4AE7CB: xor     eax, eax
0x4AE7CD: push    ebx
0x4AE7CE: push    eax
0x4AE7CF: call    TESModel_Load
0x4AE7D4: jmp     short loc_4AE7F5
0x4AE7D6: lea     ecx, [esi+58h]
0x4AE7D9: push    ecx
0x4AE7DA: mov     ecx, ebx
0x4AE7DC: call    TESFile_GetChunkData4
0x4AE7E1: jmp     short loc_4AE7F8
0x4AE7E3: test    esi, esi
0x4AE7E5: jz      short loc_4AE7EC
0x4AE7E7: lea     eax, [esi+24h]
0x4AE7EA: jmp     short loc_4AE7EE
0x4AE7EC: xor     eax, eax
0x4AE7EE: push    ebx
0x4AE7EF: push    eax
0x4AE7F0: call    TESFullname_Load
0x4AE7F5: add     esp, 8
0x4AE7F8: mov     ecx, ebx
0x4AE7FA: call    TESFile_GetNextChunk
0x4AE7FF: test    al, al
0x4AE801: jz      short loc_4AE812
0x4AE803: mov     ecx, ebx
0x4AE805: call    TESFile_GetChunkType
0x4AE80A: test    eax, eax
0x4AE80C: jnz     loc_4AE738
0x4AE812: mov     al, 1
0x4AE814: lea     esp, [ebp-14h]
0x4AE817: pop     edi
0x4AE818: pop     esi
0x4AE819: pop     ebx
0x4AE81A: mov     ecx, [ebp+var_4]
0x4AE81D: xor     ecx, ebp
0x4AE81F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4AE824: mov     esp, ebp
0x4AE826: pop     ebp
0x4AE827: retn    4
