0x6E60A0: push    esi
0x6E60A1: mov     esi, [esp+4+arg_0]
0x6E60A5: push    edi
0x6E60A6: push    esi
0x6E60A7: mov     edi, ecx
0x6E60A9: call    sub_6E55E0
0x6E60AE: test    al, al
0x6E60B0: jnz     short loc_6E60B9
0x6E60B2: pop     edi
0x6E60B3: xor     al, al
0x6E60B5: pop     esi
0x6E60B6: retn    4
0x6E60B9: xor     ecx, ecx
0x6E60BB: lea     edx, [esi+24h]
0x6E60BE: sub     edi, esi
0x6E60C0: fld     dword ptr [edi+edx]
0x6E60C3: fld     dword ptr [edx]
0x6E60C5: fucompp
0x6E60C7: fnstsw  ax
0x6E60C9: test    ah, 44h
0x6E60CC: jp      short loc_6E60B2
0x6E60CE: add     ecx, 1
0x6E60D1: add     edx, 4
0x6E60D4: cmp     ecx, 2
0x6E60D7: jb      short loc_6E60C0
0x6E60D9: pop     edi
0x6E60DA: mov     al, 1
0x6E60DC: pop     esi
0x6E60DD: retn    4
