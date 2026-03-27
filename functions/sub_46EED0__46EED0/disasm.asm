0x46EED0: test    [esp+arg_0], 8
0x46EED5: jz      short locret_46EF36
0x46EED7: push    esi
0x46EED8: lea     esi, [ecx+4]
0x46EEDB: test    esi, esi
0x46EEDD: jz      short loc_46EF35
0x46EEDF: push    edi
0x46EEE0: mov     edi, [esi]
0x46EEE2: test    edi, edi
0x46EEE4: jz      short loc_46EF2D
0x46EEE6: mov     eax, [edi]
0x46EEE8: push    eax; a1
0x46EEE9: call    TESForm_LookupByFormID
0x46EEEE: add     esp, 4
0x46EEF1: test    eax, eax
0x46EEF3: mov     [edi], eax
0x46EEF5: jnz     short loc_46EF2D
0x46EEF7: mov     eax, [esi+4]
0x46EEFA: test    eax, eax
0x46EEFC: jz      short loc_46EF1C
0x46EEFE: mov     ecx, [eax+4]
0x46EF01: mov     [esi+4], ecx
0x46EF04: mov     edx, [eax]
0x46EF06: push    eax
0x46EF07: mov     [esi], edx
0x46EF09: call    FormHeapFree
0x46EF0E: add     esp, 4
0x46EF11: push    edi
0x46EF12: call    FormHeapFree
0x46EF17: add     esp, 4
0x46EF1A: jmp     short loc_46EF30
0x46EF1C: push    edi
0x46EF1D: mov     dword ptr [esi], 0
0x46EF23: call    FormHeapFree
0x46EF28: add     esp, 4
0x46EF2B: jmp     short loc_46EF30
0x46EF2D: mov     esi, [esi+4]
0x46EF30: test    esi, esi
0x46EF32: jnz     short loc_46EEE0
0x46EF34: pop     edi
0x46EF35: pop     esi
0x46EF36: retn    8
