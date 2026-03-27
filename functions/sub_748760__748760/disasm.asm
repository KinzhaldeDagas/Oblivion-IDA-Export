0x748760: push    esi
0x748761: mov     esi, ecx
0x748763: push    100h; FilenameSize
0x748768: lea     eax, [esi+103h]
0x74876E: push    eax; Filename
0x74876F: mov     eax, [esp+0Ch+FullPath]
0x748773: push    100h; FilenameSize
0x748778: lea     ecx, [esi+203h]
0x74877E: push    ecx; DirSize
0x74877F: push    100h; Dir
0x748784: push    esi; Dir
0x748785: push    3; DriveSize
0x748787: lea     edx, [esi+100h]
0x74878D: push    edx; Drive
0x74878E: push    eax; FullPath
0x74878F: mov     byte ptr [esi+303h], 0
0x748796: call    __splitpath_s
0x74879B: add     esp, 24h
0x74879E: mov     eax, esi
0x7487A0: pop     esi
0x7487A1: retn    4
