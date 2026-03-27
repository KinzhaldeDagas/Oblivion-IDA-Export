0x645AF0: push    ebx
0x645AF1: mov     ebx, [esp+4+arg_4]
0x645AF5: test    ebx, ebx
0x645AF7: jz      loc_645BAE
0x645AFD: mov     eax, [ebx]
0x645AFF: mov     edx, [eax+198h]
0x645B05: push    0
0x645B07: mov     ecx, ebx
0x645B09: call    edx
0x645B0B: test    al, al
0x645B0D: jnz     loc_645BAE
0x645B13: push    esi
0x645B14: mov     esi, [esp+8+arg_0]
0x645B18: test    esi, esi
0x645B1A: jz      loc_645BA9
0x645B20: mov     eax, [esi]
0x645B22: mov     edx, [eax+170h]
0x645B28: mov     ecx, esi
0x645B2A: call    edx
0x645B2C: cmp     byte ptr [eax+4], 18h
0x645B30: jnz     short loc_645BA9
0x645B32: push    edi
0x645B33: mov     ecx, esi; this
0x645B35: mov     byte ptr [esp+0Ch+arg_4], 0
0x645B3A: call    GetTeleportExtraData
0x645B3F: mov     edi, eax
0x645B41: test    edi, edi
0x645B43: jz      short loc_645B72
0x645B45: mov     ecx, edi
0x645B47: call    sub_42B470
0x645B4C: test    eax, eax
0x645B4E: jnz     short loc_645B6D
0x645B50: mov     ecx, ebx; this
0x645B52: call    TESObjectREFR_GetParentCell
0x645B57: test    eax, eax
0x645B59: jz      short loc_645B6D
0x645B5B: mov     ecx, ebx; this
0x645B5D: call    TESObjectREFR_GetParentCell
0x645B62: mov     ecx, eax; this
0x645B64: call    TESObjectCELL_IsInterior
0x645B69: test    al, al
0x645B6B: jnz     short loc_645B72
0x645B6D: mov     byte ptr [esp+0Ch+arg_4], 1
0x645B72: mov     eax, [esp+0Ch+arg_4]
0x645B76: push    eax
0x645B77: push    ebx
0x645B78: mov     ecx, esi
0x645B7A: call    TESOBjectREFR_IsOwnedBy
0x645B7F: test    al, al
0x645B81: jz      short loc_645BA3
0x645B83: mov     ecx, esi
0x645B85: call    sub_4D7740
0x645B8A: test    eax, eax
0x645B8C: jz      short loc_645BA3
0x645B8E: mov     ecx, esi
0x645B90: call    sub_4DBEA0
0x645B95: test    edi, edi
0x645B97: jz      short loc_645BA3
0x645B99: push    1
0x645B9B: push    esi
0x645B9C: mov     ecx, edi
0x645B9E: call    sub_42B5F0
0x645BA3: pop     edi
0x645BA4: pop     esi
0x645BA5: xor     al, al
0x645BA7: pop     ebx
0x645BA8: retn
0x645BA9: pop     esi
0x645BAA: xor     al, al
0x645BAC: pop     ebx
0x645BAD: retn
0x645BAE: xor     al, al
0x645BB0: pop     ebx
0x645BB1: retn
