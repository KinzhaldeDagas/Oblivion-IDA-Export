0x6D4870: push    esi
0x6D4871: push    edi
0x6D4872: mov     edi, [esp+8+a2]
0x6D4876: push    edi; a2
0x6D4877: mov     esi, ecx
0x6D4879: call    sub_700670
0x6D487E: test    al, al
0x6D4880: jnz     short loc_6D4889
0x6D4882: pop     edi
0x6D4883: xor     al, al
0x6D4885: pop     esi
0x6D4886: retn    4
0x6D4889: mov     ecx, [esi+8]
0x6D488C: cmp     ecx, [edi+8]
0x6D488F: jnz     short loc_6D4882
0x6D4891: mov     eax, [esi+10h]
0x6D4894: cmp     eax, [edi+10h]
0x6D4897: jnz     short loc_6D4882
0x6D4899: mov     edx, [esi+14h]
0x6D489C: cmp     edx, [edi+14h]
0x6D489F: jnz     short loc_6D4882
0x6D48A1: mov     edx, [esi+1Ch]
0x6D48A4: cmp     edx, [edi+1Ch]
0x6D48A7: jnz     short loc_6D4882
0x6D48A9: mov     edx, [esi+20h]
0x6D48AC: cmp     edx, [edi+20h]
0x6D48AF: jnz     short loc_6D4882
0x6D48B1: mov     edx, [esi+28h]
0x6D48B4: cmp     edx, [edi+28h]
0x6D48B7: jnz     short loc_6D4882
0x6D48B9: mov     edx, [esi+2Ch]
0x6D48BC: cmp     edx, [edi+2Ch]
0x6D48BF: jnz     short loc_6D4882
0x6D48C1: mov     edx, [esi+34h]
0x6D48C4: cmp     edx, [edi+34h]
0x6D48C7: jnz     short loc_6D4882
0x6D48C9: mov     dl, [esi+48h]
0x6D48CC: cmp     dl, [edi+48h]
0x6D48CF: jnz     short loc_6D4882
0x6D48D1: mov     dl, [esi+49h]
0x6D48D4: cmp     dl, [edi+49h]
0x6D48D7: jnz     short loc_6D4882
0x6D48D9: mov     dl, [esi+4Ah]
0x6D48DC: cmp     dl, [edi+4Ah]
0x6D48DF: jnz     short loc_6D4882
0x6D48E1: mov     dl, [esi+4Bh]
0x6D48E4: cmp     dl, [edi+4Bh]
0x6D48E7: jnz     short loc_6D4882
0x6D48E9: push    ebx
0x6D48EA: xor     ebx, ebx
0x6D48EC: test    ecx, ecx
0x6D48EE: push    ebp
0x6D48EF: mov     ebp, ds:0B3D4A0h[eax*4]
0x6D48F6: jbe     short loc_6D4928
0x6D48F8: jmp     short loc_6D4900
0x6D48FA: align 10h
0x6D4900: movzx   eax, byte ptr [esi+48h]
0x6D4904: mov     ecx, [edi+0Ch]
0x6D4907: imul    eax, ebx
0x6D490A: mov     edx, [esi+0Ch]
0x6D490D: add     ecx, eax
0x6D490F: add     edx, eax
0x6D4911: push    ecx
0x6D4912: push    edx
0x6D4913: call    ebp ; dword_B3D4A0
0x6D4915: add     esp, 8
0x6D4918: test    al, al
0x6D491A: jz      loc_6D49E2
0x6D4920: add     ebx, 1
0x6D4923: cmp     ebx, [esi+8]
0x6D4926: jb      short loc_6D4900
0x6D4928: mov     eax, [esi+1Ch]
0x6D492B: mov     ebp, ds:0B3D4A0h[eax*4]
0x6D4932: xor     ebx, ebx
0x6D4934: cmp     [esi+14h], ebx
0x6D4937: jbe     short loc_6D4968
0x6D4939: lea     esp, [esp+0]
0x6D4940: movzx   eax, byte ptr [esi+49h]
0x6D4944: mov     ecx, [edi+18h]
0x6D4947: imul    eax, ebx
0x6D494A: mov     edx, [esi+18h]
0x6D494D: add     ecx, eax
0x6D494F: add     edx, eax
0x6D4951: push    ecx
0x6D4952: push    edx
0x6D4953: call    ebp ; dword_B3D4A0
0x6D4955: add     esp, 8
0x6D4958: test    al, al
0x6D495A: jz      loc_6D49E2
0x6D4960: add     ebx, 1
0x6D4963: cmp     ebx, [esi+14h]
0x6D4966: jb      short loc_6D4940
0x6D4968: mov     ecx, [esi+28h]
0x6D496B: mov     ebp, ds:0B3D4A0h[ecx*4]
0x6D4972: xor     ebx, ebx
0x6D4974: cmp     [esi+20h], ebx
0x6D4977: jbe     short loc_6D49A4
0x6D4979: lea     esp, [esp+0]
0x6D4980: movzx   eax, byte ptr [esi+4Ah]
0x6D4984: mov     ecx, [edi+24h]
0x6D4987: imul    eax, ebx
0x6D498A: mov     edx, [esi+24h]
0x6D498D: add     ecx, eax
0x6D498F: add     edx, eax
0x6D4991: push    ecx
0x6D4992: push    edx
0x6D4993: call    ebp ; dword_B3D4A0
0x6D4995: add     esp, 8
0x6D4998: test    al, al
0x6D499A: jz      short loc_6D49E2
0x6D499C: add     ebx, 1
0x6D499F: cmp     ebx, [esi+20h]
0x6D49A2: jb      short loc_6D4980
0x6D49A4: mov     edx, [esi+34h]
0x6D49A7: mov     ebp, ds:0B3D4A0h[edx*4]
0x6D49AE: xor     ebx, ebx
0x6D49B0: cmp     [esi+2Ch], ebx
0x6D49B3: jbe     short loc_6D49D9
0x6D49B5: movzx   eax, byte ptr [esi+4Bh]
0x6D49B9: mov     ecx, [edi+30h]
0x6D49BC: imul    eax, ebx
0x6D49BF: mov     edx, [esi+30h]
0x6D49C2: add     ecx, eax
0x6D49C4: add     edx, eax
0x6D49C6: push    ecx
0x6D49C7: push    edx
0x6D49C8: call    ebp ; dword_B3D4A0
0x6D49CA: add     esp, 8
0x6D49CD: test    al, al
0x6D49CF: jz      short loc_6D49E2
0x6D49D1: add     ebx, 1
0x6D49D4: cmp     ebx, [esi+2Ch]
0x6D49D7: jb      short loc_6D49B5
0x6D49D9: pop     ebp
0x6D49DA: pop     ebx
0x6D49DB: pop     edi
0x6D49DC: mov     al, 1
0x6D49DE: pop     esi
0x6D49DF: retn    4
0x6D49E2: pop     ebp
0x6D49E3: pop     ebx
0x6D49E4: pop     edi
0x6D49E5: xor     al, al
0x6D49E7: pop     esi
0x6D49E8: retn    4
