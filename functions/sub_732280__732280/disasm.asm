0x732280: mov     eax, [esp+arg_8]
0x732284: push    ebx
0x732285: mov     ebx, [esp+4+arg_0]
0x732289: push    esi
0x73228A: add     eax, 3
0x73228D: push    edi
0x73228E: mov     edi, [esp+0Ch+arg_4]
0x732292: and     eax, 0FFFFFFFCh
0x732295: imul    edi, eax
0x732298: lea     eax, [ebx+ebx*2]
0x73229B: mov     esi, ecx
0x73229D: lea     ecx, [edi+eax*4+4]
0x7322A1: push    ecx; Size
0x7322A2: call    FormHeapAlloc
0x7322A7: mov     [esi+50h], eax
0x7322AA: add     eax, edi
0x7322AC: mov     [esi+54h], eax
0x7322AF: lea     eax, [eax+ebx*4]
0x7322B2: add     esp, 4
0x7322B5: lea     edx, [eax+ebx*4]
0x7322B8: pop     edi
0x7322B9: mov     [esi+58h], eax
0x7322BC: mov     [esi+5Ch], edx
0x7322BF: pop     esi
0x7322C0: pop     ebx
0x7322C1: retn    0Ch
