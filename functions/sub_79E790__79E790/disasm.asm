0x79E790: push    ebx
0x79E791: push    ebp
0x79E792: mov     ebp, [esp+8+arg_4]
0x79E796: push    esi
0x79E797: mov     esi, [esp+0Ch+arg_8]
0x79E79B: mov     ecx, esi
0x79E79D: sub     ecx, ebp
0x79E79F: mov     eax, 2AAAAAABh
0x79E7A4: imul    ecx
0x79E7A6: sar     edx, 3
0x79E7A9: mov     eax, edx
0x79E7AB: shr     eax, 1Fh
0x79E7AE: add     eax, edx
0x79E7B0: cdq
0x79E7B1: push    edi
0x79E7B2: sub     eax, edx
0x79E7B4: sar     eax, 1
0x79E7B6: lea     edi, [eax+eax*2]
0x79E7B9: mov     eax, [esp+10h+arg_C]
0x79E7BD: push    eax
0x79E7BE: shl     edi, 4
0x79E7C1: add     esi, 0FFFFFFD0h
0x79E7C4: push    esi
0x79E7C5: add     edi, ebp
0x79E7C7: push    edi
0x79E7C8: push    ebp
0x79E7C9: call    sub_79E220
0x79E7CE: add     esp, 10h
0x79E7D1: cmp     ebp, edi
0x79E7D3: mov     ebx, edi
0x79E7D5: lea     esi, [edi+30h]
0x79E7D8: jnb     short loc_79E805
0x79E7DA: lea     ebx, [ebx+0]
0x79E7E0: fld     dword ptr [ebx-0Ch]
0x79E7E3: fld     dword ptr [ebx+24h]
0x79E7E6: fcom    st(1)
0x79E7E8: fnstsw  ax
0x79E7EA: test    ah, 5
0x79E7ED: jnp     short loc_79E801
0x79E7EF: fcompp
0x79E7F1: fnstsw  ax
0x79E7F3: test    ah, 41h
0x79E7F6: jz      short loc_79E805
0x79E7F8: sub     ebx, 30h ; '0'
0x79E7FB: cmp     ebp, ebx
0x79E7FD: jb      short loc_79E7E0
0x79E7FF: jmp     short loc_79E805
0x79E801: fstp    st(1)
0x79E803: fstp    st
0x79E805: mov     edi, [esp+10h+arg_8]
0x79E809: mov     ecx, edi
0x79E80B: sub     ecx, esi
0x79E80D: add     ecx, 2Fh ; '/'
0x79E810: mov     eax, 2AAAAAABh
0x79E815: imul    ecx
0x79E817: sar     edx, 3
0x79E81A: mov     ecx, edx
0x79E81C: shr     ecx, 1Fh
0x79E81F: add     ecx, edx
0x79E821: cmp     ecx, 4
0x79E824: jl      short loc_79E89D
0x79E826: fld     dword ptr [ebx+24h]
0x79E829: fld     dword ptr [esi+24h]
0x79E82C: fcom    st(1)
0x79E82E: fnstsw  ax
0x79E830: test    ah, 41h
0x79E833: jz      loc_79E8DA
0x79E839: fcomp   st(1)
0x79E83B: fnstsw  ax
0x79E83D: test    ah, 5
0x79E840: jnp     loc_79E8E0
0x79E846: fld     dword ptr [esi+54h]
0x79E849: fcom    st(1)
0x79E84B: fnstsw  ax
0x79E84D: test    ah, 41h
0x79E850: jz      short loc_79E8C2
0x79E852: fcomp   st(1)
0x79E854: fnstsw  ax
0x79E856: test    ah, 5
0x79E859: jnp     short loc_79E8C4
0x79E85B: fld     dword ptr [esi+84h]
0x79E861: fcom    st(1)
0x79E863: fnstsw  ax
0x79E865: test    ah, 41h
0x79E868: jz      short loc_79E8C9
0x79E86A: fcomp   st(1)
0x79E86C: fnstsw  ax
0x79E86E: test    ah, 5
0x79E871: jnp     short loc_79E8CB
0x79E873: fld     dword ptr [esi+0B4h]
0x79E879: fcom    st(1)
0x79E87B: fnstsw  ax
0x79E87D: test    ah, 41h
0x79E880: jz      short loc_79E8D0
0x79E882: fcomp   st(1)
0x79E884: fnstsw  ax
0x79E886: test    ah, 5
0x79E889: jnp     short loc_79E8D2
0x79E88B: add     esi, 0C0h ; 'À'
0x79E891: lea     edx, [edi-90h]
0x79E897: cmp     esi, edx
0x79E899: jl      short loc_79E829
0x79E89B: fstp    st
0x79E89D: cmp     esi, edi
0x79E89F: jnb     short loc_79E8E2
0x79E8A1: fld     dword ptr [ebx+24h]
0x79E8A4: fld     dword ptr [esi+24h]
0x79E8A7: fcom    st(1)
0x79E8A9: fnstsw  ax
0x79E8AB: test    ah, 41h
0x79E8AE: jz      short loc_79E8DE
0x79E8B0: fcomp   st(1)
0x79E8B2: fnstsw  ax
0x79E8B4: test    ah, 5
0x79E8B7: jnp     short loc_79E8E0
0x79E8B9: add     esi, 30h ; '0'
0x79E8BC: cmp     esi, edi
0x79E8BE: jnb     short loc_79E8E0
0x79E8C0: jmp     short loc_79E8A4
0x79E8C2: fstp    st(1)
0x79E8C4: add     esi, 30h ; '0'
0x79E8C7: jmp     short loc_79E8E0
0x79E8C9: fstp    st(1)
0x79E8CB: add     esi, 60h ; '`'
0x79E8CE: jmp     short loc_79E8E0
0x79E8D0: fstp    st(1)
0x79E8D2: add     esi, 90h
0x79E8D8: jmp     short loc_79E8E0
0x79E8DA: fstp    st(1)
0x79E8DC: jmp     short loc_79E8E0
0x79E8DE: fstp    st
0x79E8E0: fstp    st
0x79E8E2: mov     edi, esi
0x79E8E4: mov     ebp, ebx
0x79E8E6: cmp     edi, [esp+10h+arg_8]
0x79E8EA: jnb     short loc_79E926
0x79E8EC: lea     esp, [esp+0]
0x79E8F0: fld     dword ptr [ebx+24h]
0x79E8F3: fld     dword ptr [edi+24h]
0x79E8F6: fcom    st(1)
0x79E8F8: fnstsw  ax
0x79E8FA: test    ah, 5
0x79E8FD: jnp     short loc_79E919
0x79E8FF: fcompp
0x79E901: fnstsw  ax
0x79E903: test    ah, 41h
0x79E906: jz      short loc_79E926
0x79E908: mov     eax, esi
0x79E90A: push    edi
0x79E90B: push    eax
0x79E90C: add     esi, 30h ; '0'
0x79E90F: call    sub_79B8D0
0x79E914: add     esp, 8
0x79E917: jmp     short loc_79E91D
0x79E919: fstp    st(1)
0x79E91B: fstp    st
0x79E91D: add     edi, 30h ; '0'
0x79E920: cmp     edi, [esp+10h+arg_8]
0x79E924: jb      short loc_79E8F0
0x79E926: mov     ecx, [esp+10h+arg_4]
0x79E92A: cmp     ebp, ecx
0x79E92C: jbe     short loc_79E96B
0x79E92E: mov     edi, edi
0x79E930: fld     dword ptr [ebp-0Ch]
0x79E933: fld     dword ptr [ebx+24h]
0x79E936: fcom    st(1)
0x79E938: fnstsw  ax
0x79E93A: test    ah, 5
0x79E93D: jnp     short loc_79E95E
0x79E93F: fcompp
0x79E941: fnstsw  ax
0x79E943: test    ah, 41h
0x79E946: jz      short loc_79E969
0x79E948: lea     eax, [ebp-30h]
0x79E94B: push    eax
0x79E94C: sub     ebx, 30h ; '0'
0x79E94F: push    ebx
0x79E950: call    sub_79B8D0
0x79E955: mov     ecx, [esp+18h+arg_4]
0x79E959: add     esp, 8
0x79E95C: jmp     short loc_79E962
0x79E95E: fstp    st(1)
0x79E960: fstp    st
0x79E962: sub     ebp, 30h ; '0'
0x79E965: cmp     ecx, ebp
0x79E967: jb      short loc_79E930
0x79E969: cmp     ebp, ecx
0x79E96B: jnz     short loc_79E99D
0x79E96D: cmp     edi, [esp+10h+arg_8]
0x79E971: jz      short loc_79E9DB
0x79E973: cmp     esi, edi
0x79E975: jz      short loc_79E981
0x79E977: push    esi
0x79E978: push    ebx
0x79E979: call    sub_79B8D0
0x79E97E: add     esp, 8
0x79E981: mov     eax, edi
0x79E983: mov     ecx, ebx
0x79E985: push    eax
0x79E986: push    ecx
0x79E987: add     esi, 30h ; '0'
0x79E98A: add     ebx, 30h ; '0'
0x79E98D: add     edi, 30h ; '0'
0x79E990: call    sub_79B8D0
0x79E995: add     esp, 8
0x79E998: jmp     loc_79E8E6
0x79E99D: sub     ebp, 30h ; '0'
0x79E9A0: cmp     edi, [esp+10h+arg_8]
0x79E9A4: jnz     short loc_79E9C9
0x79E9A6: sub     ebx, 30h ; '0'
0x79E9A9: cmp     ebp, ebx
0x79E9AB: jz      short loc_79E9B7
0x79E9AD: push    ebx
0x79E9AE: push    ebp
0x79E9AF: call    sub_79B8D0
0x79E9B4: add     esp, 8
0x79E9B7: sub     esi, 30h ; '0'
0x79E9BA: push    esi
0x79E9BB: push    ebx
0x79E9BC: call    sub_79B8D0
0x79E9C1: add     esp, 8
0x79E9C4: jmp     loc_79E8E6
0x79E9C9: push    ebp
0x79E9CA: push    edi
0x79E9CB: call    sub_79B8D0
0x79E9D0: add     esp, 8
0x79E9D3: add     edi, 30h ; '0'
0x79E9D6: jmp     loc_79E8E6
0x79E9DB: mov     eax, [esp+10h+arg_0]
0x79E9DF: pop     edi
0x79E9E0: mov     [eax+4], esi
0x79E9E3: pop     esi
0x79E9E4: pop     ebp
0x79E9E5: mov     [eax], ebx
0x79E9E7: pop     ebx
0x79E9E8: retn
