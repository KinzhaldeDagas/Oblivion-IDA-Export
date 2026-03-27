0x434900: mov     eax, [esp+Src]
0x434904: mov     ecx, [esp+SizeInBytes]
0x434908: push    esi; Src
0x434909: mov     esi, [esp+4+Dst]
0x43490D: push    eax; Src
0x43490E: push    ecx; SizeInBytes
0x43490F: push    esi; Dst
0x434910: call    _strcpy_s
0x434915: add     esp, 0Ch
0x434918: mov     eax, esi
0x43491A: pop     esi
0x43491B: retn
