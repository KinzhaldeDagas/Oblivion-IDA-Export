0x61FE90: push    esi
0x61FE91: push    0
0x61FE93: mov     esi, ecx
0x61FE95: call    sub_6150E0
0x61FE9A: test    al, al
0x61FE9C: jnz     short loc_61FEE2
0x61FE9E: mov     ecx, esi
0x61FEA0: mov     byte ptr [esi+17Eh], 1
0x61FEA7: call    sub_61C6E0
0x61FEAC: test    al, al
0x61FEAE: jnz     short loc_61FEE2
0x61FEB0: fld     dword ptr [esi+44h]
0x61FEB3: push    0Ah
0x61FEB5: fstp    dword ptr [esi+0D4h]
0x61FEBB: mov     ecx, esi
0x61FEBD: fld     dword ptr ds:0A46C30h
0x61FEC3: fstp    dword ptr [esi+0D8h]
0x61FEC9: fld     dword ptr ds:0A30634h
0x61FECF: fstp    dword ptr [esi+0DCh]
0x61FED5: call    sub_619920
0x61FEDA: mov     ecx, esi
0x61FEDC: pop     esi
0x61FEDD: jmp     sub_6160B0
0x61FEE2: pop     esi
0x61FEE3: retn
