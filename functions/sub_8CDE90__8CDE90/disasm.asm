0x8CDE90: push    esi
0x8CDE91: mov     esi, [esp+4+arg_0]
0x8CDE95: mov     edx, [esi+0Ch]
0x8CDE98: test    edx, edx
0x8CDE9A: mov     eax, esi
0x8CDE9C: jz      short loc_8CDEA9
0x8CDE9E: mov     edi, edi
0x8CDEA0: mov     eax, edx
0x8CDEA2: mov     edx, [eax+0Ch]
0x8CDEA5: test    edx, edx
0x8CDEA7: jnz     short loc_8CDEA0
0x8CDEA9: mov     [ecx+8], eax
0x8CDEAC: mov     eax, [esi+4]
0x8CDEAF: mov     esi, [esp+4+arg_4]
0x8CDEB3: mov     [ecx+0Ch], eax
0x8CDEB6: mov     edx, [esi+0Ch]
0x8CDEB9: test    edx, edx
0x8CDEBB: mov     eax, esi
0x8CDEBD: jz      short loc_8CDEC9
0x8CDEBF: nop
0x8CDEC0: mov     eax, edx
0x8CDEC2: mov     edx, [eax+0Ch]
0x8CDEC5: test    edx, edx
0x8CDEC7: jnz     short loc_8CDEC0
0x8CDEC9: mov     [ecx+10h], eax
0x8CDECC: mov     edx, [esi+4]
0x8CDECF: mov     [ecx+14h], edx
0x8CDED2: mov     byte ptr [ecx+4], 1
0x8CDED6: pop     esi
0x8CDED7: retn    8
