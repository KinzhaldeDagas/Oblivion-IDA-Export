0x75C1C0: mov     eax, [esp+arg_0]
0x75C1C4: mov     edx, [eax]
0x75C1C6: mov     [ecx+40h], edx
0x75C1C9: mov     edx, [eax+4]
0x75C1CC: mov     [ecx+44h], edx
0x75C1CF: mov     edx, [eax+8]
0x75C1D2: mov     [ecx+48h], edx
0x75C1D5: push    esi
0x75C1D6: lea     esi, [ecx+4Ch]
0x75C1D9: mov     ecx, [eax]
0x75C1DB: mov     [esi], ecx
0x75C1DD: mov     edx, [eax+4]
0x75C1E0: mov     [esi+4], edx
0x75C1E3: mov     eax, [eax+8]
0x75C1E6: mov     ecx, esi
0x75C1E8: mov     [esi+8], eax
0x75C1EB: call    sub_43F350
0x75C1F0: fstp    st
0x75C1F2: fld     dword ptr [esi]
0x75C1F4: fld     dword ptr ds:0B3F9A8h
0x75C1FA: fucompp
0x75C1FC: fnstsw  ax
0x75C1FE: test    ah, 44h
0x75C201: jp      short loc_75C240
0x75C203: fld     dword ptr [esi+4]
0x75C206: fld     dword ptr ds:0B3F9ACh
0x75C20C: fucompp
0x75C20E: fnstsw  ax
0x75C210: test    ah, 44h
0x75C213: jp      short loc_75C240
0x75C215: fld     dword ptr [esi+8]
0x75C218: fld     dword ptr ds:0B3F9B0h
0x75C21E: fucompp
0x75C220: fnstsw  ax
0x75C222: test    ah, 44h
0x75C225: jp      short loc_75C240
0x75C227: mov     ecx, ds:0B258D0h
0x75C22D: mov     [esi], ecx
0x75C22F: mov     edx, ds:0B258D4h
0x75C235: mov     [esi+4], edx
0x75C238: mov     eax, ds:0B258D8h
0x75C23D: mov     [esi+8], eax
0x75C240: pop     esi
0x75C241: retn    4
