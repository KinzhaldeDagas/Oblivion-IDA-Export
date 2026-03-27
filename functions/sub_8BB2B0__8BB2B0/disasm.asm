0x8BB2B0: push    esi
0x8BB2B1: mov     esi, ecx
0x8BB2B3: mov     eax, 1
0x8BB2B8: mov     [esi+6], ax
0x8BB2BC: mov     dword ptr [esi], offset off_A982A0
0x8BB2C2: mov     [esi+0Ch], al
0x8BB2C5: mov     eax, [esp+4+Filename]
0x8BB2C9: push    offset aWb; "wb"
0x8BB2CE: push    eax; Filename
0x8BB2CF: call    _fopen
0x8BB2D4: mov     [esi+8], eax
0x8BB2D7: add     esp, 8
0x8BB2DA: mov     eax, esi
0x8BB2DC: pop     esi
0x8BB2DD: retn    4
