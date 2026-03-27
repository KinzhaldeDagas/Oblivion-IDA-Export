0x6E6390: push    esi
0x6E6391: mov     esi, [esp+4+arg_0]
0x6E6395: push    edi
0x6E6396: push    esi
0x6E6397: mov     edi, ecx
0x6E6399: call    sub_6E6A00
0x6E639E: test    al, al
0x6E63A0: jnz     short loc_6E63A9
0x6E63A2: pop     edi
0x6E63A3: xor     al, al
0x6E63A5: pop     esi
0x6E63A6: retn    4
0x6E63A9: xor     ecx, ecx
0x6E63AB: lea     edx, [esi+34h]
0x6E63AE: sub     edi, esi
0x6E63B0: fld     dword ptr [edi+edx]
0x6E63B3: fld     dword ptr [edx]
0x6E63B5: fucompp
0x6E63B7: fnstsw  ax
0x6E63B9: test    ah, 44h
0x6E63BC: jp      short loc_6E63A2
0x6E63BE: add     ecx, 1
0x6E63C1: add     edx, 4
0x6E63C4: cmp     ecx, 2
0x6E63C7: jb      short loc_6E63B0
0x6E63C9: pop     edi
0x6E63CA: mov     al, 1
0x6E63CC: pop     esi
0x6E63CD: retn    4
