0x4040E0: cmp     dword ptr [ecx+110h], 0
0x4040E7: push    ebx
0x4040E8: mov     ebx, [esp+4+arg_0]
0x4040EC: push    esi
0x4040ED: push    edi
0x4040EE: lea     edi, [ecx+10Ch]
0x4040F4: jnz     short loc_4040FB
0x4040F6: cmp     dword ptr [edi], 0
0x4040F9: jz      short loc_40411E
0x4040FB: mov     esi, edi
0x4040FD: test    esi, esi
0x4040FF: jz      short loc_40411E
0x404101: mov     eax, [ebx+4]
0x404104: mov     ecx, [esi]
0x404106: mov     ecx, [ecx+4]
0x404109: push    eax; Str2
0x40410A: push    ecx; Str1
0x40410B: call    __strcmp
0x404110: add     esp, 8
0x404113: test    eax, eax
0x404115: jz      short loc_40412C
0x404117: mov     esi, [esi+4]
0x40411A: test    esi, esi
0x40411C: jnz     short loc_404101
0x40411E: push    ebx
0x40411F: mov     ecx, edi
0x404121: call    BSSimpleList_PushFront
0x404126: pop     edi
0x404127: pop     esi
0x404128: pop     ebx
0x404129: retn    4
0x40412C: mov     edx, [ebx+4]
0x40412F: push    edx; ArgList
0x404130: push    offset aSettingKeySAlr; "Setting key '%s' already used in list."...
0x404135: call    PrintError
0x40413A: add     esp, 8
0x40413D: pop     edi
0x40413E: pop     esi
0x40413F: pop     ebx
0x404140: retn    4
