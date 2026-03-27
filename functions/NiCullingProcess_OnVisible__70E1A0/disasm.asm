0x70E1A0: push    esi; a3
0x70E1A1: mov     esi, [ecx+8]
0x70E1A4: test    esi, esi
0x70E1A6: jz      short loc_70E1DF
0x70E1A8: cmp     byte ptr [ecx+4], 0
0x70E1AC: jz      short loc_70E1B6
0x70E1AE: mov     eax, [ecx]
0x70E1B0: pop     esi
0x70E1B1: mov     eax, [eax+0Ch]
0x70E1B4: jmp     eax
0x70E1B6: mov     eax, [esi+8]
0x70E1B9: cmp     [esi+4], eax
0x70E1BC: jnz     short loc_70E1CB
0x70E1BE: mov     ecx, [esi+0Ch]
0x70E1C1: add     ecx, eax
0x70E1C3: push    ecx; a3
0x70E1C4: mov     ecx, esi; this
0x70E1C6: call    sub_732200
0x70E1CB: mov     edx, [esi+4]
0x70E1CE: mov     eax, [esi]
0x70E1D0: mov     ecx, [esp+4+a2]
0x70E1D4: mov     [eax+edx*4], ecx
0x70E1D7: add     dword ptr [esi+4], 1
0x70E1DB: pop     esi
0x70E1DC: retn    4
0x70E1DF: mov     edx, ds:0B3F928h
0x70E1E5: mov     ecx, [edx+8]
0x70E1E8: test    ecx, ecx
0x70E1EA: mov     esi, [esp+4+a2]
0x70E1EE: jz      short loc_70E1FC
0x70E1F0: mov     eax, [ecx]
0x70E1F2: mov     edx, [eax+58h]
0x70E1F5: push    esi
0x70E1F6: call    edx
0x70E1F8: test    al, al
0x70E1FA: jnz     short loc_70E20F
0x70E1FC: mov     ecx, ds:0B3F928h
0x70E202: mov     eax, [esi]
0x70E204: mov     edx, [eax+84h]
0x70E20A: push    ecx
0x70E20B: mov     ecx, esi
0x70E20D: call    edx
0x70E20F: pop     esi
0x70E210: retn    4
