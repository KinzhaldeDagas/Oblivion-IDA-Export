0x6EDAA0: push    ebx
0x6EDAA1: mov     ebx, [esp+4+arg_0]
0x6EDAA5: push    esi
0x6EDAA6: or      eax, 0FFFFFFFFh
0x6EDAA9: mov     esi, ecx
0x6EDAAB: sub     eax, [esi+14h]
0x6EDAAE: cmp     eax, ebx
0x6EDAB0: ja      short loc_6EDAB7
0x6EDAB2: call    ?_Xlen@_String_base@std@@SAXXZ; std::_String_base::_Xlen(void)
0x6EDAB7: test    ebx, ebx
0x6EDAB9: jbe     loc_6EDB3F
0x6EDABF: push    edi
0x6EDAC0: mov     edi, [esi+14h]
0x6EDAC3: add     edi, ebx
0x6EDAC5: cmp     edi, 0FFFFFFFEh
0x6EDAC8: jbe     short loc_6EDACF
0x6EDACA: call    ?_Xlen@_String_base@std@@SAXXZ; std::_String_base::_Xlen(void)
0x6EDACF: mov     eax, [esi+18h]
0x6EDAD2: cmp     eax, edi
0x6EDAD4: jnb     short loc_6EDB0F
0x6EDAD6: mov     ecx, [esi+14h]
0x6EDAD9: push    ecx; MaxCount
0x6EDADA: push    edi; Dst
0x6EDADB: mov     ecx, esi
0x6EDADD: call    sub_4135C0
0x6EDAE2: test    edi, edi
0x6EDAE4: jbe     short loc_6EDB3E
0x6EDAE6: mov     edx, [esp+0Ch+arg_4]
0x6EDAEA: mov     eax, [esi+14h]
0x6EDAED: push    edx
0x6EDAEE: push    ebx
0x6EDAEF: push    eax
0x6EDAF0: mov     ecx, esi
0x6EDAF2: call    sub_6EDA10
0x6EDAF7: cmp     dword ptr [esi+18h], 10h
0x6EDAFB: mov     [esi+14h], edi
0x6EDAFE: jb      short loc_6EDB37
0x6EDB00: mov     eax, [esi+4]
0x6EDB03: mov     byte ptr [eax+edi], 0
0x6EDB07: pop     edi
0x6EDB08: mov     eax, esi
0x6EDB0A: pop     esi
0x6EDB0B: pop     ebx
0x6EDB0C: retn    8
0x6EDB0F: test    edi, edi
0x6EDB11: jnz     short loc_6EDAE4
0x6EDB13: cmp     eax, 10h
0x6EDB16: mov     [esi+14h], edi
0x6EDB19: jb      short loc_6EDB29
0x6EDB1B: mov     eax, [esi+4]
0x6EDB1E: pop     edi
0x6EDB1F: mov     byte ptr [eax], 0
0x6EDB22: mov     eax, esi
0x6EDB24: pop     esi
0x6EDB25: pop     ebx
0x6EDB26: retn    8
0x6EDB29: lea     eax, [esi+4]
0x6EDB2C: pop     edi
0x6EDB2D: mov     byte ptr [eax], 0
0x6EDB30: mov     eax, esi
0x6EDB32: pop     esi
0x6EDB33: pop     ebx
0x6EDB34: retn    8
0x6EDB37: lea     eax, [esi+4]
0x6EDB3A: mov     byte ptr [eax+edi], 0
0x6EDB3E: pop     edi
0x6EDB3F: mov     eax, esi
0x6EDB41: pop     esi
0x6EDB42: pop     ebx
0x6EDB43: retn    8
