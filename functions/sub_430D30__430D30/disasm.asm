0x430D30: cmp     dword ptr [ecx+4], 0
0x430D34: jz      short loc_430D3B
0x430D36: xor     al, al
0x430D38: retn    8
0x430D3B: push    esi
0x430D3C: mov     esi, [esp+4+arg_0]
0x430D40: lea     eax, [ecx+8]
0x430D43: sub     esi, eax
0x430D45: mov     dl, [eax]
0x430D47: mov     [esi+eax], dl
0x430D4A: add     eax, 1
0x430D4D: test    dl, dl
0x430D4F: jnz     short loc_430D45
0x430D51: add     dword ptr [ecx+4], 1
0x430D55: mov     al, 1
0x430D57: pop     esi
0x430D58: retn    8
