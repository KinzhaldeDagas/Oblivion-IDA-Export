0x557200: push    esi
0x557201: xor     eax, eax
0x557203: push    edi
0x557204: mov     edi, [esp+8+Size]
0x557208: cmp     edi, eax
0x55720A: mov     esi, ecx
0x55720C: mov     [esi+4], eax
0x55720F: mov     [esi+8], eax
0x557212: mov     [esi+0Ch], eax
0x557215: jnz     short loc_55721E
0x557217: pop     edi
0x557218: xor     al, al
0x55721A: pop     esi
0x55721B: retn    4
0x55721E: cmp     edi, 0FFFFFFFFh
0x557221: jbe     short loc_557228
0x557223: call    sub_790B90
0x557228: push    edi; Size
0x557229: call    FormHeapAlloc
0x55722E: mov     [esi+4], eax
0x557231: mov     [esi+8], eax
0x557234: add     esp, 4
0x557237: add     eax, edi
0x557239: mov     [esi+0Ch], eax
0x55723C: pop     edi
0x55723D: mov     al, 1
0x55723F: pop     esi
0x557240: retn    4
