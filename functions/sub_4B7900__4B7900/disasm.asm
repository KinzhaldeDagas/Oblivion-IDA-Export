0x4B7900: push    esi
0x4B7901: mov     esi, ecx
0x4B7903: cmp     dword ptr [esi+6Ch], 0
0x4B7907: jz      short loc_4B7927
0x4B7909: push    edi
0x4B790A: lea     ebx, [ebx+0]
0x4B7910: mov     eax, [esi+6Ch]
0x4B7913: mov     edi, [eax+4]
0x4B7916: push    eax
0x4B7917: call    FormHeapFree
0x4B791C: add     esp, 4
0x4B791F: test    edi, edi
0x4B7921: mov     [esi+6Ch], edi
0x4B7924: jnz     short loc_4B7910
0x4B7926: pop     edi
0x4B7927: mov     dword ptr [esi+68h], 0
0x4B792E: pop     esi
0x4B792F: retn
