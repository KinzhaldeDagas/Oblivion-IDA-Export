0x767860: sub     esp, 10h
0x767863: push    ebx
0x767864: push    ebp
0x767865: mov     ebp, [esp+18h+arg_0]
0x767869: test    ebp, ebp
0x76786B: mov     ebx, ecx
0x76786D: mov     [esp+18h+var_10], ebx
0x767871: jz      loc_767986
0x767877: push    esi
0x767878: mov     esi, [ebp+38h]
0x76787B: test    esi, esi
0x76787D: mov     [esp+1Ch+var_8], esi
0x767881: jz      loc_767985
0x767887: cmp     dword ptr [esi+1Ch], 0
0x76788B: jbe     loc_767975
0x767891: mov     eax, [esi+24h]
0x767894: cmp     dword ptr [eax], 0
0x767897: jz      loc_767975
0x76789D: push    edi
0x76789E: call    sub_763FE0
0x7678A3: mov     eax, [esi+1Ch]
0x7678A6: xor     edi, edi
0x7678A8: test    eax, eax
0x7678AA: mov     [esp+20h+var_4], edi
0x7678AE: jbe     loc_76796D
0x7678B4: cmp     edi, eax
0x7678B6: jnb     short loc_7678C0
0x7678B8: mov     ecx, [esi+24h]
0x7678BB: mov     eax, [ecx+edi*4]
0x7678BE: jmp     short loc_7678C2
0x7678C0: xor     eax, eax
0x7678C2: mov     ebp, [eax+4]
0x7678C5: lea     edx, [esp+20h+var_C]
0x7678C9: push    edx
0x7678CA: push    ebp
0x7678CB: lea     ecx, [ebx+604h]
0x7678D1: mov     [esp+28h+var_C], 0
0x7678D9: call    NiTMap_GetAt
0x7678DE: test    al, al
0x7678E0: jz      short loc_767957
0x7678E2: mov     esi, [esp+20h+var_C]
0x7678E6: xor     ebx, ebx
0x7678E8: test    esi, esi
0x7678EA: jz      short loc_76794F
0x7678EC: lea     esp, [esp+0]
0x7678F0: mov     eax, [esp+20h+arg_0]
0x7678F4: cmp     [esi], eax
0x7678F6: jnz     short loc_767946
0x7678F8: xor     edi, edi
0x7678FA: test    ebx, ebx
0x7678FC: jz      short loc_767909
0x7678FE: mov     ecx, [esi+20h]
0x767901: mov     [ebx+20h], ecx
0x767904: mov     edi, [esi+20h]
0x767907: jmp     short loc_76792E
0x767909: mov     ecx, [esp+20h+var_10]
0x76790D: add     ecx, 604h; this
0x767913: cmp     dword ptr [esi+20h], 0
0x767917: jz      short loc_767928
0x767919: mov     edx, [esi+20h]
0x76791C: push    edx; a3
0x76791D: push    ebp; a2
0x76791E: call    NiTMap_SetAt
0x767923: mov     edi, [esi+20h]
0x767926: jmp     short loc_76792E
0x767928: push    ebp
0x767929: call    NiTMap_RemoveAt
0x76792E: push    esi
0x76792F: mov     dword ptr [esi+20h], 0
0x767936: call    FormHeapFree
0x76793B: mov     esi, edi
0x76793D: mov     edi, [esp+24h+var_4]
0x767941: add     esp, 4
0x767944: jmp     short loc_76794B
0x767946: mov     ebx, esi
0x767948: mov     esi, [esi+20h]
0x76794B: test    esi, esi
0x76794D: jnz     short loc_7678F0
0x76794F: mov     esi, [esp+20h+var_8]
0x767953: mov     ebx, [esp+20h+var_10]
0x767957: mov     eax, [esi+1Ch]
0x76795A: add     edi, 1
0x76795D: cmp     edi, eax
0x76795F: mov     [esp+20h+var_4], edi
0x767963: jb      loc_7678B8
0x767969: mov     ebp, [esp+20h+arg_0]
0x76796D: mov     ecx, ebx
0x76796F: call    sub_764040
0x767974: pop     edi
0x767975: mov     ecx, [ebx+8A0h]
0x76797B: mov     eax, [ecx]
0x76797D: mov     edx, [eax+1Ch]
0x767980: push    0
0x767982: push    ebp
0x767983: call    edx
0x767985: pop     esi
0x767986: pop     ebp
0x767987: pop     ebx
0x767988: add     esp, 10h
0x76798B: retn    4
