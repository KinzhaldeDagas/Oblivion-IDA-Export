0x4B0D10: push    ebp
0x4B0D11: mov     ebp, esp
0x4B0D13: sub     esp, 8
0x4B0D16: mov     eax, ds:0B30AACh
0x4B0D1B: xor     eax, ebp
0x4B0D1D: mov     [ebp+var_4], eax
0x4B0D20: push    ebx
0x4B0D21: mov     ebx, [ebp+a2]
0x4B0D24: push    esi
0x4B0D25: push    edi
0x4B0D26: mov     edi, ecx
0x4B0D28: mov     ecx, ebx
0x4B0D2A: call    TESFile_GetRecordType
0x4B0D2F: cmp     al, 1Ah
0x4B0D31: jz      short loc_4B0D3A
0x4B0D33: xor     al, al
0x4B0D35: jmp     loc_4B0EEE
0x4B0D3A: push    edi
0x4B0D3B: mov     ecx, ebx
0x4B0D3D: call    TESFile_InitializeFormFromRecord
0x4B0D42: push    0; a2
0x4B0D44: mov     ecx, edi; this
0x4B0D46: call    TESForm_SetIsLinked
0x4B0D4B: fldz
0x4B0D4D: fst     dword ptr [edi+84h]
0x4B0D53: mov     ecx, ebx
0x4B0D55: fstp    dword ptr [edi+80h]
0x4B0D5B: call    TESFile_GetChunkType
0x4B0D60: mov     esi, eax
0x4B0D62: xor     ecx, ecx
0x4B0D64: cmp     esi, ecx
0x4B0D66: jz      loc_4B0EEC
0x4B0D6C: jmp     short loc_4B0D72
0x4B0D6E: align 10h
0x4B0D70: xor     ecx, ecx
0x4B0D72: cmp     esi, 4C4C5546h
0x4B0D78: jg      loc_4B0E33
0x4B0D7E: jz      loc_4B0E21
0x4B0D84: cmp     esi, 44494445h
0x4B0D8A: jg      short loc_4B0DE6
0x4B0D8C: jz      short loc_4B0DBA
0x4B0D8E: cmp     esi, 41544144h
0x4B0D94: jz      short loc_4B0DA7
0x4B0D96: cmp     esi, 42444F4Dh
0x4B0D9C: jz      loc_4B0E8B
0x4B0DA2: jmp     loc_4B0E98
0x4B0DA7: push    18h; a4
0x4B0DA9: lea     eax, [edi+70h]
0x4B0DAC: push    eax; Dst
0x4B0DAD: push    ebx; a2
0x4B0DAE: mov     ecx, edi; this
0x4B0DB0: call    TESForm_LoadGenericComponents
0x4B0DB5: jmp     loc_4B0EA0
0x4B0DBA: mov     eax, [ebx+254h]
0x4B0DC0: call    __alloca?
0x4B0DC5: mov     esi, esp
0x4B0DC7: push    200h; a4
0x4B0DCC: push    esi; Dst
0x4B0DCD: mov     ecx, ebx; a1
0x4B0DCF: call    TESFile_GetChunkData
0x4B0DD4: mov     edx, [edi]
0x4B0DD6: mov     eax, [edx+0D8h]
0x4B0DDC: push    esi
0x4B0DDD: mov     ecx, edi
0x4B0DDF: call    eax
0x4B0DE1: jmp     loc_4B0ED0
0x4B0DE6: cmp     esi, 49524353h
0x4B0DEC: jz      short loc_4B0DFF
0x4B0DEE: cmp     esi, 4C444F4Dh
0x4B0DF4: jz      loc_4B0E8B
0x4B0DFA: jmp     loc_4B0E98
0x4B0DFF: mov     [ebp+var_8], ecx
0x4B0E02: lea     ecx, [ebp+var_8]
0x4B0E05: push    ecx
0x4B0E06: mov     ecx, ebx
0x4B0E08: call    TESFile_GetChunkData4
0x4B0E0D: mov     edx, [ebp+var_8]
0x4B0E10: push    edi
0x4B0E11: lea     ecx, [edi+54h]
0x4B0E14: mov     [edi+58h], edx
0x4B0E17: call    TESScriptableForm_Link
0x4B0E1C: jmp     loc_4B0ED0
0x4B0E21: lea     eax, [edi+24h]
0x4B0E24: push    ebx
0x4B0E25: push    eax
0x4B0E26: call    TESFullname_Load
0x4B0E2B: add     esp, 8
0x4B0E2E: jmp     loc_4B0ED0
0x4B0E33: cmp     esi, 4E4F4349h
0x4B0E39: jg      short loc_4B0E83
0x4B0E3B: jz      short loc_4B0E74
0x4B0E3D: mov     eax, esi
0x4B0E3F: sub     eax, 4D414E46h
0x4B0E44: jz      short loc_4B0E64
0x4B0E46: sub     eax, 0Dh
0x4B0E49: jnz     short loc_4B0E98
0x4B0E4B: mov     [ebp+var_8], ecx
0x4B0E4E: lea     ecx, [ebp+var_8]
0x4B0E51: push    ecx
0x4B0E52: mov     ecx, ebx
0x4B0E54: call    TESFile_GetChunkData4
0x4B0E59: mov     edx, [ebp+var_8]
0x4B0E5C: mov     [edi+8Ch], edx
0x4B0E62: jmp     short loc_4B0ED0
0x4B0E64: lea     eax, [edi+88h]
0x4B0E6A: push    eax
0x4B0E6B: mov     ecx, ebx
0x4B0E6D: call    TESFile_GetChunkData4
0x4B0E72: jmp     short loc_4B0ED0
0x4B0E74: lea     ecx, [edi+48h]
0x4B0E77: push    ebx
0x4B0E78: push    ecx
0x4B0E79: call    TESTexture_Load
0x4B0E7E: add     esp, 8
0x4B0E81: jmp     short loc_4B0ED0
0x4B0E83: cmp     esi, 54444F4Dh
0x4B0E89: jnz     short loc_4B0E98
0x4B0E8B: lea     edx, [edi+30h]
0x4B0E8E: push    ebx
0x4B0E8F: push    edx
0x4B0E90: call    TESModel_Load
0x4B0E95: add     esp, 8
0x4B0E98: cmp     esi, 41544144h
0x4B0E9E: jnz     short loc_4B0ED0
0x4B0EA0: fldz
0x4B0EA2: fcom    dword ptr [edi+84h]
0x4B0EA8: fnstsw  ax
0x4B0EAA: test    ah, 44h
0x4B0EAD: jp      short loc_4B0EBB
0x4B0EAF: fld     dword ptr ds:0A430CCh
0x4B0EB5: fstp    dword ptr [edi+84h]
0x4B0EBB: fcomp   dword ptr [edi+80h]
0x4B0EC1: fnstsw  ax
0x4B0EC3: test    ah, 44h
0x4B0EC6: jp      short loc_4B0ED0
0x4B0EC8: fld1
0x4B0ECA: fstp    dword ptr [edi+80h]
0x4B0ED0: mov     ecx, ebx
0x4B0ED2: call    TESFile_GetNextChunk
0x4B0ED7: test    al, al
0x4B0ED9: jz      short loc_4B0EEC
0x4B0EDB: mov     ecx, ebx
0x4B0EDD: call    TESFile_GetChunkType
0x4B0EE2: mov     esi, eax
0x4B0EE4: test    esi, esi
0x4B0EE6: jnz     loc_4B0D70
0x4B0EEC: mov     al, 1
0x4B0EEE: lea     esp, [ebp-14h]
0x4B0EF1: pop     edi
0x4B0EF2: pop     esi
0x4B0EF3: pop     ebx
0x4B0EF4: mov     ecx, [ebp+var_4]
0x4B0EF7: xor     ecx, ebp
0x4B0EF9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B0EFE: mov     esp, ebp
0x4B0F00: pop     ebp
0x4B0F01: retn    4
