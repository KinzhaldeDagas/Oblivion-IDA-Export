0x6CC5C0: push    ebx
0x6CC5C1: push    esi
0x6CC5C2: mov     esi, ecx
0x6CC5C4: mov     dl, [esi+0Dh]
0x6CC5C7: xor     bl, bl
0x6CC5C9: test    dl, dl
0x6CC5CB: jbe     short loc_6CC5E4
0x6CC5CD: mov     ecx, [esi+14h]
0x6CC5D0: movzx   eax, bl
0x6CC5D3: lea     eax, [eax+eax*2]
0x6CC5D6: cmp     dword ptr [ecx+eax*8], 0
0x6CC5DA: jz      short loc_6CC5E4
0x6CC5DC: add     bl, 1
0x6CC5DF: cmp     bl, [esi+0Dh]
0x6CC5E2: jb      short loc_6CC5D0
0x6CC5E4: cmp     bl, dl
0x6CC5E6: jnz     short loc_6CC5FF
0x6CC5E8: mov     edx, [esi]
0x6CC5EA: mov     eax, [edx+0A4h]
0x6CC5F0: mov     ecx, esi
0x6CC5F2: call    eax
0x6CC5F4: test    al, al
0x6CC5F6: jnz     short loc_6CC5FF
0x6CC5F8: pop     esi
0x6CC5F9: or      al, 0FFh
0x6CC5FB: pop     ebx
0x6CC5FC: retn    10h
0x6CC5FF: mov     edx, [esi+14h]
0x6CC602: movzx   eax, bl
0x6CC605: push    ebp
0x6CC606: lea     ecx, [eax+eax*2]
0x6CC609: lea     ebp, [edx+ecx*8]
0x6CC60C: mov     edx, [esp+0Ch+arg_0]
0x6CC610: push    edi
0x6CC611: mov     edi, [ebp+0]
0x6CC614: cmp     edi, edx
0x6CC616: jz      short loc_6CC651
0x6CC618: test    edi, edi
0x6CC61A: jz      short loc_6CC63C
0x6CC61C: lea     eax, [edi+4]
0x6CC61F: push    eax; lpAddend
0x6CC620: call    dword ptr ds:0A2807Ch
0x6CC626: test    eax, eax
0x6CC628: jnz     short loc_6CC638
0x6CC62A: test    edi, edi
0x6CC62C: jz      short loc_6CC638
0x6CC62E: mov     edx, [edi]
0x6CC630: mov     eax, [edx]
0x6CC632: push    1
0x6CC634: mov     ecx, edi
0x6CC636: call    eax
0x6CC638: mov     edx, [esp+10h+arg_0]
0x6CC63C: test    edx, edx
0x6CC63E: mov     [ebp+0], edx
0x6CC641: jz      short loc_6CC651
0x6CC643: add     edx, 4
0x6CC646: push    edx; lpAddend
0x6CC647: call    dword ptr ds:0A28078h
0x6CC64D: mov     edx, [esp+10h+arg_0]
0x6CC651: fld     dword ptr [esp+10h+arg_4]
0x6CC655: mov     al, byte ptr [esp+10h+arg_8]
0x6CC659: fstp    dword ptr [ebp+4]
0x6CC65C: mov     [ebp+0Ch], al
0x6CC65F: fld     [esp+10h+arg_C]
0x6CC663: pop     edi
0x6CC664: fstp    dword ptr [ebp+10h]
0x6CC667: cmp     al, [esi+11h]
0x6CC66A: pop     ebp
0x6CC66B: jle     short loc_6CC681
0x6CC66D: mov     cl, [esi+10h]
0x6CC670: cmp     al, cl
0x6CC672: jle     short loc_6CC67C
0x6CC674: mov     [esi+11h], cl
0x6CC677: mov     [esi+10h], al
0x6CC67A: jmp     short loc_6CC681
0x6CC67C: jz      short loc_6CC681
0x6CC67E: mov     [esi+11h], al
0x6CC681: add     byte ptr [esi+0Eh], 1
0x6CC685: cmp     byte ptr [esi+0Eh], 1
0x6CC689: jnz     short loc_6CC693
0x6CC68B: mov     [esi+0Fh], bl
0x6CC68E: mov     [esi+18h], edx
0x6CC691: jmp     short loc_6CC6A7
0x6CC693: fld     dword ptr ds:0A79F00h
0x6CC699: mov     byte ptr [esi+0Fh], 0FFh
0x6CC69D: fstp    dword ptr [esi+20h]
0x6CC6A0: mov     dword ptr [esi+18h], 0
0x6CC6A7: fld     dword ptr ds:0A7DEB4h
0x6CC6AD: mov     al, bl
0x6CC6AF: fchs
0x6CC6B1: fstp    dword ptr [esi+24h]
0x6CC6B4: fld     dword ptr ds:0A7DEB4h
0x6CC6BA: fchs
0x6CC6BC: fstp    dword ptr [esi+28h]
0x6CC6BF: fld     dword ptr ds:0A7DEB4h
0x6CC6C5: or      byte ptr [esi+0Ch], 4
0x6CC6C9: fchs
0x6CC6CB: fstp    dword ptr [esi+2Ch]
0x6CC6CE: pop     esi
0x6CC6CF: pop     ebx
0x6CC6D0: retn    10h
