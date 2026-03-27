0x6E0E20: push    0FFFFFFFFh
0x6E0E22: push    offset SEH_8C62B0
0x6E0E27: mov     eax, large fs:0
0x6E0E2D: push    eax
0x6E0E2E: push    ecx
0x6E0E2F: push    esi
0x6E0E30: mov     eax, ds:0B30AACh
0x6E0E35: xor     eax, esp
0x6E0E37: push    eax
0x6E0E38: lea     eax, [esp+18h+var_C]
0x6E0E3C: mov     large fs:0, eax
0x6E0E42: push    44h ; 'D'; Size
0x6E0E44: call    FormHeapAlloc
0x6E0E49: mov     esi, eax
0x6E0E4B: add     esp, 4
0x6E0E4E: mov     [esp+18h+var_10], esi
0x6E0E52: test    esi, esi
0x6E0E54: mov     [esp+18h+var_4], 0
0x6E0E5C: jz      short loc_6E0E84
0x6E0E5E: mov     ecx, esi
0x6E0E60: call    sub_6ECC00
0x6E0E65: mov     dword ptr [esi], offset ??_7NiLightColorController@@6B@; const NiLightColorController::`vftable'
0x6E0E6B: mov     word ptr [esi+40h], 0
0x6E0E71: mov     eax, esi
0x6E0E73: mov     ecx, [esp+18h+var_C]
0x6E0E77: mov     large fs:0, ecx
0x6E0E7E: pop     ecx
0x6E0E7F: pop     esi
0x6E0E80: add     esp, 10h
0x6E0E83: retn
0x6E0E84: xor     eax, eax
0x6E0E86: mov     ecx, [esp+18h+var_C]
0x6E0E8A: mov     large fs:0, ecx
0x6E0E91: pop     ecx
0x6E0E92: pop     esi
0x6E0E93: add     esp, 10h
0x6E0E96: retn
