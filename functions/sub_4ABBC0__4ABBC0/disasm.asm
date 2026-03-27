0x4ABBC0: push    ebp
0x4ABBC1: mov     ebp, esp
0x4ABBC3: push    ecx
0x4ABBC4: mov     eax, ds:0B30AACh
0x4ABBC9: xor     eax, ebp
0x4ABBCB: mov     [ebp+var_4], eax
0x4ABBCE: push    ebx
0x4ABBCF: mov     ebx, [ebp+a1]
0x4ABBD2: push    esi
0x4ABBD3: mov     esi, ecx
0x4ABBD5: push    edi
0x4ABBD6: mov     ecx, ebx
0x4ABBD8: call    TESFile_GetRecordType
0x4ABBDD: cmp     al, 3Eh ; '>'
0x4ABBDF: jz      short loc_4ABBE8
0x4ABBE1: xor     al, al
0x4ABBE3: jmp     loc_4ABD89
0x4ABBE8: mov     eax, [esi]
0x4ABBEA: mov     edx, [eax+18h]
0x4ABBED: mov     ecx, esi
0x4ABBEF: call    edx
0x4ABBF1: push    esi
0x4ABBF2: mov     ecx, ebx
0x4ABBF4: call    TESFile_InitializeFormFromRecord
0x4ABBF9: push    0; a2
0x4ABBFB: mov     ecx, esi; this
0x4ABBFD: call    TESForm_SetIsLinked
0x4ABC02: mov     ecx, ebx
0x4ABC04: call    TESFile_GetChunkType
0x4ABC09: test    eax, eax
0x4ABC0B: jz      loc_4ABD87
0x4ABC11: cmp     eax, 44415343h
0x4ABC16: jz      loc_4ABD23
0x4ABC1C: cmp     eax, 44494445h
0x4ABC21: jz      loc_4ABCFA
0x4ABC27: cmp     eax, 44545343h
0x4ABC2C: jnz     loc_4ABD6D
0x4ABC32: push    7Ch ; '|'
0x4ABC34: lea     edi, [esi+18h]
0x4ABC37: push    0
0x4ABC39: push    edi
0x4ABC3A: call    __memset
0x4ABC3F: fld1
0x4ABC41: fst     dword ptr [esi+6Ch]
0x4ABC44: add     esp, 0Ch
0x4ABC47: fstp    dword ptr [esi+70h]
0x4ABC4A: push    7Ch ; '|'; a4
0x4ABC4C: fld     dword ptr ds:0B35670h
0x4ABC52: push    edi; Dst
0x4ABC53: fstp    dword ptr [esi+74h]
0x4ABC56: mov     ecx, ebx; a1
0x4ABC58: fld     dword ptr ds:0B35678h
0x4ABC5E: fstp    dword ptr [esi+78h]
0x4ABC61: fld     dword ptr ds:0B35680h
0x4ABC67: fstp    dword ptr [esi+7Ch]
0x4ABC6A: fld     dword ptr ds:0B35688h
0x4ABC70: fstp    dword ptr [esi+80h]
0x4ABC76: fld     dword ptr ds:0B35690h
0x4ABC7C: fstp    dword ptr [esi+84h]
0x4ABC82: mov     al, ds:0B35778h
0x4ABC87: mov     [esi+88h], al
0x4ABC8D: fld     dword ptr ds:0B35780h
0x4ABC93: fstp    dword ptr [esi+8Ch]
0x4ABC99: call    TESFile_GetChunkData
0x4ABC9E: fldz
0x4ABCA0: fcom    dword ptr [esi+74h]
0x4ABCA3: fnstsw  ax
0x4ABCA5: test    ah, 1
0x4ABCA8: jnz     short loc_4ABCB3
0x4ABCAA: fld     dword ptr ds:0B35670h
0x4ABCB0: fstp    dword ptr [esi+74h]
0x4ABCB3: fcom    dword ptr [esi+78h]
0x4ABCB6: fnstsw  ax
0x4ABCB8: test    ah, 1
0x4ABCBB: jnz     short loc_4ABCC6
0x4ABCBD: fld     dword ptr ds:0B35678h
0x4ABCC3: fstp    dword ptr [esi+78h]
0x4ABCC6: cmp     byte ptr [esi+88h], 0
0x4ABCCD: jg      short loc_4ABCDB
0x4ABCCF: mov     cl, ds:0B35778h
0x4ABCD5: mov     [esi+88h], cl
0x4ABCDB: fcomp   dword ptr [esi+8Ch]
0x4ABCE1: fnstsw  ax
0x4ABCE3: test    ah, 1
0x4ABCE6: jnz     loc_4ABD6D
0x4ABCEC: fld     dword ptr ds:0B35780h
0x4ABCF2: fstp    dword ptr [esi+8Ch]
0x4ABCF8: jmp     short loc_4ABD6D
0x4ABCFA: mov     eax, [ebx+254h]
0x4ABD00: call    __alloca?
0x4ABD05: mov     edi, esp
0x4ABD07: push    200h; a4
0x4ABD0C: push    edi; Dst
0x4ABD0D: mov     ecx, ebx; a1
0x4ABD0F: call    TESFile_GetChunkData
0x4ABD14: mov     edx, [esi]
0x4ABD16: mov     eax, [edx+0D8h]
0x4ABD1C: push    edi
0x4ABD1D: mov     ecx, esi
0x4ABD1F: call    eax
0x4ABD21: jmp     short loc_4ABD6D
0x4ABD23: mov     eax, [esi+94h]
0x4ABD29: test    eax, eax
0x4ABD2B: jz      short loc_4ABD40
0x4ABD2D: push    eax
0x4ABD2E: call    FormHeapFree
0x4ABD33: add     esp, 4
0x4ABD36: mov     dword ptr [esi+94h], 0
0x4ABD40: push    54h ; 'T'; Size
0x4ABD42: call    FormHeapAlloc
0x4ABD47: add     esp, 4
0x4ABD4A: test    eax, eax
0x4ABD4C: jz      short loc_4ABD57
0x4ABD4E: mov     ecx, eax
0x4ABD50: call    sub_4A9BF0
0x4ABD55: jmp     short loc_4ABD59
0x4ABD57: xor     eax, eax
0x4ABD59: push    54h ; 'T'; a4
0x4ABD5B: push    eax; Dst
0x4ABD5C: mov     ecx, ebx; a1
0x4ABD5E: mov     [esi+94h], eax
0x4ABD64: call    TESFile_GetChunkData
0x4ABD69: or      byte ptr [esi+68h], 1
0x4ABD6D: mov     ecx, ebx
0x4ABD6F: call    TESFile_GetNextChunk
0x4ABD74: test    al, al
0x4ABD76: jz      short loc_4ABD87
0x4ABD78: mov     ecx, ebx
0x4ABD7A: call    TESFile_GetChunkType
0x4ABD7F: test    eax, eax
0x4ABD81: jnz     loc_4ABC11
0x4ABD87: mov     al, 1
0x4ABD89: lea     esp, [ebp-10h]
0x4ABD8C: pop     edi
0x4ABD8D: pop     esi
0x4ABD8E: pop     ebx
0x4ABD8F: mov     ecx, [ebp+var_4]
0x4ABD92: xor     ecx, ebp
0x4ABD94: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4ABD99: mov     esp, ebp
0x4ABD9B: pop     ebp
0x4ABD9C: retn    4
