0x6E82F0: mov     eax, [esp+arg_4]
0x6E82F4: push    ebx
0x6E82F5: push    esi
0x6E82F6: push    edi
0x6E82F7: mov     edi, [esp+0Ch+arg_0]
0x6E82FB: push    eax
0x6E82FC: push    edi
0x6E82FD: mov     esi, ecx
0x6E82FF: call    sub_6EC2A0
0x6E8304: mov     cl, [esi+0Ch]
0x6E8307: mov     [edi+0Ch], cl
0x6E830A: mov     ebx, [edi+10h]
0x6E830D: cmp     ebx, [esi+10h]
0x6E8310: jz      short loc_6E835E
0x6E8312: test    ebx, ebx
0x6E8314: jz      short loc_6E8332
0x6E8316: lea     edx, [ebx+4]
0x6E8319: push    edx; lpAddend
0x6E831A: call    dword ptr ds:0A2807Ch
0x6E8320: test    eax, eax
0x6E8322: jnz     short loc_6E8332
0x6E8324: test    ebx, ebx
0x6E8326: jz      short loc_6E8332
0x6E8328: mov     eax, [ebx]
0x6E832A: mov     edx, [eax]
0x6E832C: push    1
0x6E832E: mov     ecx, ebx
0x6E8330: call    edx
0x6E8332: mov     eax, [esi+10h]
0x6E8335: test    eax, eax
0x6E8337: mov     [edi+10h], eax
0x6E833A: jz      short loc_6E8352
0x6E833C: add     eax, 4
0x6E833F: push    eax; lpAddend
0x6E8340: call    dword ptr ds:0A28078h
0x6E8346: mov     eax, [esi+14h]
0x6E8349: mov     [edi+14h], eax
0x6E834C: pop     edi
0x6E834D: pop     esi
0x6E834E: pop     ebx
0x6E834F: retn    8
0x6E8352: mov     ecx, [esi+14h]
0x6E8355: mov     [edi+14h], ecx
0x6E8358: pop     edi
0x6E8359: pop     esi
0x6E835A: pop     ebx
0x6E835B: retn    8
0x6E835E: mov     edx, [esi+14h]
0x6E8361: mov     [edi+14h], edx
0x6E8364: pop     edi
0x6E8365: pop     esi
0x6E8366: pop     ebx
0x6E8367: retn    8
