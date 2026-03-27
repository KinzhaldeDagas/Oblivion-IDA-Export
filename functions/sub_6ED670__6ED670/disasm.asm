0x6ED670: mov     eax, [esp+MaxCount]
0x6ED674: mov     ecx, [esp+Src]
0x6ED678: mov     edx, [esp+SizeInBytes]
0x6ED67C: push    esi; MaxCount
0x6ED67D: mov     esi, [esp+4+Dst]
0x6ED681: push    eax; Src
0x6ED682: push    ecx; Src
0x6ED683: push    edx; SizeInBytes
0x6ED684: push    esi; Dst
0x6ED685: call    _strncpy_s
0x6ED68A: add     esp, 10h
0x6ED68D: mov     eax, esi
0x6ED68F: pop     esi
0x6ED690: retn
