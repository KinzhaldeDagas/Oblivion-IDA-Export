0x61FEF0: push    esi
0x61FEF1: push    0
0x61FEF3: mov     esi, ecx
0x61FEF5: call    sub_6150E0
0x61FEFA: test    al, al
0x61FEFC: jnz     short loc_61FF3A
0x61FEFE: mov     ecx, esi
0x61FF00: mov     byte ptr [esi+17Fh], 1
0x61FF07: call    sub_61C6E0
0x61FF0C: test    al, al
0x61FF0E: jnz     short loc_61FF3A
0x61FF10: push    0Fh
0x61FF12: mov     ecx, esi
0x61FF14: call    sub_619920
0x61FF19: fld     dword ptr [esi+44h]
0x61FF1C: fstp    dword ptr [esi+0D4h]
0x61FF22: fld     dword ptr ds:0A46C30h
0x61FF28: fstp    dword ptr [esi+0D8h]
0x61FF2E: fld     dword ptr ds:0A30634h
0x61FF34: fstp    dword ptr [esi+0DCh]
0x61FF3A: pop     esi
0x61FF3B: retn
