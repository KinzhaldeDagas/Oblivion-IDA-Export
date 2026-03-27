0x6C78B0: sub     esp, 20h
0x6C78B3: push    ebx
0x6C78B4: push    edi
0x6C78B5: mov     edi, ecx
0x6C78B7: mov     [esp+28h+var_18], edi
0x6C78BB: call    sub_6C6400
0x6C78C0: mov     ebx, eax
0x6C78C2: cmp     [edi+64h], ebx
0x6C78C5: mov     [esp+28h+var_4], ebx
0x6C78C9: jz      loc_6C7ABD
0x6C78CF: xor     eax, eax
0x6C78D1: cmp     [edi+0Ch], eax
0x6C78D4: push    esi
0x6C78D5: mov     [esp+2Ch+var_8], eax
0x6C78D9: jbe     loc_6C7A84
0x6C78DF: push    ebp
0x6C78E0: mov     [esp+30h+var_1C], eax
0x6C78E4: mov     ecx, edi
0x6C78E6: call    sub_6C6400
0x6C78EB: mov     ecx, [esp+30h+var_1C]
0x6C78EF: mov     [esp+30h+var_20], eax
0x6C78F3: mov     eax, [edi+18h]
0x6C78F6: add     eax, ecx
0x6C78F8: movzx   ecx, word ptr [eax+4]
0x6C78FC: cmp     cx, 0FFFFh
0x6C7901: jz      short loc_6C790D
0x6C7903: mov     esi, [eax]
0x6C7905: movzx   edx, cx
0x6C7908: add     edx, [esi+8]
0x6C790B: jmp     short loc_6C790F
0x6C790D: xor     edx, edx
0x6C790F: movzx   ecx, word ptr [eax+6]
0x6C7913: cmp     cx, 0FFFFh
0x6C7918: jz      short loc_6C7924
0x6C791A: mov     esi, [eax]
0x6C791C: movzx   edi, cx
0x6C791F: add     edi, [esi+8]
0x6C7922: jmp     short loc_6C7926
0x6C7924: xor     edi, edi
0x6C7926: movzx   ecx, word ptr [eax+8]
0x6C792A: cmp     cx, 0FFFFh
0x6C792F: jz      short loc_6C793B
0x6C7931: mov     ebx, [eax]
0x6C7933: movzx   esi, cx
0x6C7936: add     esi, [ebx+8]
0x6C7939: jmp     short loc_6C793D
0x6C793B: xor     esi, esi
0x6C793D: movzx   ecx, word ptr [eax+0Ah]
0x6C7941: cmp     cx, 0FFFFh
0x6C7946: jz      short loc_6C7952
0x6C7948: mov     ebx, [eax]
0x6C794A: movzx   ebp, cx
0x6C794D: add     ebp, [ebx+8]
0x6C7950: jmp     short loc_6C7954
0x6C7952: xor     ebp, ebp
0x6C7954: movzx   ecx, word ptr [eax+0Ch]
0x6C7958: cmp     cx, 0FFFFh
0x6C795D: jz      short loc_6C7969
0x6C795F: mov     eax, [eax]
0x6C7961: movzx   ebx, cx
0x6C7964: add     ebx, [eax+8]
0x6C7967: jmp     short loc_6C796B
0x6C7969: xor     ebx, ebx
0x6C796B: test    edx, edx
0x6C796D: jz      short loc_6C797F
0x6C796F: mov     ecx, [esp+30h+var_20]
0x6C7973: push    edx
0x6C7974: call    sub_6C6270
0x6C7979: mov     [esp+30h+var_14], eax
0x6C797D: jmp     short loc_6C7987
0x6C797F: mov     [esp+30h+var_14], 0FFFFFFFFh
0x6C7987: test    edi, edi
0x6C7989: jz      short loc_6C799B
0x6C798B: mov     ecx, [esp+30h+var_20]
0x6C798F: push    edi
0x6C7990: call    sub_6C6270
0x6C7995: mov     [esp+30h+var_10], eax
0x6C7999: jmp     short loc_6C79A3
0x6C799B: mov     [esp+30h+var_10], 0FFFFFFFFh
0x6C79A3: test    esi, esi
0x6C79A5: jz      short loc_6C79B7
0x6C79A7: mov     ecx, [esp+30h+var_20]
0x6C79AB: push    esi
0x6C79AC: call    sub_6C6270
0x6C79B1: mov     [esp+30h+var_C], eax
0x6C79B5: jmp     short loc_6C79BF
0x6C79B7: mov     [esp+30h+var_C], 0FFFFFFFFh
0x6C79BF: test    ebp, ebp
0x6C79C1: jz      short loc_6C79D1
0x6C79C3: mov     ecx, [esp+30h+var_20]
0x6C79C7: push    ebp
0x6C79C8: call    sub_6C6270
0x6C79CD: mov     ebp, eax
0x6C79CF: jmp     short loc_6C79D4
0x6C79D1: or      ebp, 0FFFFFFFFh
0x6C79D4: test    ebx, ebx
0x6C79D6: jz      short loc_6C79E6
0x6C79D8: mov     ecx, [esp+30h+var_20]
0x6C79DC: push    ebx
0x6C79DD: call    sub_6C6270
0x6C79E2: mov     ebx, eax
0x6C79E4: jmp     short loc_6C79E9
0x6C79E6: or      ebx, 0FFFFFFFFh
0x6C79E9: mov     ecx, [esp+30h+var_18]
0x6C79ED: mov     edi, [ecx+18h]
0x6C79F0: add     edi, [esp+30h+var_1C]
0x6C79F4: mov     eax, [esp+30h+var_20]
0x6C79F8: mov     esi, [edi]
0x6C79FA: cmp     esi, eax
0x6C79FC: jz      short loc_6C7A32
0x6C79FE: test    esi, esi
0x6C7A00: jz      short loc_6C7A22
0x6C7A02: lea     edx, [esi+4]
0x6C7A05: push    edx; lpAddend
0x6C7A06: call    dword ptr ds:0A2807Ch
0x6C7A0C: test    eax, eax
0x6C7A0E: jnz     short loc_6C7A1E
0x6C7A10: test    esi, esi
0x6C7A12: jz      short loc_6C7A1E
0x6C7A14: mov     eax, [esi]
0x6C7A16: mov     edx, [eax]
0x6C7A18: push    1
0x6C7A1A: mov     ecx, esi
0x6C7A1C: call    edx
0x6C7A1E: mov     eax, [esp+30h+var_20]
0x6C7A22: test    eax, eax
0x6C7A24: mov     [edi], eax
0x6C7A26: jz      short loc_6C7A32
0x6C7A28: add     eax, 4
0x6C7A2B: push    eax; lpAddend
0x6C7A2C: call    dword ptr ds:0A28078h
0x6C7A32: mov     edx, [esp+30h+var_18]
0x6C7A36: mov     eax, [edx+18h]
0x6C7A39: mov     ecx, [esp+30h+var_1C]
0x6C7A3D: movzx   esi, word ptr [esp+30h+var_14]
0x6C7A42: add     eax, ecx
0x6C7A44: mov     [eax+4], si
0x6C7A48: movzx   esi, word ptr [esp+30h+var_10]
0x6C7A4D: mov     [eax+6], si
0x6C7A51: movzx   esi, word ptr [esp+30h+var_C]
0x6C7A56: mov     [eax+8], si
0x6C7A5A: mov     [eax+0Ah], bp
0x6C7A5E: mov     [eax+0Ch], bx
0x6C7A62: mov     eax, [esp+30h+var_8]
0x6C7A66: add     eax, 1
0x6C7A69: add     ecx, 10h
0x6C7A6C: cmp     eax, [edx+0Ch]
0x6C7A6F: mov     [esp+30h+var_8], eax
0x6C7A73: mov     [esp+30h+var_1C], ecx
0x6C7A77: mov     edi, edx
0x6C7A79: jb      loc_6C78E4
0x6C7A7F: mov     ebx, [esp+30h+var_4]
0x6C7A83: pop     ebp
0x6C7A84: mov     esi, [edi+64h]
0x6C7A87: cmp     esi, ebx
0x6C7A89: jz      short loc_6C7ABC
0x6C7A8B: test    esi, esi
0x6C7A8D: jz      short loc_6C7AAB
0x6C7A8F: lea     eax, [esi+4]
0x6C7A92: push    eax; lpAddend
0x6C7A93: call    dword ptr ds:0A2807Ch
0x6C7A99: test    eax, eax
0x6C7A9B: jnz     short loc_6C7AAB
0x6C7A9D: test    esi, esi
0x6C7A9F: jz      short loc_6C7AAB
0x6C7AA1: mov     edx, [esi]
0x6C7AA3: mov     eax, [edx]
0x6C7AA5: push    1
0x6C7AA7: mov     ecx, esi
0x6C7AA9: call    eax
0x6C7AAB: test    ebx, ebx
0x6C7AAD: mov     [edi+64h], ebx
0x6C7AB0: jz      short loc_6C7ABC
0x6C7AB2: add     ebx, 4
0x6C7AB5: push    ebx; lpAddend
0x6C7AB6: call    dword ptr ds:0A28078h
0x6C7ABC: pop     esi
0x6C7ABD: pop     edi
0x6C7ABE: pop     ebx
0x6C7ABF: add     esp, 20h
0x6C7AC2: retn
