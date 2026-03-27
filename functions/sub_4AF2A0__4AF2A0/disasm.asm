0x4AF2A0: push    ebp
0x4AF2A1: mov     ebp, esp
0x4AF2A3: sub     esp, 8
0x4AF2A6: mov     eax, ds:0B30AACh
0x4AF2AB: xor     eax, ebp
0x4AF2AD: mov     [ebp+var_4], eax
0x4AF2B0: push    ebx
0x4AF2B1: mov     ebx, [ebp+a2]
0x4AF2B4: push    esi
0x4AF2B5: push    edi
0x4AF2B6: mov     edi, ecx
0x4AF2B8: mov     ecx, ebx
0x4AF2BA: call    TESFile_GetRecordType
0x4AF2BF: cmp     al, 1Dh
0x4AF2C1: jz      short loc_4AF2CA
0x4AF2C3: xor     al, al
0x4AF2C5: jmp     loc_4AF39A
0x4AF2CA: xor     eax, eax
0x4AF2CC: lea     esi, [edi+3Ch]
0x4AF2CF: mov     [esi], eax
0x4AF2D1: mov     [esi+4], eax
0x4AF2D4: mov     [esi+8], eax
0x4AF2D7: mov     [esi+0Ch], eax
0x4AF2DA: mov     [esi+10h], eax
0x4AF2DD: mov     [esi+14h], eax
0x4AF2E0: mov     [esi+18h], eax
0x4AF2E3: push    edi
0x4AF2E4: mov     ecx, ebx
0x4AF2E6: mov     [esi+1Ch], eax
0x4AF2E9: call    TESFile_InitializeFormFromRecord
0x4AF2EE: push    0; a2
0x4AF2F0: mov     ecx, edi; this
0x4AF2F2: call    TESForm_SetIsLinked
0x4AF2F7: mov     ecx, ebx
0x4AF2F9: call    TESFile_GetChunkType
0x4AF2FE: test    eax, eax
0x4AF300: jz      loc_4AF398
0x4AF306: cmp     eax, 44494445h
0x4AF30B: jg      short loc_4AF35B
0x4AF30D: jz      short loc_4AF32C
0x4AF30F: cmp     eax, 41544144h
0x4AF314: jz      short loc_4AF31F
0x4AF316: cmp     eax, 42444F4Dh
0x4AF31B: jz      short loc_4AF369
0x4AF31D: jmp     short loc_4AF37E
0x4AF31F: push    20h ; ' '; a4
0x4AF321: push    esi; Dst
0x4AF322: push    ebx; a2
0x4AF323: mov     ecx, edi; this
0x4AF325: call    TESForm_LoadGenericComponents
0x4AF32A: jmp     short loc_4AF37E
0x4AF32C: mov     eax, [ebx+254h]
0x4AF332: call    __alloca?
0x4AF337: mov     eax, esp
0x4AF339: push    200h; a4
0x4AF33E: push    eax; Dst
0x4AF33F: mov     ecx, ebx; a1
0x4AF341: mov     [ebp+var_8], eax
0x4AF344: call    TESFile_GetChunkData
0x4AF349: mov     ecx, [ebp+var_8]
0x4AF34C: mov     eax, [edi]
0x4AF34E: mov     edx, [eax+0D8h]
0x4AF354: push    ecx
0x4AF355: mov     ecx, edi
0x4AF357: call    edx
0x4AF359: jmp     short loc_4AF37E
0x4AF35B: cmp     eax, 4C444F4Dh
0x4AF360: jz      short loc_4AF369
0x4AF362: cmp     eax, 54444F4Dh
0x4AF367: jnz     short loc_4AF37E
0x4AF369: test    edi, edi
0x4AF36B: jz      short loc_4AF372
0x4AF36D: lea     eax, [edi+24h]
0x4AF370: jmp     short loc_4AF374
0x4AF372: xor     eax, eax
0x4AF374: push    ebx
0x4AF375: push    eax
0x4AF376: call    TESModel_Load
0x4AF37B: add     esp, 8
0x4AF37E: mov     ecx, ebx
0x4AF380: call    TESFile_GetNextChunk
0x4AF385: test    al, al
0x4AF387: jz      short loc_4AF398
0x4AF389: mov     ecx, ebx
0x4AF38B: call    TESFile_GetChunkType
0x4AF390: test    eax, eax
0x4AF392: jnz     loc_4AF306
0x4AF398: mov     al, 1
0x4AF39A: lea     esp, [ebp-14h]
0x4AF39D: pop     edi
0x4AF39E: pop     esi
0x4AF39F: pop     ebx
0x4AF3A0: mov     ecx, [ebp+var_4]
0x4AF3A3: xor     ecx, ebp
0x4AF3A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4AF3AA: mov     esp, ebp
0x4AF3AC: pop     ebp
0x4AF3AD: retn    4
