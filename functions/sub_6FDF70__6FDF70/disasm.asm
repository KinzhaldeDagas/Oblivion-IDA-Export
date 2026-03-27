0x6FDF70: push    0FFFFFFFFh
0x6FDF72: push    offset SEH_8C62B0
0x6FDF77: mov     eax, large fs:0
0x6FDF7D: push    eax
0x6FDF7E: push    ecx
0x6FDF7F: push    esi
0x6FDF80: mov     eax, ds:0B30AACh
0x6FDF85: xor     eax, esp
0x6FDF87: push    eax
0x6FDF88: lea     eax, [esp+18h+var_C]
0x6FDF8C: mov     large fs:0, eax
0x6FDF92: push    0Ch; Size
0x6FDF94: call    FormHeapAlloc
0x6FDF99: mov     esi, eax
0x6FDF9B: add     esp, 4
0x6FDF9E: mov     [esp+18h+var_10], esi
0x6FDFA2: test    esi, esi
0x6FDFA4: mov     [esp+18h+var_4], 0
0x6FDFAC: jz      short loc_6FDFD5
0x6FDFAE: mov     ecx, esi
0x6FDFB0: call    NiObject_constr
0x6FDFB5: mov     dword ptr [esi], offset ??_7BSReference@@6B@; const BSReference::`vftable'
0x6FDFBB: mov     dword ptr [esi+8], 0
0x6FDFC2: mov     eax, esi
0x6FDFC4: mov     ecx, [esp+18h+var_C]
0x6FDFC8: mov     large fs:0, ecx
0x6FDFCF: pop     ecx
0x6FDFD0: pop     esi
0x6FDFD1: add     esp, 10h
0x6FDFD4: retn
0x6FDFD5: xor     eax, eax
0x6FDFD7: mov     ecx, [esp+18h+var_C]
0x6FDFDB: mov     large fs:0, ecx
0x6FDFE2: pop     ecx
0x6FDFE3: pop     esi
0x6FDFE4: add     esp, 10h
0x6FDFE7: retn
