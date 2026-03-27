0x747E80: push    ecx
0x747E81: push    esi
0x747E82: mov     esi, ecx
0x747E84: cmp     byte ptr [esi+24h], 0
0x747E88: jz      loc_747F2E
0x747E8E: mov     eax, [esi+14h]
0x747E91: push    ebx
0x747E92: mov     ebx, [esp+0Ch+Count]
0x747E96: push    ebp; File
0x747E97: mov     ebp, [esp+10h+Dst]
0x747E9B: push    edi
0x747E9C: mov     edi, [esi+10h]
0x747E9F: sub     edi, eax
0x747EA1: cmp     ebx, edi
0x747EA3: mov     [esp+14h+var_4], 0
0x747EAB: jbe     short loc_747F0B
0x747EAD: test    edi, edi
0x747EAF: jbe     short loc_747EC9
0x747EB1: mov     ecx, [esi+18h]
0x747EB4: push    edi; Size
0x747EB5: add     ecx, eax
0x747EB7: push    ecx; Src
0x747EB8: push    ebp; Dst
0x747EB9: call    _memcpy
0x747EBE: add     esp, 0Ch
0x747EC1: add     ebp, edi
0x747EC3: sub     ebx, edi
0x747EC5: mov     [esp+14h+var_4], edi
0x747EC9: mov     ecx, esi
0x747ECB: call    NiFile_Flush
0x747ED0: mov     eax, [esi+0Ch]
0x747ED3: cmp     ebx, eax
0x747ED5: mov     edx, [esi+1Ch]
0x747ED8: push    edx; Count
0x747ED9: jbe     short loc_747EF3
0x747EDB: push    ebx; Count
0x747EDC: push    1; ElementSize
0x747EDE: push    ebp; DstBuf
0x747EDF: call    _fread
0x747EE4: add     esp, 10h
0x747EE7: add     eax, [esp+14h+var_4]
0x747EEB: pop     edi
0x747EEC: pop     ebp
0x747EED: pop     ebx
0x747EEE: pop     esi
0x747EEF: pop     ecx
0x747EF0: retn    8
0x747EF3: mov     ecx, [esi+18h]
0x747EF6: push    eax; Count
0x747EF7: push    1; ElementSize
0x747EF9: push    ecx; DstBuf
0x747EFA: call    _fread
0x747EFF: add     esp, 10h
0x747F02: cmp     eax, ebx
0x747F04: mov     [esi+10h], eax
0x747F07: jnb     short loc_747F0B
0x747F09: mov     ebx, eax
0x747F0B: mov     eax, [esi+18h]
0x747F0E: add     eax, [esi+14h]
0x747F11: push    ebx; Size
0x747F12: push    eax; Src
0x747F13: push    ebp; Dst
0x747F14: call    _memcpy
0x747F19: mov     ecx, [esp+20h+var_4]
0x747F1D: add     esp, 0Ch
0x747F20: add     [esi+14h], ebx
0x747F23: pop     edi
0x747F24: pop     ebp
0x747F25: lea     eax, [ecx+ebx]
0x747F28: pop     ebx
0x747F29: pop     esi
0x747F2A: pop     ecx
0x747F2B: retn    8
0x747F2E: xor     eax, eax
0x747F30: pop     esi
0x747F31: pop     ecx
0x747F32: retn    8
