0x772500: mov     eax, ds:0B4275Ch
0x772505: test    eax, eax
0x772507: push    edi
0x772508: mov     edi, eax
0x77250A: jz      short loc_772551
0x77250C: push    esi
0x77250D: mov     esi, [edi+14h]
0x772510: test    esi, esi
0x772512: mov     dword ptr [eax+8], 0
0x772519: jz      short loc_77253F
0x77251B: mov     ecx, [esi]
0x77251D: test    ecx, ecx
0x77251F: jz      short loc_772528
0x772521: push    3
0x772523: call    sub_7722B0
0x772528: mov     ecx, [esi+8]
0x77252B: test    ecx, ecx
0x77252D: jz      short loc_772536
0x77252F: push    1
0x772531: call    sub_772040
0x772536: push    esi
0x772537: call    FormHeapFree
0x77253C: add     esp, 4
0x77253F: mov     eax, [edi]
0x772541: push    eax
0x772542: call    FormHeapFree
0x772547: push    edi
0x772548: call    FormHeapFree
0x77254D: add     esp, 8
0x772550: pop     esi
0x772551: mov     dword ptr ds:0B4275Ch, 0
0x77255B: pop     edi
0x77255C: retn
