0x4F99C0: push    esi
0x4F99C1: push    edi
0x4F99C2: lea     edi, [ecx+2Ch]
0x4F99C5: mov     esi, edi
0x4F99C7: test    esi, esi
0x4F99C9: jz      short loc_4F99ED
0x4F99CB: jmp     short loc_4F99D0
0x4F99CD: align 10h
0x4F99D0: cmp     dword ptr [esi+4], 0
0x4F99D4: jnz     short loc_4F99DB
0x4F99D6: cmp     dword ptr [esi], 0
0x4F99D9: jz      short loc_4F99ED
0x4F99DB: mov     eax, [esi]
0x4F99DD: push    eax
0x4F99DE: call    FormHeapFree
0x4F99E3: mov     esi, [esi+4]
0x4F99E6: add     esp, 4
0x4F99E9: test    esi, esi
0x4F99EB: jnz     short loc_4F99D0
0x4F99ED: cmp     dword ptr [edi+4], 0
0x4F99F1: jz      short loc_4F9A09
0x4F99F3: mov     eax, [edi+4]
0x4F99F6: mov     esi, [eax+4]
0x4F99F9: push    eax
0x4F99FA: call    FormHeapFree
0x4F99FF: add     esp, 4
0x4F9A02: test    esi, esi
0x4F9A04: mov     [edi+4], esi
0x4F9A07: jnz     short loc_4F99F3
0x4F9A09: mov     dword ptr [edi], 0
0x4F9A0F: pop     edi
0x4F9A10: pop     esi
0x4F9A11: retn
