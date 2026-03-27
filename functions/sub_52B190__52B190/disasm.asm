0x52B190: push    esi
0x52B191: lea     esi, [ecx+4]
0x52B194: test    esi, esi
0x52B196: jz      short loc_52B1E6
0x52B198: push    edi
0x52B199: lea     esp, [esp+0]
0x52B1A0: mov     ecx, esi
0x52B1A2: call    BSSimpleList_IsEmpty
0x52B1A7: test    al, al
0x52B1A9: jnz     short loc_52B1E5
0x52B1AB: mov     edi, [esi]
0x52B1AD: test    edi, edi
0x52B1AF: jz      short loc_52B1C1
0x52B1B1: mov     ecx, edi
0x52B1B3: call    sub_52AD40
0x52B1B8: push    edi
0x52B1B9: call    FormHeapFree
0x52B1BE: add     esp, 4
0x52B1C1: mov     eax, [esi+4]
0x52B1C4: test    eax, eax
0x52B1C6: jz      short loc_52B1DD
0x52B1C8: mov     ecx, [eax+4]
0x52B1CB: mov     [esi+4], ecx
0x52B1CE: mov     edx, [eax]
0x52B1D0: push    eax
0x52B1D1: mov     [esi], edx
0x52B1D3: call    FormHeapFree
0x52B1D8: add     esp, 4
0x52B1DB: jmp     short loc_52B1A0
0x52B1DD: mov     dword ptr [esi], 0
0x52B1E3: jmp     short loc_52B1A0
0x52B1E5: pop     edi
0x52B1E6: pop     esi
0x52B1E7: retn
