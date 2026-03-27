0x558570: push    ecx
0x558571: push    esi
0x558572: mov     esi, ecx
0x558574: mov     eax, [esi+4]
0x558577: test    eax, eax
0x558579: jz      short loc_558597
0x55857B: mov     ecx, [esp+8+var_4]
0x55857F: mov     edx, [esi+8]
0x558582: push    ecx
0x558583: push    esi
0x558584: push    edx
0x558585: push    eax
0x558586: call    sub_557430
0x55858B: mov     eax, [esi+4]
0x55858E: push    eax
0x55858F: call    FormHeapFree
0x558594: add     esp, 14h
0x558597: mov     dword ptr [esi+4], 0
0x55859E: mov     dword ptr [esi+8], 0
0x5585A5: mov     dword ptr [esi+0Ch], 0
0x5585AC: pop     esi
0x5585AD: pop     ecx
0x5585AE: retn
