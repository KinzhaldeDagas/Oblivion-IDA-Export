0x4A1D80: push    0FFFFFFFFh
0x4A1D82: push    offset SEH_4A1D80
0x4A1D87: mov     eax, large fs:0
0x4A1D8D: push    eax
0x4A1D8E: sub     esp, 118h
0x4A1D94: mov     eax, ds:0B30AACh
0x4A1D99: xor     eax, esp
0x4A1D9B: mov     [esp+124h+var_10], eax
0x4A1DA2: push    esi
0x4A1DA3: push    edi
0x4A1DA4: mov     eax, ds:0B30AACh
0x4A1DA9: xor     eax, esp
0x4A1DAB: push    eax
0x4A1DAC: lea     eax, [esp+130h+var_C]
0x4A1DB3: mov     large fs:0, eax
0x4A1DB9: mov     eax, [esp+130h+Str1]
0x4A1DC0: mov     edi, ecx
0x4A1DC2: mov     [esp+130h+var_124], 0
0x4A1DCA: lea     ecx, [esp+130h+FullPath]
0x4A1DCE: push    ecx; int
0x4A1DCF: push    eax; Str1
0x4A1DD0: mov     [esp+138h+var_4], 0
0x4A1DDB: call    sub_47D8F0
0x4A1DE0: lea     edx, [esp+138h+var_120]
0x4A1DE4: push    edx; int
0x4A1DE5: lea     eax, [esp+13Ch+var_118]
0x4A1DE9: push    eax; int
0x4A1DEA: lea     ecx, [esp+140h+FullPath]
0x4A1DEE: push    ecx; FullPath
0x4A1DEF: call    HashFilePAth
0x4A1DF4: lea     edx, [esp+144h+FullPath]
0x4A1DF8: push    edx
0x4A1DF9: lea     eax, [esp+148h+var_120]
0x4A1DFD: push    eax
0x4A1DFE: lea     ecx, [esp+14Ch+var_118]
0x4A1E02: push    ecx
0x4A1E03: push    1
0x4A1E05: call    ArchiveManager_LazyFileLookup
0x4A1E0A: add     esp, 24h
0x4A1E0D: push    offset CriticalSection; lpCriticalSection
0x4A1E12: mov     esi, eax
0x4A1E14: call    dword ptr ds:0A2806Ch
0x4A1E1A: call    dword ptr ds:0A2808Ch
0x4A1E20: add     dword ptr ds:0B353FCh, 1
0x4A1E27: test    esi, esi
0x4A1E29: mov     ds:0B353F8h, eax
0x4A1E2E: jz      short loc_4A1E40
0x4A1E30: mov     ecx, [edi+8]
0x4A1E33: lea     edx, [esp+130h+var_124]
0x4A1E37: push    edx
0x4A1E38: push    esi
0x4A1E39: call    sub_4A1AB0
0x4A1E3E: jmp     short loc_4A1E52
0x4A1E40: lea     eax, [esp+130h+var_124]
0x4A1E44: push    eax
0x4A1E45: lea     ecx, [esp+134h+FullPath]
0x4A1E49: push    ecx
0x4A1E4A: mov     ecx, [edi+0Ch]
0x4A1E4D: call    sub_4A1AB0
0x4A1E52: sub     dword ptr ds:0B353FCh, 1
0x4A1E59: jnz     short loc_4A1E65
0x4A1E5B: mov     dword ptr ds:0B353F8h, 0
0x4A1E65: push    offset CriticalSection; lpCriticalSection
0x4A1E6A: call    dword ptr ds:0A28074h
0x4A1E70: mov     esi, [esp+130h+var_124]
0x4A1E74: test    esi, esi
0x4A1E76: mov     [esp+130h+var_4], 0FFFFFFFFh
0x4A1E81: jz      short loc_4A1E9B
0x4A1E83: lea     edx, [esi+4]
0x4A1E86: push    edx; lpAddend
0x4A1E87: call    dword ptr ds:0A2807Ch
0x4A1E8D: test    eax, eax
0x4A1E8F: jnz     short loc_4A1E9B
0x4A1E91: mov     eax, [esi]
0x4A1E93: mov     edx, [eax]
0x4A1E95: push    1
0x4A1E97: mov     ecx, esi
0x4A1E99: call    edx
0x4A1E9B: mov     eax, esi
0x4A1E9D: mov     ecx, dword ptr [esp+130h+var_C]
0x4A1EA4: mov     large fs:0, ecx
0x4A1EAB: pop     ecx
0x4A1EAC: pop     edi
0x4A1EAD: pop     esi
0x4A1EAE: mov     ecx, [esp+124h+var_10]
0x4A1EB5: xor     ecx, esp
0x4A1EB7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A1EBC: add     esp, 124h
0x4A1EC2: retn    8
