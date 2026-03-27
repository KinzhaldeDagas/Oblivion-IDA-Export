0x42EBA0: mov     eax, [esp+arg_4]
0x42EBA4: mov     ecx, [esp+Str1]
0x42EBA8: push    eax; int
0x42EBA9: push    ecx; Str1
0x42EBAA: call    ArchiveManager_GetArchiveForFile
0x42EBAF: add     esp, 8
0x42EBB2: test    eax, eax
0x42EBB4: setnz   al
0x42EBB7: retn
