0x75E0A0: push    esi
0x75E0A1: push    edi
0x75E0A2: mov     edi, ecx
0x75E0A4: mov     esi, [edi+14h]
0x75E0A7: test    esi, esi
0x75E0A9: mov     dword ptr [edi+8], 0
0x75E0B0: jz      short loc_75E0EB
0x75E0B2: mov     ecx, [esi]
0x75E0B4: test    ecx, ecx
0x75E0B6: jz      short loc_75E0D4
0x75E0B8: cmp     dword ptr [ecx-4], 0
0x75E0BC: lea     eax, [ecx-4]
0x75E0BF: jz      short loc_75E0CB
0x75E0C1: mov     eax, [ecx]
0x75E0C3: mov     edx, [eax]
0x75E0C5: push    3
0x75E0C7: call    edx
0x75E0C9: jmp     short loc_75E0D4
0x75E0CB: push    eax
0x75E0CC: call    FormHeapFree
0x75E0D1: add     esp, 4
0x75E0D4: mov     ecx, [esi+8]
0x75E0D7: test    ecx, ecx
0x75E0D9: jz      short loc_75E0E2
0x75E0DB: push    1
0x75E0DD: call    sub_56B680
0x75E0E2: push    esi
0x75E0E3: call    FormHeapFree
0x75E0E8: add     esp, 4
0x75E0EB: mov     eax, [edi]
0x75E0ED: push    eax
0x75E0EE: call    FormHeapFree
0x75E0F3: add     esp, 4
0x75E0F6: pop     edi
0x75E0F7: pop     esi
0x75E0F8: retn
