0x6DF950: mov     eax, [esp+arg_4]
0x6DF954: push    ebx
0x6DF955: mov     ebx, [esp+4+arg_0]
0x6DF959: push    ebp
0x6DF95A: push    esi
0x6DF95B: push    edi
0x6DF95C: push    eax
0x6DF95D: push    ebx
0x6DF95E: mov     ebp, ecx
0x6DF960: call    sub_733850
0x6DF965: movzx   eax, word ptr [ebp+0Ch]
0x6DF969: mov     [ebx+0Ch], ax
0x6DF96D: test    byte ptr [ebp+0Ch], 1
0x6DF971: jz      short loc_6DF978
0x6DF973: or      eax, 1
0x6DF976: jmp     short loc_6DF97D
0x6DF978: and     eax, 0FFFEh
0x6DF97D: movzx   ecx, al
0x6DF980: mov     [ebx+0Ch], ax
0x6DF984: xor     cl, [ebp+0Ch]
0x6DF987: mov     eax, [ebx+14h]
0x6DF98A: push    eax
0x6DF98B: and     ecx, 6
0x6DF98E: xor     [ebx+0Ch], cx
0x6DF992: mov     edx, [ebp+10h]
0x6DF995: mov     [ebx+10h], edx
0x6DF998: call    FormHeapFree
0x6DF99D: lea     esi, [ebp+18h]
0x6DF9A0: lea     edi, [ebx+18h]
0x6DF9A3: mov     ecx, 8
0x6DF9A8: mov     dword ptr [ebx+14h], 0
0x6DF9AF: add     esp, 4
0x6DF9B2: rep movsd
0x6DF9B4: lea     edi, [ebx+38h]
0x6DF9B7: sub     ebp, ebx
0x6DF9B9: mov     [esp+10h+arg_4], 3
0x6DF9C1: mov     ecx, [edi+ebp]
0x6DF9C4: test    ecx, ecx
0x6DF9C6: jz      short loc_6DFA05
0x6DF9C8: call    sub_700900
0x6DF9CD: mov     esi, [edi]
0x6DF9CF: mov     ebx, eax
0x6DF9D1: cmp     esi, ebx
0x6DF9D3: jz      short loc_6DFA05
0x6DF9D5: test    esi, esi
0x6DF9D7: jz      short loc_6DF9F5
0x6DF9D9: lea     ecx, [esi+4]
0x6DF9DC: push    ecx; lpAddend
0x6DF9DD: call    dword ptr ds:0A2807Ch
0x6DF9E3: test    eax, eax
0x6DF9E5: jnz     short loc_6DF9F5
0x6DF9E7: test    esi, esi
0x6DF9E9: jz      short loc_6DF9F5
0x6DF9EB: mov     edx, [esi]
0x6DF9ED: mov     eax, [edx]
0x6DF9EF: push    1
0x6DF9F1: mov     ecx, esi
0x6DF9F3: call    eax
0x6DF9F5: test    ebx, ebx
0x6DF9F7: mov     [edi], ebx
0x6DF9F9: jz      short loc_6DFA05
0x6DF9FB: add     ebx, 4
0x6DF9FE: push    ebx; lpAddend
0x6DF9FF: call    dword ptr ds:0A28078h
0x6DFA05: add     edi, 4
0x6DFA08: sub     [esp+10h+arg_4], 1
0x6DFA0D: jnz     short loc_6DF9C1
0x6DFA0F: pop     edi
0x6DFA10: pop     esi
0x6DFA11: pop     ebp
0x6DFA12: pop     ebx
0x6DFA13: retn    8
