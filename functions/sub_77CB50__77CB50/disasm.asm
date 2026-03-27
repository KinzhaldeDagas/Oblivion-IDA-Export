0x77CB50: push    ecx
0x77CB51: mov     eax, ds:0B42898h
0x77CB56: test    eax, eax
0x77CB58: jnz     short loc_77CB5E
0x77CB5A: xor     al, al
0x77CB5C: pop     ecx
0x77CB5D: retn
0x77CB5E: push    ebx
0x77CB5F: mov     ebx, [esp+8+arg_0]
0x77CB63: push    esi
0x77CB64: lea     ecx, [esp+0Ch+var_4]
0x77CB68: push    ecx
0x77CB69: push    ebx
0x77CB6A: lea     ecx, [eax+24h]
0x77CB6D: call    NiTMap_GetAt
0x77CB72: test    al, al
0x77CB74: jz      short loc_77CB7E
0x77CB76: mov     esi, [esp+0Ch+var_4]
0x77CB7A: test    esi, esi
0x77CB7C: jnz     short loc_77CB84
0x77CB7E: pop     esi
0x77CB7F: xor     al, al
0x77CB81: pop     ebx
0x77CB82: pop     ecx
0x77CB83: retn
0x77CB84: cmp     dword ptr [esi+4], 1
0x77CB88: push    edi
0x77CB89: lea     edi, [esi+4]
0x77CB8C: jnz     short loc_77CB9D
0x77CB8E: mov     ecx, ds:0B42898h
0x77CB94: push    ebx
0x77CB95: add     ecx, 24h ; '$'
0x77CB98: call    NiTMap_RemoveAt
0x77CB9D: push    edi; lpAddend
0x77CB9E: call    dword ptr ds:0A2807Ch
0x77CBA4: test    eax, eax
0x77CBA6: pop     edi
0x77CBA7: jnz     short loc_77CBB3
0x77CBA9: mov     edx, [esi]
0x77CBAB: mov     eax, [edx]
0x77CBAD: push    1
0x77CBAF: mov     ecx, esi
0x77CBB1: call    eax
0x77CBB3: pop     esi
0x77CBB4: mov     al, 1
0x77CBB6: pop     ebx
0x77CBB7: pop     ecx
0x77CBB8: retn
