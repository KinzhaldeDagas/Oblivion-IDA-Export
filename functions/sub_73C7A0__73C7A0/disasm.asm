0x73C7A0: push    edi
0x73C7A1: mov     edi, [esp+4+arg_0]
0x73C7A5: test    edi, edi
0x73C7A7: jnz     short loc_73C7AF
0x73C7A9: xor     al, al
0x73C7AB: pop     edi
0x73C7AC: retn    4
0x73C7AF: push    ebp
0x73C7B0: mov     ebp, [ecx+0Ch]
0x73C7B3: cmp     ebp, [edi+0Ch]
0x73C7B6: jnz     short loc_73C7C0
0x73C7B8: mov     eax, [ecx+14h]
0x73C7BB: cmp     eax, [edi+14h]
0x73C7BE: jz      short loc_73C7C7
0x73C7C0: pop     ebp
0x73C7C1: xor     al, al
0x73C7C3: pop     edi
0x73C7C4: retn    4
0x73C7C7: push    ebx
0x73C7C8: mov     ebx, [ecx+10h]
0x73C7CB: test    ebx, ebx
0x73C7CD: jz      short loc_73C7D9
0x73C7CF: cmp     dword ptr [edi+10h], 0
0x73C7D3: jz      short loc_73C7DF
0x73C7D5: test    ebx, ebx
0x73C7D7: jnz     short loc_73C7E7
0x73C7D9: cmp     dword ptr [edi+10h], 0
0x73C7DD: jz      short loc_73C7E7
0x73C7DF: pop     ebx
0x73C7E0: pop     ebp
0x73C7E1: xor     al, al
0x73C7E3: pop     edi
0x73C7E4: retn    4
0x73C7E7: test    ebx, ebx
0x73C7E9: push    esi
0x73C7EA: jz      short loc_73C850
0x73C7EC: xor     esi, esi
0x73C7EE: test    ebp, ebp
0x73C7F0: jbe     short loc_73C850
0x73C7F2: mov     eax, [ebx+esi*4]
0x73C7F5: test    eax, eax
0x73C7F7: jz      short loc_73C806
0x73C7F9: mov     ecx, [edi+10h]
0x73C7FC: cmp     dword ptr [ecx+esi*4], 0
0x73C800: jz      short loc_73C859
0x73C802: test    eax, eax
0x73C804: jnz     short loc_73C813
0x73C806: mov     edx, [edi+10h]
0x73C809: cmp     dword ptr [edx+esi*4], 0
0x73C80D: jnz     short loc_73C859
0x73C80F: test    eax, eax
0x73C811: jz      short loc_73C849
0x73C813: mov     eax, [edi+10h]
0x73C816: mov     ecx, [eax+esi*4]
0x73C819: mov     eax, [ebx+esi*4]
0x73C81C: lea     esp, [esp+0]
0x73C820: mov     dl, [eax]
0x73C822: cmp     dl, [ecx]
0x73C824: jnz     short loc_73C840
0x73C826: test    dl, dl
0x73C828: jz      short loc_73C83C
0x73C82A: mov     dl, [eax+1]
0x73C82D: cmp     dl, [ecx+1]
0x73C830: jnz     short loc_73C840
0x73C832: add     eax, 2
0x73C835: add     ecx, 2
0x73C838: test    dl, dl
0x73C83A: jnz     short loc_73C820
0x73C83C: xor     eax, eax
0x73C83E: jmp     short loc_73C845
0x73C840: sbb     eax, eax
0x73C842: sbb     eax, 0FFFFFFFFh
0x73C845: test    eax, eax
0x73C847: jnz     short loc_73C859
0x73C849: add     esi, 1
0x73C84C: cmp     esi, ebp
0x73C84E: jb      short loc_73C7F2
0x73C850: pop     esi
0x73C851: pop     ebx
0x73C852: pop     ebp
0x73C853: mov     al, 1
0x73C855: pop     edi
0x73C856: retn    4
0x73C859: pop     esi
0x73C85A: pop     ebx
0x73C85B: pop     ebp
0x73C85C: xor     al, al
0x73C85E: pop     edi
0x73C85F: retn    4
