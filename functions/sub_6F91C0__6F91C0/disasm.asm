0x6F91C0: mov     eax, [esp+arg_0]
0x6F91C4: push    esi
0x6F91C5: push    edi
0x6F91C6: push    eax
0x6F91C7: mov     edi, ecx
0x6F91C9: call    sub_6F9090
0x6F91CE: mov     esi, eax
0x6F91D0: mov     edx, [esi]
0x6F91D2: mov     eax, [edx+4]
0x6F91D5: add     esp, 4
0x6F91D8: mov     ecx, esi
0x6F91DA: call    eax
0x6F91DC: test    al, al
0x6F91DE: jz      short loc_6F91EC
0x6F91E0: mov     dword ptr [edi+3Ch], 0
0x6F91E7: pop     edi
0x6F91E8: pop     esi
0x6F91E9: retn    4
0x6F91EC: mov     ecx, edi
0x6F91EE: mov     [edi+3Ch], esi
0x6F91F1: call    sub_6F6F40
0x6F91F6: pop     edi
0x6F91F7: pop     esi
0x6F91F8: retn    4
