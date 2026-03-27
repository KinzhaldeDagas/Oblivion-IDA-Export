0x42E8E0: push    ebp
0x42E8E1: mov     ebp, esp
0x42E8E3: and     esp, 0FFFFFFF8h
0x42E8E6: sub     esp, 1Ch
0x42E8E9: push    ebx
0x42E8EA: push    esi
0x42E8EB: push    edi
0x42E8EC: mov     edi, [ebp+Str1]
0x42E8EF: xor     esi, esi
0x42E8F1: cmp     byte ptr [edi], 5Ch ; '\'
0x42E8F4: mov     [esp+28h+var_1C], esi
0x42E8F8: mov     [esp+28h+var_18], esi
0x42E8FC: jnz     short loc_42E901
0x42E8FE: add     edi, 1
0x42E901: push    5; MaxCount
0x42E903: push    offset aData; "Data\\"
0x42E908: push    edi; Str1
0x42E909: call    _strncmp
0x42E90E: add     esp, 0Ch
0x42E911: test    eax, eax
0x42E913: jz      short loc_42E929
0x42E915: push    5; MaxCount
0x42E917: push    offset Str2; "data\\"
0x42E91C: push    edi; Str1
0x42E91D: call    _strncmp
0x42E922: add     esp, 0Ch
0x42E925: test    eax, eax
0x42E927: jnz     short loc_42E92C
0x42E929: add     edi, 5
0x42E92C: cmp     [ebp+arg_8], 0FFFFh
0x42E933: jnz     short loc_42E95B
0x42E935: mov     eax, edi
0x42E937: lea     edx, [eax+1]
0x42E93A: lea     ebx, [ebx+0]
0x42E940: mov     cl, [eax]
0x42E942: add     eax, 1
0x42E945: test    cl, cl
0x42E947: jnz     short loc_42E940
0x42E949: sub     eax, edx
0x42E94B: lea     eax, [eax+edi-3]
0x42E94F: push    eax
0x42E950: call    ArchiveManager_GetFileTypemask
0x42E955: add     esp, 4
0x42E958: mov     [ebp+arg_8], eax
0x42E95B: lea     ecx, [esp+28h+var_8]
0x42E95F: push    ecx; int
0x42E960: lea     edx, [esp+2Ch+var_10]
0x42E964: push    edx; int
0x42E965: push    edi; FullPath
0x42E966: call    HashFilePAth
0x42E96B: mov     ebx, ArchiveProvidedLastFile
0x42E971: add     esp, 0Ch
0x42E974: cmp     ebx, esi
0x42E976: mov     [esp+28h+var_14], ebx
0x42E97A: jz      short loc_42E9D4
0x42E97C: mov     ax, word ptr [ebp+arg_8]
0x42E980: test    [ebx+174h], ax
0x42E987: jz      short loc_42E9D4
0x42E989: push    edi
0x42E98A: lea     ecx, [esp+2Ch+var_1C]
0x42E98E: push    ecx
0x42E98F: lea     edx, [esp+30h+var_10]
0x42E993: push    edx
0x42E994: mov     ecx, ebx
0x42E996: call    Archive_ContainsFolder
0x42E99B: test    al, al
0x42E99D: jz      short loc_42E9D4
0x42E99F: push    esi
0x42E9A0: mov     esi, [esp+2Ch+var_1C]
0x42E9A4: push    edi
0x42E9A5: lea     eax, [esp+30h+var_18]
0x42E9A9: push    eax
0x42E9AA: lea     ecx, [esp+34h+var_8]
0x42E9AE: push    ecx
0x42E9AF: push    esi
0x42E9B0: mov     ecx, ebx
0x42E9B2: call    Archive_FolderContainFile
0x42E9B7: test    al, al
0x42E9B9: jz      short loc_42E9D4
0x42E9BB: mov     edx, [ebp+arg_4]
0x42E9BE: mov     eax, [esp+28h+var_18]
0x42E9C2: push    edi; ArgList
0x42E9C3: push    edx; int
0x42E9C4: push    eax; int
0x42E9C5: push    esi; int
0x42E9C6: mov     ecx, ebx; int
0x42E9C8: call    Archive_GetFileByIndices
0x42E9CD: pop     edi
0x42E9CE: pop     esi
0x42E9CF: pop     ebx
0x42E9D0: mov     esp, ebp
0x42E9D2: pop     ebp
0x42E9D3: retn
0x42E9D4: mov     ebx, ArchiveList
0x42E9DA: test    ebx, ebx
0x42E9DC: jz      short loc_42EA33
0x42E9DE: mov     edi, edi
0x42E9E0: mov     esi, [ebx]
0x42E9E2: test    esi, esi
0x42E9E4: jz      short loc_42EA2C
0x42E9E6: cmp     esi, [esp+28h+var_14]
0x42E9EA: jz      short loc_42EA2C
0x42E9EC: mov     cx, word ptr [ebp+arg_8]
0x42E9F0: test    [esi+174h], cx
0x42E9F7: jz      short loc_42EA2C
0x42E9F9: push    edi
0x42E9FA: lea     edx, [esp+2Ch+var_1C]
0x42E9FE: push    edx
0x42E9FF: lea     eax, [esp+30h+var_10]
0x42EA03: push    eax
0x42EA04: mov     ecx, esi
0x42EA06: call    Archive_ContainsFolder
0x42EA0B: test    al, al
0x42EA0D: jz      short loc_42EA2C
0x42EA0F: mov     eax, [esp+28h+var_1C]
0x42EA13: push    0
0x42EA15: push    edi
0x42EA16: lea     ecx, [esp+30h+var_18]
0x42EA1A: push    ecx
0x42EA1B: lea     edx, [esp+34h+var_8]
0x42EA1F: push    edx
0x42EA20: push    eax
0x42EA21: mov     ecx, esi
0x42EA23: call    Archive_FolderContainFile
0x42EA28: test    al, al
0x42EA2A: jnz     short loc_42EA3C
0x42EA2C: mov     ebx, [ebx+4]
0x42EA2F: test    ebx, ebx
0x42EA31: jnz     short loc_42E9E0
0x42EA33: xor     eax, eax
0x42EA35: pop     edi
0x42EA36: pop     esi
0x42EA37: pop     ebx
0x42EA38: mov     esp, ebp
0x42EA3A: pop     ebp
0x42EA3B: retn
0x42EA3C: mov     ecx, [ebp+arg_4]
0x42EA3F: mov     edx, [esp+28h+var_18]
0x42EA43: mov     eax, [esp+28h+var_1C]
0x42EA47: push    edi; ArgList
0x42EA48: push    ecx; int
0x42EA49: push    edx; int
0x42EA4A: push    eax; int
0x42EA4B: mov     ecx, esi; int
0x42EA4D: mov     ArchiveProvidedLastFile, esi
0x42EA53: call    Archive_GetFileByIndices
0x42EA58: pop     edi
0x42EA59: pop     esi
0x42EA5A: pop     ebx
0x42EA5B: mov     esp, ebp
0x42EA5D: pop     ebp
0x42EA5E: retn
