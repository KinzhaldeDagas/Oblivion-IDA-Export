0x587B20: push    0FFFFFFFFh
0x587B22: push    offset SEH_6F8920
0x587B27: mov     eax, large fs:0
0x587B2D: push    eax
0x587B2E: push    esi
0x587B2F: mov     eax, ds:0B30AACh
0x587B34: xor     eax, esp
0x587B36: push    eax
0x587B37: lea     eax, [esp+14h+var_C]
0x587B3B: mov     large fs:0, eax
0x587B41: cmp     byte ptr [esp+14h+arg_0], 0
0x587B46: mov     eax, ds:0B3A708h
0x587B4B: jz      short loc_587B9C
0x587B4D: test    eax, eax
0x587B4F: jnz     short loc_587B9C
0x587B51: push    1; Size
0x587B53: call    FormHeapAlloc
0x587B58: mov     esi, eax
0x587B5A: add     esp, 4
0x587B5D: mov     [esp+14h+arg_0], esi
0x587B61: test    esi, esi
0x587B63: mov     [esp+14h+var_4], 0
0x587B6B: jz      short loc_587B7B
0x587B6D: push    33h ; '3'
0x587B6F: mov     ecx, offset Menu_OpenMenuArray
0x587B74: call    NiTArray_SetSize
0x587B79: jmp     short loc_587B7D
0x587B7B: xor     esi, esi
0x587B7D: push    33h ; '3'
0x587B7F: mov     ecx, offset Menu_OpenMenuArray
0x587B84: mov     [esp+18h+var_4], 0FFFFFFFFh
0x587B8C: mov     ds:0B3A708h, esi
0x587B92: call    NiTArray_SetSize
0x587B97: mov     eax, ds:0B3A708h
0x587B9C: mov     ecx, [esp+14h+var_C]
0x587BA0: mov     large fs:0, ecx
0x587BA7: pop     ecx
0x587BA8: pop     esi
0x587BA9: add     esp, 0Ch
0x587BAC: retn
