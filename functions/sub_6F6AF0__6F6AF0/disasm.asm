0x6F6AF0: push    ebx
0x6F6AF1: push    ebp
0x6F6AF2: mov     ebp, [esp+8+arg_0]
0x6F6AF6: push    esi
0x6F6AF7: push    edi; MaxCount
0x6F6AF8: mov     edi, [esp+10h+arg_4]
0x6F6AFC: cmp     [ebp+14h], edi
0x6F6AFF: mov     esi, ecx
0x6F6B01: jnb     short loc_6F6B08
0x6F6B03: call    ?_Xran@_String_base@std@@SAXXZ; std::_String_base::_Xran(void)
0x6F6B08: mov     eax, [ebp+14h]
0x6F6B0B: mov     ebx, [esp+10h+MaxCount]
0x6F6B0F: sub     eax, edi
0x6F6B11: cmp     eax, ebx
0x6F6B13: jnb     short loc_6F6B17
0x6F6B15: mov     ebx, eax
0x6F6B17: mov     eax, [esi+14h]
0x6F6B1A: or      ecx, 0FFFFFFFFh
0x6F6B1D: sub     ecx, eax
0x6F6B1F: cmp     ecx, ebx
0x6F6B21: jbe     short loc_6F6B2A
0x6F6B23: lea     edx, [eax+ebx]
0x6F6B26: cmp     edx, eax
0x6F6B28: jnb     short loc_6F6B2F
0x6F6B2A: call    ?_Xlen@_String_base@std@@SAXXZ; std::_String_base::_Xlen(void)
0x6F6B2F: test    ebx, ebx
0x6F6B31: jbe     loc_6F6BE2
0x6F6B37: mov     edi, [esi+14h]
0x6F6B3A: add     edi, ebx
0x6F6B3C: cmp     edi, 0FFFFFFFEh
0x6F6B3F: jbe     short loc_6F6B46
0x6F6B41: call    ?_Xlen@_String_base@std@@SAXXZ; std::_String_base::_Xlen(void)
0x6F6B46: mov     eax, [esi+18h]
0x6F6B49: cmp     eax, edi
0x6F6B4B: jnb     short loc_6F6B6C
0x6F6B4D: mov     eax, [esi+14h]
0x6F6B50: push    eax; MaxCount
0x6F6B51: push    edi; Dst
0x6F6B52: mov     ecx, esi
0x6F6B54: call    sub_4135C0
0x6F6B59: test    edi, edi
0x6F6B5B: jbe     loc_6F6BE2
0x6F6B61: cmp     dword ptr [ebp+18h], 10h
0x6F6B65: jb      short loc_6F6B96
0x6F6B67: mov     ebp, [ebp+4]
0x6F6B6A: jmp     short loc_6F6B99
0x6F6B6C: test    edi, edi
0x6F6B6E: jnz     short loc_6F6B5B
0x6F6B70: cmp     eax, 10h
0x6F6B73: mov     [esi+14h], edi
0x6F6B76: jb      short loc_6F6B87
0x6F6B78: mov     eax, [esi+4]
0x6F6B7B: pop     edi
0x6F6B7C: mov     byte ptr [eax], 0
0x6F6B7F: mov     eax, esi
0x6F6B81: pop     esi
0x6F6B82: pop     ebp
0x6F6B83: pop     ebx
0x6F6B84: retn    0Ch
0x6F6B87: lea     eax, [esi+4]
0x6F6B8A: pop     edi
0x6F6B8B: mov     byte ptr [eax], 0
0x6F6B8E: mov     eax, esi
0x6F6B90: pop     esi
0x6F6B91: pop     ebp
0x6F6B92: pop     ebx
0x6F6B93: retn    0Ch
0x6F6B96: add     ebp, 4
0x6F6B99: mov     eax, [esi+18h]
0x6F6B9C: cmp     eax, 10h
0x6F6B9F: jb      short loc_6F6BA6
0x6F6BA1: mov     edx, [esi+4]
0x6F6BA4: jmp     short loc_6F6BA9
0x6F6BA6: lea     edx, [esi+4]
0x6F6BA9: mov     ecx, [esi+14h]
0x6F6BAC: push    ebx; Src
0x6F6BAD: mov     ebx, [esp+14h+arg_4]
0x6F6BB1: add     ebp, ebx
0x6F6BB3: sub     eax, ecx
0x6F6BB5: push    ebp; Src
0x6F6BB6: push    eax; DstSize
0x6F6BB7: add     ecx, edx
0x6F6BB9: push    ecx; Dst
0x6F6BBA: call    _memcpy_s
0x6F6BBF: add     esp, 10h
0x6F6BC2: cmp     dword ptr [esi+18h], 10h
0x6F6BC6: mov     [esi+14h], edi
0x6F6BC9: jb      short loc_6F6BDB
0x6F6BCB: mov     eax, [esi+4]
0x6F6BCE: mov     byte ptr [eax+edi], 0
0x6F6BD2: pop     edi
0x6F6BD3: mov     eax, esi
0x6F6BD5: pop     esi
0x6F6BD6: pop     ebp
0x6F6BD7: pop     ebx
0x6F6BD8: retn    0Ch
0x6F6BDB: lea     eax, [esi+4]
0x6F6BDE: mov     byte ptr [eax+edi], 0
0x6F6BE2: pop     edi
0x6F6BE3: mov     eax, esi
0x6F6BE5: pop     esi
0x6F6BE6: pop     ebp
0x6F6BE7: pop     ebx
0x6F6BE8: retn    0Ch
