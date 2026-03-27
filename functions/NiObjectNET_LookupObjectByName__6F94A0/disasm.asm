0x6F94A0: push    esi
0x6F94A1: mov     esi, [esp+4+a1]
0x6F94A5: test    esi, esi
0x6F94A7: jnz     short loc_6F94AD
0x6F94A9: xor     eax, eax
0x6F94AB: pop     esi
0x6F94AC: retn
0x6F94AD: push    edi
0x6F94AE: push    offset stru_B3CAC0
0x6F94B3: mov     ecx, esi
0x6F94B5: call    sub_700010
0x6F94BA: test    eax, eax
0x6F94BC: mov     edi, [esp+8+a2]
0x6F94C0: jz      short loc_6F94D1
0x6F94C2: mov     ecx, [eax+7Ch]
0x6F94C5: mov     eax, [ecx]
0x6F94C7: mov     edx, [eax+4Ch]
0x6F94CA: push    edi
0x6F94CB: call    edx
0x6F94CD: test    eax, eax
0x6F94CF: jnz     short loc_6F94DB
0x6F94D1: mov     eax, [esi]
0x6F94D3: mov     edx, [eax+58h]
0x6F94D6: push    edi
0x6F94D7: mov     ecx, esi
0x6F94D9: call    edx
0x6F94DB: pop     edi
0x6F94DC: pop     esi
0x6F94DD: retn
