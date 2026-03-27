0x4BAD20: push    ebp
0x4BAD21: mov     ebp, esp
0x4BAD23: sub     esp, 10h
0x4BAD26: mov     eax, ds:0B30AACh
0x4BAD2B: xor     eax, ebp
0x4BAD2D: mov     [ebp+var_4], eax
0x4BAD30: push    ebx
0x4BAD31: push    esi
0x4BAD32: mov     esi, [ebp+a1]
0x4BAD35: push    edi
0x4BAD36: mov     edi, ecx
0x4BAD38: mov     ecx, esi
0x4BAD3A: mov     [ebp+var_8], edi
0x4BAD3D: call    TESFile_GetRecordType
0x4BAD42: cmp     al, 1Eh
0x4BAD44: jz      short loc_4BAD4D
0x4BAD46: xor     al, al
0x4BAD48: jmp     loc_4BAF32
0x4BAD4D: push    edi
0x4BAD4E: mov     ecx, esi
0x4BAD50: call    TESFile_InitializeFormFromRecord
0x4BAD55: mov     ecx, esi
0x4BAD57: call    TESFile_GetChunkType
0x4BAD5C: test    eax, eax
0x4BAD5E: jz      loc_4BAF30
0x4BAD64: cmp     eax, 4D414E43h
0x4BAD69: jg      loc_4BAE09
0x4BAD6F: jz      short loc_4BADEA
0x4BAD71: cmp     eax, 4C444F4Dh
0x4BAD76: jg      short loc_4BADC0
0x4BAD78: jz      loc_4BAE22
0x4BAD7E: cmp     eax, 42444F4Dh
0x4BAD83: jz      loc_4BAE22
0x4BAD89: cmp     eax, 44494445h
0x4BAD8E: jnz     loc_4BAF16
0x4BAD94: mov     eax, [esi+254h]
0x4BAD9A: call    __alloca?
0x4BAD9F: mov     ebx, esp
0x4BADA1: push    200h; a4
0x4BADA6: push    ebx; Dst
0x4BADA7: mov     ecx, esi; a1
0x4BADA9: call    TESFile_GetChunkData
0x4BADAE: mov     eax, [edi]
0x4BADB0: mov     edx, [eax+0D8h]
0x4BADB6: push    ebx
0x4BADB7: mov     ecx, edi
0x4BADB9: call    edx
0x4BADBB: jmp     loc_4BAF16
0x4BADC0: cmp     eax, 4D414E42h
0x4BADC5: jnz     loc_4BAF16
0x4BADCB: cmp     dword ptr [esi+254h], 8
0x4BADD2: jnz     loc_4BAF16
0x4BADD8: push    8; a4
0x4BADDA: lea     eax, [edi+78h]
0x4BADDD: push    eax; Dst
0x4BADDE: mov     ecx, esi; a1
0x4BADE0: call    TESFile_GetChunkData
0x4BADE5: jmp     loc_4BAF16
0x4BADEA: cmp     dword ptr [esi+254h], 20h ; ' '
0x4BADF1: jnz     loc_4BAF16
0x4BADF7: push    20h ; ' '; a4
0x4BADF9: lea     ecx, [edi+58h]
0x4BADFC: push    ecx; Dst
0x4BADFD: mov     ecx, esi; a1
0x4BADFF: call    TESFile_GetChunkData
0x4BAE04: jmp     loc_4BAF16
0x4BAE09: cmp     eax, 4D414E53h
0x4BAE0E: jz      short loc_4BAE70
0x4BAE10: cmp     eax, 4E4F4349h
0x4BAE15: jz      short loc_4BAE49
0x4BAE17: cmp     eax, 54444F4Dh
0x4BAE1C: jnz     loc_4BAF16
0x4BAE22: test    edi, edi
0x4BAE24: jz      short loc_4BAE38
0x4BAE26: lea     eax, [edi+24h]
0x4BAE29: push    esi
0x4BAE2A: push    eax
0x4BAE2B: call    TESModel_Load
0x4BAE30: add     esp, 8
0x4BAE33: jmp     loc_4BAF16
0x4BAE38: xor     eax, eax
0x4BAE3A: push    esi
0x4BAE3B: push    eax
0x4BAE3C: call    TESModel_Load
0x4BAE41: add     esp, 8
0x4BAE44: jmp     loc_4BAF16
0x4BAE49: test    edi, edi
0x4BAE4B: jz      short loc_4BAE5F
0x4BAE4D: lea     eax, [edi+3Ch]
0x4BAE50: push    esi
0x4BAE51: push    eax
0x4BAE52: call    TESTexture_Load
0x4BAE57: add     esp, 8
0x4BAE5A: jmp     loc_4BAF16
0x4BAE5F: xor     eax, eax
0x4BAE61: push    esi
0x4BAE62: push    eax
0x4BAE63: call    TESTexture_Load
0x4BAE68: add     esp, 8
0x4BAE6B: jmp     loc_4BAF16
0x4BAE70: mov     ebx, [esi+254h]
0x4BAE76: test    ebx, ebx
0x4BAE78: jz      loc_4BAF16
0x4BAE7E: test    bl, 3
0x4BAE81: jnz     loc_4BAF16
0x4BAE87: mov     esi, ebx
0x4BAE89: shr     esi, 2
0x4BAE8C: xor     ecx, ecx
0x4BAE8E: mov     eax, esi
0x4BAE90: mov     edx, 4
0x4BAE95: mul     edx
0x4BAE97: seto    cl
0x4BAE9A: neg     ecx
0x4BAE9C: or      ecx, eax
0x4BAE9E: push    ecx; Size
0x4BAE9F: call    FormHeapAlloc
0x4BAEA4: push    ebx
0x4BAEA5: mov     edi, eax
0x4BAEA7: push    0
0x4BAEA9: push    edi
0x4BAEAA: mov     [ebp+var_10], edi
0x4BAEAD: call    __memset
0x4BAEB2: mov     ecx, [ebp+a1]; a1
0x4BAEB5: add     esp, 10h
0x4BAEB8: push    ebx; a4
0x4BAEB9: push    edi; Dst
0x4BAEBA: call    TESFile_GetChunkData
0x4BAEBF: mov     ebx, [ebp+var_8]
0x4BAEC2: add     ebx, 48h ; 'H'
0x4BAEC5: mov     ecx, ebx
0x4BAEC7: call    sub_65DD90
0x4BAECC: test    esi, esi
0x4BAECE: jbe     short loc_4BAF07
0x4BAED0: mov     [ebp+var_C], esi
0x4BAED3: cmp     dword ptr [edi], 0
0x4BAED6: jbe     short loc_4BAEFB
0x4BAED8: movzx   esi, word ptr [ebx+0Ah]
0x4BAEDC: movzx   eax, word ptr [ebx+8]
0x4BAEE0: cmp     esi, eax
0x4BAEE2: jb      short loc_4BAEF2
0x4BAEE4: movzx   ecx, word ptr [ebx+0Eh]
0x4BAEE8: add     ecx, esi
0x4BAEEA: push    ecx
0x4BAEEB: mov     ecx, ebx
0x4BAEED: call    NiTArray_SetSize
0x4BAEF2: push    edi
0x4BAEF3: push    esi
0x4BAEF4: mov     ecx, ebx
0x4BAEF6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4BAEFB: add     edi, 4
0x4BAEFE: sub     [ebp+var_C], 1
0x4BAF02: jnz     short loc_4BAED3
0x4BAF04: mov     edi, [ebp+var_10]
0x4BAF07: push    edi
0x4BAF08: call    FormHeapFree
0x4BAF0D: mov     edi, [ebp+var_8]
0x4BAF10: mov     esi, [ebp+a1]
0x4BAF13: add     esp, 4
0x4BAF16: mov     ecx, esi
0x4BAF18: call    TESFile_GetNextChunk
0x4BAF1D: test    al, al
0x4BAF1F: jz      short loc_4BAF30
0x4BAF21: mov     ecx, esi
0x4BAF23: call    TESFile_GetChunkType
0x4BAF28: test    eax, eax
0x4BAF2A: jnz     loc_4BAD64
0x4BAF30: mov     al, 1
0x4BAF32: lea     esp, [ebp-1Ch]
0x4BAF35: pop     edi
0x4BAF36: pop     esi
0x4BAF37: pop     ebx
0x4BAF38: mov     ecx, [ebp+var_4]
0x4BAF3B: xor     ecx, ebp
0x4BAF3D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BAF42: mov     esp, ebp
0x4BAF44: pop     ebp
0x4BAF45: retn    4
