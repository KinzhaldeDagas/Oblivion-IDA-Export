0x7825B0: mov     eax, [esp+Ext]
0x7825B4: mov     ecx, [esp+Filename]
0x7825B8: mov     edx, [esp+Dir]
0x7825BC: push    100h; FilenameSize
0x7825C1: push    eax; Filename
0x7825C2: mov     eax, [esp+8+Drive]
0x7825C6: push    104h; FilenameSize
0x7825CB: push    ecx; DirSize
0x7825CC: mov     ecx, [esp+10h+FullPath]
0x7825D0: push    104h; Dir
0x7825D5: push    edx; Dir
0x7825D6: push    3; DriveSize
0x7825D8: push    eax; Drive
0x7825D9: push    ecx; FullPath
0x7825DA: call    __splitpath_s
0x7825DF: add     esp, 24h
0x7825E2: mov     al, 1
0x7825E4: retn
