0x6E5BF0: push    0FFFFFFFFh
0x6E5BF2: push    offset SEH_8C8900
0x6E5BF7: mov     eax, large fs:0
0x6E5BFD: push    eax
0x6E5BFE: push    ecx
0x6E5BFF: mov     eax, ds:0B30AACh
0x6E5C04: xor     eax, esp
0x6E5C06: push    eax
0x6E5C07: lea     eax, [esp+14h+var_C]
0x6E5C0B: mov     large fs:0, eax
0x6E5C11: push    60h ; '`'; Size
0x6E5C13: call    FormHeapAlloc
0x6E5C18: add     esp, 4
0x6E5C1B: mov     [esp+14h+var_10], eax
0x6E5C1F: test    eax, eax
0x6E5C21: mov     [esp+14h+var_4], 0
0x6E5C29: jz      short loc_6E5C55
0x6E5C2B: push    0; int
0x6E5C2D: push    0FFFFh; int
0x6E5C32: push    0FFFFh; int
0x6E5C37: push    0FFFFh; int
0x6E5C3C: push    0; int
0x6E5C3E: mov     ecx, eax; this
0x6E5C40: call    sub_6E5920
0x6E5C45: mov     ecx, [esp+14h+var_C]
0x6E5C49: mov     large fs:0, ecx
0x6E5C50: pop     ecx
0x6E5C51: add     esp, 10h
0x6E5C54: retn
0x6E5C55: xor     eax, eax
0x6E5C57: mov     ecx, [esp+14h+var_C]
0x6E5C5B: mov     large fs:0, ecx
0x6E5C62: pop     ecx
0x6E5C63: add     esp, 10h
0x6E5C66: retn
