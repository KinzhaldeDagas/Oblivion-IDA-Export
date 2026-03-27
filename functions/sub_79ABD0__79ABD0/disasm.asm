0x79ABD0: sub     esp, 8
0x79ABD3: push    ebx
0x79ABD4: push    esi
0x79ABD5: mov     esi, ecx
0x79ABD7: mov     ebx, [esi+8]
0x79ABDA: cmp     [esi+4], ebx
0x79ABDD: push    edi
0x79ABDE: jbe     short loc_79ABE5
0x79ABE0: call    __invalid_parameter_noinfo
0x79ABE5: mov     edi, [esi+4]
0x79ABE8: cmp     edi, [esi+8]
0x79ABEB: jbe     short loc_79ABF2
0x79ABED: call    __invalid_parameter_noinfo
0x79ABF2: push    ebx
0x79ABF3: push    esi
0x79ABF4: push    edi
0x79ABF5: push    esi
0x79ABF6: lea     eax, [esp+24h+var_8]
0x79ABFA: push    eax
0x79ABFB: mov     ecx, esi
0x79ABFD: call    sub_79AB70
0x79AC02: pop     edi
0x79AC03: pop     esi
0x79AC04: pop     ebx
0x79AC05: add     esp, 8
0x79AC08: retn
