0x4EBD00: sub     esp, 0Ch
0x4EBD03: push    ebx
0x4EBD04: mov     ebx, ecx
0x4EBD06: mov     edx, [ebx+4]
0x4EBD09: xor     eax, eax
0x4EBD0B: test    edx, edx
0x4EBD0D: push    esi
0x4EBD0E: jbe     short loc_4EBD24
0x4EBD10: mov     esi, [ebx+8]
0x4EBD13: mov     ecx, esi
0x4EBD15: cmp     dword ptr [ecx], 0
0x4EBD18: jnz     short loc_4EBD8F
0x4EBD1A: add     eax, 1
0x4EBD1D: add     ecx, 4
0x4EBD20: cmp     eax, edx
0x4EBD22: jb      short loc_4EBD15
0x4EBD24: xor     eax, eax
0x4EBD26: test    eax, eax
0x4EBD28: mov     [esp+14h+var_8], eax
0x4EBD2C: jz      short loc_4EBD83
0x4EBD2E: push    edi
0x4EBD2F: nop
0x4EBD30: lea     eax, [esp+18h+var_C]
0x4EBD34: push    eax
0x4EBD35: lea     ecx, [esp+1Ch+var_4]
0x4EBD39: push    ecx
0x4EBD3A: lea     edx, [esp+20h+var_8]
0x4EBD3E: push    edx
0x4EBD3F: mov     ecx, ebx
0x4EBD41: mov     [esp+24h+var_C], 0
0x4EBD49: call    sub_452600
0x4EBD4E: mov     esi, [esp+18h+var_C]
0x4EBD52: test    esi, esi
0x4EBD54: jz      short loc_4EBD7B
0x4EBD56: mov     edi, [esi]
0x4EBD58: test    edi, edi
0x4EBD5A: jz      short loc_4EBD6C
0x4EBD5C: mov     ecx, edi
0x4EBD5E: call    sub_4EC740
0x4EBD63: push    edi
0x4EBD64: call    FormHeapFree
0x4EBD69: add     esp, 4
0x4EBD6C: push    esi
0x4EBD6D: mov     dword ptr [esi], 0
0x4EBD73: call    FormHeapFree
0x4EBD78: add     esp, 4
0x4EBD7B: cmp     [esp+18h+var_8], 0
0x4EBD80: jnz     short loc_4EBD30
0x4EBD82: pop     edi
0x4EBD83: pop     esi
0x4EBD84: mov     ecx, ebx
0x4EBD86: pop     ebx
0x4EBD87: add     esp, 0Ch
0x4EBD8A: jmp     NiTMap_Clear
0x4EBD8F: mov     eax, [esi+eax*4]
0x4EBD92: jmp     short loc_4EBD26
