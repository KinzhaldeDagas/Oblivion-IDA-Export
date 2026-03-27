0x4FB4E0: push    esi
0x4FB4E1: mov     esi, ecx
0x4FB4E3: call    sub_4FA020
0x4FB4E8: mov     ecx, esi
0x4FB4EA: call    sub_4FA080
0x4FB4EF: mov     esi, [esi+10h]
0x4FB4F2: test    esi, esi
0x4FB4F4: jz      short loc_4FB4FF
0x4FB4F6: push    esi
0x4FB4F7: call    FormHeapFree
0x4FB4FC: add     esp, 4
0x4FB4FF: pop     esi
0x4FB500: retn
