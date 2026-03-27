0x5889B0: push    esi
0x5889B1: mov     esi, ecx
0x5889B3: mov     ecx, [esi+8]
0x5889B6: mov     eax, [ecx+4]
0x5889B9: test    eax, eax
0x5889BB: push    edi
0x5889BC: mov     [esi+8], eax
0x5889BF: jz      short loc_5889C9
0x5889C1: mov     dword ptr [eax], 0
0x5889C7: jmp     short loc_5889D0
0x5889C9: mov     dword ptr [esi+4], 0
0x5889D0: mov     eax, [esi]
0x5889D2: mov     edi, [ecx+8]
0x5889D5: mov     edx, [eax+8]
0x5889D8: push    ecx
0x5889D9: mov     ecx, esi
0x5889DB: call    edx
0x5889DD: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x5889E1: mov     eax, edi
0x5889E3: pop     edi
0x5889E4: pop     esi
0x5889E5: retn
