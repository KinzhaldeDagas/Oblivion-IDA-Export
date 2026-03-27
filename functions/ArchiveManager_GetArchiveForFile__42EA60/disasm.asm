0x42EA60: push    ebp
0x42EA61: mov     ebp, esp
0x42EA63: and     esp, 0FFFFFFF8h
0x42EA66: sub     esp, 1Ch
0x42EA69: cmp     ArchiveList, 0
0x42EA70: push    ebx
0x42EA71: push    esi
0x42EA72: push    edi
0x42EA73: jz      loc_42EB86
0x42EA79: mov     edi, [ebp+Str1]
0x42EA7C: cmp     byte ptr [edi], 5Ch ; '\'
0x42EA7F: jnz     short loc_42EA84
0x42EA81: add     edi, 1
0x42EA84: push    5; MaxCount
0x42EA86: push    offset aData; "Data\\"
0x42EA8B: push    edi; Str1
0x42EA8C: call    _strncmp
0x42EA91: add     esp, 0Ch
0x42EA94: test    eax, eax
0x42EA96: jz      short loc_42EAAC
0x42EA98: push    5; MaxCount
0x42EA9A: push    offset Str2; "data\\"
0x42EA9F: push    edi; Str1
0x42EAA0: call    _strncmp
0x42EAA5: add     esp, 0Ch
0x42EAA8: test    eax, eax
0x42EAAA: jnz     short loc_42EAAF
0x42EAAC: add     edi, 5
0x42EAAF: cmp     [ebp+arg_4], 0FFFFh
0x42EAB6: jnz     short loc_42EADB
0x42EAB8: mov     eax, edi
0x42EABA: lea     edx, [eax+1]
0x42EABD: lea     ecx, [ecx+0]
0x42EAC0: mov     cl, [eax]
0x42EAC2: add     eax, 1
0x42EAC5: test    cl, cl
0x42EAC7: jnz     short loc_42EAC0
0x42EAC9: sub     eax, edx
0x42EACB: lea     eax, [eax+edi-3]
0x42EACF: push    eax
0x42EAD0: call    ArchiveManager_GetFileTypemask
0x42EAD5: add     esp, 4
0x42EAD8: mov     [ebp+arg_4], eax
0x42EADB: lea     ecx, [esp+28h+var_8]
0x42EADF: push    ecx; int
0x42EAE0: lea     edx, [esp+2Ch+var_10]
0x42EAE4: push    edx; int
0x42EAE5: push    edi; FullPath
0x42EAE6: call    HashFilePAth
0x42EAEB: mov     esi, ArchiveProvidedLastFile
0x42EAF1: add     esp, 0Ch
0x42EAF4: test    esi, esi
0x42EAF6: mov     [esp+28h+var_18], esi
0x42EAFA: jz      short loc_42EB29
0x42EAFC: mov     ax, word ptr [ebp+arg_4]
0x42EB00: test    [esi+174h], ax
0x42EB07: jz      short loc_42EB29
0x42EB09: push    edi
0x42EB0A: lea     ecx, [esp+2Ch+var_14]
0x42EB0E: push    ecx
0x42EB0F: lea     edx, [esp+30h+var_1C]
0x42EB13: push    edx
0x42EB14: lea     eax, [esp+34h+var_8]
0x42EB18: push    eax
0x42EB19: lea     ecx, [esp+38h+var_10]
0x42EB1D: push    ecx
0x42EB1E: mov     ecx, esi
0x42EB20: call    Archive_ContainsFile
0x42EB25: test    al, al
0x42EB27: jnz     short loc_42EB95
0x42EB29: mov     ebx, ArchiveList
0x42EB2F: test    ebx, ebx
0x42EB31: jz      short loc_42EB86
0x42EB33: mov     esi, [ebx]
0x42EB35: test    esi, esi
0x42EB37: jz      short loc_42EB7F
0x42EB39: cmp     esi, [esp+28h+var_18]
0x42EB3D: jz      short loc_42EB7F
0x42EB3F: mov     dx, word ptr [ebp+arg_4]
0x42EB43: test    [esi+174h], dx
0x42EB4A: jz      short loc_42EB7F
0x42EB4C: push    edi
0x42EB4D: lea     eax, [esp+2Ch+var_1C]
0x42EB51: push    eax
0x42EB52: lea     ecx, [esp+30h+var_10]
0x42EB56: push    ecx
0x42EB57: mov     ecx, esi
0x42EB59: call    Archive_ContainsFolder
0x42EB5E: test    al, al
0x42EB60: jz      short loc_42EB7F
0x42EB62: mov     ecx, [esp+28h+var_1C]
0x42EB66: push    0
0x42EB68: push    edi
0x42EB69: lea     edx, [esp+30h+var_14]
0x42EB6D: push    edx
0x42EB6E: lea     eax, [esp+34h+var_8]
0x42EB72: push    eax
0x42EB73: push    ecx
0x42EB74: mov     ecx, esi
0x42EB76: call    Archive_FolderContainFile
0x42EB7B: test    al, al
0x42EB7D: jnz     short loc_42EB8F
0x42EB7F: mov     ebx, [ebx+4]
0x42EB82: test    ebx, ebx
0x42EB84: jnz     short loc_42EB33
0x42EB86: xor     eax, eax
0x42EB88: pop     edi
0x42EB89: pop     esi
0x42EB8A: pop     ebx
0x42EB8B: mov     esp, ebp
0x42EB8D: pop     ebp
0x42EB8E: retn
0x42EB8F: mov     ArchiveProvidedLastFile, esi
0x42EB95: pop     edi
0x42EB96: mov     eax, esi
0x42EB98: pop     esi
0x42EB99: pop     ebx
0x42EB9A: mov     esp, ebp
0x42EB9C: pop     ebp
0x42EB9D: retn
