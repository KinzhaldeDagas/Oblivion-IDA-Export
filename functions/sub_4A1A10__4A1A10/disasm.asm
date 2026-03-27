0x4A1A10: sub     esp, 114h
0x4A1A16: mov     eax, ds:0B30AACh
0x4A1A1B: xor     eax, esp
0x4A1A1D: mov     [esp+114h+var_4], eax
0x4A1A24: mov     eax, [esp+114h+Str1]
0x4A1A2B: push    esi
0x4A1A2C: mov     esi, ecx
0x4A1A2E: lea     ecx, [esp+118h+FullPath]
0x4A1A32: push    ecx; int
0x4A1A33: push    eax; Str1
0x4A1A34: call    sub_47D8F0
0x4A1A39: lea     edx, [esp+120h+var_10C]
0x4A1A3D: push    edx; int
0x4A1A3E: lea     eax, [esp+124h+var_114]
0x4A1A42: push    eax; int
0x4A1A43: lea     ecx, [esp+128h+FullPath]
0x4A1A47: push    ecx; FullPath
0x4A1A48: call    HashFilePAth
0x4A1A4D: lea     edx, [esp+12Ch+FullPath]
0x4A1A51: push    edx
0x4A1A52: lea     eax, [esp+130h+var_10C]
0x4A1A56: push    eax
0x4A1A57: lea     ecx, [esp+134h+var_114]
0x4A1A5B: push    ecx
0x4A1A5C: push    1
0x4A1A5E: call    ArchiveManager_LazyFileLookup
0x4A1A63: add     esp, 24h
0x4A1A66: test    eax, eax
0x4A1A68: jz      short loc_4A1A8B
0x4A1A6A: mov     ecx, [esi+8]
0x4A1A6D: push    eax
0x4A1A6E: call    NiTMap_RemoveAt
0x4A1A73: pop     esi
0x4A1A74: mov     ecx, [esp+114h+var_4]
0x4A1A7B: xor     ecx, esp
0x4A1A7D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A1A82: add     esp, 114h
0x4A1A88: retn    4
0x4A1A8B: mov     ecx, [esi+0Ch]
0x4A1A8E: lea     edx, [esp+118h+FullPath]
0x4A1A92: push    edx
0x4A1A93: call    NiTMap_RemoveAt
0x4A1A98: mov     ecx, [esp+118h+var_4]
0x4A1A9F: pop     esi
0x4A1AA0: xor     ecx, esp
0x4A1AA2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A1AA7: add     esp, 114h
0x4A1AAD: retn    4
