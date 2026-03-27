0x6DC480: push    ebx
0x6DC481: mov     ebx, [esp+4+arg_4]
0x6DC485: push    esi
0x6DC486: mov     esi, [esp+8+arg_0]
0x6DC48A: push    edi
0x6DC48B: push    ebx
0x6DC48C: push    esi
0x6DC48D: mov     edi, ecx
0x6DC48F: call    sub_6EC2A0
0x6DC494: mov     ax, [edi+0Ch]
0x6DC498: mov     [esi+0Ch], ax
0x6DC49C: mov     ecx, [edi+18h]
0x6DC49F: test    ecx, ecx
0x6DC4A1: jz      short loc_6DC4B3
0x6DC4A3: mov     edx, [ecx]
0x6DC4A5: mov     eax, [edx+18h]
0x6DC4A8: push    ebx
0x6DC4A9: call    eax
0x6DC4AB: push    eax
0x6DC4AC: mov     ecx, esi
0x6DC4AE: call    sub_6DABA0
0x6DC4B3: mov     ecx, [edi+1Ch]
0x6DC4B6: test    ecx, ecx
0x6DC4B8: jz      short loc_6DC4CA
0x6DC4BA: mov     edx, [ecx]
0x6DC4BC: mov     eax, [edx+18h]
0x6DC4BF: push    ebx
0x6DC4C0: call    eax
0x6DC4C2: push    eax
0x6DC4C3: mov     ecx, esi
0x6DC4C5: call    sub_6DABF0
0x6DC4CA: mov     cl, [edi+0Ch]
0x6DC4CD: shr     cl, 2
0x6DC4D0: test    cl, 1
0x6DC4D3: jz      short loc_6DC4DC
0x6DC4D5: or      word ptr [esi+0Ch], 4
0x6DC4DA: jmp     short loc_6DC4E2
0x6DC4DC: and     word ptr [esi+0Ch], 0FFFBh
0x6DC4E2: mov     dl, [edi+0Ch]
0x6DC4E5: shr     dl, 3
0x6DC4E8: test    dl, 1
0x6DC4EB: jz      short loc_6DC4F4
0x6DC4ED: or      word ptr [esi+0Ch], 8
0x6DC4F2: jmp     short loc_6DC4FA
0x6DC4F4: and     word ptr [esi+0Ch], 0FFF7h
0x6DC4FA: mov     eax, [edi+38h]
0x6DC4FD: mov     [esi+38h], eax
0x6DC500: mov     cl, [edi+0Ch]
0x6DC503: shr     cl, 4
0x6DC506: and     cl, 1
0x6DC509: jz      short loc_6DC538
0x6DC50B: or      word ptr [esi+0Ch], 10h
0x6DC510: test    byte ptr [esi+0Ch], 1
0x6DC514: jz      short loc_6DC526
0x6DC516: mov     ecx, esi
0x6DC518: call    sub_6DBB10
0x6DC51D: fstp    dword ptr [esi+24h]
0x6DC520: and     word ptr [esi+0Ch], 0FFFEh
0x6DC526: mov     dl, [edi+0Ch]
0x6DC529: shr     dl, 5
0x6DC52C: test    dl, 1
0x6DC52F: jz      short loc_6DC540
0x6DC531: or      word ptr [esi+0Ch], 20h
0x6DC536: jmp     short loc_6DC546
0x6DC538: and     word ptr [esi+0Ch], 0FFEFh
0x6DC53E: jmp     short loc_6DC526
0x6DC540: and     word ptr [esi+0Ch], 0FFDFh
0x6DC546: fld     dword ptr [edi+28h]
0x6DC549: fstp    dword ptr [esi+28h]
0x6DC54C: fld     dword ptr [edi+2Ch]
0x6DC54F: fstp    dword ptr [esi+2Ch]
0x6DC552: mov     ax, [edi+30h]
0x6DC556: mov     [esi+30h], ax
0x6DC55A: mov     cl, [edi+0Ch]
0x6DC55D: shr     cl, 6
0x6DC560: test    cl, 1
0x6DC563: jz      short loc_6DC56C
0x6DC565: or      word ptr [esi+0Ch], 40h
0x6DC56A: jmp     short loc_6DC572
0x6DC56C: and     word ptr [esi+0Ch], 0FFBFh
0x6DC572: mov     dl, [edi+0Ch]
0x6DC575: shr     dl, 1
0x6DC577: test    dl, 1
0x6DC57A: jz      short loc_6DC583
0x6DC57C: or      word ptr [esi+0Ch], 2
0x6DC581: jmp     short loc_6DC589
0x6DC583: and     word ptr [esi+0Ch], 0FFFDh
0x6DC589: cmp     dword ptr [edi+20h], 0
0x6DC58D: jz      short loc_6DC5CF
0x6DC58F: mov     eax, [edi+18h]
0x6DC592: test    eax, eax
0x6DC594: push    ebp
0x6DC595: jz      short loc_6DC59C
0x6DC597: mov     ebp, [eax+8]
0x6DC59A: jmp     short loc_6DC59E
0x6DC59C: xor     ebp, ebp
0x6DC59E: xor     ecx, ecx
0x6DC5A0: mov     eax, ebp
0x6DC5A2: mov     edx, 4
0x6DC5A7: mul     edx
0x6DC5A9: seto    cl
0x6DC5AC: neg     ecx
0x6DC5AE: or      ecx, eax
0x6DC5B0: push    ecx; Size
0x6DC5B1: call    FormHeapAlloc
0x6DC5B6: lea     ecx, ds:0[ebp*4]
0x6DC5BD: mov     [esi+20h], eax
0x6DC5C0: mov     edx, [edi+20h]
0x6DC5C3: push    ecx; Size
0x6DC5C4: push    edx; Src
0x6DC5C5: push    eax; Dst
0x6DC5C6: call    _memcpy
0x6DC5CB: add     esp, 10h
0x6DC5CE: pop     ebp
0x6DC5CF: fld     dword ptr [edi+24h]
0x6DC5D2: pop     edi
0x6DC5D3: fstp    dword ptr [esi+24h]
0x6DC5D6: pop     esi
0x6DC5D7: pop     ebx
0x6DC5D8: retn    8
