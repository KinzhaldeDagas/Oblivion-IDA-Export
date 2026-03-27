0x42D840: push    0FFFFFFFFh
0x42D842: push    offset ArchiveManager_ReadArchiveInvalidationTXTFile_SEH
0x42D847: mov     eax, large fs:0
0x42D84D: push    eax
0x42D84E: sub     esp, 110h
0x42D854: mov     eax, ___security_cookie
0x42D859: xor     eax, esp
0x42D85B: mov     [esp+11Ch+var_10], eax
0x42D862: push    ebx
0x42D863: push    ebp
0x42D864: push    esi
0x42D865: push    edi
0x42D866: mov     eax, ___security_cookie
0x42D86B: xor     eax, esp
0x42D86D: push    eax
0x42D86E: lea     eax, [esp+130h+var_C]
0x42D875: mov     large fs:0, eax
0x42D87B: mov     eax, [esp+130h+arg_0]
0x42D882: push    2800h
0x42D887: xor     ebp, ebp
0x42D889: push    ebp
0x42D88A: push    eax
0x42D88B: call    FileFinder_LoadBSFile
0x42D890: mov     ebx, eax
0x42D892: add     esp, 0Ch
0x42D895: cmp     ebx, ebp
0x42D897: jz      loc_42DAE6
0x42D89D: mov     eax, [ebx]
0x42D89F: mov     edx, [eax+18h]
0x42D8A2: push    ebp
0x42D8A3: push    ebp
0x42D8A4: mov     ecx, ebx
0x42D8A6: call    edx
0x42D8A8: test    al, al
0x42D8AA: mov     eax, [ebx]
0x42D8AC: jz      loc_42DADE
0x42D8B2: mov     edx, [eax+28h]
0x42D8B5: push    0Dh
0x42D8B7: push    104h
0x42D8BC: lea     ecx, [esp+138h+Str]
0x42D8C0: push    ecx
0x42D8C1: mov     ecx, ebx
0x42D8C3: call    edx
0x42D8C5: test    eax, eax
0x42D8C7: jz      loc_42DADC
0x42D8CD: lea     ecx, [ecx+0]
0x42D8D0: mov     edx, [ebx+4]
0x42D8D3: mov     edi, 1
0x42D8D8: push    edi
0x42D8D9: lea     eax, [esp+134h+var_11C]
0x42D8DD: push    eax
0x42D8DE: push    edi
0x42D8DF: lea     ecx, [esp+13Ch+var_115]
0x42D8E3: push    ecx
0x42D8E4: push    ebx
0x42D8E5: mov     [esp+144h+var_11C], edi
0x42D8E9: call    edx
0x42D8EB: lea     eax, [esp+144h+Str]
0x42D8EF: push    offset SubStr; SubStr
0x42D8F4: push    eax; Str
0x42D8F5: call    _strstr
0x42D8FA: add     esp, 1Ch
0x42D8FD: test    eax, eax
0x42D8FF: jz      loc_42D9E2
0x42D905: cmp     ArchiveInvalidatedDirPAths, ebp
0x42D90B: jnz     short loc_42D974
0x42D90D: push    10h; Size
0x42D90F: call    FormHeapAlloc
0x42D914: mov     esi, eax
0x42D916: add     esp, 4
0x42D919: mov     [esp+130h+var_11C], esi
0x42D91D: cmp     esi, ebp
0x42D91F: mov     [esp+130h+var_4], ebp
0x42D926: jz      short loc_42D961
0x42D928: xor     ecx, ecx
0x42D92A: mov     eax, 5
0x42D92F: mov     [esi+8], ax
0x42D933: mov     edx, 4
0x42D938: mul     edx
0x42D93A: seto    cl
0x42D93D: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVBSHash@@@@6B@; const NiTArray<BSHash *>::`vftable'
0x42D943: mov     [esi+0Eh], di
0x42D947: mov     [esi+0Ah], bp
0x42D94B: mov     [esi+0Ch], bp
0x42D94F: neg     ecx
0x42D951: or      ecx, eax
0x42D953: push    ecx; Size
0x42D954: call    FormHeapAlloc
0x42D959: add     esp, 4
0x42D95C: mov     [esi+4], eax
0x42D95F: jmp     short loc_42D963
0x42D961: xor     esi, esi
0x42D963: mov     [esp+130h+var_4], 0FFFFFFFFh
0x42D96E: mov     ArchiveInvalidatedDirPAths, esi
0x42D974: cmp     [esp+130h+Str], 5Ch ; '\'
0x42D979: lea     esi, [esp+130h+Str]
0x42D97D: jnz     short loc_42D983
0x42D97F: lea     esi, [esp+130h+var_113]
0x42D983: push    8; Size
0x42D985: call    FormHeapAlloc
0x42D98A: add     esp, 4
0x42D98D: mov     [esp+130h+var_11C], eax
0x42D991: cmp     eax, ebp
0x42D993: mov     [esp+130h+var_4], edi
0x42D99A: jz      short loc_42D9A7
0x42D99C: push    edi; int
0x42D99D: push    esi; FullPath
0x42D99E: mov     ecx, eax
0x42D9A0: call    BSHash_constr
0x42D9A5: jmp     short loc_42D9A9
0x42D9A7: xor     eax, eax
0x42D9A9: mov     ecx, ArchiveInvalidatedDirPAths
0x42D9AF: movzx   esi, word ptr [ecx+0Ah]
0x42D9B3: mov     [esp+130h+var_11C], eax
0x42D9B7: movzx   eax, word ptr [ecx+8]
0x42D9BB: cmp     esi, eax
0x42D9BD: mov     [esp+130h+var_4], 0FFFFFFFFh
0x42D9C8: mov     edi, ecx
0x42D9CA: jb      short loc_42D9D8
0x42D9CC: movzx   edx, word ptr [ecx+0Eh]
0x42D9D0: add     edx, esi
0x42D9D2: push    edx
0x42D9D3: call    NiTArray_SetSize
0x42D9D8: lea     eax, [esp+130h+var_11C]
0x42D9DC: push    eax
0x42D9DD: jmp     loc_42DAB7
0x42D9E2: cmp     ArchiveInvalidateFilenames, ebp
0x42D9E8: jnz     short loc_42DA55
0x42D9EA: push    10h; Size
0x42D9EC: call    FormHeapAlloc
0x42D9F1: mov     esi, eax
0x42D9F3: add     esp, 4
0x42D9F6: mov     [esp+130h+var_11C], esi
0x42D9FA: cmp     esi, ebp
0x42D9FC: mov     [esp+130h+var_4], 2
0x42DA07: jz      short loc_42DA42
0x42DA09: xor     ecx, ecx
0x42DA0B: mov     eax, 5
0x42DA10: mov     [esi+8], ax
0x42DA14: mov     edx, 4
0x42DA19: mul     edx
0x42DA1B: seto    cl
0x42DA1E: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVBSHash@@@@6B@; const NiTArray<BSHash *>::`vftable'
0x42DA24: mov     [esi+0Eh], di
0x42DA28: mov     [esi+0Ah], bp
0x42DA2C: mov     [esi+0Ch], bp
0x42DA30: neg     ecx
0x42DA32: or      ecx, eax
0x42DA34: push    ecx; Size
0x42DA35: call    FormHeapAlloc
0x42DA3A: add     esp, 4
0x42DA3D: mov     [esi+4], eax
0x42DA40: jmp     short loc_42DA44
0x42DA42: xor     esi, esi
0x42DA44: mov     [esp+130h+var_4], 0FFFFFFFFh
0x42DA4F: mov     ArchiveInvalidateFilenames, esi
0x42DA55: push    8; Size
0x42DA57: call    FormHeapAlloc
0x42DA5C: add     esp, 4
0x42DA5F: mov     [esp+130h+var_11C], eax
0x42DA63: cmp     eax, ebp
0x42DA65: mov     [esp+130h+var_4], 3
0x42DA70: jz      short loc_42DA81
0x42DA72: push    ebp; int
0x42DA73: lea     ecx, [esp+134h+Str]
0x42DA77: push    ecx; FullPath
0x42DA78: mov     ecx, eax
0x42DA7A: call    BSHash_constr
0x42DA7F: jmp     short loc_42DA83
0x42DA81: xor     eax, eax
0x42DA83: mov     ecx, ArchiveInvalidateFilenames
0x42DA89: movzx   esi, word ptr [ecx+0Ah]
0x42DA8D: movzx   edx, word ptr [ecx+8]
0x42DA91: cmp     esi, edx
0x42DA93: mov     [esp+130h+var_4], 0FFFFFFFFh
0x42DA9E: mov     [esp+130h+var_11C], eax
0x42DAA2: mov     edi, ecx
0x42DAA4: jb      short loc_42DAB2
0x42DAA6: movzx   eax, word ptr [ecx+0Eh]
0x42DAAA: add     eax, esi
0x42DAAC: push    eax
0x42DAAD: call    NiTArray_SetSize
0x42DAB2: lea     ecx, [esp+130h+var_11C]
0x42DAB6: push    ecx
0x42DAB7: push    esi
0x42DAB8: mov     ecx, edi
0x42DABA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x42DABF: mov     edx, [ebx]
0x42DAC1: mov     edx, [edx+28h]
0x42DAC4: push    0Dh
0x42DAC6: push    104h
0x42DACB: lea     eax, [esp+138h+Str]
0x42DACF: push    eax
0x42DAD0: mov     ecx, ebx
0x42DAD2: call    edx
0x42DAD4: test    eax, eax
0x42DAD6: jnz     loc_42D8D0
0x42DADC: mov     eax, [ebx]
0x42DADE: mov     edx, [eax]
0x42DAE0: push    1
0x42DAE2: mov     ecx, ebx
0x42DAE4: call    edx
0x42DAE6: mov     ecx, dword ptr [esp+130h+var_C]
0x42DAED: mov     large fs:0, ecx
0x42DAF4: pop     ecx
0x42DAF5: pop     edi
0x42DAF6: pop     esi
0x42DAF7: pop     ebp
0x42DAF8: pop     ebx
0x42DAF9: mov     ecx, [esp+11Ch+var_10]
0x42DB00: xor     ecx, esp
0x42DB02: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42DB07: add     esp, 11Ch
0x42DB0D: retn
