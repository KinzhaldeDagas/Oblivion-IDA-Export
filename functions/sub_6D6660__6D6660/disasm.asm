0x6D6660: mov     eax, [esp+arg_4]
0x6D6664: push    ebx
0x6D6665: push    ebp
0x6D6666: mov     ebp, [esp+8+arg_0]
0x6D666A: push    esi
0x6D666B: push    edi
0x6D666C: push    eax
0x6D666D: push    ebp
0x6D666E: mov     ebx, ecx
0x6D6670: call    sub_6EC2A0
0x6D6675: lea     esi, [ebx+0Ch]
0x6D6678: lea     edi, [ebp+0Ch]
0x6D667B: mov     ecx, 8
0x6D6680: rep movsd
0x6D6682: mov     esi, [ebp+2Ch]
0x6D6685: cmp     esi, [ebx+2Ch]
0x6D6688: jz      short loc_6D66BE
0x6D668A: test    esi, esi
0x6D668C: jz      short loc_6D66AA
0x6D668E: lea     ecx, [esi+4]
0x6D6691: push    ecx; lpAddend
0x6D6692: call    dword ptr ds:0A2807Ch
0x6D6698: test    eax, eax
0x6D669A: jnz     short loc_6D66AA
0x6D669C: test    esi, esi
0x6D669E: jz      short loc_6D66AA
0x6D66A0: mov     edx, [esi]
0x6D66A2: mov     eax, [edx]
0x6D66A4: push    1
0x6D66A6: mov     ecx, esi
0x6D66A8: call    eax
0x6D66AA: mov     eax, [ebx+2Ch]
0x6D66AD: test    eax, eax
0x6D66AF: mov     [ebp+2Ch], eax
0x6D66B2: jz      short loc_6D66BE
0x6D66B4: add     eax, 4
0x6D66B7: push    eax; lpAddend
0x6D66B8: call    dword ptr ds:0A28078h
0x6D66BE: mov     cx, [ebx+30h]
0x6D66C2: mov     [ebp+30h], cx
0x6D66C6: mov     dx, [ebx+32h]
0x6D66CA: pop     edi
0x6D66CB: mov     [ebp+32h], dx
0x6D66CF: mov     ax, [ebx+34h]
0x6D66D3: pop     esi
0x6D66D4: mov     [ebp+34h], ax
0x6D66D8: pop     ebp
0x6D66D9: pop     ebx
0x6D66DA: retn    8
