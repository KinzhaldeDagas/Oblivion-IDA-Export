0x982CEA: push    esi
0x982CEB: xor     esi, esi
0x982CED: cmp     [esp+4+lpFileName], esi
0x982CF1: jnz     short loc_982D17
0x982CF3: call    ___doserrno
0x982CF8: mov     [eax], esi
0x982CFA: call    __errno
0x982CFF: push    esi
0x982D00: push    esi
0x982D01: push    esi
0x982D02: push    esi
0x982D03: push    esi
0x982D04: mov     dword ptr [eax], 16h
0x982D0A: call    __invalid_parameter
0x982D0F: add     esp, 14h
0x982D12: push    16h
0x982D14: pop     eax
0x982D15: pop     esi
0x982D16: retn
0x982D17: test    [esp+4+arg_4], 0FFFFFFF9h
0x982D1F: jnz     short loc_982CF3
0x982D21: push    [esp+4+lpFileName]; lpFileName
0x982D25: call    dword ptr ds:0A281A8h
0x982D2B: cmp     eax, 0FFFFFFFFh
0x982D2E: jnz     short loc_982D46
0x982D30: call    dword ptr ds:0A281ECh
0x982D36: push    eax
0x982D37: call    __dosmaperr
0x982D3C: pop     ecx
0x982D3D: call    __errno
0x982D42: mov     eax, [eax]
0x982D44: pop     esi
0x982D45: retn
0x982D46: test    al, 10h
0x982D48: jnz     short loc_982D6D
0x982D4A: test    al, 1
0x982D4C: jz      short loc_982D6D
0x982D4E: test    byte ptr [esp+4+arg_4], 2
0x982D53: jz      short loc_982D6D
0x982D55: call    ___doserrno
0x982D5A: mov     dword ptr [eax], 5
0x982D60: call    __errno
0x982D65: mov     dword ptr [eax], 0Dh
0x982D6B: jmp     short loc_982D3D
0x982D6D: xor     eax, eax
0x982D6F: pop     esi
0x982D70: retn
