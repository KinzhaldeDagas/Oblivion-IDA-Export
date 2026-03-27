0x440F20: push    esi
0x440F21: push    edi
0x440F22: lea     edi, [ecx+8Ch]
0x440F28: mov     esi, edi
0x440F2A: test    esi, esi
0x440F2C: jz      short loc_440F46
0x440F2E: mov     edi, edi
0x440F30: mov     eax, [esi]
0x440F32: test    eax, eax
0x440F34: jz      short loc_440F46
0x440F36: push    eax
0x440F37: call    FormHeapFree
0x440F3C: mov     esi, [esi+4]
0x440F3F: add     esp, 4
0x440F42: test    esi, esi
0x440F44: jnz     short loc_440F30
0x440F46: cmp     dword ptr [edi+4], 0
0x440F4A: jz      short loc_440F66
0x440F4C: lea     esp, [esp+0]
0x440F50: mov     eax, [edi+4]
0x440F53: mov     esi, [eax+4]
0x440F56: push    eax
0x440F57: call    FormHeapFree
0x440F5C: add     esp, 4
0x440F5F: test    esi, esi
0x440F61: mov     [edi+4], esi
0x440F64: jnz     short loc_440F50
0x440F66: mov     dword ptr [edi], 0
0x440F6C: pop     edi
0x440F6D: pop     esi
0x440F6E: retn
