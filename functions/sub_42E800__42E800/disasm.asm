0x42E800: push    ebp
0x42E801: mov     ebp, esp
0x42E803: and     esp, 0FFFFFFF8h
0x42E806: sub     esp, 1Ch
0x42E809: cmp     ArchiveList, 0
0x42E810: push    ebx
0x42E811: push    esi
0x42E812: push    edi
0x42E813: jz      loc_42E8B2
0x42E819: mov     esi, [ebp+Str1]
0x42E81C: cmp     byte ptr [esi], 5Ch ; '\'
0x42E81F: jnz     short loc_42E824
0x42E821: add     esi, 1
0x42E824: push    5; MaxCount
0x42E826: push    offset aData; "Data\\"
0x42E82B: push    esi; Str1
0x42E82C: call    _strncmp
0x42E831: add     esp, 0Ch
0x42E834: test    eax, eax
0x42E836: jz      short loc_42E84C
0x42E838: push    5; MaxCount
0x42E83A: push    offset Str2; "data\\"
0x42E83F: push    esi; Str1
0x42E840: call    _strncmp
0x42E845: add     esp, 0Ch
0x42E848: test    eax, eax
0x42E84A: jnz     short loc_42E84F
0x42E84C: add     esi, 5
0x42E84F: lea     eax, [esp+28h+var_8]
0x42E853: push    eax; int
0x42E854: lea     ecx, [esp+2Ch+var_10]
0x42E858: push    ecx; int
0x42E859: push    esi; FullPath
0x42E85A: call    HashFilePAth
0x42E85F: mov     edi, ArchiveList
0x42E865: add     esp, 0Ch
0x42E868: test    edi, edi
0x42E86A: jz      short loc_42E8B2
0x42E86C: lea     esp, [esp+0]
0x42E870: mov     esi, [edi]
0x42E872: test    esi, esi
0x42E874: jz      short loc_42E8AB
0x42E876: push    0
0x42E878: lea     edx, [esp+2Ch+var_18]
0x42E87C: push    edx
0x42E87D: lea     eax, [esp+30h+var_10]
0x42E881: push    eax
0x42E882: mov     ecx, esi
0x42E884: call    Archive_ContainsFolder
0x42E889: test    al, al
0x42E88B: jz      short loc_42E8AB
0x42E88D: mov     ebx, [esp+28h+var_18]
0x42E891: push    0
0x42E893: push    0
0x42E895: lea     ecx, [esp+30h+var_14]
0x42E899: push    ecx
0x42E89A: lea     edx, [esp+34h+var_8]
0x42E89E: push    edx
0x42E89F: push    ebx
0x42E8A0: mov     ecx, esi
0x42E8A2: call    Archive_FolderContainFile
0x42E8A7: test    al, al
0x42E8A9: jnz     short loc_42E8BB
0x42E8AB: mov     edi, [edi+4]
0x42E8AE: test    edi, edi
0x42E8B0: jnz     short loc_42E870
0x42E8B2: xor     al, al
0x42E8B4: pop     edi
0x42E8B5: pop     esi
0x42E8B6: pop     ebx
0x42E8B7: mov     esp, ebp
0x42E8B9: pop     ebp
0x42E8BA: retn
0x42E8BB: mov     ecx, [esi+178h]
0x42E8C1: mov     eax, [esp+28h+var_14]
0x42E8C5: shl     ebx, 4
0x42E8C8: shl     eax, 4
0x42E8CB: add     eax, [ecx+ebx+0Ch]
0x42E8CF: pop     edi
0x42E8D0: and     dword ptr [eax+0Ch], 80000000h
0x42E8D7: pop     esi
0x42E8D8: mov     al, 1
0x42E8DA: pop     ebx
0x42E8DB: mov     esp, ebp
0x42E8DD: pop     ebp
0x42E8DE: retn
