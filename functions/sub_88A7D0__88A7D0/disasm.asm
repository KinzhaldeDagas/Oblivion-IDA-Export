0x88A7D0: push    esi
0x88A7D1: mov     esi, [esp+4+arg_0]
0x88A7D5: test    esi, esi
0x88A7D7: jz      loc_88A862
0x88A7DD: push    ebx
0x88A7DE: push    esi
0x88A7DF: call    sub_4A05E0
0x88A7E4: mov     ebx, [esp+0Ch+arg_4]
0x88A7E8: add     esp, 4
0x88A7EB: cmp     dword ptr [ebx+8], 0
0x88A7EF: jnz     short loc_88A802
0x88A7F1: mov     cx, [esi+18h]
0x88A7F5: and     cx, 0FFEFh
0x88A7FA: or      cx, 6
0x88A7FE: mov     [esi+18h], cx
0x88A802: test    eax, eax
0x88A804: push    ebp
0x88A805: mov     ebp, [esp+0Ch+arg_8]
0x88A809: jz      short loc_88A812
0x88A80B: push    ebx
0x88A80C: push    eax
0x88A80D: call    ebp
0x88A80F: add     esp, 8
0x88A812: cmp     byte ptr [ebx+4], 0
0x88A816: jz      short loc_88A860
0x88A818: mov     edx, [esi]
0x88A81A: mov     eax, [edx+8]
0x88A81D: push    edi
0x88A81E: mov     ecx, esi
0x88A820: call    eax
0x88A822: mov     edi, eax
0x88A824: test    edi, edi
0x88A826: jz      short loc_88A85F
0x88A828: movzx   eax, word ptr [edi+0B6h]
0x88A82F: xor     esi, esi
0x88A831: test    eax, eax
0x88A833: jbe     short loc_88A85F
0x88A835: cmp     eax, esi
0x88A837: ja      short loc_88A83D
0x88A839: xor     eax, eax
0x88A83B: jmp     short loc_88A846
0x88A83D: mov     ecx, [edi+0B0h]
0x88A843: mov     eax, [ecx+esi*4]
0x88A846: push    ebp
0x88A847: push    ebx
0x88A848: push    eax
0x88A849: call    sub_88A7D0
0x88A84E: movzx   eax, word ptr [edi+0B6h]
0x88A855: add     esi, 1
0x88A858: add     esp, 0Ch
0x88A85B: cmp     eax, esi
0x88A85D: ja      short loc_88A83D
0x88A85F: pop     edi
0x88A860: pop     ebp
0x88A861: pop     ebx
0x88A862: pop     esi
0x88A863: retn
