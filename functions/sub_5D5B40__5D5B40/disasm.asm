0x5D5B40: mov     eax, [esp+arg_0]
0x5D5B44: cmp     eax, 0FFFFFFFFh
0x5D5B47: push    ebx
0x5D5B48: push    esi
0x5D5B49: push    edi
0x5D5B4A: mov     esi, ecx
0x5D5B4C: jnz     short loc_5D5B51
0x5D5B4E: mov     eax, [esi+40h]
0x5D5B51: mov     ecx, [esi+3Ch]
0x5D5B54: test    ecx, ecx
0x5D5B56: jnz     short loc_5D5BD0
0x5D5B58: cmp     eax, 0FFFFFFFFh
0x5D5B5B: jnz     short loc_5D5B85
0x5D5B5D: mov     ecx, [esi+28h]
0x5D5B60: test    ecx, ecx
0x5D5B62: jz      short loc_5D5B85
0x5D5B64: mov     edx, [ecx+34h]
0x5D5B67: cmp     dword ptr [edx+8], 0
0x5D5B6B: jz      short loc_5D5B85
0x5D5B6D: mov     eax, [ecx+38h]
0x5D5B70: mov     ecx, [eax+8]
0x5D5B73: add     eax, 8
0x5D5B76: push    0FB0h
0x5D5B7B: call    Tile_GetFloat
0x5D5B80: call    Double_To_SInt32
0x5D5B85: push    eax
0x5D5B86: push    2
0x5D5B88: call    ActorValue_GetGroupOffsetFromAV
0x5D5B8D: mov     ecx, ds:0B33A98h
0x5D5B93: add     esp, 8
0x5D5B96: push    eax
0x5D5B97: call    TESDataHandler_GetTESSkillByCode
0x5D5B9C: mov     edi, eax
0x5D5B9E: test    edi, edi
0x5D5BA0: jz      loc_5D5D39
0x5D5BA6: mov     eax, [edi+18h]
0x5D5BA9: mov     edx, [eax+10h]
0x5D5BAC: mov     ebx, [esi+4]
0x5D5BAF: lea     ecx, [edi+18h]
0x5D5BB2: push    43534544h
0x5D5BB7: push    0
0x5D5BB9: call    edx
0x5D5BBB: push    eax
0x5D5BBC: push    0FAFh
0x5D5BC1: mov     ecx, ebx
0x5D5BC3: call    Tile_SetString
0x5D5BC8: mov     edi, [edi+24h]
0x5D5BCB: jmp     loc_5D5D22
0x5D5BD0: cmp     ecx, 1
0x5D5BD3: jnz     short loc_5D5C3E
0x5D5BD5: cmp     eax, 0FFFFFFFFh
0x5D5BD8: mov     edi, eax
0x5D5BDA: jnz     short loc_5D5C06
0x5D5BDC: mov     eax, [esi+28h]
0x5D5BDF: test    eax, eax
0x5D5BE1: jz      short loc_5D5C06
0x5D5BE3: mov     ecx, [eax+34h]
0x5D5BE6: cmp     dword ptr [ecx+8], 0
0x5D5BEA: jz      short loc_5D5C06
0x5D5BEC: mov     eax, [eax+38h]
0x5D5BEF: mov     ecx, [eax+8]
0x5D5BF2: add     eax, 8
0x5D5BF5: push    0FB0h
0x5D5BFA: call    Tile_GetFloat
0x5D5BFF: call    Double_To_SInt32
0x5D5C04: mov     edi, eax
0x5D5C06: mov     ebx, [esi+4]
0x5D5C09: push    edi
0x5D5C0A: call    ActorValue_GetDescription
0x5D5C0F: add     esp, 4
0x5D5C12: push    eax
0x5D5C13: push    0FAFh
0x5D5C18: mov     ecx, ebx
0x5D5C1A: call    Tile_SetString
0x5D5C1F: mov     esi, [esi+4]
0x5D5C22: push    edi
0x5D5C23: call    ActorValue_GetIcon
0x5D5C28: add     esp, 4
0x5D5C2B: push    eax
0x5D5C2C: mov     ecx, esi
0x5D5C2E: push    0FB0h
0x5D5C33: call    Tile_SetString
0x5D5C38: pop     edi
0x5D5C39: pop     esi
0x5D5C3A: pop     ebx
0x5D5C3B: retn    4
0x5D5C3E: cmp     ecx, 2
0x5D5C41: jnz     loc_5D5CE6
0x5D5C47: test    eax, eax
0x5D5C49: jz      short loc_5D5CB9
0x5D5C4B: cmp     eax, 0FFFFFFFFh
0x5D5C4E: jz      short loc_5D5CB9
0x5D5C50: cmp     eax, 1
0x5D5C53: jnz     short loc_5D5C82
0x5D5C55: mov     edx, ds:0B385F8h
0x5D5C5B: mov     ecx, [esi+4]
0x5D5C5E: push    edx
0x5D5C5F: push    0FAFh
0x5D5C64: call    Tile_SetString
0x5D5C69: mov     eax, ds:0B38610h
0x5D5C6E: mov     ecx, [esi+4]
0x5D5C71: push    eax
0x5D5C72: push    0FB0h
0x5D5C77: call    Tile_SetString
0x5D5C7C: pop     edi
0x5D5C7D: pop     esi
0x5D5C7E: pop     ebx
0x5D5C7F: retn    4
0x5D5C82: cmp     eax, 2
0x5D5C85: jnz     loc_5D5D39
0x5D5C8B: mov     ecx, ds:0B38600h
0x5D5C91: push    ecx
0x5D5C92: mov     ecx, [esi+4]
0x5D5C95: push    0FAFh
0x5D5C9A: call    Tile_SetString
0x5D5C9F: mov     edx, ds:0B38618h
0x5D5CA5: mov     ecx, [esi+4]
0x5D5CA8: push    edx
0x5D5CA9: push    0FB0h
0x5D5CAE: call    Tile_SetString
0x5D5CB3: pop     edi
0x5D5CB4: pop     esi
0x5D5CB5: pop     ebx
0x5D5CB6: retn    4
0x5D5CB9: mov     eax, ds:0B385F0h
0x5D5CBE: mov     ecx, [esi+4]
0x5D5CC1: push    eax
0x5D5CC2: push    0FAFh
0x5D5CC7: call    Tile_SetString
0x5D5CCC: mov     ecx, ds:0B38608h
0x5D5CD2: push    ecx
0x5D5CD3: mov     ecx, [esi+4]
0x5D5CD6: push    0FB0h
0x5D5CDB: call    Tile_SetString
0x5D5CE0: pop     edi
0x5D5CE1: pop     esi
0x5D5CE2: pop     ebx
0x5D5CE3: retn    4
0x5D5CE6: cmp     ecx, 3
0x5D5CE9: jnz     short loc_5D5D39
0x5D5CEB: mov     ecx, ds:0B33A98h
0x5D5CF1: push    eax
0x5D5CF2: call    sub_447350
0x5D5CF7: mov     edi, eax
0x5D5CF9: test    edi, edi
0x5D5CFB: jz      short loc_5D5D39
0x5D5CFD: mov     edx, [edi+30h]
0x5D5D00: mov     eax, [edx+10h]
0x5D5D03: mov     ebx, [esi+4]
0x5D5D06: lea     ecx, [edi+30h]
0x5D5D09: push    43534544h
0x5D5D0E: push    0
0x5D5D10: call    eax
0x5D5D12: push    eax
0x5D5D13: push    0FAFh
0x5D5D18: mov     ecx, ebx
0x5D5D1A: call    Tile_SetString
0x5D5D1F: mov     edi, [edi+28h]
0x5D5D22: test    edi, edi
0x5D5D24: jnz     short loc_5D5D2B
0x5D5D26: mov     edi, offset EmptyString
0x5D5D2B: mov     ecx, [esi+4]
0x5D5D2E: push    edi
0x5D5D2F: push    0FB0h
0x5D5D34: call    Tile_SetString
0x5D5D39: pop     edi
0x5D5D3A: pop     esi
0x5D5D3B: pop     ebx
0x5D5D3C: retn    4
