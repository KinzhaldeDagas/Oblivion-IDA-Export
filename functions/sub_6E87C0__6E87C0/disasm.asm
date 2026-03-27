0x6E87C0: push    ebx
0x6E87C1: mov     ebx, [esp+4+a2]
0x6E87C5: push    esi
0x6E87C6: push    ebx; a2
0x6E87C7: mov     esi, ecx
0x6E87C9: call    sub_700670
0x6E87CE: test    al, al
0x6E87D0: jnz     short loc_6E87D9
0x6E87D2: pop     esi
0x6E87D3: xor     al, al
0x6E87D5: pop     ebx
0x6E87D6: retn    4
0x6E87D9: mov     ecx, [esi+8]
0x6E87DC: cmp     ecx, [ebx+8]
0x6E87DF: jnz     short loc_6E87D2
0x6E87E1: mov     eax, [esi+10h]
0x6E87E4: cmp     eax, [ebx+10h]
0x6E87E7: jnz     short loc_6E87D2
0x6E87E9: mov     dl, [esi+14h]
0x6E87EC: cmp     dl, [ebx+14h]
0x6E87EF: jnz     short loc_6E87D2
0x6E87F1: push    ebp
0x6E87F2: mov     ebp, ds:0B3D518h[eax*4]
0x6E87F9: push    edi
0x6E87FA: xor     edi, edi
0x6E87FC: test    ecx, ecx
0x6E87FE: jbe     short loc_6E8824
0x6E8800: movzx   eax, byte ptr [esi+14h]
0x6E8804: mov     ecx, [ebx+0Ch]
0x6E8807: imul    eax, edi
0x6E880A: mov     edx, [esi+0Ch]
0x6E880D: add     ecx, eax
0x6E880F: add     edx, eax
0x6E8811: push    ecx
0x6E8812: push    edx
0x6E8813: call    ebp
0x6E8815: add     esp, 8
0x6E8818: test    al, al
0x6E881A: jz      short loc_6E882D
0x6E881C: add     edi, 1
0x6E881F: cmp     edi, [esi+8]
0x6E8822: jb      short loc_6E8800
0x6E8824: pop     edi
0x6E8825: pop     ebp
0x6E8826: pop     esi
0x6E8827: mov     al, 1
0x6E8829: pop     ebx
0x6E882A: retn    4
0x6E882D: pop     edi
0x6E882E: pop     ebp
0x6E882F: pop     esi
0x6E8830: xor     al, al
0x6E8832: pop     ebx
0x6E8833: retn    4
