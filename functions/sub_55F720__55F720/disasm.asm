0x55F720: mov     ecx, ds:0B39E04h
0x55F726: test    ecx, ecx
0x55F728: jz      short locret_55F746
0x55F72A: push    esi
0x55F72B: mov     esi, ecx
0x55F72D: call    sub_55F550
0x55F732: push    esi
0x55F733: call    FormHeapFree
0x55F738: add     esp, 4
0x55F73B: mov     dword ptr ds:0B39E04h, 0
0x55F745: pop     esi
0x55F746: retn
