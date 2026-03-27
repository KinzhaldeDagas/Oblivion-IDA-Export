0x8B0020: push    ebx
0x8B0021: push    esi
0x8B0022: mov     esi, ecx
0x8B0024: mov     eax, [esi]
0x8B0026: mov     edx, [eax+58h]
0x8B0029: xor     bl, bl
0x8B002B: call    edx
0x8B002D: test    eax, eax
0x8B002F: jz      short loc_8B0039
0x8B0031: mov     eax, [eax+2B0h]
0x8B0037: jmp     short loc_8B003B
0x8B0039: xor     eax, eax
0x8B003B: test    eax, eax
0x8B003D: jz      short loc_8B004D
0x8B003F: mov     ecx, [esi+8]
0x8B0042: push    ecx
0x8B0043: mov     ecx, eax
0x8B0045: call    sub_88B430
0x8B004A: pop     esi
0x8B004B: pop     ebx
0x8B004C: retn
0x8B004D: pop     esi
0x8B004E: mov     al, bl
0x8B0050: pop     ebx
0x8B0051: retn
