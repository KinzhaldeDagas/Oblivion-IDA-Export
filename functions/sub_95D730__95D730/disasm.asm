0x95D730: push    ebp
0x95D731: mov     ebp, [esp+4+arg_8]
0x95D735: cmp     dword ptr [ebp+8], 0
0x95D739: jnz     short loc_95D777
0x95D73B: cmp     dword ptr [ebp+0], 1
0x95D73F: jnz     short loc_95D777
0x95D741: push    44h ; 'D'; Size
0x95D743: call    FormHeapAlloc
0x95D748: add     esp, 4
0x95D74B: test    eax, eax
0x95D74D: jz      short loc_95D75D
0x95D74F: mov     ecx, [esp+4+arg_C]
0x95D753: push    ecx
0x95D754: mov     ecx, eax
0x95D756: call    sub_95A2D0
0x95D75B: jmp     short loc_95D75F
0x95D75D: xor     eax, eax
0x95D75F: lea     edx, [esp+4+arg_8]
0x95D763: push    edx
0x95D764: lea     ecx, [ebp+18h]
0x95D767: mov     [esp+8+arg_8], eax
0x95D76B: mov     [ebp+28h], eax
0x95D76E: call    sub_4BACA0
0x95D773: mov     al, 1
0x95D775: pop     ebp
0x95D776: retn
0x95D777: push    edi
0x95D778: mov     edi, [esp+8+arg_C]
0x95D77C: test    edi, edi
0x95D77E: jz      short loc_95D79E
0x95D780: mov     eax, [edi]
0x95D782: mov     edx, [eax+4]
0x95D785: mov     ecx, edi
0x95D787: call    edx
0x95D789: test    eax, eax
0x95D78B: jz      short loc_95D79E
0x95D78D: lea     ecx, [ecx+0]
0x95D790: cmp     eax, offset dword_B3FD70
0x95D795: jz      short loc_95D80A
0x95D797: mov     eax, [eax+4]
0x95D79A: test    eax, eax
0x95D79C: jnz     short loc_95D790
0x95D79E: movzx   eax, word ptr [edi+0B6h]
0x95D7A5: push    ebx
0x95D7A6: push    esi
0x95D7A7: xor     esi, esi
0x95D7A9: test    eax, eax
0x95D7AB: mov     byte ptr [esp+10h+arg_8], 0
0x95D7B0: jbe     short loc_95D801
0x95D7B2: mov     ebx, [esp+10h+arg_4]
0x95D7B6: cmp     dword ptr [ebp+0], 1
0x95D7BA: jnz     short loc_95D7C9
0x95D7BC: cmp     dword ptr [ebp+4], 1
0x95D7C0: jnz     short loc_95D7C9
0x95D7C2: cmp     word ptr [ebp+24h], 0
0x95D7C7: jnz     short loc_95D821
0x95D7C9: cmp     eax, esi
0x95D7CB: jbe     short loc_95D7F3
0x95D7CD: mov     edx, [edi+0B0h]
0x95D7D3: mov     eax, [edx+esi*4]
0x95D7D6: test    eax, eax
0x95D7D8: jz      short loc_95D7F3
0x95D7DA: push    eax
0x95D7DB: mov     eax, [esp+14h+arg_0]
0x95D7DF: push    ebp
0x95D7E0: push    ebx
0x95D7E1: push    eax
0x95D7E2: call    sub_95D540
0x95D7E7: add     esp, 10h
0x95D7EA: test    al, al
0x95D7EC: jz      short loc_95D7F3
0x95D7EE: mov     byte ptr [esp+10h+arg_8], 1
0x95D7F3: movzx   eax, word ptr [edi+0B6h]
0x95D7FA: add     esi, 1
0x95D7FD: cmp     esi, eax
0x95D7FF: jb      short loc_95D7B6
0x95D801: mov     al, byte ptr [esp+10h+arg_8]
0x95D805: pop     esi
0x95D806: pop     ebx
0x95D807: pop     edi
0x95D808: pop     ebp
0x95D809: retn
0x95D80A: mov     eax, [esp+8+arg_4]
0x95D80E: mov     ecx, [esp+8+arg_0]
0x95D812: push    edi
0x95D813: push    ebp
0x95D814: push    eax
0x95D815: push    ecx
0x95D816: call    sub_95D6C0
0x95D81B: add     esp, 10h
0x95D81E: pop     edi
0x95D81F: pop     ebp
0x95D820: retn
0x95D821: pop     esi
0x95D822: pop     ebx
0x95D823: pop     edi
0x95D824: mov     al, 1
0x95D826: pop     ebp
0x95D827: retn
