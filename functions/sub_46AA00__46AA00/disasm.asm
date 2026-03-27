0x46AA00: push    esi
0x46AA01: mov     esi, ecx
0x46AA03: mov     ecx, ds:0B33B00h
0x46AA09: call    sub_45A500
0x46AA0E: cmp     [esp+4+arg_0], 0
0x46AA13: jz      short loc_46AA32
0x46AA15: test    al, al
0x46AA17: jnz     short loc_46AA27
0x46AA19: mov     eax, [esi]
0x46AA1B: mov     edx, [eax+40h]
0x46AA1E: push    10000h
0x46AA23: mov     ecx, esi
0x46AA25: call    edx
0x46AA27: or      dword ptr [esi+8], 2000h
0x46AA2E: pop     esi
0x46AA2F: retn    4
0x46AA32: test    al, al
0x46AA34: jnz     short loc_46AA44
0x46AA36: mov     eax, [esi]
0x46AA38: mov     edx, [eax+44h]
0x46AA3B: push    10000h
0x46AA40: mov     ecx, esi
0x46AA42: call    edx
0x46AA44: and     dword ptr [esi+8], 0FFFFDFFFh
0x46AA4B: pop     esi
0x46AA4C: retn    4
