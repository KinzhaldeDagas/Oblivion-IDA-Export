0x4DC270: mov     ecx, ds:0B333C4h
0x4DC276: push    ebx
0x4DC277: push    ebp
0x4DC278: push    esi
0x4DC279: xor     esi, esi
0x4DC27B: push    edi
0x4DC27C: mov     edi, [esp+10h+arg_0]
0x4DC280: xor     ebp, ebp
0x4DC282: cmp     ecx, esi
0x4DC284: mov     ebx, edi
0x4DC286: mov     [esp+10h+arg_0], esi
0x4DC28A: jz      short loc_4DC297
0x4DC28C: push    1
0x4DC28E: call    PlayerCharacter_GetPlayerNode
0x4DC293: mov     [esp+10h+arg_0], eax
0x4DC297: test    edi, edi
0x4DC299: jz      loc_4DC34D
0x4DC29F: nop
0x4DC2A0: cmp     ebx, [esp+10h+arg_0]
0x4DC2A4: jz      short loc_4DC306
0x4DC2A6: movzx   edi, word ptr [ebx+14h]
0x4DC2AA: test    edi, edi
0x4DC2AC: jz      short loc_4DC2F4
0x4DC2AE: mov     edi, edi
0x4DC2B0: mov     ecx, [ebx+10h]
0x4DC2B3: sub     edi, 1
0x4DC2B6: movzx   eax, di
0x4DC2B9: mov     esi, [ecx+eax*4]
0x4DC2BC: test    esi, esi
0x4DC2BE: jz      short loc_4DC2EA
0x4DC2C0: mov     edx, [esi]
0x4DC2C2: mov     eax, [edx+4]
0x4DC2C5: mov     ecx, esi
0x4DC2C7: call    eax
0x4DC2C9: test    eax, eax
0x4DC2CB: jz      short loc_4DC2DE
0x4DC2CD: lea     ecx, [ecx+0]
0x4DC2D0: cmp     eax, offset dword_B35ACC
0x4DC2D5: jz      short loc_4DC2F0
0x4DC2D7: mov     eax, [eax+4]
0x4DC2DA: test    eax, eax
0x4DC2DC: jnz     short loc_4DC2D0
0x4DC2DE: xor     al, al
0x4DC2E0: neg     al
0x4DC2E2: sbb     eax, eax
0x4DC2E4: and     eax, esi
0x4DC2E6: mov     esi, eax
0x4DC2E8: jnz     short loc_4DC310
0x4DC2EA: test    edi, edi
0x4DC2EC: jnz     short loc_4DC2B0
0x4DC2EE: jmp     short loc_4DC2F8
0x4DC2F0: mov     al, 1
0x4DC2F2: jmp     short loc_4DC2E0
0x4DC2F4: test    esi, esi
0x4DC2F6: jnz     short loc_4DC310
0x4DC2F8: mov     ebx, [ebx+1Ch]
0x4DC2FB: test    ebx, ebx
0x4DC2FD: jnz     short loc_4DC2A0
0x4DC2FF: pop     edi
0x4DC300: pop     esi
0x4DC301: mov     eax, ebp
0x4DC303: pop     ebp
0x4DC304: pop     ebx
0x4DC305: retn
0x4DC306: mov     eax, ds:0B333C4h
0x4DC30B: pop     edi
0x4DC30C: pop     esi
0x4DC30D: pop     ebp
0x4DC30E: pop     ebx
0x4DC30F: retn
0x4DC310: mov     ebp, [esi+0Ch]
0x4DC313: test    ebp, ebp
0x4DC315: jz      short loc_4DC34D
0x4DC317: mov     edx, [ebp+0]
0x4DC31A: mov     eax, [edx+170h]
0x4DC320: mov     ecx, ebp
0x4DC322: call    eax
0x4DC324: test    eax, eax
0x4DC326: jz      short loc_4DC34D
0x4DC328: mov     edx, [ebp+0]
0x4DC32B: mov     eax, [edx+170h]
0x4DC331: mov     ecx, ebp
0x4DC333: call    eax
0x4DC335: cmp     byte ptr [eax+4], 22h ; '"'
0x4DC339: jnz     short loc_4DC34D
0x4DC33B: mov     eax, [ebx+1Ch]
0x4DC33E: push    eax
0x4DC33F: call    sub_4DC270
0x4DC344: add     esp, 4
0x4DC347: test    eax, eax
0x4DC349: jz      short loc_4DC34D
0x4DC34B: mov     ebp, eax
0x4DC34D: pop     edi
0x4DC34E: pop     esi
0x4DC34F: mov     eax, ebp
0x4DC351: pop     ebp
0x4DC352: pop     ebx
0x4DC353: retn
