0x6088B0: mov     eax, [esp+arg_0]
0x6088B4: push    esi
0x6088B5: push    eax
0x6088B6: mov     esi, ecx
0x6088B8: call    MobileObject_PreLoadModifiedForm
0x6088BD: mov     ecx, ds:0B33B00h
0x6088C3: mov     eax, [ecx+44h]
0x6088C6: cmp     eax, 1FFFF000h
0x6088CB: jz      short loc_6088D4
0x6088CD: cmp     eax, 7FFFF000h
0x6088D2: jnz     short loc_6088EB
0x6088D4: mov     eax, [esi+5Ch]
0x6088D7: test    eax, eax
0x6088D9: jz      short loc_6088E4
0x6088DB: push    eax
0x6088DC: call    FormHeapFree
0x6088E1: add     esp, 4
0x6088E4: mov     dword ptr [esi+5Ch], 0
0x6088EB: pop     esi
0x6088EC: retn    4
