0x5D3E10: push    esi
0x5D3E11: mov     esi, ecx
0x5D3E13: mov     eax, [esi]
0x5D3E15: mov     edx, [eax+34h]
0x5D3E18: push    edi
0x5D3E19: call    edx
0x5D3E1B: mov     edi, eax
0x5D3E1D: call    sub_578FE0
0x5D3E22: cmp     eax, edi
0x5D3E24: jnz     short loc_5D3E9C
0x5D3E26: cmp     [esp+8+arg_0], 0Bh
0x5D3E2B: jnz     short loc_5D3E9C
0x5D3E2D: push    1; arg1
0x5D3E2F: push    0; canCreate
0x5D3E31: call    InterfaceManager_GetSingleton
0x5D3E36: add     esp, 8
0x5D3E39: test    eax, eax
0x5D3E3B: jz      short loc_5D3E45
0x5D3E3D: mov     ecx, [eax+88h]
0x5D3E43: jmp     short loc_5D3E47
0x5D3E45: xor     ecx, ecx
0x5D3E47: test    ecx, ecx
0x5D3E49: mov     [esi+58h], ecx
0x5D3E4C: jz      short loc_5D3E95
0x5D3E4E: push    0FA8h
0x5D3E53: call    Tile_GetFloat
0x5D3E58: fcomp   qword ptr ds:0A6C730h
0x5D3E5E: fnstsw  ax
0x5D3E60: test    ah, 41h
0x5D3E63: jnz     short loc_5D3E95
0x5D3E65: mov     eax, ds:0B38CF8h
0x5D3E6A: mov     ecx, ds:0B38D00h
0x5D3E70: mov     edx, ds:0B38760h
0x5D3E76: push    0
0x5D3E78: push    eax
0x5D3E79: push    ecx
0x5D3E7A: push    1
0x5D3E7C: push    offset sub_5D3B70
0x5D3E81: push    edx
0x5D3E82: call    ShowUIMessageBox
0x5D3E87: add     esp, 18h
0x5D3E8A: pop     edi
0x5D3E8B: mov     byte ptr [esi+5Ch], 1
0x5D3E8F: mov     al, 1
0x5D3E91: pop     esi
0x5D3E92: retn    8
0x5D3E95: mov     dword ptr [esi+58h], 0
0x5D3E9C: pop     edi
0x5D3E9D: xor     al, al
0x5D3E9F: pop     esi
0x5D3EA0: retn    8
