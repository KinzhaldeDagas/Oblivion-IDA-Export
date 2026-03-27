0x6A9CD0: sub     esp, 108h
0x6A9CD6: mov     eax, ds:0B30AACh
0x6A9CDB: xor     eax, esp
0x6A9CDD: mov     [esp+108h+var_4], eax
0x6A9CE4: push    ebp
0x6A9CE5: mov     ebp, [esp+10Ch+Str]
0x6A9CEC: lea     edx, [esp+10Ch+Str1]
0x6A9CF0: mov     eax, ebp
0x6A9CF2: sub     edx, ebp
0x6A9CF4: mov     cl, [eax]
0x6A9CF6: mov     [edx+eax], cl
0x6A9CF9: add     eax, 1
0x6A9CFC: test    cl, cl
0x6A9CFE: jnz     short loc_6A9CF4
0x6A9D00: lea     eax, [esp+10Ch+Str1]
0x6A9D04: add     eax, 0FFFFFFFFh
0x6A9D07: mov     cl, [eax+1]
0x6A9D0A: add     eax, 1
0x6A9D0D: test    cl, cl
0x6A9D0F: jnz     short loc_6A9D07
0x6A9D11: cmp     byte ptr ds:0B04460h, 0
0x6A9D18: mov     ecx, ds:0A5215Ch
0x6A9D1E: mov     dx, ds:0A52160h
0x6A9D25: mov     [eax], ecx
0x6A9D27: mov     [eax+4], dx
0x6A9D2B: jnz     short loc_6A9D55
0x6A9D2D: push    8; int
0x6A9D2F: lea     eax, [esp+110h+Str1]
0x6A9D33: push    ebp; Str
0x6A9D34: push    eax; Str1
0x6A9D35: call    ArchiveManager_GetRandomFilenameForDirectory
0x6A9D3A: add     esp, 0Ch
0x6A9D3D: pop     ebp
0x6A9D3E: mov     ecx, [esp+108h+var_4]
0x6A9D45: xor     ecx, esp
0x6A9D47: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A9D4C: add     esp, 108h
0x6A9D52: retn    4
0x6A9D55: push    ebx
0x6A9D56: push    esi
0x6A9D57: push    0; int
0x6A9D59: push    8; int
0x6A9D5B: lea     ecx, [esp+11Ch+Str1]
0x6A9D5F: push    ebp; char *
0x6A9D60: push    ecx; Str
0x6A9D61: call    sub_431970
0x6A9D66: mov     ebx, eax
0x6A9D68: add     esp, 10h
0x6A9D6B: test    ebx, ebx
0x6A9D6D: jz      short loc_6A9DE1
0x6A9D6F: xor     esi, esi
0x6A9D71: cmp     dword ptr [eax], 0
0x6A9D74: jz      short loc_6A9D79
0x6A9D76: add     esi, 1
0x6A9D79: mov     eax, [eax+4]
0x6A9D7C: test    eax, eax
0x6A9D7E: jnz     short loc_6A9D71
0x6A9D80: test    esi, esi
0x6A9D82: jz      short loc_6A9DD8
0x6A9D84: push    edi
0x6A9D85: push    eax; Seed
0x6A9D86: call    GetRandomLargeInteger?
0x6A9D8B: xor     edx, edx
0x6A9D8D: add     esp, 4
0x6A9D90: div     esi
0x6A9D92: mov     esi, ebx
0x6A9D94: mov     edi, edx
0x6A9D96: test    edi, edi
0x6A9D98: jnz     short loc_6A9DAE
0x6A9D9A: mov     ecx, [esi]
0x6A9D9C: mov     edx, ebp
0x6A9D9E: mov     edi, edi
0x6A9DA0: mov     al, [ecx]
0x6A9DA2: mov     [edx], al
0x6A9DA4: add     ecx, 1
0x6A9DA7: add     edx, 1
0x6A9DAA: test    al, al
0x6A9DAC: jnz     short loc_6A9DA0
0x6A9DAE: mov     edx, [esi]
0x6A9DB0: push    edx
0x6A9DB1: sub     edi, 1
0x6A9DB4: call    FormHeapFree
0x6A9DB9: mov     esi, [esi+4]
0x6A9DBC: add     esp, 4
0x6A9DBF: test    esi, esi
0x6A9DC1: jnz     short loc_6A9D96
0x6A9DC3: mov     ecx, ebx
0x6A9DC5: call    BSSimpleList_Clear
0x6A9DCA: push    ebx
0x6A9DCB: call    FormHeapFree
0x6A9DD0: add     esp, 4
0x6A9DD3: mov     al, 1
0x6A9DD5: pop     edi
0x6A9DD6: jmp     short loc_6A9DE3
0x6A9DD8: push    ebx
0x6A9DD9: call    FormHeapFree
0x6A9DDE: add     esp, 4
0x6A9DE1: xor     al, al
0x6A9DE3: mov     ecx, [esp+114h+var_4]
0x6A9DEA: pop     esi
0x6A9DEB: pop     ebx
0x6A9DEC: pop     ebp
0x6A9DED: xor     ecx, esp
0x6A9DEF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A9DF4: add     esp, 108h
0x6A9DFA: retn    4
