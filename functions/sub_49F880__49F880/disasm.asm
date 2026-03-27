0x49F880: sub     esp, 8
0x49F883: push    ebx
0x49F884: push    esi
0x49F885: mov     esi, ecx
0x49F887: mov     eax, [esi+40h]
0x49F88A: push    edi
0x49F88B: mov     edi, [eax+7Ch]
0x49F88E: mov     eax, [esi+5Ch]
0x49F891: xor     ebx, ebx
0x49F893: cmp     eax, ebx
0x49F895: mov     [esp+14h+var_4], edi
0x49F899: jz      short loc_49F8A8
0x49F89B: mov     edx, [edi]
0x49F89D: push    eax
0x49F89E: mov     eax, [edx+4Ch]
0x49F8A1: mov     ecx, edi
0x49F8A3: call    eax
0x49F8A5: mov     [esi+60h], eax
0x49F8A8: cmp     [esi+0Ch], ebx
0x49F8AB: mov     [esp+14h+var_8], ebx
0x49F8AF: jbe     loc_49F949
0x49F8B5: push    ebp
0x49F8B6: mov     eax, [esi+18h]
0x49F8B9: movzx   ecx, word ptr [eax+ebx+4]
0x49F8BE: add     eax, ebx
0x49F8C0: cmp     cx, ds:0A79928h
0x49F8C7: jz      short loc_49F8D3
0x49F8C9: mov     edx, [eax]
0x49F8CB: movzx   eax, cx
0x49F8CE: add     eax, [edx+8]
0x49F8D1: jmp     short loc_49F8D5
0x49F8D3: xor     eax, eax
0x49F8D5: mov     edx, [edi]
0x49F8D7: push    eax
0x49F8D8: mov     eax, [edx+4Ch]
0x49F8DB: mov     ecx, edi
0x49F8DD: call    eax
0x49F8DF: test    eax, eax
0x49F8E1: jnz     short loc_49F931
0x49F8E3: mov     ecx, [esi+14h]
0x49F8E6: mov     edi, [ecx+ebx+4]
0x49F8EA: test    edi, edi
0x49F8EC: lea     ebp, [ecx+ebx+4]
0x49F8F0: jz      short loc_49F915
0x49F8F2: lea     edx, [edi+4]
0x49F8F5: push    edx; lpAddend
0x49F8F6: call    dword ptr ds:0A2807Ch
0x49F8FC: test    eax, eax
0x49F8FE: jnz     short loc_49F90E
0x49F900: test    edi, edi
0x49F902: jz      short loc_49F90E
0x49F904: mov     eax, [edi]
0x49F906: mov     edx, [eax]
0x49F908: push    1
0x49F90A: mov     ecx, edi
0x49F90C: call    edx
0x49F90E: mov     dword ptr [ebp+0], 0
0x49F915: mov     eax, [esi+14h]
0x49F918: mov     edi, [esp+18h+var_4]
0x49F91C: mov     dword ptr [eax+ebx+8], 0
0x49F924: mov     ecx, [esi+14h]
0x49F927: mov     dl, ds:0A79EFCh
0x49F92D: mov     [ecx+ebx+0Ch], dl
0x49F931: mov     eax, [esp+18h+var_8]
0x49F935: add     eax, 1
0x49F938: add     ebx, 10h
0x49F93B: cmp     eax, [esi+0Ch]
0x49F93E: mov     [esp+18h+var_8], eax
0x49F942: jb      loc_49F8B6
0x49F948: pop     ebp
0x49F949: pop     edi
0x49F94A: pop     esi
0x49F94B: pop     ebx
0x49F94C: add     esp, 8
0x49F94F: retn
