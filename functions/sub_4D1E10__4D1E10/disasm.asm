0x4D1E10: push    ebx
0x4D1E11: xor     bl, bl
0x4D1E13: call    sub_4CE3C0
0x4D1E18: test    eax, eax
0x4D1E1A: jz      short loc_4D1E24
0x4D1E1C: pop     ebx
0x4D1E1D: mov     ecx, eax
0x4D1E1F: jmp     sub_4C5B50
0x4D1E24: fldz
0x4D1E26: mov     eax, [esp+4+arg_4]
0x4D1E2A: fstp    dword ptr [eax]
0x4D1E2C: mov     al, bl
0x4D1E2E: pop     ebx
0x4D1E2F: retn    8
