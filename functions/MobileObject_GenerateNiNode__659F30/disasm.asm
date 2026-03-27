0x659F30: push    esi; int
0x659F31: push    edi; int
0x659F32: mov     esi, ecx
0x659F34: call    TESObjectREFR_GenerateNiNode
0x659F39: mov     edi, eax
0x659F3B: test    edi, edi
0x659F3D: jz      short loc_659F63
0x659F3F: cmp     dword ptr [esi+58h], 0
0x659F43: jz      short loc_659F63
0x659F45: push    offset off_A7D2CC
0x659F4A: mov     ecx, edi
0x659F4C: call    NiObjectNET_GetExtraData
0x659F51: test    eax, eax
0x659F53: jz      short loc_659F63
0x659F55: mov     ecx, [esi+58h]
0x659F58: mov     edx, [ecx]
0x659F5A: push    eax
0x659F5B: mov     eax, [edx+470h]
0x659F61: call    eax
0x659F63: mov     edx, [esi]
0x659F65: mov     eax, [edx+190h]
0x659F6B: mov     ecx, esi
0x659F6D: call    eax
0x659F6F: test    al, al
0x659F71: jz      short loc_659F85
0x659F73: push    edi
0x659F74: push    0
0x659F76: call    GetShadowSceneNode
0x659F7B: add     esp, 4
0x659F7E: mov     ecx, eax
0x659F80: call    ShadowSceneNodeAddShadowCaster
0x659F85: mov     eax, edi
0x659F87: pop     edi
0x659F88: pop     esi
0x659F89: retn
