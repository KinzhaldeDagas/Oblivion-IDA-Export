0x577270: mov     ecx, ds:0B3A6BCh
0x577276: test    ecx, ecx
0x577278: jz      short locret_577296
0x57727A: push    esi
0x57727B: mov     esi, ecx
0x57727D: call    sub_576570
0x577282: push    esi
0x577283: call    FormHeapFree
0x577288: add     esp, 4
0x57728B: mov     dword ptr ds:0B3A6BCh, 0
0x577295: pop     esi
0x577296: retn
