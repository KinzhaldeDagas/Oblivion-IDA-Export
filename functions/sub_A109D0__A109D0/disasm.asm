0xA109D0: push    edi
0xA109D1: xor     eax, eax
0xA109D3: mov     ecx, 100h
0xA109D8: mov     edi, offset dword_B42170
0xA109DD: push    offset sub_A26D60; void (__cdecl *)()
0xA109E2: rep stosd
0xA109E4: call    _atexit
0xA109E9: add     esp, 4
0xA109EC: pop     edi
0xA109ED: retn
