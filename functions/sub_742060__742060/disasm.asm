0x742060: push    esi
0x742061: mov     esi, [esp+4+a2]
0x742065: test    esi, esi
0x742067: push    edi
0x742068: mov     edi, ecx
0x74206A: jz      short loc_7420D9
0x74206C: cmp     dword ptr [esi+10h], 0
0x742070: jnz     short loc_742095
0x742072: cmp     dword ptr [esi+14h], 0
0x742076: jnz     short loc_742095
0x742078: cmp     dword ptr [esi+18h], 0
0x74207C: jnz     short loc_742095
0x74207E: cmp     dword ptr [esi+1Ch], 0
0x742082: jnz     short loc_742095
0x742084: push    esi; a2
0x742085: lea     ecx, [edi+0B0h]; this
0x74208B: call    NiSmartPointer_Set??
0x742090: pop     edi
0x742091: pop     esi
0x742092: retn    4
0x742095: push    20h ; ' '; Size
0x742097: call    FormHeapAlloc
0x74209C: add     esp, 4
0x74209F: test    eax, eax
0x7420A1: jz      short loc_7420AC
0x7420A3: mov     ecx, eax
0x7420A5: call    sub_709E60
0x7420AA: jmp     short loc_7420AE
0x7420AC: xor     eax, eax
0x7420AE: add     edi, 0B0h ; '°'
0x7420B4: push    eax; a2
0x7420B5: mov     ecx, edi; this
0x7420B7: call    NiSmartPointer_Set??
0x7420BC: mov     esi, [esi+0Ch]
0x7420BF: test    esi, esi
0x7420C1: jz      short loc_742109
0x7420C3: mov     eax, [esi+4]
0x7420C6: mov     ecx, [edi]
0x7420C8: mov     esi, [esi]
0x7420CA: push    eax
0x7420CB: call    sub_731CE0
0x7420D0: test    esi, esi
0x7420D2: jnz     short loc_7420C3
0x7420D4: pop     edi
0x7420D5: pop     esi
0x7420D6: retn    4
0x7420D9: mov     esi, [edi+0B0h]
0x7420DF: test    esi, esi
0x7420E1: jz      short loc_742109
0x7420E3: lea     eax, [esi+4]
0x7420E6: push    eax; lpAddend
0x7420E7: call    dword ptr ds:0A2807Ch
0x7420ED: test    eax, eax
0x7420EF: jnz     short loc_7420FF
0x7420F1: test    esi, esi
0x7420F3: jz      short loc_7420FF
0x7420F5: mov     edx, [esi]
0x7420F7: mov     eax, [edx]
0x7420F9: push    1
0x7420FB: mov     ecx, esi
0x7420FD: call    eax
0x7420FF: mov     dword ptr [edi+0B0h], 0
0x742109: pop     edi
0x74210A: pop     esi
0x74210B: retn    4
