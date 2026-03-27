0x6B3500: push    esi
0x6B3501: mov     esi, ecx
0x6B3503: push    edi
0x6B3504: mov     edi, [esi+4]
0x6B3507: test    edi, edi
0x6B3509: jz      short loc_6B3522
0x6B350B: mov     ecx, edi
0x6B350D: call    sub_6AF6D0
0x6B3512: push    edi
0x6B3513: call    FormHeapFree
0x6B3518: add     esp, 4
0x6B351B: mov     dword ptr [esi+4], 0
0x6B3522: mov     eax, [esi+8]
0x6B3525: test    eax, eax
0x6B3527: jz      short loc_6B3539
0x6B3529: push    eax
0x6B352A: call    FormHeapFree
0x6B352F: add     esp, 4
0x6B3532: mov     dword ptr [esi+8], 0
0x6B3539: mov     edi, [esi+0Ch]
0x6B353C: test    edi, edi
0x6B353E: jz      short loc_6B3557
0x6B3540: mov     ecx, edi
0x6B3542: call    sub_732A20
0x6B3547: push    edi
0x6B3548: call    FormHeapFree
0x6B354D: add     esp, 4
0x6B3550: mov     dword ptr [esi+0Ch], 0
0x6B3557: pop     edi
0x6B3558: pop     esi
0x6B3559: retn
