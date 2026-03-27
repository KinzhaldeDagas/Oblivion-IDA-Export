0x4A6A20: mov     eax, [esp+arg_0]
0x4A6A24: test    eax, eax
0x4A6A26: push    esi
0x4A6A27: mov     esi, ecx
0x4A6A29: jnz     short loc_4A6A50
0x4A6A2B: push    8; Size
0x4A6A2D: call    FormHeapAlloc
0x4A6A32: add     esp, 4
0x4A6A35: test    eax, eax
0x4A6A37: jz      short loc_4A6A4E
0x4A6A39: fldz
0x4A6A3B: fst     dword ptr [eax]
0x4A6A3D: fstp    dword ptr [eax+4]
0x4A6A40: fld     dword ptr [esi]
0x4A6A42: fstp    dword ptr [eax]
0x4A6A44: fld     dword ptr [esi+4]
0x4A6A47: fstp    dword ptr [eax+4]
0x4A6A4A: pop     esi
0x4A6A4B: retn    4
0x4A6A4E: xor     eax, eax
0x4A6A50: fld     dword ptr [esi]
0x4A6A52: fstp    dword ptr [eax]
0x4A6A54: fld     dword ptr [esi+4]
0x4A6A57: pop     esi
0x4A6A58: fstp    dword ptr [eax+4]
0x4A6A5B: retn    4
