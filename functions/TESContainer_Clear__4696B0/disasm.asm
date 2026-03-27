0x4696B0: push    esi
0x4696B1: mov     esi, ecx
0x4696B3: mov     eax, [esi+8]
0x4696B6: test    eax, eax
0x4696B8: jz      short loc_4696EE
0x4696BA: push    eax
0x4696BB: call    FormHeapFree
0x4696C0: mov     eax, [esi+0Ch]
0x4696C3: add     esp, 4
0x4696C6: test    eax, eax
0x4696C8: jz      short loc_4696E0
0x4696CA: mov     ecx, [eax+4]
0x4696CD: mov     [esi+0Ch], ecx
0x4696D0: mov     edx, [eax]
0x4696D2: push    eax
0x4696D3: mov     [esi+8], edx
0x4696D6: call    FormHeapFree
0x4696DB: add     esp, 4
0x4696DE: jmp     short loc_4696E7
0x4696E0: mov     dword ptr [esi+8], 0
0x4696E7: mov     eax, [esi+8]
0x4696EA: test    eax, eax
0x4696EC: jnz     short loc_4696BA
0x4696EE: pop     esi
0x4696EF: retn
