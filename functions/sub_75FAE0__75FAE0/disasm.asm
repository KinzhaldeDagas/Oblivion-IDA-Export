0x75FAE0: push    esi
0x75FAE1: mov     esi, ecx
0x75FAE3: mov     ecx, [esi]
0x75FAE5: push    edi
0x75FAE6: mov     edi, [esp+8+arg_0]
0x75FAEA: cmp     ecx, [edi]
0x75FAEC: jz      short loc_75FB09
0x75FAEE: test    ecx, ecx
0x75FAF0: jz      short loc_75FAFD
0x75FAF2: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FAF6: jnz     short loc_75FAFD
0x75FAF8: call    sub_772560
0x75FAFD: mov     eax, [edi]
0x75FAFF: test    eax, eax
0x75FB01: mov     [esi], eax
0x75FB03: jz      short loc_75FB09
0x75FB05: add     dword ptr [eax+5Ch], 1
0x75FB09: pop     edi
0x75FB0A: mov     eax, esi
0x75FB0C: pop     esi
0x75FB0D: retn    4
