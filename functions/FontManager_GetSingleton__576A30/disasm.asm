0x576A30: push    0FFFFFFFFh
0x576A32: push    offset SEH_8C8900
0x576A37: mov     eax, large fs:0
0x576A3D: push    eax
0x576A3E: push    ecx
0x576A3F: mov     eax, ds:0B30AACh
0x576A44: xor     eax, esp
0x576A46: push    eax
0x576A47: lea     eax, [esp+14h+var_C]
0x576A4B: mov     large fs:0, eax
0x576A51: mov     eax, ds:0B3A6BCh
0x576A56: test    eax, eax
0x576A58: jnz     short loc_576A97
0x576A5A: push    18h; Size
0x576A5C: call    FormHeapAlloc
0x576A61: add     esp, 4
0x576A64: mov     [esp+14h+var_10], eax
0x576A68: test    eax, eax
0x576A6A: mov     [esp+14h+var_4], 0
0x576A72: jz      short loc_576A90
0x576A74: mov     ecx, eax
0x576A76: call    sub_576420
0x576A7B: mov     ds:0B3A6BCh, eax
0x576A80: mov     ecx, [esp+14h+var_C]
0x576A84: mov     large fs:0, ecx
0x576A8B: pop     ecx
0x576A8C: add     esp, 10h
0x576A8F: retn
0x576A90: xor     eax, eax
0x576A92: mov     ds:0B3A6BCh, eax
0x576A97: mov     ecx, [esp+14h+var_C]
0x576A9B: mov     large fs:0, ecx
0x576AA2: pop     ecx
0x576AA3: add     esp, 10h
0x576AA6: retn
