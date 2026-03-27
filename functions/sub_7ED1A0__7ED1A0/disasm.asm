0x7ED1A0: sub     esp, 8
0x7ED1A3: push    ebp
0x7ED1A4: mov     ebp, ecx
0x7ED1A6: mov     eax, [ebp+70h]
0x7ED1A9: test    eax, eax
0x7ED1AB: mov     [esp+0Ch+var_8], 0
0x7ED1B3: mov     [ebp+7Ch], eax
0x7ED1B6: jnz     short loc_7ED1BD
0x7ED1B8: pop     ebp
0x7ED1B9: add     esp, 8
0x7ED1BC: retn
0x7ED1BD: push    ebx
0x7ED1BE: push    esi
0x7ED1BF: push    edi
0x7ED1C0: mov     ecx, [eax]
0x7ED1C2: test    ecx, ecx
0x7ED1C4: mov     [ebp+7Ch], ecx
0x7ED1C7: mov     edi, [eax+8]
0x7ED1CA: jz      short loc_7ED1F8
0x7ED1CC: test    edi, edi
0x7ED1CE: jz      short loc_7ED1F8
0x7ED1D0: cmp     word ptr [edi+118h], 0FFh
0x7ED1D9: jz      short loc_7ED1F4
0x7ED1DB: lea     edx, [esp+18h+var_4]
0x7ED1DF: push    edx
0x7ED1E0: mov     ecx, edi
0x7ED1E2: call    sub_405AD0
0x7ED1E7: mov     eax, [eax]
0x7ED1E9: or      [esp+18h+var_8], 1
0x7ED1EE: test    byte ptr [eax+18h], 1
0x7ED1F2: jz      short loc_7ED1F8
0x7ED1F4: mov     bl, 1
0x7ED1F6: jmp     short loc_7ED1FA
0x7ED1F8: xor     bl, bl
0x7ED1FA: test    byte ptr [esp+18h+var_8], 1
0x7ED1FF: jz      short loc_7ED22A
0x7ED201: mov     esi, [esp+18h+var_4]
0x7ED205: and     [esp+18h+var_8], 0FFFFFFFEh
0x7ED20A: test    esi, esi
0x7ED20C: jz      short loc_7ED22A
0x7ED20E: lea     ecx, [esi+4]
0x7ED211: push    ecx; lpAddend
0x7ED212: call    dword ptr ds:0A2807Ch
0x7ED218: test    eax, eax
0x7ED21A: jnz     short loc_7ED22A
0x7ED21C: test    esi, esi
0x7ED21E: jz      short loc_7ED22A
0x7ED220: mov     edx, [esi]
0x7ED222: mov     eax, [edx]
0x7ED224: push    1
0x7ED226: mov     ecx, esi
0x7ED228: call    eax
0x7ED22A: test    bl, bl
0x7ED22C: jz      short loc_7ED233
0x7ED22E: mov     eax, [ebp+7Ch]
0x7ED231: jmp     short loc_7ED1C0
0x7ED233: test    edi, edi
0x7ED235: jz      short loc_7ED25F
0x7ED237: cmp     word ptr [edi+118h], 0FFh
0x7ED240: jz      short loc_7ED25B
0x7ED242: lea     edx, [esp+18h+var_4]
0x7ED246: push    edx
0x7ED247: mov     ecx, edi
0x7ED249: call    sub_405AD0
0x7ED24E: mov     eax, [eax]
0x7ED250: or      [esp+18h+var_8], 2
0x7ED255: test    byte ptr [eax+18h], 1
0x7ED259: jz      short loc_7ED25F
0x7ED25B: mov     bl, 1
0x7ED25D: jmp     short loc_7ED261
0x7ED25F: xor     bl, bl
0x7ED261: test    byte ptr [esp+18h+var_8], 2
0x7ED266: jz      short loc_7ED28C
0x7ED268: mov     esi, [esp+18h+var_4]
0x7ED26C: test    esi, esi
0x7ED26E: jz      short loc_7ED28C
0x7ED270: lea     ecx, [esi+4]
0x7ED273: push    ecx; lpAddend
0x7ED274: call    dword ptr ds:0A2807Ch
0x7ED27A: test    eax, eax
0x7ED27C: jnz     short loc_7ED28C
0x7ED27E: test    esi, esi
0x7ED280: jz      short loc_7ED28C
0x7ED282: mov     edx, [esi]
0x7ED284: mov     eax, [edx]
0x7ED286: push    1
0x7ED288: mov     ecx, esi
0x7ED28A: call    eax
0x7ED28C: neg     bl
0x7ED28E: sbb     ebx, ebx
0x7ED290: not     ebx
0x7ED292: and     ebx, edi
0x7ED294: pop     edi
0x7ED295: pop     esi
0x7ED296: mov     eax, ebx
0x7ED298: pop     ebx
0x7ED299: pop     ebp
0x7ED29A: add     esp, 8
0x7ED29D: retn
