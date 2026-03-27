0x659B30: push    ebx
0x659B31: push    esi
0x659B32: mov     esi, ecx
0x659B34: mov     eax, [esi]
0x659B36: mov     edx, [eax+154h]
0x659B3C: mov     bl, 1
0x659B3E: call    edx
0x659B40: test    eax, eax
0x659B42: jz      short loc_659B77
0x659B44: push    1; a2
0x659B46: mov     ecx, esi; this
0x659B48: call    TESObjectREFR_GetParentCell
0x659B4D: mov     ecx, ds:0B333A0h
0x659B53: push    eax; a1
0x659B54: call    TESObjectCELL_IsProcessLevel?LowHigh
0x659B59: test    al, al
0x659B5B: jz      short loc_659B77
0x659B5D: mov     ecx, [esi+58h]
0x659B60: mov     eax, [ecx]
0x659B62: mov     edx, [eax+8]
0x659B65: call    edx
0x659B67: test    eax, eax
0x659B69: mov     eax, [esi]
0x659B6B: mov     ecx, esi
0x659B6D: jz      short loc_659B7C
0x659B6F: mov     edx, [eax+1A4h]
0x659B75: call    edx
0x659B77: pop     esi
0x659B78: mov     al, bl
0x659B7A: pop     ebx
0x659B7B: retn
0x659B7C: mov     edx, [eax+10h]
0x659B7F: push    1
0x659B81: call    edx
0x659B83: pop     esi
0x659B84: xor     al, al
0x659B86: pop     ebx
0x659B87: retn
