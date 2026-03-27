0x6E58E0: push    esi
0x6E58E1: mov     esi, [esp+4+arg_0]
0x6E58E5: push    edi
0x6E58E6: push    esi
0x6E58E7: mov     edi, ecx
0x6E58E9: call    sub_6E4BE0
0x6E58EE: test    al, al
0x6E58F0: jnz     short loc_6E58F9
0x6E58F2: pop     edi
0x6E58F3: xor     al, al
0x6E58F5: pop     esi
0x6E58F6: retn    4
0x6E58F9: xor     ecx, ecx
0x6E58FB: lea     edx, [esi+48h]
0x6E58FE: sub     edi, esi
0x6E5900: fld     dword ptr [edi+edx]
0x6E5903: fld     dword ptr [edx]
0x6E5905: fucompp
0x6E5907: fnstsw  ax
0x6E5909: test    ah, 44h
0x6E590C: jp      short loc_6E58F2
0x6E590E: add     ecx, 1
0x6E5911: add     edx, 4
0x6E5914: cmp     ecx, 6
0x6E5917: jb      short loc_6E5900
0x6E5919: pop     edi
0x6E591A: mov     al, 1
0x6E591C: pop     esi
0x6E591D: retn    4
