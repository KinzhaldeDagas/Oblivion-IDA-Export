0x4E4ED0: push    esi
0x4E4ED1: mov     esi, ecx
0x4E4ED3: cmp     dword ptr [esi+2Ch], 0
0x4E4ED7: jnz     short loc_4E4EDF
0x4E4ED9: cmp     dword ptr [esi+28h], 0
0x4E4EDD: jz      short loc_4E4F11
0x4E4EDF: mov     eax, [esi+28h]
0x4E4EE2: push    eax
0x4E4EE3: call    FormHeapFree
0x4E4EE8: mov     eax, [esi+2Ch]
0x4E4EEB: add     esp, 4
0x4E4EEE: test    eax, eax
0x4E4EF0: jz      short loc_4E4F08
0x4E4EF2: mov     ecx, [eax+4]
0x4E4EF5: mov     [esi+2Ch], ecx
0x4E4EF8: mov     edx, [eax]
0x4E4EFA: push    eax
0x4E4EFB: mov     [esi+28h], edx
0x4E4EFE: call    FormHeapFree
0x4E4F03: add     esp, 4
0x4E4F06: jmp     short loc_4E4ED3
0x4E4F08: mov     dword ptr [esi+28h], 0
0x4E4F0F: jmp     short loc_4E4ED3
0x4E4F11: pop     esi
0x4E4F12: retn
