0x57F7A0: mov     eax, [esp+arg_0]
0x57F7A4: push    ebx
0x57F7A5: push    ebp
0x57F7A6: xor     ebx, ebx
0x57F7A8: xor     ebp, ebp
0x57F7AA: cmp     eax, 2
0x57F7AD: push    esi
0x57F7AE: mov     esi, ecx
0x57F7B0: jnz     short loc_57F81F
0x57F7B2: mov     eax, [esp+0Ch+arg_4]
0x57F7B6: cmp     eax, 2Ah ; '*'
0x57F7B9: jz      short loc_57F7F0
0x57F7BB: cmp     eax, 36h ; '6'
0x57F7BE: jz      short loc_57F7F0
0x57F7C0: cmp     eax, 38h ; '8'
0x57F7C3: jz      short loc_57F7E4
0x57F7C5: cmp     eax, 0B8h ; '¸'
0x57F7CA: jz      short loc_57F7E4
0x57F7CC: cmp     eax, 1Dh
0x57F7CF: jz      short loc_57F7D8
0x57F7D1: cmp     eax, 9Dh
0x57F7D6: jnz     short loc_57F800
0x57F7D8: and     dword ptr [esi+118h], 0FFFDh
0x57F7E2: jmp     short loc_57F800
0x57F7E4: and     dword ptr [esi+118h], 0FFFEh
0x57F7EE: jmp     short loc_57F800
0x57F7F0: and     dword ptr [esi+118h], 0FFFBh
0x57F7FA: mov     [esi+114h], bl
0x57F800: mov     eax, ds:0B33EA0h
0x57F805: mov     [esi+120h], eax
0x57F80B: mov     [esi+124h], ebx
0x57F811: mov     [esi+11Ch], ebx
0x57F817: pop     esi
0x57F818: mov     eax, ebp
0x57F81A: pop     ebp
0x57F81B: pop     ebx
0x57F81C: retn    8
0x57F81F: cmp     eax, 1
0x57F822: jnz     loc_57F9E8
0x57F828: movzx   edx, byte ptr [esi+114h]
0x57F82F: mov     ecx, ds:0B33398h
0x57F835: mov     ecx, [ecx+20h]
0x57F838: push    edi
0x57F839: mov     edi, [esp+10h+arg_4]
0x57F83D: push    edx; int
0x57F83E: push    edi; int
0x57F83F: call    ScancodeToChar
0x57F844: cmp     eax, 1Bh
0x57F847: jz      short loc_57F878
0x57F849: cmp     eax, 8
0x57F84C: jnz     short loc_57F873
0x57F84E: mov     eax, ds:0B33EA0h
0x57F853: mov     ebp, 80000000h
0x57F858: pop     edi
0x57F859: mov     [esi+120h], eax
0x57F85F: mov     [esi+124h], ebx
0x57F865: mov     [esi+11Ch], ebp
0x57F86B: pop     esi
0x57F86C: mov     eax, ebp
0x57F86E: pop     ebp
0x57F86F: pop     ebx
0x57F870: retn    8
0x57F873: cmp     eax, 7Ch ; '|'
0x57F876: jnz     short loc_57F883
0x57F878: pop     edi
0x57F879: xor     ebp, ebp
0x57F87B: pop     esi
0x57F87C: mov     eax, ebp
0x57F87E: pop     ebp
0x57F87F: pop     ebx
0x57F880: retn    8
0x57F883: cmp     eax, 0Dh
0x57F886: jnz     short loc_57F896
0x57F888: pop     edi
0x57F889: mov     ebp, 80000008h
0x57F88E: pop     esi
0x57F88F: mov     eax, ebp
0x57F891: pop     ebp
0x57F892: pop     ebx
0x57F893: retn    8
0x57F896: cmp     edi, 2Ah ; '*'
0x57F899: jz      loc_57F9D9
0x57F89F: cmp     edi, 36h ; '6'
0x57F8A2: jz      loc_57F9D9
0x57F8A8: cmp     edi, 38h ; '8'
0x57F8AB: jz      loc_57F9C9
0x57F8B1: cmp     edi, 0B8h ; '¸'
0x57F8B7: jz      loc_57F9C9
0x57F8BD: cmp     edi, 1Dh
0x57F8C0: jz      loc_57F9B9
0x57F8C6: cmp     edi, 9Dh
0x57F8CC: jz      loc_57F9B9
0x57F8D2: cmp     edi, 0CBh ; 'Ë'
0x57F8D8: jnz     short loc_57F8F0
0x57F8DA: mov     ebp, 80000001h
0x57F8DF: push    ebp
0x57F8E0: mov     ecx, esi
0x57F8E2: call    sub_57DC30
0x57F8E7: pop     edi
0x57F8E8: pop     esi
0x57F8E9: mov     eax, ebp
0x57F8EB: pop     ebp
0x57F8EC: pop     ebx
0x57F8ED: retn    8
0x57F8F0: cmp     edi, 0CDh ; 'Í'
0x57F8F6: jnz     short loc_57F90E
0x57F8F8: mov     ebp, 80000002h
0x57F8FD: push    ebp
0x57F8FE: mov     ecx, esi
0x57F900: call    sub_57DC30
0x57F905: pop     edi
0x57F906: pop     esi
0x57F907: mov     eax, ebp
0x57F909: pop     ebp
0x57F90A: pop     ebx
0x57F90B: retn    8
0x57F90E: cmp     edi, 0C8h ; 'È'
0x57F914: jnz     short loc_57F924
0x57F916: pop     edi
0x57F917: mov     ebp, 80000003h
0x57F91C: pop     esi
0x57F91D: mov     eax, ebp
0x57F91F: pop     ebp
0x57F920: pop     ebx
0x57F921: retn    8
0x57F924: cmp     edi, 0D0h ; 'Ð'
0x57F92A: jnz     short loc_57F93A
0x57F92C: pop     edi
0x57F92D: mov     ebp, 80000004h
0x57F932: pop     esi
0x57F933: mov     eax, ebp
0x57F935: pop     ebp
0x57F936: pop     ebx
0x57F937: retn    8
0x57F93A: cmp     edi, 0C7h ; 'Ç'
0x57F940: jnz     short loc_57F950
0x57F942: pop     edi
0x57F943: mov     ebp, 80000005h
0x57F948: pop     esi
0x57F949: mov     eax, ebp
0x57F94B: pop     ebp
0x57F94C: pop     ebx
0x57F94D: retn    8
0x57F950: cmp     edi, 0CFh ; 'Ï'
0x57F956: jnz     short loc_57F966
0x57F958: pop     edi
0x57F959: mov     ebp, 80000006h
0x57F95E: pop     esi
0x57F95F: mov     eax, ebp
0x57F961: pop     ebp
0x57F962: pop     ebx
0x57F963: retn    8
0x57F966: cmp     edi, 0D1h ; 'Ñ'
0x57F96C: jnz     short loc_57F97C
0x57F96E: pop     edi
0x57F96F: mov     ebp, 8000000Ah
0x57F974: pop     esi
0x57F975: mov     eax, ebp
0x57F977: pop     ebp
0x57F978: pop     ebx
0x57F979: retn    8
0x57F97C: cmp     edi, 0C9h ; 'É'
0x57F982: jnz     short loc_57F992
0x57F984: pop     edi
0x57F985: mov     ebp, 80000009h
0x57F98A: pop     esi
0x57F98B: mov     eax, ebp
0x57F98D: pop     ebp
0x57F98E: pop     ebx
0x57F98F: retn    8
0x57F992: cmp     edi, 0D3h ; 'Ó'
0x57F998: jnz     short loc_57F9B0
0x57F99A: mov     ebp, 80000007h
0x57F99F: push    ebp
0x57F9A0: mov     ecx, esi
0x57F9A2: call    sub_57DC30
0x57F9A7: pop     edi
0x57F9A8: pop     esi
0x57F9A9: mov     eax, ebp
0x57F9AB: pop     ebp
0x57F9AC: pop     ebx
0x57F9AD: retn    8
0x57F9B0: pop     edi
0x57F9B1: pop     esi
0x57F9B2: mov     ebp, eax
0x57F9B4: pop     ebp
0x57F9B5: pop     ebx
0x57F9B6: retn    8
0x57F9B9: or      dword ptr [esi+118h], 2
0x57F9C0: pop     edi
0x57F9C1: pop     esi
0x57F9C2: mov     eax, ebp
0x57F9C4: pop     ebp
0x57F9C5: pop     ebx
0x57F9C6: retn    8
0x57F9C9: or      dword ptr [esi+118h], 1
0x57F9D0: pop     edi
0x57F9D1: pop     esi
0x57F9D2: mov     eax, ebp
0x57F9D4: pop     ebp
0x57F9D5: pop     ebx
0x57F9D6: retn    8
0x57F9D9: or      dword ptr [esi+118h], 4
0x57F9E0: mov     byte ptr [esi+114h], 1
0x57F9E7: pop     edi
0x57F9E8: pop     esi
0x57F9E9: mov     eax, ebp
0x57F9EB: pop     ebp
0x57F9EC: pop     ebx
0x57F9ED: retn    8
