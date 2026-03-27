0x782680: push    esi
0x782681: push    edi
0x782682: mov     edi, [esp+8+Size]
0x782686: mov     esi, ecx
0x782688: cmp     [esi+14h], edi
0x78268B: jnb     short loc_7826A3
0x78268D: mov     eax, [esi+18h]
0x782690: push    eax
0x782691: call    FormHeapFree
0x782696: add     esp, 4
0x782699: mov     dword ptr [esi+18h], 0
0x7826A0: mov     [esi+14h], edi
0x7826A3: cmp     dword ptr [esi+18h], 0
0x7826A7: jnz     short loc_7826B8
0x7826A9: mov     ecx, [esi+14h]
0x7826AC: push    ecx; Size
0x7826AD: call    FormHeapAlloc
0x7826B2: add     esp, 4
0x7826B5: mov     [esi+18h], eax
0x7826B8: mov     eax, [esp+8+Src]
0x7826BC: test    eax, eax
0x7826BE: jz      short loc_7826CE
0x7826C0: mov     edx, [esi+18h]
0x7826C3: push    edi; Size
0x7826C4: push    eax; Src
0x7826C5: push    edx; Dst
0x7826C6: call    _memcpy
0x7826CB: add     esp, 0Ch
0x7826CE: pop     edi
0x7826CF: pop     esi
0x7826D0: retn    8
