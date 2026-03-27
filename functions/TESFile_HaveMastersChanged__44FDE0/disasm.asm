0x44FDE0: sub     esp, 248h
0x44FDE6: mov     eax, ds:0B30AACh
0x44FDEB: xor     eax, esp
0x44FDED: mov     [esp+248h+var_4], eax
0x44FDF4: push    ebx
0x44FDF5: push    ebp
0x44FDF6: mov     eax, ecx
0x44FDF8: push    edi
0x44FDF9: lea     edi, [eax+3E0h]
0x44FDFF: xor     bl, bl
0x44FE01: test    edi, edi
0x44FE03: lea     ebp, [eax+3E8h]
0x44FE09: jz      short loc_44FE82
0x44FE0B: push    esi
0x44FE0C: lea     esp, [esp+0]
0x44FE10: cmp     dword ptr [edi], 0
0x44FE13: jz      short loc_44FE81
0x44FE15: test    ebp, ebp
0x44FE17: jz      short loc_44FE81
0x44FE19: cmp     dword ptr [ebp+0], 0
0x44FE1D: jz      short loc_44FE81
0x44FE1F: mov     eax, [edi]
0x44FE21: push    eax
0x44FE22: lea     ecx, [esp+25Ch+FileName]
0x44FE29: push    offset aS; "%s"
0x44FE2E: push    ecx
0x44FE2F: call    __sprintf
0x44FE34: mov     esi, [ebp+0]
0x44FE37: add     esp, 0Ch
0x44FE3A: lea     edx, [esp+258h+FindFileData]
0x44FE3E: push    edx; lpFindFileData
0x44FE3F: lea     eax, [esp+25Ch+FileName]
0x44FE46: push    eax; lpFileName
0x44FE47: call    dword ptr ds:0A2812Ch
0x44FE4D: cmp     eax, 0FFFFFFFFh
0x44FE50: jz      short loc_44FE6A
0x44FE52: push    eax; hFindFile
0x44FE53: call    dword ptr ds:0A28120h
0x44FE59: mov     ecx, [esp+258h+FindFileData.nFileSizeLow]
0x44FE5D: cmp     ecx, [esi]
0x44FE5F: jnz     short loc_44FE75
0x44FE61: mov     edx, [esp+258h+FindFileData.nFileSizeHigh]
0x44FE65: cmp     edx, [esi+4]
0x44FE68: jmp     short loc_44FE73
0x44FE6A: cmp     dword ptr [esi], 0
0x44FE6D: jnz     short loc_44FE75
0x44FE6F: cmp     dword ptr [esi+4], 0
0x44FE73: jz      short loc_44FE77
0x44FE75: mov     bl, 1
0x44FE77: mov     edi, [edi+4]
0x44FE7A: test    edi, edi
0x44FE7C: mov     ebp, [ebp+4]
0x44FE7F: jnz     short loc_44FE10
0x44FE81: pop     esi
0x44FE82: mov     ecx, [esp+254h+var_4]
0x44FE89: pop     edi
0x44FE8A: pop     ebp
0x44FE8B: mov     al, bl
0x44FE8D: pop     ebx
0x44FE8E: xor     ecx, esp
0x44FE90: call    @__security_check_cookie@4; __security_check_cookie(x)
0x44FE95: add     esp, 248h
0x44FE9B: retn
