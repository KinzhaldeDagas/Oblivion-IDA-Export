0x8FCF20: push    esi
0x8FCF21: mov     esi, ecx
0x8FCF23: xor     eax, eax
0x8FCF25: mov     ax, [esi+0Ch]
0x8FCF29: cmp     ax, 0FFFFh
0x8FCF2D: jz      short loc_8FCF3E
0x8FCF2F: mov     ecx, [esi+8]
0x8FCF32: mov     edx, [ecx]
0x8FCF34: push    eax
0x8FCF35: call    dword ptr [edx+10h]
0x8FCF38: mov     word ptr [esi+0Ch], 0FFFFh
0x8FCF3E: mov     eax, [esi]
0x8FCF40: push    1
0x8FCF42: mov     ecx, esi
0x8FCF44: call    dword ptr [eax]
0x8FCF46: pop     esi
0x8FCF47: retn
