0x5BCDD0: push    ebx
0x5BCDD1: mov     ebx, [esp+4+arg_0]
0x5BCDD5: cmp     ebx, 2
0x5BCDD8: push    edi
0x5BCDD9: mov     edi, ecx
0x5BCDDB: jnz     short loc_5BCDE7
0x5BCDDD: call    sub_5BCCB0
0x5BCDE2: pop     edi
0x5BCDE3: pop     ebx
0x5BCDE4: retn    8
0x5BCDE7: cmp     ebx, 4
0x5BCDEA: jl      short loc_5BCE2D
0x5BCDEC: push    esi
0x5BCDED: push    1; int
0x5BCDEF: call    sub_57DE50
0x5BCDF4: push    1; arg1
0x5BCDF6: xor     esi, esi
0x5BCDF8: push    esi; canCreate
0x5BCDF9: call    InterfaceManager_GetSingleton
0x5BCDFE: mov     [eax+98h], esi
0x5BCE04: mov     [eax+9Ch], esi
0x5BCE0A: mov     [eax+0A0h], esi
0x5BCE10: mov     [eax+0A4h], esi
0x5BCE16: mov     cl, [edi+60h]
0x5BCE19: add     cl, bl
0x5BCE1B: sub     cl, 4
0x5BCE1E: add     esp, 0Ch
0x5BCE21: mov     [eax+0B0h], cl
0x5BCE27: call    sub_5BC6B0
0x5BCE2C: pop     esi
0x5BCE2D: pop     edi
0x5BCE2E: pop     ebx
0x5BCE2F: retn    8
