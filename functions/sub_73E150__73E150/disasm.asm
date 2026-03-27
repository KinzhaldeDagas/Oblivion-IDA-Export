0x73E150: sub     esp, 20h
0x73E153: mov     eax, [esp+20h+arg_4]
0x73E157: push    ebx
0x73E158: mov     ebx, [esp+24h+arg_0]
0x73E15C: push    ebp
0x73E15D: push    esi
0x73E15E: push    eax
0x73E15F: push    ebx
0x73E160: mov     ebp, ecx
0x73E162: call    sub_700770
0x73E167: xor     eax, eax
0x73E169: cmp     [ebp+10h], eax
0x73E16C: mov     [esp+2Ch+var_20], eax
0x73E170: jbe     loc_73E233
0x73E176: add     ebx, 8
0x73E179: mov     [esp+2Ch+arg_4], eax
0x73E17D: push    edi
0x73E17E: mov     edi, edi
0x73E180: mov     eax, [ebp+8]
0x73E183: add     eax, [esp+30h+arg_4]
0x73E187: movzx   ecx, word ptr [eax]
0x73E18A: movzx   edx, word ptr [eax+2]
0x73E18E: mov     [esp+30h+var_1C], cx
0x73E193: movzx   ecx, word ptr [eax+4]
0x73E197: mov     [esp+30h+var_1A], dx
0x73E19C: movzx   edx, word ptr [eax+6]
0x73E1A0: mov     [esp+30h+var_18], cx
0x73E1A5: movzx   ecx, word ptr [eax+8]
0x73E1A9: mov     [esp+30h+var_16], dx
0x73E1AE: movzx   edx, word ptr [eax+0Ah]
0x73E1B2: mov     [esp+30h+var_14], cx
0x73E1B7: mov     ecx, [eax+0Ch]
0x73E1BA: mov     [esp+30h+var_12], dx
0x73E1BF: mov     edx, [eax+10h]
0x73E1C2: mov     [esp+30h+var_10], ecx
0x73E1C6: mov     ecx, [eax+14h]
0x73E1C9: mov     [esp+30h+var_C], edx
0x73E1CD: mov     edx, [eax+18h]
0x73E1D0: mov     eax, [ebx+4]
0x73E1D3: cmp     [ebx+8], eax
0x73E1D6: mov     [esp+30h+var_8], ecx
0x73E1DA: mov     [esp+30h+var_4], edx
0x73E1DE: jnz     short loc_73E1F5
0x73E1E0: test    eax, eax
0x73E1E2: jbe     short loc_73E1E8
0x73E1E4: add     eax, eax
0x73E1E6: jmp     short loc_73E1ED
0x73E1E8: mov     eax, 1
0x73E1ED: push    eax
0x73E1EE: mov     ecx, ebx
0x73E1F0: call    sub_73DD70
0x73E1F5: mov     eax, [ebx+8]
0x73E1F8: mov     edx, [ebx]
0x73E1FA: add     [esp+30h+arg_4], 1Ch
0x73E1FF: lea     ecx, ds:0[eax*8]
0x73E206: sub     ecx, eax
0x73E208: mov     eax, [esp+30h+var_20]
0x73E20C: lea     edi, [edx+ecx*4]
0x73E20F: mov     ecx, 7
0x73E214: lea     esi, [esp+30h+var_1C]
0x73E218: rep movsd
0x73E21A: add     dword ptr [ebx+8], 1
0x73E21E: add     eax, 1
0x73E221: cmp     eax, [ebp+10h]
0x73E224: mov     [esp+30h+var_20], eax
0x73E228: jb      loc_73E180
0x73E22E: mov     ebx, [esp+30h+arg_0]
0x73E232: pop     edi
0x73E233: mov     esi, [ebx+14h]
0x73E236: cmp     esi, [ebp+14h]
0x73E239: jz      short loc_73E291
0x73E23B: test    esi, esi
0x73E23D: jz      short loc_73E25B
0x73E23F: lea     eax, [esi+4]
0x73E242: push    eax; lpAddend
0x73E243: call    dword ptr ds:0A2807Ch
0x73E249: test    eax, eax
0x73E24B: jnz     short loc_73E25B
0x73E24D: test    esi, esi
0x73E24F: jz      short loc_73E25B
0x73E251: mov     edx, [esi]
0x73E253: mov     eax, [edx]
0x73E255: push    1
0x73E257: mov     ecx, esi
0x73E259: call    eax
0x73E25B: mov     eax, [ebp+14h]
0x73E25E: test    eax, eax
0x73E260: mov     [ebx+14h], eax
0x73E263: jz      short loc_73E280
0x73E265: add     eax, 4
0x73E268: push    eax; lpAddend
0x73E269: call    dword ptr ds:0A28078h
0x73E26F: mov     cx, [ebp+18h]
0x73E273: pop     esi
0x73E274: pop     ebp
0x73E275: mov     [ebx+18h], cx
0x73E279: pop     ebx
0x73E27A: add     esp, 20h
0x73E27D: retn    8
0x73E280: mov     dx, [ebp+18h]
0x73E284: pop     esi
0x73E285: pop     ebp
0x73E286: mov     [ebx+18h], dx
0x73E28A: pop     ebx
0x73E28B: add     esp, 20h
0x73E28E: retn    8
0x73E291: mov     ax, [ebp+18h]
0x73E295: pop     esi
0x73E296: pop     ebp
0x73E297: mov     [ebx+18h], ax
0x73E29B: pop     ebx
0x73E29C: add     esp, 20h
0x73E29F: retn    8
