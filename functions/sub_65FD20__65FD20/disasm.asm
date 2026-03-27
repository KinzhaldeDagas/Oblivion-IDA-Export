0x65FD20: push    esi
0x65FD21: mov     esi, [esp+4+arg_0]
0x65FD25: test    esi, esi
0x65FD27: push    edi
0x65FD28: mov     edi, ecx
0x65FD2A: jz      short loc_65FD94
0x65FD2C: mov     eax, [esi]
0x65FD2E: mov     edx, [eax+170h]
0x65FD34: mov     ecx, esi
0x65FD36: call    edx
0x65FD38: cmp     eax, ds:0B35EBCh
0x65FD3E: jnz     short loc_65FD94
0x65FD40: mov     ecx, esi; this
0x65FD42: call    GetTeleportExtraData
0x65FD47: test    eax, eax
0x65FD49: jz      short loc_65FD94
0x65FD4B: mov     ecx, esi; this
0x65FD4D: call    TESObjectREFR_GetParentCell
0x65FD52: test    eax, eax
0x65FD54: jz      short loc_65FD7A
0x65FD56: mov     ecx, esi; this
0x65FD58: call    TESObjectREFR_GetParentCell
0x65FD5D: mov     ecx, eax; this
0x65FD5F: call    TESObjectCELL_IsInterior
0x65FD64: test    al, al
0x65FD66: jz      short loc_65FD7A
0x65FD68: mov     ecx, esi; this
0x65FD6A: call    TESObjectREFR_GetParentCell
0x65FD6F: mov     ecx, eax
0x65FD71: call    sub_4C9820
0x65FD76: test    al, al
0x65FD78: jz      short loc_65FD94
0x65FD7A: add     edi, 704h
0x65FD80: push    esi
0x65FD81: mov     ecx, edi
0x65FD83: call    sub_446C30
0x65FD88: test    al, al
0x65FD8A: jnz     short loc_65FD94
0x65FD8C: push    esi
0x65FD8D: mov     ecx, edi
0x65FD8F: call    BSSimpleList_PushFront
0x65FD94: pop     edi
0x65FD95: pop     esi
0x65FD96: retn    4
