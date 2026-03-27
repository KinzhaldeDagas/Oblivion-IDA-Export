0x544B00: push    esi
0x544B01: mov     esi, ecx
0x544B03: mov     ecx, [esi+14h]
0x544B06: push    4
0x544B08: call    NiNode_GetNiPropertyByID
0x544B0D: test    eax, eax
0x544B0F: jz      short loc_544B45
0x544B11: mov     ecx, [esi+14h]
0x544B14: push    4
0x544B16: call    NiNode_GetNiPropertyByID
0x544B1B: mov     edx, [eax]
0x544B1D: mov     ecx, eax
0x544B1F: mov     eax, [edx+54h]
0x544B22: call    eax
0x544B24: xor     ecx, ecx
0x544B26: cmp     eax, 0Bh
0x544B29: setz    cl
0x544B2C: mov     eax, ecx
0x544B2E: test    eax, eax
0x544B30: jz      short loc_544B45
0x544B32: mov     ecx, [esi+14h]
0x544B35: push    4
0x544B37: call    NiNode_GetNiPropertyByID
0x544B3C: test    eax, eax
0x544B3E: jz      short loc_544B45
0x544B40: fld     dword ptr [eax+78h]
0x544B43: pop     esi
0x544B44: retn
0x544B45: fldz
0x544B47: pop     esi
0x544B48: retn
