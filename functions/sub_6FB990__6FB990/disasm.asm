0x6FB990: push    esi
0x6FB991: push    edi
0x6FB992: mov     edi, [esp+8+arg_0]
0x6FB996: push    edi
0x6FB997: mov     esi, ecx
0x6FB999: call    sub_721570
0x6FB99E: test    al, al
0x6FB9A0: jz      short loc_6FBA16
0x6FB9A2: fld     dword ptr [esi+0Ch]
0x6FB9A5: fld     dword ptr [edi+0Ch]
0x6FB9A8: fucompp
0x6FB9AA: fnstsw  ax
0x6FB9AC: test    ah, 44h
0x6FB9AF: jp      short loc_6FB9D3
0x6FB9B1: fld     dword ptr [esi+10h]
0x6FB9B4: fld     dword ptr [edi+10h]
0x6FB9B7: fucompp
0x6FB9B9: fnstsw  ax
0x6FB9BB: test    ah, 44h
0x6FB9BE: jp      short loc_6FB9D3
0x6FB9C0: fld     dword ptr [esi+14h]
0x6FB9C3: fld     dword ptr [edi+14h]
0x6FB9C6: fucompp
0x6FB9C8: fnstsw  ax
0x6FB9CA: test    ah, 44h
0x6FB9CD: jp      short loc_6FB9D3
0x6FB9CF: mov     cl, 1
0x6FB9D1: jmp     short loc_6FB9D5
0x6FB9D3: xor     cl, cl
0x6FB9D5: fld     dword ptr [esi+18h]
0x6FB9D8: fld     dword ptr [edi+18h]
0x6FB9DB: fucompp
0x6FB9DD: fnstsw  ax
0x6FB9DF: test    ah, 44h
0x6FB9E2: jp      short loc_6FBA10
0x6FB9E4: fld     dword ptr [esi+1Ch]
0x6FB9E7: fld     dword ptr [edi+1Ch]
0x6FB9EA: fucompp
0x6FB9EC: fnstsw  ax
0x6FB9EE: test    ah, 44h
0x6FB9F1: jp      short loc_6FBA10
0x6FB9F3: fld     dword ptr [esi+20h]
0x6FB9F6: fld     dword ptr [edi+20h]
0x6FB9F9: fucompp
0x6FB9FB: fnstsw  ax
0x6FB9FD: test    ah, 44h
0x6FBA00: jp      short loc_6FBA10
0x6FBA02: mov     eax, 1
0x6FBA07: and     cl, al
0x6FBA09: pop     edi
0x6FBA0A: mov     al, cl
0x6FBA0C: pop     esi
0x6FBA0D: retn    4
0x6FBA10: xor     eax, eax
0x6FBA12: and     cl, al
0x6FBA14: mov     al, cl
0x6FBA16: pop     edi
0x6FBA17: pop     esi
0x6FBA18: retn    4
