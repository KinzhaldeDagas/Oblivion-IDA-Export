0x802890: push    ebx
0x802891: push    esi
0x802892: mov     ebx, ecx
0x802894: mov     esi, [ebx+7Ch]
0x802897: push    edi
0x802898: mov     edi, [esp+0Ch+arg_0]
0x80289C: cmp     esi, edi
0x80289E: jz      short loc_8028D1
0x8028A0: test    esi, esi
0x8028A2: jz      short loc_8028C0
0x8028A4: lea     eax, [esi+4]
0x8028A7: push    eax; lpAddend
0x8028A8: call    dword ptr ds:0A2807Ch
0x8028AE: test    eax, eax
0x8028B0: jnz     short loc_8028C0
0x8028B2: test    esi, esi
0x8028B4: jz      short loc_8028C0
0x8028B6: mov     edx, [esi]
0x8028B8: mov     eax, [edx]
0x8028BA: push    1
0x8028BC: mov     ecx, esi
0x8028BE: call    eax
0x8028C0: test    edi, edi
0x8028C2: mov     [ebx+7Ch], edi
0x8028C5: jz      short loc_8028D1
0x8028C7: add     edi, 4
0x8028CA: push    edi; lpAddend
0x8028CB: call    dword ptr ds:0A28078h
0x8028D1: pop     edi
0x8028D2: pop     esi
0x8028D3: pop     ebx
0x8028D4: retn    4
