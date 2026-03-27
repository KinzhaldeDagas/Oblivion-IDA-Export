0x8B9F00: push    esi
0x8B9F01: mov     esi, ecx
0x8B9F03: cmp     dword ptr [esi+0Ch], 0
0x8B9F07: jnz     short loc_8B9F46
0x8B9F09: push    edi
0x8B9F0A: push    70h ; 'p'; Size
0x8B9F0C: call    FormHeapAlloc
0x8B9F11: mov     edi, eax
0x8B9F13: add     esp, 4
0x8B9F16: test    edi, edi
0x8B9F18: jz      short loc_8B9F25
0x8B9F1A: mov     ecx, edi
0x8B9F1C: call    sub_890B00
0x8B9F21: mov     eax, edi
0x8B9F23: jmp     short loc_8B9F27
0x8B9F25: xor     eax, eax
0x8B9F27: mov     ecx, [esi+8]
0x8B9F2A: test    ecx, ecx
0x8B9F2C: mov     [esi+0Ch], eax
0x8B9F2F: pop     edi
0x8B9F30: jz      short loc_8B9F38
0x8B9F32: push    eax
0x8B9F33: call    sub_8AC0F0
0x8B9F38: mov     eax, [esp+4+arg_0]
0x8B9F3C: mov     byte ptr [eax], 1
0x8B9F3F: mov     eax, [esi+0Ch]
0x8B9F42: pop     esi
0x8B9F43: retn    4
0x8B9F46: mov     ecx, [esp+4+arg_0]
0x8B9F4A: mov     byte ptr [ecx], 0
0x8B9F4D: mov     eax, [esi+0Ch]
0x8B9F50: pop     esi
0x8B9F51: retn    4
