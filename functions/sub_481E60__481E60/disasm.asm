0x481E60: push    ebx
0x481E61: mov     ebx, [esp+4+arg_4]
0x481E65: push    esi
0x481E66: push    edi
0x481E67: mov     edi, [esp+0Ch+arg_0]
0x481E6B: mov     eax, edi
0x481E6D: cdq
0x481E6E: mov     esi, ecx
0x481E70: mov     ecx, [esi+0Ch]
0x481E73: add     [esi+4], edi
0x481E76: add     [esi+8], ebx
0x481E79: xor     eax, edx
0x481E7B: sub     eax, edx
0x481E7D: cmp     eax, ecx
0x481E7F: jnb     loc_48201E
0x481E85: mov     eax, ebx
0x481E87: cdq
0x481E88: xor     eax, edx
0x481E8A: sub     eax, edx
0x481E8C: cmp     eax, ecx
0x481E8E: jnb     loc_48201E
0x481E94: test    edi, edi
0x481E96: push    ebp
0x481E97: jz      loc_481F5B
0x481E9D: lea     ecx, [ecx+0]
0x481EA0: xor     ebx, ebx
0x481EA2: test    edi, edi
0x481EA4: jge     short loc_481EF7
0x481EA6: cmp     [esi+0Ch], ebx
0x481EA9: jbe     short loc_481EF2
0x481EAB: jmp     short loc_481EB0
0x481EAD: align 10h
0x481EB0: mov     edi, [esi+0Ch]
0x481EB3: mov     eax, [esi]
0x481EB5: mov     edx, [eax+18h]
0x481EB8: push    ebx
0x481EB9: sub     edi, 1
0x481EBC: push    edi
0x481EBD: mov     ecx, esi
0x481EBF: call    edx
0x481EC1: test    edi, edi
0x481EC3: jbe     short loc_481EDB
0x481EC5: mov     eax, [esi]
0x481EC7: mov     edx, [eax+20h]
0x481ECA: push    ebx
0x481ECB: push    edi
0x481ECC: push    ebx
0x481ECD: lea     ebp, [edi-1]
0x481ED0: push    ebp
0x481ED1: mov     ecx, esi
0x481ED3: call    edx
0x481ED5: mov     edi, ebp
0x481ED7: test    edi, edi
0x481ED9: ja      short loc_481EC5
0x481EDB: mov     eax, [esi]
0x481EDD: mov     edx, [eax+1Ch]
0x481EE0: push    ebx
0x481EE1: push    edi
0x481EE2: mov     ecx, esi
0x481EE4: call    edx
0x481EE6: add     ebx, 1
0x481EE9: cmp     ebx, [esi+0Ch]
0x481EEC: jb      short loc_481EB0
0x481EEE: mov     edi, [esp+10h+arg_0]
0x481EF2: add     edi, 1
0x481EF5: jmp     short loc_481F4B
0x481EF7: cmp     dword ptr [esi+0Ch], 0
0x481EFB: jbe     short loc_481F48
0x481EFD: lea     ecx, [ecx+0]
0x481F00: mov     eax, [esi]
0x481F02: mov     edx, [eax+18h]
0x481F05: push    ebx
0x481F06: xor     edi, edi
0x481F08: push    edi
0x481F09: mov     ecx, esi
0x481F0B: call    edx
0x481F0D: mov     eax, [esi+0Ch]
0x481F10: sub     eax, 1
0x481F13: jz      short loc_481F31
0x481F15: mov     edx, [esi]
0x481F17: mov     eax, [edx+20h]
0x481F1A: push    ebx
0x481F1B: push    edi
0x481F1C: push    ebx
0x481F1D: lea     ebp, [edi+1]
0x481F20: push    ebp
0x481F21: mov     ecx, esi
0x481F23: call    eax
0x481F25: mov     ecx, [esi+0Ch]
0x481F28: mov     edi, ebp
0x481F2A: sub     ecx, 1
0x481F2D: cmp     edi, ecx
0x481F2F: jb      short loc_481F15
0x481F31: mov     edx, [esi]
0x481F33: mov     eax, [edx+1Ch]
0x481F36: push    ebx
0x481F37: push    edi
0x481F38: mov     ecx, esi
0x481F3A: call    eax
0x481F3C: add     ebx, 1
0x481F3F: cmp     ebx, [esi+0Ch]
0x481F42: jb      short loc_481F00
0x481F44: mov     edi, [esp+10h+arg_0]
0x481F48: sub     edi, 1
0x481F4B: test    edi, edi
0x481F4D: mov     [esp+10h+arg_0], edi
0x481F51: jnz     loc_481EA0
0x481F57: mov     ebx, [esp+10h+arg_4]
0x481F5B: test    ebx, ebx
0x481F5D: jz      loc_482017
0x481F63: jge     short loc_481FB7
0x481F65: xor     ebx, ebx
0x481F67: cmp     [esi+0Ch], ebx
0x481F6A: jbe     short loc_481FAE
0x481F6C: lea     esp, [esp+0]
0x481F70: mov     edi, [esi+0Ch]
0x481F73: mov     edx, [esi]
0x481F75: mov     eax, [edx+18h]
0x481F78: sub     edi, 1
0x481F7B: push    edi
0x481F7C: push    ebx
0x481F7D: mov     ecx, esi
0x481F7F: call    eax
0x481F81: test    edi, edi
0x481F83: jbe     short loc_481F9B
0x481F85: mov     edx, [esi]
0x481F87: mov     eax, [edx+20h]
0x481F8A: push    edi
0x481F8B: push    ebx
0x481F8C: lea     ebp, [edi-1]
0x481F8F: push    ebp
0x481F90: push    ebx
0x481F91: mov     ecx, esi
0x481F93: call    eax
0x481F95: mov     edi, ebp
0x481F97: test    edi, edi
0x481F99: ja      short loc_481F85
0x481F9B: mov     edx, [esi]
0x481F9D: mov     eax, [edx+1Ch]
0x481FA0: push    edi
0x481FA1: push    ebx
0x481FA2: mov     ecx, esi
0x481FA4: call    eax
0x481FA6: add     ebx, 1
0x481FA9: cmp     ebx, [esi+0Ch]
0x481FAC: jb      short loc_481F70
0x481FAE: mov     ebx, [esp+10h+arg_4]
0x481FB2: add     ebx, 1
0x481FB5: jmp     short loc_48200B
0x481FB7: xor     ebx, ebx
0x481FB9: cmp     [esi+0Ch], ebx
0x481FBC: jbe     short loc_482004
0x481FBE: mov     edi, edi
0x481FC0: mov     edx, [esi]
0x481FC2: mov     eax, [edx+18h]
0x481FC5: xor     edi, edi
0x481FC7: push    edi
0x481FC8: push    ebx
0x481FC9: mov     ecx, esi
0x481FCB: call    eax
0x481FCD: mov     ecx, [esi+0Ch]
0x481FD0: sub     ecx, 1
0x481FD3: jz      short loc_481FF1
0x481FD5: mov     edx, [esi]
0x481FD7: mov     eax, [edx+20h]
0x481FDA: push    edi
0x481FDB: push    ebx
0x481FDC: lea     ebp, [edi+1]
0x481FDF: push    ebp
0x481FE0: push    ebx
0x481FE1: mov     ecx, esi
0x481FE3: call    eax
0x481FE5: mov     ecx, [esi+0Ch]
0x481FE8: mov     edi, ebp
0x481FEA: sub     ecx, 1
0x481FED: cmp     edi, ecx
0x481FEF: jb      short loc_481FD5
0x481FF1: mov     edx, [esi]
0x481FF3: mov     eax, [edx+1Ch]
0x481FF6: push    edi
0x481FF7: push    ebx
0x481FF8: mov     ecx, esi
0x481FFA: call    eax
0x481FFC: add     ebx, 1
0x481FFF: cmp     ebx, [esi+0Ch]
0x482002: jb      short loc_481FC0
0x482004: mov     ebx, [esp+10h+arg_4]
0x482008: sub     ebx, 1
0x48200B: test    ebx, ebx
0x48200D: mov     [esp+10h+arg_4], ebx
0x482011: jnz     loc_481F63
0x482017: pop     ebp
0x482018: pop     edi
0x482019: pop     esi
0x48201A: pop     ebx
0x48201B: retn    8
0x48201E: mov     edx, [esi]
0x482020: mov     eax, [edx+8]
0x482023: mov     ecx, esi
0x482025: call    eax
0x482027: pop     edi
0x482028: pop     esi
0x482029: pop     ebx
0x48202A: retn    8
