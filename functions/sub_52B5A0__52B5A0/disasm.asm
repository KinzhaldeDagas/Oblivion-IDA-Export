0x52B5A0: push    esi
0x52B5A1: mov     esi, ecx
0x52B5A3: cmp     dword ptr [esi+90h], 0
0x52B5AA: jz      short loc_52B5CD
0x52B5AC: push    edi
0x52B5AD: lea     ecx, [ecx+0]
0x52B5B0: mov     eax, [esi+90h]
0x52B5B6: mov     edi, [eax+4]
0x52B5B9: push    eax
0x52B5BA: call    FormHeapFree
0x52B5BF: add     esp, 4
0x52B5C2: test    edi, edi
0x52B5C4: mov     [esi+90h], edi
0x52B5CA: jnz     short loc_52B5B0
0x52B5CC: pop     edi
0x52B5CD: mov     dword ptr [esi+8Ch], 0
0x52B5D7: pop     esi
0x52B5D8: retn
