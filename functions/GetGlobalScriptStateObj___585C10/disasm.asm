0x585C10: push    0FFFFFFFFh
0x585C12: push    offset SEH_8C8900
0x585C17: mov     eax, large fs:0
0x585C1D: push    eax
0x585C1E: push    ecx
0x585C1F: mov     eax, ds:0B30AACh
0x585C24: xor     eax, esp
0x585C26: push    eax
0x585C27: lea     eax, [esp+14h+var_C]
0x585C2B: mov     large fs:0, eax
0x585C31: mov     eax, ds:0B3A6FCh
0x585C36: test    eax, eax
0x585C38: jnz     short loc_585C7E
0x585C3A: cmp     [esp+14h+arg_0], al
0x585C3E: jz      short loc_585C7E
0x585C40: push    34h ; '4'; Size
0x585C42: call    FormHeapAlloc
0x585C47: add     esp, 4
0x585C4A: mov     [esp+14h+var_10], eax
0x585C4E: test    eax, eax
0x585C50: mov     [esp+14h+var_4], 0
0x585C58: jz      short loc_585C63
0x585C5A: mov     ecx, eax
0x585C5C: call    sub_585B60
0x585C61: jmp     short loc_585C65
0x585C63: xor     eax, eax
0x585C65: mov     ecx, eax
0x585C67: mov     [esp+14h+var_4], 0FFFFFFFFh
0x585C6F: mov     ds:0B3A6FCh, eax
0x585C74: call    sub_585540
0x585C79: mov     eax, ds:0B3A6FCh
0x585C7E: mov     ecx, [esp+14h+var_C]
0x585C82: mov     large fs:0, ecx
0x585C89: pop     ecx
0x585C8A: add     esp, 10h
0x585C8D: retn
