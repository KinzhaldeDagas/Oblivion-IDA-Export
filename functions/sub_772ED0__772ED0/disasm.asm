0x772ED0: push    ebp
0x772ED1: mov     ebp, ecx
0x772ED3: mov     eax, [ebp+0]
0x772ED6: test    eax, eax
0x772ED8: push    esi
0x772ED9: jz      short loc_772F0A
0x772EDB: mov     esi, [eax-4]
0x772EDE: push    ebx
0x772EDF: lea     ebx, [eax-4]
0x772EE2: lea     ecx, [esi+esi*4]
0x772EE5: sub     esi, 1
0x772EE8: push    edi
0x772EE9: lea     edi, [eax+ecx*4]
0x772EEC: js      short loc_772EFF
0x772EEE: mov     edi, edi
0x772EF0: sub     edi, 14h
0x772EF3: mov     ecx, edi
0x772EF5: call    sub_772BB0
0x772EFA: sub     esi, 1
0x772EFD: jns     short loc_772EF0
0x772EFF: push    ebx
0x772F00: call    FormHeapFree
0x772F05: add     esp, 4
0x772F08: pop     edi
0x772F09: pop     ebx
0x772F0A: mov     esi, [ebp+8]
0x772F0D: test    esi, esi
0x772F0F: jz      short loc_772F21
0x772F11: mov     ecx, esi
0x772F13: call    sub_772ED0
0x772F18: push    esi
0x772F19: call    FormHeapFree
0x772F1E: add     esp, 4
0x772F21: pop     esi
0x772F22: pop     ebp
0x772F23: retn
