0x76D7F0: push    esi
0x76D7F1: mov     esi, ecx
0x76D7F3: mov     eax, [esi+0Ch]
0x76D7F6: test    eax, eax
0x76D7F8: jz      short loc_76D809
0x76D7FA: mov     ecx, [eax]
0x76D7FC: mov     edx, [ecx+8]
0x76D7FF: push    eax
0x76D800: call    edx
0x76D802: mov     dword ptr [esi+0Ch], 0
0x76D809: mov     eax, [esi+10h]
0x76D80C: push    eax
0x76D80D: call    FormHeapFree
0x76D812: add     esp, 4
0x76D815: mov     dword ptr [esi+10h], 0
0x76D81C: pop     esi
0x76D81D: retn
