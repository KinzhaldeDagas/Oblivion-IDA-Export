0x6D2550: push    esi
0x6D2551: push    edi
0x6D2552: mov     edi, [esp+8+arg_0]
0x6D2556: push    edi
0x6D2557: mov     esi, ecx
0x6D2559: call    sub_6CCD10
0x6D255E: test    al, al
0x6D2560: jnz     short loc_6D2569
0x6D2562: pop     edi
0x6D2563: xor     al, al
0x6D2565: pop     esi
0x6D2566: retn    4
0x6D2569: fld     dword ptr [esi+30h]
0x6D256C: fld     dword ptr [edi+30h]
0x6D256F: fucompp
0x6D2571: fnstsw  ax
0x6D2573: test    ah, 44h
0x6D2576: jp      short loc_6D2562
0x6D2578: pop     edi
0x6D2579: mov     al, 1
0x6D257B: pop     esi
0x6D257C: retn    4
