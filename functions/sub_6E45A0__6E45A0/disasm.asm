0x6E45A0: push    ebx
0x6E45A1: mov     ebx, [esp+4+a2]
0x6E45A5: push    esi
0x6E45A6: push    ebx; a2
0x6E45A7: mov     esi, ecx
0x6E45A9: call    sub_700670
0x6E45AE: test    al, al
0x6E45B0: jnz     short loc_6E45B9
0x6E45B2: pop     esi
0x6E45B3: xor     al, al
0x6E45B5: pop     ebx
0x6E45B6: retn    4
0x6E45B9: mov     ecx, [esi+8]
0x6E45BC: cmp     ecx, [ebx+8]
0x6E45BF: jnz     short loc_6E45B2
0x6E45C1: mov     eax, [esi+10h]
0x6E45C4: cmp     eax, [ebx+10h]
0x6E45C7: jnz     short loc_6E45B2
0x6E45C9: mov     dl, [esi+14h]
0x6E45CC: cmp     dl, [ebx+14h]
0x6E45CF: jnz     short loc_6E45B2
0x6E45D1: push    ebp
0x6E45D2: mov     ebp, ds:0B3D4E8h[eax*4]
0x6E45D9: push    edi
0x6E45DA: xor     edi, edi
0x6E45DC: test    ecx, ecx
0x6E45DE: jbe     short loc_6E4604
0x6E45E0: movzx   eax, byte ptr [esi+14h]
0x6E45E4: mov     ecx, [ebx+0Ch]
0x6E45E7: imul    eax, edi
0x6E45EA: mov     edx, [esi+0Ch]
0x6E45ED: add     ecx, eax
0x6E45EF: add     edx, eax
0x6E45F1: push    ecx
0x6E45F2: push    edx
0x6E45F3: call    ebp ; dword_B3D4E8
0x6E45F5: add     esp, 8
0x6E45F8: test    al, al
0x6E45FA: jz      short loc_6E460D
0x6E45FC: add     edi, 1
0x6E45FF: cmp     edi, [esi+8]
0x6E4602: jb      short loc_6E45E0
0x6E4604: pop     edi
0x6E4605: pop     ebp
0x6E4606: pop     esi
0x6E4607: mov     al, 1
0x6E4609: pop     ebx
0x6E460A: retn    4
0x6E460D: pop     edi
0x6E460E: pop     ebp
0x6E460F: pop     esi
0x6E4610: xor     al, al
0x6E4612: pop     ebx
0x6E4613: retn    4
